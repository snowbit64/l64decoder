// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsMemoryTypeCoherent
// Entry Point: 00abf67c
// Size: 16 bytes
// Signature: undefined __thiscall getIsMemoryTypeCoherent(VulkanMemoryAllocator * this, uint param_1)


/* VulkanMemoryAllocator::getIsMemoryTypeCoherent(unsigned int) const */

byte __thiscall
VulkanMemoryAllocator::getIsMemoryTypeCoherent(VulkanMemoryAllocator *this,uint param_1)

{
  return (byte)this[(ulong)param_1 * 8 + 0x14] >> 2 & 1;
}


