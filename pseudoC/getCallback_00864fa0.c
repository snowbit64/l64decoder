// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCallback
// Entry Point: 00864fa0
// Size: 80 bytes
// Signature: undefined __thiscall getCallback(ConditionalAnimationPlayer * this, basic_string param_1, ConditionalAnimationCallback * param_2)


/* ConditionalAnimationPlayer::getCallback(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, ConditionalAnimationCallback&)
   const */

bool __thiscall
ConditionalAnimationPlayer::getCallback
          (ConditionalAnimationPlayer *this,basic_string param_1,
          ConditionalAnimationCallback *param_2)

{
  undefined8 uVar1;
  __tree_const_iterator _Var2;
  ConditionalAnimationPlayer *pCVar3;
  
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ConditionalAnimationCallback>>>
                      *)(this + 0x50),(basic_string *)(ulong)param_1);
  pCVar3 = (ConditionalAnimationPlayer *)(ulong)_Var2;
  if ((this + 0x58 != pCVar3) && (pCVar3 + 0x38 != (ConditionalAnimationPlayer *)param_2)) {
    uVar1 = *(undefined8 *)(pCVar3 + 0x40);
    *(undefined8 *)param_2 = *(undefined8 *)(pCVar3 + 0x38);
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  return this + 0x58 != pCVar3;
}


