// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOutputTextureHandle
// Entry Point: 00abbc94
// Size: 48 bytes
// Signature: undefined __thiscall getOutputTextureHandle(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getOutputTextureHandle(unsigned int) const */

int __thiscall VulkanProgramObject::getOutputTextureHandle(VulkanProgramObject *this,uint param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x48) + (ulong)param_1 * 0x30 + 0x24);
  if (iVar1 != -1) {
    return iVar1;
  }
  return *(int *)(*(long *)(this + 0x48) + (ulong)param_1 * 0x30 + 0x28);
}


