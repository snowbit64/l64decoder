// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDynamicOffsetIndex
// Entry Point: 00abbd5c
// Size: 96 bytes
// Signature: undefined __thiscall getDynamicOffsetIndex(VulkanProgramObject * this, uint param_1, uint param_2)


/* VulkanProgramObject::getDynamicOffsetIndex(unsigned int, unsigned int) */

int __thiscall
VulkanProgramObject::getDynamicOffsetIndex(VulkanProgramObject *this,uint param_1,uint param_2)

{
  ulong uVar1;
  VulkanProgramObject *pVVar2;
  VulkanProgramObject *pVVar3;
  
  uVar1 = (ulong)param_1;
  pVVar3 = *(VulkanProgramObject **)(this + uVar1 * 0x40 + 0x108);
  if (pVVar3 != (VulkanProgramObject *)0x0) {
    pVVar2 = this + uVar1 * 0x40 + 0x108;
    do {
      if (*(uint *)(pVVar3 + 0x1c) >= param_2) {
        pVVar2 = pVVar3;
      }
      pVVar3 = *(VulkanProgramObject **)(pVVar3 + (ulong)(*(uint *)(pVVar3 + 0x1c) < param_2) * 8);
    } while (pVVar3 != (VulkanProgramObject *)0x0);
    if ((pVVar2 != this + uVar1 * 0x40 + 0x108) && (*(uint *)(pVVar2 + 0x1c) <= param_2)) {
      return *(int *)(this + uVar1 * 4 + 0x1e8) + *(int *)(pVVar2 + 0x20);
    }
  }
  return -1;
}


