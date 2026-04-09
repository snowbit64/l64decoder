// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_5
// Entry Point: 00c7ccfc
// Size: 48 bytes
// Signature: undefined _INIT_5(void)


void _INIT_5(void)

{
  CryptoPP::AAD_CHANNEL = 6;
  DAT_0211f5c9 = 0x444141;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&CryptoPP::AAD_CHANNEL,&PTR_LOOP_00fd8de0);
  return;
}


