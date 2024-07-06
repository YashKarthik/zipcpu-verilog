`default_nettype none

// DFF with async reset
module dff (
    clk,
    data_in,
    n_reset,
    data_out
);

    input wire clk;
    input wire[3:0] data_in;
    input wire n_reset;
    output reg[3:0] data_out;

    always @ (posedge clk or negedge n_reset) begin
        if (~n_reset) begin
            data_out <= 4'b0;
        end else begin
            data_out <= data_in;
        end
    end
endmodule
