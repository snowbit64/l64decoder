// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSSamplerHandle
// Entry Point: 00abbbfc
// Size: 88 bytes
// Signature: undefined __thiscall getSSamplerHandle(VulkanProgramObject * this, uint param_1, SHADER_STAGE param_2)


/* VulkanProgramObject::getSSamplerHandle(unsigned int, IProgramObject::SHADER_STAGE) const */

undefined4 __thiscall
VulkanProgramObject::getSSamplerHandle(VulkanProgramObject *this,uint param_1,SHADER_STAGE param_2)

{
  if (param_2 == 2) {
    return *(undefined4 *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x30 + 0x28);
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *(undefined4 *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x30 + 0x20);
    }
    return 0xffffffff;
  }
  return *(undefined4 *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x30 + 0x24);
}


