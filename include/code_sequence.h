#ifndef byte_code_sequence_h
#define byte_code_sequence_h

#include "common.h"

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} CodeSequence;

void init_code_sequence(CodeSequence* code_sequence);
void write_to_code_sequence(CodeSequence* code_sequence, uint8_t byte);
void free_code_sequence(CodeSequence* code_sequence);

#endif