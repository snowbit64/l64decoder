// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_mem_available
// Entry Point: 00d8eb70
// Size: 16 bytes
// Signature: undefined jpeg_mem_available(void)


long jpeg_mem_available(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  return *(long *)(*(long *)(param_1 + 8) + 0x58) - param_4;
}


