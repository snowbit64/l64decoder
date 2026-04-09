// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ChannelPutModifiable2
// Entry Point: 00cddca4
// Size: 44 bytes
// Signature: undefined __cdecl ChannelPutModifiable2(basic_string * param_1, uchar * param_2, ulong param_3, int param_4, bool param_5)


/* CryptoPP::Redirector::ChannelPutModifiable2(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char*, unsigned
   long, int, bool) */

void CryptoPP::Redirector::ChannelPutModifiable2
               (basic_string *param_1,uchar *param_2,ulong param_3,int param_4,bool param_5)

{
  if (*(long **)(param_1 + 6) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cddcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 6) + 0x138))();
    return;
  }
  return;
}


