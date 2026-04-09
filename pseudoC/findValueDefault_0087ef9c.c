// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findValueDefault
// Entry Point: 0087ef9c
// Size: 80 bytes
// Signature: undefined __thiscall findValueDefault(BehaviorDataSource * this, basic_string * param_1, float * param_2, float param_3)


/* BehaviorDataSource::findValueDefault(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float&, float) */

bool __thiscall
BehaviorDataSource::findValueDefault
          (BehaviorDataSource *this,basic_string *param_1,float *param_2,float param_3)

{
  __tree_iterator _Var1;
  BehaviorDataSource *pBVar2;
  
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>>>
                      *)(this + 0x18),param_1);
  pBVar2 = (BehaviorDataSource *)(ulong)_Var1;
  if (this + 0x20 != pBVar2) {
    param_3 = *(float *)(pBVar2 + 0x38);
  }
  *param_2 = param_3;
  return this + 0x20 != pBVar2;
}


