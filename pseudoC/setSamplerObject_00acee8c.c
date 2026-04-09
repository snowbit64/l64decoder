// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSamplerObject
// Entry Point: 00acee8c
// Size: 324 bytes
// Signature: undefined __thiscall setSamplerObject(VulkanCommandBuffer * this, uint param_1, ISamplerObject * param_2, SHADER_STAGE param_3)


/* VulkanCommandBuffer::setSamplerObject(unsigned int, ISamplerObject*,
   IProgramObject::SHADER_STAGE) */

void __thiscall
VulkanCommandBuffer::setSamplerObject
          (VulkanCommandBuffer *this,uint param_1,ISamplerObject *param_2,SHADER_STAGE param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_3 < 3) {
    lVar8 = *(long *)(&DAT_005238c8 + (long)(int)param_3 * 8);
  }
  else {
    lVar8 = 0;
  }
  uVar9 = (ulong)(param_3 == 2);
  lVar7 = lVar8 * 0x40 + uVar9 * 0x100;
  lVar1 = *(long *)(this + lVar7 + 0x680);
  lVar2 = *(long *)(this + lVar7 + 0x688) - lVar1 >> 3;
  uVar6 = lVar2 * -0x3333333333333333;
  if ((uint)uVar6 <= param_1) {
    uVar3 = (ulong)(param_1 + 1);
    if (uVar3 <= uVar6) {
      if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
        *(ulong *)(this + lVar7 + 0x688) = lVar1 + uVar3 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + lVar7 + 0x680),uVar3 + lVar2 * 0x3333333333333333);
      lVar1 = *(long *)(this + lVar7 + 0x680);
    }
  }
  *(uint *)(lVar1 + (ulong)param_1 * 0x28 + 0x20) = param_1;
  if (param_2 == (ISamplerObject *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar7 = *(long *)(param_2 + 0x28);
    piVar4 = (int *)(lVar1 + (ulong)param_1 * 0x28);
    if ((*piVar4 != 6 || *(long *)(piVar4 + 2) != lVar7) ||
       (*(uint *)(this + lVar8 * 0x40 + uVar9 * 0x100 + 0x678) < param_1)) {
      *(undefined2 *)(this + lVar8 * 0x40 + uVar9 * 0x100 + 0x67c) = 0x100;
      *(long *)(piVar4 + 2) = lVar7;
    }
    uVar5 = 1;
    *piVar4 = 6;
  }
  *(undefined *)(lVar1 + (ulong)param_1 * 0x28 + 0x24) = uVar5;
  return;
}


