`default_nettype none

module main (clk, start, inc_step, trigger, count);
    input wire clk;
    input wire[6:0] start;
    input wire[6:0] inc_step;
    input wire trigger;

    output reg[6:0] count;

    initial count = start;

    always @ (posedge clk)
        if (trigger) begin
            count <= count + inc_step;
        end

endmodule
