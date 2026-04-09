// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OutputFlush
// Entry Point: 00cd6b24
// Size: 156 bytes
// Signature: undefined __thiscall OutputFlush(Filter * this, int param_1, bool param_2, int param_3, bool param_4, basic_string * param_5)


/* CryptoPP::Filter::OutputFlush(int, bool, int, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
CryptoPP::Filter::OutputFlush
          (Filter *this,int param_1,bool param_2,int param_3,bool param_4,basic_string *param_5)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_3 != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,param_5,param_2,param_3 + -1,param_4);
    if ((uVar2 & 1) != 0) {
      *(int *)(this + 0x28) = param_1;
      return 1;
    }
  }
  *(undefined4 *)(this + 0x28) = 0;
  return 0;
}


