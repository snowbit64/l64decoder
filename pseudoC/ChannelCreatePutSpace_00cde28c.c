// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelCreatePutSpace
// Entry Point: 00cde28c
// Size: 64 bytes
// Signature: undefined __thiscall ChannelCreatePutSpace(OutputProxy * this, basic_string * param_1, ulong * param_2)


/* CryptoPP::OutputProxy::ChannelCreatePutSpace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long&) */

void __thiscall
CryptoPP::OutputProxy::ChannelCreatePutSpace(OutputProxy *this,basic_string *param_1,ulong *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00cde2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x128))(plVar1,param_1,param_2);
  return;
}


