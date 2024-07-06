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

    assign raw_out = enable ? (1 << bcd_in) : 0;
endmodule
