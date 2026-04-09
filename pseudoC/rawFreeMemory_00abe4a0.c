// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rawFreeMemory
// Entry Point: 00abe4a0
// Size: 136 bytes
// Signature: undefined __thiscall rawFreeMemory(VulkanMemoryAllocator * this, VkDeviceMemory_T * param_1, uint param_2, uint param_3)


/* VulkanMemoryAllocator::rawFreeMemory(VkDeviceMemory_T*, unsigned int, unsigned int) */

void __thiscall
VulkanMemoryAllocator::rawFreeMemory
          (VulkanMemoryAllocator *this,VkDeviceMemory_T *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  (*vkFreeMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),param_1,0);
  if (((byte)this[(ulong)param_3 * 8 + 0x14] & 1) == 0) {
    plVar1 = (long *)(this + 0x270);
    *(ulong *)(this + 0x260) = *(long *)(this + 0x260) - uVar2;
  }
  else {
    plVar1 = (long *)(this + 0x268);
    *(ulong *)(this + 600) = *(long *)(this + 600) - uVar2;
  }
  *plVar1 = *plVar1 - uVar2;
  return;
}


