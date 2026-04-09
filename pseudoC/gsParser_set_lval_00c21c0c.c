// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_lval
// Entry Point: 00c21c0c
// Size: 8 bytes
// Signature: undefined __cdecl gsParser_set_lval(GSPARSER_STYPE * param_1, void * param_2)


/* gsParser_set_lval(GSPARSER_STYPE*, void*) */

void gsParser_set_lval(GSPARSER_STYPE *param_1,void *param_2)

{
  *(GSPARSER_STYPE **)((long)param_2 + 0x90) = param_1;
  return;
}


