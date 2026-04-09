// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginQuery
// Entry Point: 00ad7aac
// Size: 144 bytes
// Signature: undefined __thiscall beginQuery(VulkanRenderQuery * this, VkCommandBuffer_T * param_1)


/* VulkanRenderQuery::beginQuery(VkCommandBuffer_T*) */

void __thiscall VulkanRenderQuery::beginQuery(VulkanRenderQuery *this,VkCommandBuffer_T *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 8) == 2) {
    uVar1 = VulkanRenderDevice::addActiveRenderQuery
                      (*(VulkanRenderDevice **)(this + 0x10),this,0,(uint *)(this + 0x1c),
                       (uint *)(this + 0x20));
    if ((uVar1 & 1) == 0) {
      *(uint *)(this + 0x1c) = 0xffffffff;
    }
    else {
      uVar2 = VulkanRenderDevice::getQueryPool(*(VulkanRenderDevice **)(this + 0x10),0);
      (*vkCmdWriteTimestamp)(param_1,1,uVar2,*(undefined4 *)(this + 0x1c));
    }
    this[0x39] = (VulkanRenderQuery)0x0;
  }
  return;
}


