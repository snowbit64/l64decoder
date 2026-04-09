// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endQuery
// Entry Point: 00ad7b3c
// Size: 220 bytes
// Signature: undefined __thiscall endQuery(VulkanRenderQuery * this, VkCommandBuffer_T * param_1)


/* VulkanRenderQuery::endQuery(VkCommandBuffer_T*) */

void __thiscall VulkanRenderQuery::endQuery(VulkanRenderQuery *this,VkCommandBuffer_T *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 8) == 2) {
    uVar2 = VulkanRenderDevice::addActiveRenderQuery
                      (*(VulkanRenderDevice **)(this + 0x10),this,0,(uint *)(this + 0x18),
                       (uint *)(this + 0x20));
    if ((uVar2 & 1) == 0) goto LAB_00ad7bfc;
    uVar3 = VulkanRenderDevice::getQueryPool(*(VulkanRenderDevice **)(this + 0x10),0);
    uVar1 = *(undefined4 *)(this + 0x18);
    uVar4 = 0x2000;
  }
  else {
    if (*(int *)(this + 8) != 1) {
      return;
    }
    uVar2 = VulkanRenderDevice::addActiveRenderQuery
                      (*(VulkanRenderDevice **)(this + 0x10),this,0,(uint *)(this + 0x18),
                       (uint *)(this + 0x20));
    if ((uVar2 & 1) == 0) {
LAB_00ad7bfc:
      *(undefined4 *)(this + 0x18) = 0xffffffff;
      goto LAB_00ad7c04;
    }
    uVar3 = VulkanRenderDevice::getQueryPool(*(VulkanRenderDevice **)(this + 0x10),0);
    uVar1 = *(undefined4 *)(this + 0x18);
    uVar4 = 0x10000;
  }
  (*vkCmdWriteTimestamp)(param_1,uVar4,uVar3,uVar1);
LAB_00ad7c04:
  this[0x38] = (VulkanRenderQuery)0x0;
  return;
}


