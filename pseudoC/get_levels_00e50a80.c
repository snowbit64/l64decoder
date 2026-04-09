// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_levels
// Entry Point: 00e50a80
// Size: 48 bytes
// Signature: undefined __cdecl get_levels(int param_1)


/* get_levels(int) */

int get_levels(int param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 * 0xc;
  return (*(int *)(range_table + lVar1 + 8) * 4 + *(int *)(range_table + lVar1 + 4) * 2 | 1U) <<
         (ulong)(*(uint *)(range_table + lVar1) & 0x1f);
}


