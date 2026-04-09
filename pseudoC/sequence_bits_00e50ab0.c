// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sequence_bits
// Entry Point: 00e50ab0
// Size: 116 bytes
// Signature: undefined __cdecl sequence_bits(int param_1, int param_2)


/* sequence_bits(int, int) */

int sequence_bits(int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = (long)param_2 * 0xc;
  return (int)(param_1 * *(int *)(range_table + lVar1 + 4) * 8 | 4U) / 5 +
         *(int *)(range_table + lVar1) * param_1 +
         (param_1 * *(int *)(range_table + lVar1 + 8) * 7 + 2) / 3;
}


