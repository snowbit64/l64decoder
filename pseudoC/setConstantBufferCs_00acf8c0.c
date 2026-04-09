// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setConstantBufferCs
// Entry Point: 00acf8c0
// Size: 180 bytes
// Signature: undefined __thiscall setConstantBufferCs(VulkanCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* non-virtual thunk to VulkanCommandBuffer::setConstantBufferCs(unsigned int, IConstantBuffer*) */

void __thiscall
VulkanCommandBuffer::setConstantBufferCs
          (VulkanCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
  BufferInfo *pBVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != (IConstantBuffer *)0x0) {
    pBVar1 = (BufferInfo *)VulkanConstantBuffer::acquireBufferForRendering();
    setBufferInternal(this + -8,param_1,pBVar1,0,2);
    return;
  }
  lVar2 = *(long *)(this + 0x778);
  lVar3 = *(long *)(this + 0x780) - lVar2 >> 3;
  uVar5 = lVar3 * -0x3333333333333333;
  if ((uint)uVar5 <= param_1) {
    uVar4 = (ulong)(param_1 + 1);
    if (uVar4 <= uVar5) {
      if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
        *(ulong *)(this + 0x780) = lVar2 + uVar4 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + 0x778),uVar4 + lVar3 * 0x3333333333333333);
      lVar2 = *(long *)(this + 0x778);
    }
  }
  lVar2 = lVar2 + (ulong)param_1 * 0x28;
  *(uint *)(lVar2 + 0x20) = param_1;
  *(undefined *)(lVar2 + 0x24) = 0;
  return;
}


