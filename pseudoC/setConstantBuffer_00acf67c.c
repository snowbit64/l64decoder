// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConstantBuffer
// Entry Point: 00acf67c
// Size: 220 bytes
// Signature: undefined __thiscall setConstantBuffer(VulkanCommandBuffer * this, uint param_1, IConstantBuffer * param_2, bool param_3)


/* VulkanCommandBuffer::setConstantBuffer(unsigned int, IConstantBuffer*, bool) */

void __thiscall
VulkanCommandBuffer::setConstantBuffer
          (VulkanCommandBuffer *this,uint param_1,IConstantBuffer *param_2,bool param_3)

{
  BufferInfo *pBVar1;
  SHADER_STAGE SVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 != (IConstantBuffer *)0x0) {
    SVar2 = 2;
    if (!param_3) {
      SVar2 = 3;
    }
    pBVar1 = (BufferInfo *)VulkanConstantBuffer::acquireBufferForRendering();
    setBufferInternal(this,param_1,pBVar1,0,SVar2);
    return;
  }
  uVar3 = (ulong)param_3 & 1;
  lVar4 = *(long *)(this + uVar3 * 0x100 + 0x680);
  lVar5 = *(long *)(this + uVar3 * 0x100 + 0x688) - lVar4 >> 3;
  uVar7 = lVar5 * -0x3333333333333333;
  if ((uint)uVar7 <= param_1) {
    uVar6 = (ulong)(param_1 + 1);
    if (uVar6 <= uVar7) {
      if (uVar6 <= uVar7 && uVar7 - uVar6 != 0) {
        *(ulong *)(this + uVar3 * 0x100 + 0x688) = lVar4 + uVar6 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + uVar3 * 0x100 + 0x680),uVar6 + lVar5 * 0x3333333333333333);
      lVar4 = *(long *)(this + uVar3 * 0x100 + 0x680);
    }
  }
  lVar4 = lVar4 + (ulong)param_1 * 0x28;
  *(uint *)(lVar4 + 0x20) = param_1;
  *(undefined *)(lVar4 + 0x24) = 0;
  return;
}


