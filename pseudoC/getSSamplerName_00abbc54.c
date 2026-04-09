// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSSamplerName
// Entry Point: 00abbc54
// Size: 36 bytes
// Signature: undefined __thiscall getSSamplerName(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getSSamplerName(unsigned int) const */

long __thiscall VulkanProgramObject::getSSamplerName(VulkanProgramObject *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x18) + (ulong)param_1 * 0x30;
  lVar1 = lVar2 + 9;
  if ((*(byte *)(lVar2 + 8) & 1) != 0) {
    lVar1 = *(long *)(lVar2 + 0x18);
  }
  return lVar1;
}


