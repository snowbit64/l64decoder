// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConstantBuffer
// Entry Point: 00ab7340
// Size: 80 bytes
// Signature: undefined __thiscall createConstantBuffer(VulkanRenderDevice * this, ICommandBuffer * param_1, ConstantBufferDesc * param_2)


/* VulkanRenderDevice::createConstantBuffer(ICommandBuffer*, ConstantBufferDesc const&) */

VulkanConstantBuffer * __thiscall
VulkanRenderDevice::createConstantBuffer
          (VulkanRenderDevice *this,ICommandBuffer *param_1,ConstantBufferDesc *param_2)

{
  VulkanConstantBuffer *this_00;
  
  *(undefined4 *)(this + 0x3b0) = 0;
  this_00 = (VulkanConstantBuffer *)operator_new(0x18);
                    /* try { // try from 00ab736c to 00ab737b has its CatchHandler @ 00ab7390 */
  VulkanConstantBuffer::VulkanConstantBuffer(this_00,(VulkanCommandBuffer *)param_1,this,param_2);
  return this_00;
}


