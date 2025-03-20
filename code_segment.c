#include <stdlib.h>

#include "code_segment.h"

void init_code_segment(CodeSegment* code_segment) {
    code_segment->count = 0;
    code_segment->capacity = 0;
    code_segment->code = NULL;
}

void write_to_code_segment(CodeSegment* code_segment, uint8_t byte) {
    if (code_segment->capacity < code_segment->count + 1) {
        int new_capacity = ((code_segment->capacity) < 8 ? 8 : (code_segment->capacity) * 2);
        uint8_t* new_code = realloc(code_segment->code, new_capacity*sizeof(int));

        if (new_code == NULL) {
            // Handel Error
            exit(1);
        }
        code_segment->code = new_code;
        code_segment->capacity = new_capacity;
    }

    code_segment->code[code_segment->count] = byte;
    code_segment->count++;
}

void free_code_segment(CodeSegment* code_segment) {
    free(code_segment->code);
    init_code_segment(code_segment);
}