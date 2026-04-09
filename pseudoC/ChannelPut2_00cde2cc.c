// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPut2
// Entry Point: 00cde2cc
// Size: 116 bytes
// Signature: undefined __thiscall ChannelPut2(OutputProxy * this, basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::OutputProxy::ChannelPut2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned long, int, bool) */

void __thiscall
CryptoPP::OutputProxy::ChannelPut2
          (OutputProxy *this,basic_string *param_1,uchar *param_2,ulong param_3,int param_4,
          bool param_5)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))();
  iVar1 = 0;
  if (this[0x20] != (OutputProxy)0x0) {
    iVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00cde33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x130))(plVar2,param_1,param_2,param_3,iVar1,param_5);
  return;
}


