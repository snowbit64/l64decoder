// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initiateSendAddServer
// Entry Point: 00b3d66c
// Size: 176 bytes
// Signature: undefined initiateSendAddServer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::initiateSendAddServer() */

void MasterServerManager::initiateSendAddServer(void)

{
  bool bVar1;
  long in_x0;
  GenericMpManager *this;
  ulong uVar2;
  
  if (*(char *)(in_x0 + 0x4e0) != '\0') {
    *(undefined2 *)(in_x0 + 0x4e0) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(in_x0 + 0x4e8));
    GenericMpManager::getInstance();
    GenericMpManager::cancelGetSessionData();
  }
  *(undefined2 *)(in_x0 + 0x4e0) = 1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(basic_string *)(in_x0 + 0x4e8));
  bVar1 = (bool)GenericMpManager::getInstance();
  GenericMpManager::beginGetSessionData
            (bVar1,(uint)*(byte *)(in_x0 + 0x38),*(uint *)(in_x0 + 0x18c));
  if (*(char *)(in_x0 + 0x4e0) != '\0') {
    this = (GenericMpManager *)GenericMpManager::getInstance();
    uVar2 = GenericMpManager::checkGetSessionData
                      (this,(bool *)(in_x0 + 0x4e1),(basic_string *)(in_x0 + 0x4e8));
    if ((uVar2 & 1) != 0) {
      *(undefined *)(in_x0 + 0x4e0) = 0;
      sendAddServer();
      return;
    }
  }
  return;
}


