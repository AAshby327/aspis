#ifndef vm_h
#define vm_h

#include "code_sequence.h"

typedef enum {
    SUCCESS,
    COMPILE_ERROR,
    RUNTIME_ERROR,
} ErrorCode;

void init_vm();
ErrorCode execute_code_sequence(CodeSequence* code_sequence);
void free_vm();

#endif