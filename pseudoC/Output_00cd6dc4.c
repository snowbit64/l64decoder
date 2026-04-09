// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Output
// Entry Point: 00cd6dc4
// Size: 140 bytes
// Signature: undefined __thiscall Output(Filter * this, int param_1, uchar * param_2, ulong param_3, int param_4, bool param_5, basic_string * param_6)


/* CryptoPP::Filter::Output(int, unsigned char const*, unsigned long, int, bool,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
CryptoPP::Filter::Output
          (Filter *this,int param_1,uchar *param_2,ulong param_3,int param_4,bool param_5,
          basic_string *param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = 0;
  if (param_4 != 0) {
    iVar1 = param_4 + -1;
  }
  plVar2 = (long *)(**(code **)(*(long *)this + 0x160))();
  lVar3 = (**(code **)(*plVar2 + 0x130))(plVar2,param_6,param_2,param_3,iVar1,param_5);
  iVar1 = 0;
  if (lVar3 != 0) {
    iVar1 = param_1;
  }
  *(int *)(this + 0x28) = iVar1;
  return;
}


