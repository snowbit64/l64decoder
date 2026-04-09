// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endRenderQuery
// Entry Point: 00ad2234
// Size: 44 bytes
// Signature: undefined __thiscall endRenderQuery(VulkanCommandBuffer * this, IRenderQuery * param_1)


/* VulkanCommandBuffer::endRenderQuery(IRenderQuery*) */

void __thiscall VulkanCommandBuffer::endRenderQuery(VulkanCommandBuffer *this,IRenderQuery *param_1)

{
  VkCommandBuffer_T *pVVar1;
  
  pVVar1 = (VkCommandBuffer_T *)acquireVkCommandBuffer(this,0);
  VulkanRenderQuery::endQuery((VulkanRenderQuery *)param_1,pVVar1);
  return;
}


