// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOutputStructBufferCs
// Entry Point: 00acfd3c
// Size: 180 bytes
// Signature: undefined __thiscall setOutputStructBufferCs(VulkanCommandBuffer * this, uint param_1, IStructBuffer * param_2)


/* VulkanCommandBuffer::setOutputStructBufferCs(unsigned int, IStructBuffer*) */

void __thiscall
VulkanCommandBuffer::setOutputStructBufferCs
          (VulkanCommandBuffer *this,uint param_1,IStructBuffer *param_2)

{
  BufferInfo *pBVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_2 != (IStructBuffer *)0x0) {
    pBVar1 = (BufferInfo *)VulkanStructBuffer::acquireBufferForRendering();
    setBufferInternal(this,param_1,pBVar1,1,2);
    return;
  }
  lVar2 = *(long *)(this + 0x840);
  lVar3 = *(long *)(this + 0x848) - lVar2 >> 3;
  uVar5 = lVar3 * -0x3333333333333333;
  if ((uint)uVar5 <= param_1) {
    uVar4 = (ulong)(param_1 + 1);
    if (uVar4 <= uVar5) {
      if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
        *(ulong *)(this + 0x848) = lVar2 + uVar4 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + 0x840),uVar4 + lVar3 * 0x3333333333333333);
      lVar2 = *(long *)(this + 0x840);
    }
  }
  lVar2 = lVar2 + (ulong)param_1 * 0x28;
  *(uint *)(lVar2 + 0x20) = param_1;
  *(undefined *)(lVar2 + 0x24) = 0;
  return;
}


