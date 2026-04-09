// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSoundData
// Entry Point: 008afda4
// Size: 132 bytes
// Signature: undefined __thiscall setSoundData(StaticSoundRuntimeSettings * this, basic_string * param_1, uint param_2, uint param_3, DATA_FORMAT param_4, char * param_5)


/* StaticSoundRuntimeSettings::setSoundData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, unsigned
   int, StaticSoundRuntimeSettings::DATA_FORMAT, char*) */

void __thiscall
StaticSoundRuntimeSettings::setSoundData
          (StaticSoundRuntimeSettings *this,basic_string *param_1,uint param_2,uint param_3,
          DATA_FORMAT param_4,char *param_5)

{
  void *__dest;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
            param_1);
  *(uint *)(this + 0x2c) = param_3;
  *(uint *)(this + 0x30) = param_2;
  *(DATA_FORMAT *)(this + 0x28) = param_4;
  if (param_4 == 1) {
    __dest = operator_new__((ulong)param_3);
    *(void **)(this + 0x18) = __dest;
  }
  else {
    __dest = operator_new__((ulong)param_2 << 1);
    *(void **)(this + 0x20) = __dest;
  }
  memcpy(__dest,param_5,(ulong)param_3);
  return;
}


