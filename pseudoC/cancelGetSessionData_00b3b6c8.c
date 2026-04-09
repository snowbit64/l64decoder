// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelGetSessionData
// Entry Point: 00b3b6c8
// Size: 44 bytes
// Signature: undefined cancelGetSessionData(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::cancelGetSessionData() */

void MasterServerManager::cancelGetSessionData(void)

{
  long in_x0;
  
  *(undefined2 *)(in_x0 + 0x4e0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x4e8));
  GenericMpManager::getInstance();
  GenericMpManager::cancelGetSessionData();
  return;
}


