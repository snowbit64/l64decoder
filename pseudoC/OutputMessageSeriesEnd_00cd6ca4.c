// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OutputMessageSeriesEnd
// Entry Point: 00cd6ca4
// Size: 148 bytes
// Signature: undefined __thiscall OutputMessageSeriesEnd(Filter * this, int param_1, int param_2, bool param_3, basic_string * param_4)


/* CryptoPP::Filter::OutputMessageSeriesEnd(int, int, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
CryptoPP::Filter::OutputMessageSeriesEnd
          (Filter *this,int param_1,int param_2,bool param_3,basic_string *param_4)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1,param_4,param_2 + -1,param_3);
    if ((uVar2 & 1) != 0) {
      *(int *)(this + 0x28) = param_1;
      return 1;
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return 0;
}


