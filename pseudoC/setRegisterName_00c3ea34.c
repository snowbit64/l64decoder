// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRegisterName
// Entry Point: 00c3ea34
// Size: 84 bytes
// Signature: undefined __cdecl setRegisterName(uint param_1, char * param_2)


/* IR_RegisterSet::setRegisterName(unsigned int, char const*) */

void IR_RegisterSet::setRegisterName(uint param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)((ulong)param_1 + 8);
  uVar3 = (*(long *)((ulong)param_1 + 0x10) - lVar1 >> 3) * -0x3333333333333333;
  uVar2 = (ulong)param_2 & 0xffffffff;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + uVar2 * 0x28 + 8));
  }
  return;
}


