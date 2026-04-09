// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGlobalVarBindingIndex
// Entry Point: 00ac7af0
// Size: 60 bytes
// Signature: undefined __thiscall getGlobalVarBindingIndex(VulkanShaderSerializer * this, uint param_1)


/* VulkanShaderSerializer::getGlobalVarBindingIndex(unsigned int) */

undefined4 __thiscall
VulkanShaderSerializer::getGlobalVarBindingIndex(VulkanShaderSerializer *this,uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) * -0x3333333333333333;
  uVar1 = (ulong)param_1;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    return *(undefined4 *)(*(long *)(this + 8) + uVar1 * 0x28 + 0x20);
  }
  return 0xffffffff;
}


