`default_nettype none
`include "latch.v"

// DFF built using d-latch
module ff (
    clk_in,
    d_in,
    n_rst_in,
    q_out
);

    input wire clk_in;
    input wire d_in;
    input wire n_rst_in;

    output reg q_out;

    // Internal signals
    wire mosi;

    latch master_latch(
        .en_in      (~clk_in),
        .d_in       (d_in),
        .n_rst_in   (n_rst_in),
        .q_out      (mosi)
    );

    latch slave_latch(
        .en_in      (clk_in),
        .d_in       (mosi),
        .n_rst_in   (n_rst_in),
        .q_out      (q_out)
    );

endmodule
