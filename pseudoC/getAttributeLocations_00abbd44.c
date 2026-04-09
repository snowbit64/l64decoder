// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttributeLocations
// Entry Point: 00abbd44
// Size: 24 bytes
// Signature: undefined __thiscall getAttributeLocations(VulkanProgramObject * this, uint * * param_1, uint * param_2)


/* VulkanProgramObject::getAttributeLocations(unsigned int const*&, unsigned int&) const */

void __thiscall
VulkanProgramObject::getAttributeLocations(VulkanProgramObject *this,uint **param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  
  puVar1 = *(uint **)(this + 0x60);
  lVar2 = *(long *)(this + 0x68);
  *param_1 = puVar1;
  *param_2 = (uint)((ulong)(lVar2 - (long)puVar1) >> 2);
  return;
}


