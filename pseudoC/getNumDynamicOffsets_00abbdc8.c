// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumDynamicOffsets
// Entry Point: 00abbdc8
// Size: 16 bytes
// Signature: undefined __thiscall getNumDynamicOffsets(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getNumDynamicOffsets(unsigned int) */

undefined4 __thiscall
VulkanProgramObject::getNumDynamicOffsets(VulkanProgramObject *this,uint param_1)

{
  return *(undefined4 *)(this + (ulong)param_1 * 0x40 + 0x118);
}


