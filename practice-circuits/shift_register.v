`default_nettype none

module shift_register(
    clk_in,
    n_rst_in,
    seq_in,
    seq_out,
    shift,
    parallel_in,
    parallel_out,
    parallel_load
);

    input wire clk_in;
    input wire n_rst_in;

    input wire seq_in;
    output reg seq_out;
    input wire shift;

    input wire[3:0] parallel_in;
    output reg[3:0] parallel_out;
    input wire parallel_load;

    reg[3:0] reg_val;

    assign seq_out = reg_val[0];
    assign parallel_out = reg_val;

    always @ (posedge clk_in, negedge n_rst_in) begin
        if (~n_rst_in) begin
            reg_val <= 0;
        end else if (parallel_load) begin
            reg_val <= parallel_in;
        end else if (shift) begin
            reg_val <= reg_val >> 1;
            reg_val[3] <= seq_in;
        end
    end

endmodule
