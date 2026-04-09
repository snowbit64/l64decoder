// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGlobalVarType
// Entry Point: 00ac7a9c
// Size: 20 bytes
// Signature: undefined __thiscall getGlobalVarType(VulkanShaderSerializer * this, uint param_1)


/* VulkanShaderSerializer::getGlobalVarType(unsigned int) */

undefined4 __thiscall
VulkanShaderSerializer::getGlobalVarType(VulkanShaderSerializer *this,uint param_1)

{
  return *(undefined4 *)(*(long *)(this + 8) + (ulong)param_1 * 0x28);
}


