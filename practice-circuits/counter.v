`default_nettype none

module counter (
    clk_in,
    n_rst,
    start,
    inc_step,
    inc,
    dec,
    val_out
);
    input wire clk_in;
    input wire n_rst;
    input wire[3:0] start;
    input wire[2:0] inc_step;
    input wire inc;
    input wire dec;
    output reg[3:0] val_out;

    always @ (posedge clk_in, negedge n_rst) begin
        if (~n_rst)  begin
            val_out <= start;
        end else if (inc) begin
            val_out <= val_out + inc_step;
        end else if (dec) begin
            val_out <= val_out - inc_step;
        end
    end
endmodule
