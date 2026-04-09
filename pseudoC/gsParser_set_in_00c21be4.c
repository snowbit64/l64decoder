// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_in
// Entry Point: 00c21be4
// Size: 8 bytes
// Signature: undefined __cdecl gsParser_set_in(__sFILE * param_1, void * param_2)


/* gsParser_set_in(__sFILE*, void*) */

void gsParser_set_in(__sFILE *param_1,void *param_2)

{
  *(__sFILE **)((long)param_2 + 8) = param_1;
  return;
}


