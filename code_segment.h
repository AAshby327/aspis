#ifndef byte_code_segment_h
#define byte_code_segment_h

#include "common.h"

#define INCREASE_CAPACITY(old_capacity) ((old_capacity) < 8 ? 8 : (old_capacity) * 2)

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} CodeSegment;

void init_code_segment(CodeSegment* code_segment);
void write_to_code_segment(CodeSegment* code_segment, uint8_t byte);
void free_code_segment(CodeSegment* code_segment);

#endif