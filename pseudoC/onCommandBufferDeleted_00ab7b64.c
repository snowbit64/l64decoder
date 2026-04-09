// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onCommandBufferDeleted
// Entry Point: 00ab7b64
// Size: 204 bytes
// Signature: undefined __thiscall onCommandBufferDeleted(VulkanRenderDevice * this, ICommandBuffer * param_1, bool param_2)


/* VulkanRenderDevice::onCommandBufferDeleted(ICommandBuffer*, bool) */

void __thiscall
VulkanRenderDevice::onCommandBufferDeleted
          (VulkanRenderDevice *this,ICommandBuffer *param_1,bool param_2)

{
  ulong __n;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_2) {
    lVar2 = *(long *)(this + 0x5c0);
    lVar1 = *(long *)(this + 0x5b8);
    if ((int)((ulong)(lVar2 - lVar1) >> 3) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      lVar5 = -8;
      lVar6 = lVar1;
      do {
        if (*(ICommandBuffer **)(lVar6 + lVar3) == param_1) {
          __n = lVar5 + (lVar2 - lVar6);
          if ((lVar2 - lVar6) + -8 != lVar3) {
            memmove((void *)(lVar6 + lVar3),(void *)((long)(void *)(lVar6 + lVar3) + 8),__n);
            lVar1 = *(long *)(this + 0x5b8);
          }
          lVar2 = lVar6 + lVar3 + (__n & 0xfffffffffffffff8);
          *(long *)(this + 0x5c0) = lVar2;
          lVar6 = lVar1;
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 8;
        lVar5 = lVar5 + -8;
      } while (uVar4 < ((ulong)(lVar2 - lVar6) >> 3 & 0xffffffff));
    }
  }
  return;
}


