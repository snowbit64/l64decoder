// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findValue
// Entry Point: 0087eee4
// Size: 76 bytes
// Signature: undefined __thiscall findValue(BehaviorDataSource * this, basic_string * param_1, float * param_2)


/* BehaviorDataSource::findValue(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float&) */

bool __thiscall
BehaviorDataSource::findValue(BehaviorDataSource *this,basic_string *param_1,float *param_2)

{
  __tree_iterator _Var1;
  float fVar3;
  BehaviorDataSource *pBVar2;
  
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
                      *)(this + 0x18),param_1);
  pBVar2 = (BehaviorDataSource *)(ulong)_Var1;
  if (this + 0x20 == pBVar2) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(pBVar2 + 0x38);
  }
  *param_2 = fVar3;
  return this + 0x20 != pBVar2;
}


