// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferPoolSizeIndex
// Entry Point: 00ac1d38
// Size: 24 bytes
// Signature: undefined __cdecl getBufferPoolSizeIndex(uint param_1)


/* VulkanResourceAllocator::getBufferPoolSizeIndex(unsigned int) */

undefined4 VulkanResourceAllocator::getBufferPoolSizeIndex(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (0x2000 < param_1) {
    uVar1 = 2;
  }
  if (param_1 < 0x101) {
    uVar1 = 0;
  }
  return uVar1;
}


