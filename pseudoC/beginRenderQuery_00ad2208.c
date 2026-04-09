// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginRenderQuery
// Entry Point: 00ad2208
// Size: 44 bytes
// Signature: undefined __thiscall beginRenderQuery(VulkanCommandBuffer * this, IRenderQuery * param_1)


/* VulkanCommandBuffer::beginRenderQuery(IRenderQuery*) */

void __thiscall
VulkanCommandBuffer::beginRenderQuery(VulkanCommandBuffer *this,IRenderQuery *param_1)

{
  VkCommandBuffer_T *pVVar1;
  
  pVVar1 = (VkCommandBuffer_T *)acquireVkCommandBuffer(this,0);
  VulkanRenderQuery::beginQuery((VulkanRenderQuery *)param_1,pVVar1);
  return;
}


