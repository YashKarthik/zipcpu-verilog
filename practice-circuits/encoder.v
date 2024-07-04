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

            if (encoded_in == 16'd2) begin
                bcd_out = 4'd1;
            end if (encoded_in == 16'd4) begin
                bcd_out = 4'd2;
            end if (encoded_in == 16'd8) begin
                bcd_out = 4'd3;
            end if (encoded_in == 16'd16) begin
                bcd_out = 4'd4;
            end if (encoded_in == 16'd32) begin
                bcd_out = 4'd5;
            end if (encoded_in == 16'd64) begin
                bcd_out = 4'd6;
            end if (encoded_in == 16'd128) begin
                bcd_out = 4'd7;
            end if (encoded_in == 16'd256) begin
                bcd_out = 4'd8;
            end if (encoded_in == 16'd512) begin
                bcd_out = 4'd9;
            end if (encoded_in == 16'd1024) begin
                bcd_out = 4'd10;
            end if (encoded_in == 16'd2048) begin
                bcd_out = 4'd11;
            end if (encoded_in == 16'd4096) begin
                bcd_out = 4'd12;
            end if (encoded_in == 16'd8192) begin
                bcd_out = 4'd13;
            end if (encoded_in == 16'd16384) begin
                bcd_out = 4'd14;
            end if (encoded_in == 16'd32768) begin
                bcd_out = 4'd15;
            end

        end
    end
endmodule
