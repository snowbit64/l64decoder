// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOutputTextureName
// Entry Point: 00abbcc4
// Size: 36 bytes
// Signature: undefined __thiscall getOutputTextureName(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getOutputTextureName(unsigned int) const */

long __thiscall VulkanProgramObject::getOutputTextureName(VulkanProgramObject *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x48) + (ulong)param_1 * 0x30;
  lVar1 = lVar2 + 9;
  if ((*(byte *)(lVar2 + 8) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x18);
  }
  return lVar1;
}


