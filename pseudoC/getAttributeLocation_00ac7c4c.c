// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttributeLocation
// Entry Point: 00ac7c4c
// Size: 36 bytes
// Signature: undefined __thiscall getAttributeLocation(VulkanShaderSerializer * this, uint param_1)


/* VulkanShaderSerializer::getAttributeLocation(unsigned int) */

undefined4 __thiscall
VulkanShaderSerializer::getAttributeLocation(VulkanShaderSerializer *this,uint param_1)

{
  if ((ulong)param_1 < (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2)) {
    return *(undefined4 *)(*(long *)(this + 0x20) + (ulong)param_1 * 4);
  }
  return 0xffffffff;
}


