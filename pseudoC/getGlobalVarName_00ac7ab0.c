// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGlobalVarName
// Entry Point: 00ac7ab0
// Size: 64 bytes
// Signature: undefined __cdecl getGlobalVarName(uint param_1)


/* VulkanShaderSerializer::getGlobalVarName(unsigned int) */

void VulkanShaderSerializer::getGlobalVarName(uint param_1)

{
  ulong in_x1;
  basic_string *in_x8;
  ulong uVar1;
  
  uVar1 = (*(long *)((ulong)param_1 + 0x10) - *(long *)((ulong)param_1 + 8) >> 3) *
          -0x3333333333333333;
  if ((in_x1 & 0xffffffff) <= uVar1 && uVar1 - (in_x1 & 0xffffffff) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8);
    return;
  }
  *(undefined2 *)in_x8 = 0;
  return;
}


