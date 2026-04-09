// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanStructBuffer
// Entry Point: 00ad739c
// Size: 144 bytes
// Signature: undefined __thiscall VulkanStructBuffer(VulkanStructBuffer * this, VulkanCommandBuffer * param_1, VulkanRenderDevice * param_2, StructBufferDesc * param_3)


/* VulkanStructBuffer::VulkanStructBuffer(VulkanCommandBuffer*, VulkanRenderDevice*,
   StructBufferDesc const&) */

void __thiscall
VulkanStructBuffer::VulkanStructBuffer
          (VulkanStructBuffer *this,VulkanCommandBuffer *param_1,VulkanRenderDevice *param_2,
          StructBufferDesc *param_3)

{
  int iVar1;
  int iVar2;
  RESOURCE_USAGE RVar3;
  VulkanBufferResource *this_00;
  
  *(VulkanRenderDevice **)(this + 8) = param_2;
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0xc);
  RVar3 = *(RESOURCE_USAGE *)(param_3 + 0x10);
  *(int *)(this + 0x18) = iVar1;
  *(int *)(this + 0x1c) = iVar2;
  *(undefined ***)this = &PTR__VulkanStructBuffer_00fe6af0;
  this_00 = (VulkanBufferResource *)operator_new(0x98);
                    /* try { // try from 00ad73f8 to 00ad740f has its CatchHandler @ 00ad742c */
  VulkanBufferResource::VulkanBufferResource
            (this_00,param_2,param_1,iVar2 * iVar1,RVar3,1,*(uchar **)param_3,0);
  *(VulkanBufferResource **)(this + 0x10) = this_00;
  return;
}


