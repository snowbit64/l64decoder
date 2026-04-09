// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyImageViewSafely
// Entry Point: 00ab7c30
// Size: 160 bytes
// Signature: undefined __thiscall destroyImageViewSafely(VulkanRenderDevice * this, VkImageView_T * param_1)


/* VulkanRenderDevice::destroyImageViewSafely(VkImageView_T*) */

void __thiscall
VulkanRenderDevice::destroyImageViewSafely(VulkanRenderDevice *this,VkImageView_T *param_1)

{
  VkImageView_T **ppVVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  Mutex::enterCriticalSection();
  lVar4 = *(long *)(this + 0x3f0);
  uVar3 = *(uint *)(this + 0x3b4);
  uVar2 = 0;
  if (*(long *)(this + 0x3f8) - lVar4 != 0) {
    uVar2 = (*(long *)(this + 0x3f8) - lVar4) * 0x20 - 1;
  }
  uVar5 = *(long *)(this + 0x410) + *(long *)(this + 0x408);
  if (uVar2 == uVar5) {
    std::__ndk1::
    deque<std::__ndk1::pair<VkImageView_T*,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<VkImageView_T*,unsigned_int>>>
    ::__add_back_capacity();
    lVar4 = *(long *)(this + 0x3f0);
    uVar5 = *(long *)(this + 0x408) + *(long *)(this + 0x410);
  }
  ppVVar1 = (VkImageView_T **)
            (*(long *)(lVar4 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
  *ppVVar1 = param_1;
  ppVVar1[1] = (VkImageView_T *)(ulong)uVar3;
  *(long *)(this + 0x410) = *(long *)(this + 0x410) + 1;
  Mutex::leaveCriticalSection();
  return;
}


