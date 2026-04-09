// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_field
// Entry Point: 00e50b5c
// Size: 28 bytes
// Signature: undefined __cdecl get_field(uint param_1, int param_2, int param_3)


/* get_field(unsigned int, int, int) */

uint get_field(uint param_1,int param_2,int param_3)

{
  return param_1 >> (ulong)(param_3 & 0x1f) &
         (-1 << (ulong)((param_2 - param_3) + 1U & 0x1f) ^ 0xffffffffU);
}


