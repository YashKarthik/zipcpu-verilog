`default_nettype none

// DFF with async reset
module tff (
    clk,
    t_in,
    n_reset,
    data_out
);

    input wire clk;
    input wire t_in;
    input wire n_reset;
    output reg data_out;

    always @ (posedge clk or negedge n_reset) begin
        if (~n_reset) begin
            data_out <= 0;
        end else begin
            if (t_in) begin
                data_out <= ~data_out;
            end
        end
    end
endmodule
