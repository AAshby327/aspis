#ifndef debug_h
#define debug_h

#include "code_segment.h"

void disassemble_code_segment(CodeSegment* code_segment, const char* name);
int disassemble_instruction(CodeSegment* code_segment, int offset);


#endif