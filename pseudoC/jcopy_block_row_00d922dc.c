// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jcopy_block_row
// Entry Point: 00d922dc
// Size: 24 bytes
// Signature: undefined jcopy_block_row(void)


void jcopy_block_row(void *param_1,void *param_2,ulong param_3)

{
  memcpy(param_2,param_1,(param_3 & 0xffffffff) << 7);
  return;
}


