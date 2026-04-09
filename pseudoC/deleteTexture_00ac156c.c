// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteTexture
// Entry Point: 00ac156c
// Size: 96 bytes
// Signature: undefined __thiscall deleteTexture(VulkanResourceAllocator * this, Texture * param_1)


/* VulkanResourceAllocator::deleteTexture(VulkanResourceAllocator::Texture*) */

void __thiscall
VulkanResourceAllocator::deleteTexture(VulkanResourceAllocator *this,Texture *param_1)

{
  if (*(long *)param_1 != 0) {
    (*vkDestroyImage)(*(undefined8 *)(*(long *)(this + 0x980) + 0x18),*(long *)param_1,0);
  }
  if (*(Allocation **)(param_1 + 0x10) != (Allocation *)0x0) {
    VulkanMemoryAllocator::freeImageMemory
              (*(VulkanMemoryAllocator **)(*(long *)(this + 0x980) + 0x378),
               *(Allocation **)(param_1 + 0x10));
    return;
  }
  return;
}


