`default_nettype none

// 16-to-4 Encoder
module encoder(
    encoded_in,
    bcd_out,
    enable
);

    input wire[15:0] encoded_in;
    input wire enable;

    output reg[3:0] bcd_out;

    always @ (enable) begin
        bcd_out = 0;
        if (enable) begin
            casex (encoded_in)
                default: bcd_out = 4'd0;
                16'b1???????????????: bcd_out = 4'd15;
                16'b01??????????????: bcd_out = 4'd14;
                16'b001?????????????: bcd_out = 4'd13;
                16'b0001????????????: bcd_out = 4'd12;
                16'b00001???????????: bcd_out = 4'd11;
                16'b000001??????????: bcd_out = 4'd10;
                16'b0000001?????????: bcd_out = 4'd9;
                16'b00000001????????: bcd_out = 4'd8;
                16'b000000001???????: bcd_out = 4'd7;
                16'b0000000001??????: bcd_out = 4'd6;
                16'b00000000001?????: bcd_out = 4'd5;
                16'b000000000001????: bcd_out = 4'd4;
                16'b0000000000001???: bcd_out = 4'd3;
                16'b00000000000001??: bcd_out = 4'd2;
                16'b000000000000001?: bcd_out = 4'd1;
            endcase
        end
    end
endmodule
