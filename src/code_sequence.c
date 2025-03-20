#include <stdlib.h>

#include "code_sequence.h"

void init_code_sequence(CodeSequence* code_sequence) {
    code_sequence->count = 0;
    code_sequence->capacity = 0;
    code_sequence->code = NULL;
}

void write_to_code_sequence(CodeSequence* code_sequence, uint8_t byte) {
    if (code_sequence->capacity < code_sequence->count + 1) {
        int new_capacity = ((code_sequence->capacity) < 8 ? 8 : (code_sequence->capacity) * 2);
        uint8_t* new_code = realloc(code_sequence->code, new_capacity*sizeof(int));

        if (new_code == NULL) {
            // Handel Error
            exit(1);
        }
        code_sequence->code = new_code;
        code_sequence->capacity = new_capacity;
    }

    code_sequence->code[code_sequence->count] = byte;
    code_sequence->count++;
}

void free_code_sequence(CodeSequence* code_sequence) {
    free(code_sequence->code);
    init_code_sequence(code_sequence);
}