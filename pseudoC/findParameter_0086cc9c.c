// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findParameter
// Entry Point: 0086cc9c
// Size: 100 bytes
// Signature: undefined __thiscall findParameter(ConditionalAnimationShared * this, uint param_1, basic_string * param_2)


/* ConditionalAnimationShared::findParameter(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */

undefined8 __thiscall
ConditionalAnimationShared::findParameter
          (ConditionalAnimationShared *this,uint param_1,basic_string *param_2)

{
  ConditionalAnimationShared **ppCVar1;
  ConditionalAnimationShared **ppCVar2;
  ConditionalAnimationShared **ppCVar3;
  
  ppCVar1 = (ConditionalAnimationShared **)(this + 8);
  ppCVar3 = (ConditionalAnimationShared **)*ppCVar1;
  ppCVar2 = ppCVar1;
  if (ppCVar3 != (ConditionalAnimationShared **)0x0) {
    do {
      if (*(uint *)(ppCVar3 + 4) >= param_1) {
        ppCVar2 = ppCVar3;
      }
      ppCVar3 = (ConditionalAnimationShared **)ppCVar3[*(uint *)(ppCVar3 + 4) < param_1];
    } while (ppCVar3 != (ConditionalAnimationShared **)0x0);
    if ((ppCVar2 != ppCVar1) && (*(uint *)(ppCVar2 + 4) <= param_1)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_2,(basic_string *)(ppCVar2 + 6));
      return 1;
    }
  }
  return 0;
}


