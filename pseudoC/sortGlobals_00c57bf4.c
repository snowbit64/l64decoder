// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortGlobals
// Entry Point: 00c57bf4
// Size: 16 bytes
// Signature: undefined __cdecl sortGlobals(void * param_1, void * param_2)


/* GsTSymbolTableLevel::sortGlobals(void const*, void const*) */

int GsTSymbolTableLevel::sortGlobals(void *param_1,void *param_2)

{
  return *(int *)((long)param_1 + 0xc) - *(int *)((long)param_2 + 0xc);
}


