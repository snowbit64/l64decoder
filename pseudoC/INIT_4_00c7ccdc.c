// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_4
// Entry Point: 00c7ccdc
// Size: 32 bytes
// Signature: undefined _INIT_4(void)


void _INIT_4(void)

{
  CryptoPP::DEFAULT_CHANNEL = 0;
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&CryptoPP::DEFAULT_CHANNEL,&PTR_LOOP_00fd8de0);
  return;
}


