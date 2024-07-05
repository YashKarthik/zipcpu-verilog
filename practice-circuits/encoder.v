`default_nettype none

// 16-to-4 Encoder
module encoder(
    encoded_in,
    bcd_out,
    enable
);

    input wire[16:0] encoded_in;
    input wire enable;

    output reg[4:0] bcd_out;

    always @ (enable) begin
        bcd_out = 0;
        if (enable) begin

            if (encoded_in[1] == 1'b1) begin
                bcd_out = 4'd1;
            end if (encoded_in[2] == 1'b1) begin
                bcd_out = 4'd2;
            end if (encoded_in[3] == 1'b1) begin
                bcd_out = 4'd3;
            end if (encoded_in[4] == 1'b1) begin
                bcd_out = 4'd4;
            end if (encoded_in[5] == 1'b1) begin
                bcd_out = 4'd5;
            end if (encoded_in[6] == 1'b1) begin
                bcd_out = 4'd6;
            end if (encoded_in[7] == 1'b1) begin
                bcd_out = 4'd7;
            end if (encoded_in[8] == 1'b1) begin
                bcd_out = 4'd8;
            end if (encoded_in[9] == 1'b1) begin
                bcd_out = 4'd9;
            end if (encoded_in[10] == 1'b1) begin
                bcd_out = 4'd10;
            end if (encoded_in[11] == 1'b1) begin
                bcd_out = 4'd11;
            end if (encoded_in[12] == 1'b1) begin
                bcd_out = 4'd12;
            end if (encoded_in[13] == 1'b1) begin
                bcd_out = 4'd13;
            end if (encoded_in[14] == 1'b1) begin
                bcd_out = 4'd14;
            end if (encoded_in[15] == 1'b1) begin
                bcd_out = 4'd15;
            end

        end
    end
endmodule
