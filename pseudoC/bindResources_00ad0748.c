// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bindResources
// Entry Point: 00ad0748
// Size: 600 bytes
// Signature: undefined __thiscall bindResources(VulkanCommandBuffer * this, PIPELINE_TYPE param_1)


/* VulkanCommandBuffer::bindResources(VulkanCommandBuffer::PIPELINE_TYPE) */

void __thiscall VulkanCommandBuffer::bindResources(VulkanCommandBuffer *this,PIPELINE_TYPE param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  VulkanProgramObject **ppVVar11;
  int iVar12;
  uint local_78 [4];
  long local_68;
  
  uVar6 = (ulong)param_1;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = -(uint)(*(int *)(this + uVar6 * 0x100 + 0x6b0) == 0);
  uVar9 = uVar1;
  if (*(int *)(this + uVar6 * 0x100 + 0x6f0) != 0) {
    uVar9 = (uint)(*(int *)(this + uVar6 * 0x100 + 0x6b0) == 0);
    uVar1 = 1;
  }
  uVar10 = 2;
  if (uVar9 != 0xffffffff) {
    uVar10 = uVar9;
  }
  if (*(int *)(this + uVar6 * 0x100 + 0x730) != 0) {
    uVar1 = 2;
    uVar9 = uVar10;
  }
  uVar10 = 3;
  if (uVar9 != 0xffffffff) {
    uVar10 = uVar9;
  }
  if (*(int *)(this + uVar6 * 0x100 + 0x770) != 0) {
    uVar1 = 3;
    uVar9 = uVar10;
  }
  if (uVar9 == 0xffffffff) goto LAB_00ad096c;
  while (((uVar10 = uVar1 + 1, uVar9 <= uVar1 &&
          (lVar8 = (ulong)uVar9 * 0x40 + uVar6 * 0x100, uVar10 = uVar9,
          *(long *)(this + lVar8 + 0x698) == *(long *)(this + lVar8 + 0x6a0))) &&
         (this[lVar8 + 0x67d] == (VulkanCommandBuffer)0x0))) {
    uVar9 = uVar9 + 1;
  }
  iVar2 = (uVar1 + 1) - uVar10;
  if (iVar2 == 0) goto LAB_00ad096c;
  if (uVar1 < uVar10) {
    ppVVar11 = (VulkanProgramObject **)(this + uVar6 * 8 + 0xb8);
    iVar4 = VulkanProgramObject::getDynamicOffsetIndex(*ppVVar11,uVar10);
LAB_00ad08dc:
    iVar12 = 0;
  }
  else {
    uVar7 = 0;
    uVar9 = uVar10;
    do {
      lVar8 = (ulong)uVar9 * 0x40 + uVar6 * 0x100;
      if (((this[lVar8 + 0x67c] == (VulkanCommandBuffer)0x0) ||
          (*(long *)(this + lVar8 + 0x698) != *(long *)(this + lVar8 + 0x6a0))) ||
         (*(long *)(this + (ulong)uVar9 * 8 + uVar6 * 0x20 + 0x878) == 0)) {
        local_78[uVar7] = uVar9;
        uVar7 = uVar7 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 <= uVar1);
    if (uVar7 != 0) {
      updateDescriptorSet(this,param_1,local_78,uVar7);
    }
    ppVVar11 = (VulkanProgramObject **)(this + uVar6 * 8 + 0xb8);
    iVar4 = VulkanProgramObject::getDynamicOffsetIndex(*ppVVar11,uVar10);
    if (uVar1 < uVar10) goto LAB_00ad08dc;
    iVar12 = 0;
    uVar9 = uVar10;
    do {
      iVar5 = VulkanProgramObject::getNumDynamicOffsets(*ppVVar11,uVar9);
      uVar9 = uVar9 + 1;
      iVar12 = iVar5 + iVar12;
    } while (uVar9 <= uVar1);
  }
  if (iVar12 < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(this + uVar6 * 0x18 + 0x8b8) + (long)iVar4 * 4;
  }
  (*vkCmdBindDescriptorSets)
            (*(undefined8 *)(this + 0x4b8),param_1 != 0,*(undefined8 *)(*ppVVar11 + 0x1e0),uVar10,
             iVar2,this + (ulong)uVar10 * 8 + uVar6 * 0x20 + 0x878,iVar12,lVar8);
LAB_00ad096c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


