`default_nettype none

// DFF with async reset
module latch (
    en_in,
    d_in,
    n_rst_in,
    q_out
);

    input wire en_in;
    input wire d_in;
    input wire n_rst_in;
    output reg q_out;

    always @ (
        en_in,
        d_in,
        n_rst_in,
        q_out
    ) begin
        if (~n_rst_in) begin
            q_out <= 0;
        end else if (en_in) begin
            q_out <= d_in;
        end
    end
endmodule
