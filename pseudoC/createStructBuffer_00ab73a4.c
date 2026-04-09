// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createStructBuffer
// Entry Point: 00ab73a4
// Size: 80 bytes
// Signature: undefined __thiscall createStructBuffer(VulkanRenderDevice * this, ICommandBuffer * param_1, StructBufferDesc * param_2)


/* VulkanRenderDevice::createStructBuffer(ICommandBuffer*, StructBufferDesc const&) */

VulkanStructBuffer * __thiscall
VulkanRenderDevice::createStructBuffer
          (VulkanRenderDevice *this,ICommandBuffer *param_1,StructBufferDesc *param_2)

{
  VulkanStructBuffer *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanStructBuffer *)operator_new(0x20);
                    /* try { // try from 00ab73d0 to 00ab73df has its CatchHandler @ 00ab73f4 */
  VulkanStructBuffer::VulkanStructBuffer(this_00,(VulkanCommandBuffer *)param_1,this,param_2);
  return this_00;
}


