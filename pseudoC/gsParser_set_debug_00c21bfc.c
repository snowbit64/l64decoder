// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gsParser_set_debug
// Entry Point: 00c21bfc
// Size: 8 bytes
// Signature: undefined __cdecl gsParser_set_debug(int param_1, void * param_2)


/* gsParser_set_debug(int, void*) */

void gsParser_set_debug(int param_1,void *param_2)

{
  *(int *)((long)param_2 + 0x7c) = param_1;
  return;
}


