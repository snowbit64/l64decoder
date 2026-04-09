// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanVertexBuffer
// Entry Point: 00ad8744
// Size: 160 bytes
// Signature: undefined __thiscall VulkanVertexBuffer(VulkanVertexBuffer * this, VulkanCommandBuffer * param_1, VulkanRenderDevice * param_2, VertexBufferDesc * param_3)


/* VulkanVertexBuffer::VulkanVertexBuffer(VulkanCommandBuffer*, VulkanRenderDevice*,
   VertexBufferDesc const&) */

void __thiscall
VulkanVertexBuffer::VulkanVertexBuffer
          (VulkanVertexBuffer *this,VulkanCommandBuffer *param_1,VulkanRenderDevice *param_2,
          VertexBufferDesc *param_3)

{
  uint uVar1;
  RESOURCE_USAGE RVar2;
  VulkanBufferResource *this_00;
  
  uVar1 = *(uint *)(param_3 + 8);
  RVar2 = *(RESOURCE_USAGE *)(param_3 + 0xc);
  *(uint *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__VulkanVertexBuffer_00fe6c78;
  this_00 = (VulkanBufferResource *)operator_new(0x98);
                    /* try { // try from 00ad8794 to 00ad87af has its CatchHandler @ 00ad87e4 */
  VulkanBufferResource::VulkanBufferResource
            (this_00,param_2,param_1,uVar1,RVar2,3,*(uchar **)param_3,0);
  *(VulkanBufferResource **)(this + 8) = this_00;
  VulkanRenderDevice::s_usedVertexBufferMemory =
       VulkanRenderDevice::s_usedVertexBufferMemory + *(int *)(this + 0x10);
  return;
}


