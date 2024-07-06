`default_nettype none

// 8-to-1 mux, 3 bit sel
module mux (
    data_0,
    data_1,
    data_2,
    data_3,
    data_4,
    data_5,
    data_6,
    data_7,
    sel,
    out
);
    input wire[2:0] data_0;
    input wire[2:0] data_1;
    input wire[2:0] data_2;
    input wire[2:0] data_3;
    input wire[2:0] data_4;
    input wire[2:0] data_5;
    input wire[2:0] data_6;
    input wire[2:0] data_7;
    input wire[2:0] sel;

    output reg[2:0] out;

    always @ (
        data_0,
        data_1,
        data_2,
        data_3,
        data_4,
        data_5,
        data_6,
        data_7,
        sel
    ) begin
        case (sel)
            default: out = 3'b111;
            3'b000: out = data_0;
            3'b001: out = data_1;
            3'b010: out = data_2;
            3'b011: out = data_3;
            3'b100: out = data_4;
            3'b101: out = data_5;
            3'b110: out = data_6;
            3'b111: out = data_7;
        endcase
    end

endmodule
