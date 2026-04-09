// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelCreatePutSpace
// Entry Point: 00cddc5c
// Size: 28 bytes
// Signature: undefined __thiscall ChannelCreatePutSpace(Redirector * this, basic_string * param_1, ulong * param_2)


/* CryptoPP::Redirector::ChannelCreatePutSpace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long&) */

void __thiscall
CryptoPP::Redirector::ChannelCreatePutSpace(Redirector *this,basic_string *param_1,ulong *param_2)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cddc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x128))();
    return;
  }
  *param_2 = 0;
  return;
}


