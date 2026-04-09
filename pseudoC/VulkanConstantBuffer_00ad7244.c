// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanConstantBuffer
// Entry Point: 00ad7244
// Size: 140 bytes
// Signature: undefined __thiscall VulkanConstantBuffer(VulkanConstantBuffer * this, VulkanCommandBuffer * param_1, VulkanRenderDevice * param_2, ConstantBufferDesc * param_3)


/* VulkanConstantBuffer::VulkanConstantBuffer(VulkanCommandBuffer*, VulkanRenderDevice*,
   ConstantBufferDesc const&) */

void __thiscall
VulkanConstantBuffer::VulkanConstantBuffer
          (VulkanConstantBuffer *this,VulkanCommandBuffer *param_1,VulkanRenderDevice *param_2,
          ConstantBufferDesc *param_3)

{
  uint uVar1;
  RESOURCE_USAGE RVar2;
  VulkanBufferResource *this_00;
  
  uVar1 = *(uint *)param_3;
  RVar2 = *(RESOURCE_USAGE *)(param_3 + 0x10);
  *(uint *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__VulkanConstantBuffer_00fe6aa0;
  this_00 = (VulkanBufferResource *)operator_new(0x98);
                    /* try { // try from 00ad7298 to 00ad72b3 has its CatchHandler @ 00ad72d0 */
  VulkanBufferResource::VulkanBufferResource
            (this_00,param_2,param_1,uVar1,RVar2,0,*(uchar **)(param_3 + 8),0);
  *(VulkanBufferResource **)(this + 8) = this_00;
  return;
}


