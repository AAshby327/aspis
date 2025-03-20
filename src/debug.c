#include <stdio.h>

#include "debug.h"

void disassemble_code_sequence(CodeSequence* code_sequence, const char* name) {
    printf("== %s ==\n", name);

    for (int offset = 0; offset < code_sequence->count;) {
        offset = disassemble_instruction(code_sequence, offset);
    }
}

static int simple_instruction(const char* name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}

int disassemble_instruction(CodeSequence* code_sequence, int offset) {
    printf("%04d ", offset);
  
    uint8_t instruction = code_sequence->code[offset];
    switch (instruction) {
        case OP_RETURN:
            return simple_instruction("OP_RETURN", offset);
        default:
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
    }
}