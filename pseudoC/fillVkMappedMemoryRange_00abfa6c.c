// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVkMappedMemoryRange
// Entry Point: 00abfa6c
// Size: 108 bytes
// Signature: undefined __thiscall fillVkMappedMemoryRange(VulkanMemoryAllocator * this, Allocation * param_1, uint param_2, uint param_3, VkMappedMemoryRange * param_4)


/* VulkanMemoryAllocator::fillVkMappedMemoryRange(VulkanMemoryAllocator::Allocation const&, unsigned
   int, unsigned int, VkMappedMemoryRange&) */

void __thiscall
VulkanMemoryAllocator::fillVkMappedMemoryRange
          (VulkanMemoryAllocator *this,Allocation *param_1,uint param_2,uint param_3,
          VkMappedMemoryRange *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar2 = *(uint *)(*(long *)(this + 8) + 0x350);
  uVar1 = *(int *)(param_1 + 0x28) + param_2 + param_3;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = (*(int *)(param_1 + 0x28) + param_2) / uVar2;
  }
  uVar4 = uVar4 * uVar2;
  uVar6 = uVar1 - uVar4;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar6 / uVar2;
  }
  iVar3 = uVar6 - uVar5 * uVar2;
  if ((iVar3 != 0) && (uVar5 = *(uint *)(param_1 + 0xc), uVar1 != uVar5)) {
    uVar2 = (uVar6 - iVar3) + uVar2;
    uVar6 = uVar5 - uVar4;
    if (uVar2 + uVar4 <= uVar5) {
      uVar6 = uVar2;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)param_4 = 6;
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined8 *)(param_4 + 0x10) = uVar7;
  *(ulong *)(param_4 + 0x18) = (ulong)uVar4;
  *(ulong *)(param_4 + 0x20) = (ulong)uVar6;
  return;
}


