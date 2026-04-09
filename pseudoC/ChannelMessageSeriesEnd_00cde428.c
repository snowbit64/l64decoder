// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelMessageSeriesEnd
// Entry Point: 00cde428
// Size: 108 bytes
// Signature: undefined __thiscall ChannelMessageSeriesEnd(OutputProxy * this, basic_string * param_1, int param_2, bool param_3)


/* CryptoPP::OutputProxy::ChannelMessageSeriesEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, bool) */

undefined8 __thiscall
CryptoPP::OutputProxy::ChannelMessageSeriesEnd
          (OutputProxy *this,basic_string *param_1,int param_2,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (this[0x20] != (OutputProxy)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))
                               (*(long **)(this + 0x18),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00cde47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


