// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVertexBuffer
// Entry Point: 00ab7278
// Size: 80 bytes
// Signature: undefined __thiscall createVertexBuffer(VulkanRenderDevice * this, ICommandBuffer * param_1, VertexBufferDesc * param_2)


/* VulkanRenderDevice::createVertexBuffer(ICommandBuffer*, VertexBufferDesc const&) */

VulkanVertexBuffer * __thiscall
VulkanRenderDevice::createVertexBuffer
          (VulkanRenderDevice *this,ICommandBuffer *param_1,VertexBufferDesc *param_2)

{
  VulkanVertexBuffer *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanVertexBuffer *)operator_new(0x18);
                    /* try { // try from 00ab72a4 to 00ab72b3 has its CatchHandler @ 00ab72c8 */
  VulkanVertexBuffer::VulkanVertexBuffer(this_00,(VulkanCommandBuffer *)param_1,this,param_2);
  return this_00;
}


