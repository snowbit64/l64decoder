// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanIndexBuffer
// Entry Point: 00ad70a8
// Size: 176 bytes
// Signature: undefined __thiscall VulkanIndexBuffer(VulkanIndexBuffer * this, VulkanCommandBuffer * param_1, VulkanRenderDevice * param_2, IndexBufferDesc * param_3)


/* VulkanIndexBuffer::VulkanIndexBuffer(VulkanCommandBuffer*, VulkanRenderDevice*, IndexBufferDesc
   const&) */

void __thiscall
VulkanIndexBuffer::VulkanIndexBuffer
          (VulkanIndexBuffer *this,VulkanCommandBuffer *param_1,VulkanRenderDevice *param_2,
          IndexBufferDesc *param_3)

{
  uint uVar1;
  RESOURCE_USAGE RVar2;
  VulkanBufferResource *this_00;
  
  uVar1 = *(uint *)(param_3 + 8);
  RVar2 = *(RESOURCE_USAGE *)(param_3 + 0xc);
  *(uint *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__VulkanIndexBuffer_00fe6a50;
  this_00 = (VulkanBufferResource *)operator_new(0x98);
                    /* try { // try from 00ad70f8 to 00ad7113 has its CatchHandler @ 00ad7158 */
  VulkanBufferResource::VulkanBufferResource
            (this_00,param_2,param_1,uVar1,RVar2,2,*(uchar **)param_3,0);
  *(VulkanBufferResource **)(this + 8) = this_00;
  this[0x14] = (VulkanIndexBuffer)(*(int *)(param_3 + 0x10) == 1);
  VulkanRenderDevice::s_usedIndexBufferMemory =
       VulkanRenderDevice::s_usedIndexBufferMemory + *(int *)(this + 0x10);
  return;
}


