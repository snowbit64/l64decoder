// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSamplerObjectCs
// Entry Point: 00acf314
// Size: 256 bytes
// Signature: undefined __thiscall setSamplerObjectCs(VulkanCommandBuffer * this, uint param_1, ISamplerObject * param_2)


/* non-virtual thunk to VulkanCommandBuffer::setSamplerObjectCs(unsigned int, ISamplerObject*) */

void __thiscall
VulkanCommandBuffer::setSamplerObjectCs
          (VulkanCommandBuffer *this,uint param_1,ISamplerObject *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(this + 0x838);
  uVar7 = (ulong)param_1;
  lVar3 = *(long *)(this + 0x840) - lVar1 >> 3;
  uVar4 = lVar3 * -0x3333333333333333;
  if ((uint)uVar4 <= param_1) {
    uVar2 = (ulong)(param_1 + 1);
    if (uVar2 <= uVar4) {
      if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
        *(ulong *)(this + 0x840) = lVar1 + uVar2 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + 0x838),uVar2 + lVar3 * 0x3333333333333333);
      lVar1 = *(long *)(this + 0x838);
    }
  }
  *(uint *)(lVar1 + uVar7 * 0x28 + 0x20) = param_1;
  if (param_2 == (ISamplerObject *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x28);
    piVar5 = (int *)(lVar1 + uVar7 * 0x28);
    if (((*piVar5 != 6) || (*(long *)(piVar5 + 2) != lVar3)) || (*(uint *)(this + 0x830) < param_1))
    {
      *(undefined2 *)(this + 0x834) = 0x100;
      *(long *)(piVar5 + 2) = lVar3;
    }
    uVar6 = 1;
    *piVar5 = 6;
  }
  *(undefined *)(lVar1 + uVar7 * 0x28 + 0x24) = uVar6;
  return;
}


