// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBufferInternal
// Entry Point: 00acf448
// Size: 564 bytes
// Signature: undefined __thiscall setBufferInternal(VulkanCommandBuffer * this, uint param_1, BufferInfo * param_2, RESOURCE_TYPE param_3, SHADER_STAGE param_4)


/* VulkanCommandBuffer::setBufferInternal(unsigned int, VulkanResourceAllocator::BufferInfo const*,
   VulkanProgramObject::RESOURCE_TYPE, IProgramObject::SHADER_STAGE) */

void __thiscall
VulkanCommandBuffer::setBufferInternal
          (VulkanCommandBuffer *this,uint param_1,BufferInfo *param_2,RESOURCE_TYPE param_3,
          SHADER_STAGE param_4)

{
  uint uVar1;
  uint uVar2;
  VulkanProgramObject *this_00;
  long lVar3;
  long lVar4;
  ulong uVar5;
  RESOURCE_TYPE *pRVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = 0;
  if ((param_3 == 1) && (param_4 < 3)) {
    uVar2 = *(uint *)(&DAT_005238b8 + (long)(int)param_4 * 4);
  }
  uVar10 = (ulong)uVar2;
  uVar11 = (ulong)(param_4 == 2);
  lVar9 = uVar10 * 0x40 + uVar11 * 0x100;
  lVar3 = *(long *)(this + lVar9 + 0x680);
  lVar4 = *(long *)(this + lVar9 + 0x688) - lVar3 >> 3;
  uVar7 = lVar4 * -0x3333333333333333;
  if ((uint)uVar7 <= param_1) {
    uVar5 = (ulong)(param_1 + 1);
    if (uVar5 <= uVar7) {
      if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
        *(ulong *)(this + lVar9 + 0x688) = lVar3 + uVar5 * 0x28;
      }
    }
    else {
      std::__ndk1::
      vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
      ::__append((vector<VulkanCommandBuffer::DescriptorSetElementInfo,std::__ndk1::allocator<VulkanCommandBuffer::DescriptorSetElementInfo>>
                  *)(this + lVar9 + 0x680),uVar5 + lVar4 * 0x3333333333333333);
      lVar3 = *(long *)(this + lVar9 + 0x680);
    }
  }
  pRVar6 = (RESOURCE_TYPE *)(lVar3 + (ulong)param_1 * 0x28);
  uVar7 = (ulong)param_1;
  pRVar6[8] = param_1;
  if (param_2 == (BufferInfo *)0x0) {
    *(undefined *)(lVar3 + uVar7 * 0x28 + 0x24) = 0;
  }
  else {
    lVar9 = *(long *)param_2;
    plVar8 = (long *)(lVar3 + uVar7 * 0x28 + 8);
    if ((((lVar9 == *plVar8) &&
         (*(ulong *)(lVar3 + uVar7 * 0x28 + 0x18) == (ulong)*(uint *)(param_2 + 0x1c))) &&
        (*pRVar6 == param_3)) &&
       (param_1 <= *(uint *)(this + uVar10 * 0x40 + uVar11 * 0x100 + 0x678))) {
      if (*(ulong *)(lVar3 + uVar7 * 0x28 + 0x10) != (ulong)*(uint *)(param_2 + 0x18)) {
        this[uVar10 * 0x40 + uVar11 * 0x100 + 0x67d] = (VulkanCommandBuffer)0x1;
      }
    }
    else {
      lVar4 = lVar3 + uVar7 * 0x28;
      *(undefined2 *)(this + uVar10 * 0x40 + uVar11 * 0x100 + 0x67c) = 0x100;
      *plVar8 = lVar9;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      uVar1 = *(uint *)(param_2 + 0x1c);
      *pRVar6 = param_3;
      *(ulong *)(lVar4 + 0x18) = (ulong)uVar1;
    }
    this_00 = *(VulkanProgramObject **)(this + uVar11 * 8 + 0xb8);
    *(undefined *)(lVar3 + uVar7 * 0x28 + 0x24) = 1;
    uVar2 = VulkanProgramObject::getDynamicOffsetIndex(this_00,uVar2,param_1);
    if (uVar2 != 0xffffffff) {
      lVar9 = *(long *)(this + uVar11 * 0x18 + 0x8b8);
      uVar7 = *(long *)(this + uVar11 * 0x18 + 0x8c0) - lVar9 >> 2;
      if (uVar7 <= uVar2) {
        uVar10 = (ulong)(uVar2 + 1);
        if (uVar7 < uVar10) {
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                    ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
                     (this + uVar11 * 0x18 + 0x8b8),uVar10 - uVar7);
          lVar9 = *(long *)(this + uVar11 * 0x18 + 0x8b8);
        }
        else if (uVar10 < uVar7) {
          *(ulong *)(this + uVar11 * 0x18 + 0x8c0) = lVar9 + uVar10 * 4;
        }
      }
      *(undefined4 *)(lVar9 + (ulong)uVar2 * 4) = *(undefined4 *)(param_2 + 0x18);
    }
  }
  return;
}


