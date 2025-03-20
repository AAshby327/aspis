#ifndef vm_h
#define vm_h

#include "code_segment.h"

typedef struct {
} VM;

typedef enum {
    SUCCESS,
    COMPILE_ERROR,
    RUNTIME_ERROR,
} ErrorCode;

void init_vm();
void free_vm();

#endif