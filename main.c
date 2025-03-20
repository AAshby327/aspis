#include <stdio.h>
#include "common.h"
#include "code_segment.h"
#include "debug.h"

int main() {
    
    CodeSegment c;

    init_code_segment(&c);
    write_to_code_segment(&c, OP_RETURN);
    write_to_code_segment(&c, OP_RETURN);
    write_to_code_segment(&c, OP_RETURN);
    write_to_code_segment(&c, OP_RETURN);
    write_to_code_segment(&c, OP_RETURN);

    disassemble_code_segment(&c, "Test");

    free_code_segment(&c);

    
    return 0;
}