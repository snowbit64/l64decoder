// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDynamicOffsetIndex
// Entry Point: 00abbdbc
// Size: 12 bytes
// Signature: undefined __thiscall getDynamicOffsetIndex(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getDynamicOffsetIndex(unsigned int) */

undefined4 __thiscall
VulkanProgramObject::getDynamicOffsetIndex(VulkanProgramObject *this,uint param_1)

{
  return *(undefined4 *)(this + (ulong)param_1 * 4 + 0x1e8);
}


