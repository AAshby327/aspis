#include <stdio.h>
#include "common.h"
#include "code_sequence.h"
#include "debug.h"

int main() {
    
    CodeSequence c;

    init_code_sequence(&c);
    write_to_code_sequence(&c, OP_RETURN);
    write_to_code_sequence(&c, OP_RETURN);
    write_to_code_sequence(&c, OP_RETURN);
    write_to_code_sequence(&c, OP_RETURN);
    write_to_code_sequence(&c, OP_RETURN);

    disassemble_code_sequence(&c, "Test");

    free_code_sequence(&c);

    
    return 0;
}