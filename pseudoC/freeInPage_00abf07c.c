// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeInPage
// Entry Point: 00abf07c
// Size: 116 bytes
// Signature: undefined __thiscall freeInPage(VulkanMemoryAllocator * this, VulkanMemoryPage * param_1, Allocation * param_2)


/* VulkanMemoryAllocator::freeInPage(VulkanMemoryAllocator::VulkanMemoryPage*,
   VulkanMemoryAllocator::Allocation*) */

void __thiscall
VulkanMemoryAllocator::freeInPage
          (VulkanMemoryAllocator *this,VulkanMemoryPage *param_1,Allocation *param_2)

{
  SubAllocator::free((SubAllocator *)(param_1 + 8),*(uint *)(param_2 + 8),*(uint *)(param_2 + 0xc));
  if (((byte)this[(ulong)*(uint *)(param_1 + 0x3c) * 8 + 0x14] & 1) == 0) {
    *(ulong *)(this + 0x270) = *(long *)(this + 0x270) + (ulong)*(uint *)(param_2 + 0xc);
  }
  else {
    *(ulong *)(this + 0x268) = *(long *)(this + 0x268) + (ulong)*(uint *)(param_2 + 0xc);
    this[0x27c] = (VulkanMemoryAllocator)0x1;
  }
  operator_delete(param_2);
  return;
}


