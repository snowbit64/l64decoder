// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsMemoryTypeMappable
// Entry Point: 00abf66c
// Size: 16 bytes
// Signature: undefined __thiscall getIsMemoryTypeMappable(VulkanMemoryAllocator * this, uint param_1)


/* VulkanMemoryAllocator::getIsMemoryTypeMappable(unsigned int) const */

byte __thiscall
VulkanMemoryAllocator::getIsMemoryTypeMappable(VulkanMemoryAllocator *this,uint param_1)

{
  return (byte)this[(ulong)param_1 * 8 + 0x14] >> 1 & 1;
}


