// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_out
// Entry Point: 00c21bec
// Size: 8 bytes
// Signature: undefined __cdecl gsParser_set_out(__sFILE * param_1, void * param_2)


/* gsParser_set_out(__sFILE*, void*) */

void gsParser_set_out(__sFILE *param_1,void *param_2)

{
  *(__sFILE **)((long)param_2 + 0x10) = param_1;
  return;
}


