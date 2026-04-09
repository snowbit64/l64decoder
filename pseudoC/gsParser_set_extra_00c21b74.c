// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_extra
// Entry Point: 00c21b74
// Size: 8 bytes
// Signature: undefined __cdecl gsParser_set_extra(GISLParserContext * param_1, void * param_2)


/* gsParser_set_extra(GISLParserContext*, void*) */

void gsParser_set_extra(GISLParserContext *param_1,void *param_2)

{
  *(GISLParserContext **)param_2 = param_1;
  return;
}


