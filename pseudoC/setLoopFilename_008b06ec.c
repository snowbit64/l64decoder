// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLoopFilename
// Entry Point: 008b06ec
// Size: 64 bytes
// Signature: undefined __thiscall setLoopFilename(SteadyLoopRuntimeSettings * this, uint param_1, basic_string * param_2)


/* SteadyLoopRuntimeSettings::setLoopFilename(unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
SteadyLoopRuntimeSettings::setLoopFilename
          (SteadyLoopRuntimeSettings *this,uint param_1,basic_string *param_2)

{
  if (param_1 < (uint)((int)((ulong)(*(long *)(this + 8) - *(long *)this) >> 3) * 0x38e38e39)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)this + (ulong)param_1 * 0x48),param_2);
  }
  return;
}


