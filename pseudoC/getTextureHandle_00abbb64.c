// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureHandle
// Entry Point: 00abbb64
// Size: 88 bytes
// Signature: undefined __thiscall getTextureHandle(VulkanProgramObject * this, uint param_1, SHADER_STAGE param_2)


/* VulkanProgramObject::getTextureHandle(unsigned int, IProgramObject::SHADER_STAGE) const */

undefined4 __thiscall
VulkanProgramObject::getTextureHandle(VulkanProgramObject *this,uint param_1,SHADER_STAGE param_2)

{
  if (param_2 == 2) {
    return *(undefined4 *)(*(long *)(this + 0x30) + (ulong)param_1 * 0x30 + 0x28);
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *(undefined4 *)(*(long *)(this + 0x30) + (ulong)param_1 * 0x30 + 0x20);
    }
    return 0xffffffff;
  }
  return *(undefined4 *)(*(long *)(this + 0x30) + (ulong)param_1 * 0x30 + 0x24);
}


