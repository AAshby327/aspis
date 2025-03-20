#ifndef debug_h
#define debug_h

#include "code_sequence.h"

void disassemble_code_sequence(CodeSequence* code_sequence, const char* name);
int disassemble_instruction(CodeSequence* code_sequence, int offset);


#endif