// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIndexBuffer
// Entry Point: 00ab72dc
// Size: 80 bytes
// Signature: undefined __thiscall createIndexBuffer(VulkanRenderDevice * this, ICommandBuffer * param_1, IndexBufferDesc * param_2)


/* VulkanRenderDevice::createIndexBuffer(ICommandBuffer*, IndexBufferDesc const&) */

VulkanIndexBuffer * __thiscall
VulkanRenderDevice::createIndexBuffer
          (VulkanRenderDevice *this,ICommandBuffer *param_1,IndexBufferDesc *param_2)

{
  VulkanIndexBuffer *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanIndexBuffer *)operator_new(0x18);
                    /* try { // try from 00ab7308 to 00ab7317 has its CatchHandler @ 00ab732c */
  VulkanIndexBuffer::VulkanIndexBuffer(this_00,(VulkanCommandBuffer *)param_1,this,param_2);
  return this_00;
}


