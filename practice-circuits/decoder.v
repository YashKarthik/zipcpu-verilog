`default_nettype none

// 3-to-8 decoder
module decoder(
    bcd_in,
    raw_out,
    enable
);
    input wire[2:0] bcd_in;
    input wire enable;

    output reg[7:0] raw_out;

    assign raw_out[0] = enable ? ~bcd_in[2] & ~bcd_in[1] & ~bcd_in[0] : 0;
    assign raw_out[1] = enable ? ~bcd_in[2] & ~bcd_in[1] & bcd_in[0] : 0;
    assign raw_out[2] = enable ? ~bcd_in[2] & bcd_in[1] & ~bcd_in[0] : 0;
    assign raw_out[3] = enable ? ~bcd_in[2] & bcd_in[1] & bcd_in[0] : 0;
    assign raw_out[4] = enable ? bcd_in[2] & ~bcd_in[1] & ~bcd_in[0] : 0;
    assign raw_out[5] = enable ? bcd_in[2] & ~bcd_in[1] & bcd_in[0] : 0;
    assign raw_out[6] = enable ? bcd_in[2] & bcd_in[1] & ~bcd_in[0] : 0;
    assign raw_out[7] = enable ? bcd_in[2] & bcd_in[1] & bcd_in[0] : 0;
endmodule
