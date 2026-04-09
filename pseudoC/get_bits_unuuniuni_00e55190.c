// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: get_bits___unuuniuni
// Entry Point: 00e55190
// Size: 28 bytes
// Signature: undefined get_bits___unuuniuni(void)


uint get_bits___unuuniuni(uint param_1,uint param_2,int param_3)

{
  return param_1 >> (ulong)(param_2 & 0x1f) &
         (-1 << (ulong)((param_3 - param_2) + 1 & 0x1f) ^ 0xffffffffU);
}


