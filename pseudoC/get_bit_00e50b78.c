// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_bit
// Entry Point: 00e50b78
// Size: 12 bytes
// Signature: undefined __cdecl get_bit(uint param_1, int param_2)


/* get_bit(unsigned int, int) */

uint get_bit(uint param_1,int param_2)

{
  return param_1 >> (ulong)(param_2 & 0x1f) & 1;
}


