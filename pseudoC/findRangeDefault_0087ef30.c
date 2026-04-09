// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRangeDefault
// Entry Point: 0087ef30
// Size: 108 bytes
// Signature: undefined __thiscall findRangeDefault(BehaviorDataSource * this, basic_string * param_1, float * param_2, float * param_3, float param_4, float param_5)


/* BehaviorDataSource::findRangeDefault(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float&, float&, float,
   float) */

bool __thiscall
BehaviorDataSource::findRangeDefault
          (BehaviorDataSource *this,basic_string *param_1,float *param_2,float *param_3,
          float param_4,float param_5)

{
  __tree_iterator _Var1;
  BehaviorDataSource *pBVar2;
  
  _Var1 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,BehaviorDataSource::RangeData>>>
                      *)this,param_1);
  pBVar2 = (BehaviorDataSource *)(ulong)_Var1;
  if (this + 8 == pBVar2) {
    *param_2 = param_4;
  }
  else {
    *param_2 = *(float *)(pBVar2 + 0x38);
    param_5 = *(float *)(pBVar2 + 0x3c);
  }
  *param_3 = param_5;
  return this + 8 != pBVar2;
}


