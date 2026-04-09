// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setStructBuffer
// Entry Point: 00acf974
// Size: 248 bytes
// Signature: undefined __thiscall setStructBuffer(VulkanCommandBuffer * this, uint param_1, IStructBuffer * param_2, SHADER_STAGE param_3)


/* VulkanCommandBuffer::setStructBuffer(unsigned int, IStructBuffer*, IProgramObject::SHADER_STAGE)
    */

void __thiscall
VulkanCommandBuffer::setStructBuffer
          (VulkanCommandBuffer *this,uint param_1,IStructBuffer *param_2,SHADER_STAGE param_3)

{
  BufferInfo *pBVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != (IStructBuffer *)0x0) {
    pBVar1 = (BufferInfo *)VulkanStructBuffer::acquireBufferForRendering();
    setBufferInternal(this,param_1,pBVar1,1,param_3);
    return;
  }
  if (param_3 < 3) {
    lVar2 = *(long *)(&DAT_005238c8 + (long)(int)param_3 * 8);
  }
  else {
    lVar2 = 0;
  }
  lVar2 = lVar2 * 0x40 + (ulong)(param_3 == 2) * 0x100;
  lVar3 = *(long *)(this + lVar2 + 0x680);
  lVar4 = *(long *)(this + lVar2 + 0x688) - lVar3 >> 3;
  uVar6 = lVar4 * -0x3333333333333333;
  if ((uint)uVar6 <= param_1) {
    uVar5 = (ulong)(param_1 + 1);
    if (uVar5 <= uVar6) {
      if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
        *(ulong *)(this + lVar2 + 0x688) = lVar3 + uVar5 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + lVar2 + 0x680),uVar5 + lVar4 * 0x3333333333333333);
      lVar3 = *(long *)(this + lVar2 + 0x680);
    }
  }
  lVar3 = lVar3 + (ulong)param_1 * 0x28;
  *(uint *)(lVar3 + 0x20) = param_1;
  *(undefined *)(lVar3 + 0x24) = 0;
  return;
}


