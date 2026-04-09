// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDescriptorSetLayout
// Entry Point: 00abbd0c
// Size: 16 bytes
// Signature: undefined __thiscall getDescriptorSetLayout(VulkanProgramObject * this, uint param_1)


/* VulkanProgramObject::getDescriptorSetLayout(unsigned int) */

VulkanProgramObject * __thiscall
VulkanProgramObject::getDescriptorSetLayout(VulkanProgramObject *this,uint param_1)

{
  return this + (ulong)param_1 * 0x40 + 0xe0;
}


