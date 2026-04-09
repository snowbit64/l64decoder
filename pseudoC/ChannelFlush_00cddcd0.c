// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelFlush
// Entry Point: 00cddcd0
// Size: 48 bytes
// Signature: undefined __thiscall ChannelFlush(Redirector * this, basic_string * param_1, bool param_2, int param_3, bool param_4)


/* CryptoPP::Redirector::ChannelFlush(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool, int, bool) */

undefined8 __thiscall
CryptoPP::Redirector::ChannelFlush
          (Redirector *this,basic_string *param_1,bool param_2,int param_3,bool param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x18);
  if ((plVar1 != (long *)0x0) && (((byte)this[0x20] & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x140))(plVar1,param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}


