// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelMessageSeriesEnd
// Entry Point: 00cddd00
// Size: 44 bytes
// Signature: undefined __cdecl ChannelMessageSeriesEnd(basic_string * param_1, int param_2, bool param_3)


/* CryptoPP::Redirector::ChannelMessageSeriesEnd(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, bool) */

undefined8
CryptoPP::Redirector::ChannelMessageSeriesEnd(basic_string *param_1,int param_2,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  uint in_w3;
  
  plVar1 = *(long **)(param_1 + 6);
  if ((plVar1 != (long *)0x0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,in_w3 & 1);
    return uVar2;
  }
  return 0;
}


