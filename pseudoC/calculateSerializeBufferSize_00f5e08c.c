// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateSerializeBufferSize
// Entry Point: 00f5e08c
// Size: 44 bytes
// Signature: undefined calculateSerializeBufferSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btQuantizedBvh::calculateSerializeBufferSize() const */

int btQuantizedBvh::calculateSerializeBufferSize(void)

{
  long in_x0;
  uint uVar1;
  
  uVar1 = 6;
  if (*(char *)(in_x0 + 0x40) != '\0') {
    uVar1 = 4;
  }
  return (*(int *)(in_x0 + 0x3c) << (ulong)uVar1) + *(int *)(in_x0 + 0xf0) * 0x20 + 0xf8;
}


