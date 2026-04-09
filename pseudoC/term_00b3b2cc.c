// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 00b3b2cc
// Size: 184 bytes
// Signature: undefined term(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::term() */

void MasterServerManager::term(void)

{
  MasterServerManager *in_x0;
  uint *puVar1;
  
  setCallbacks((char *)in_x0,"","","","","","","","","",&DAT_0050a39f);
  deleteServerOverviewInfos();
  disconnect(in_x0,false,false);
  *(undefined2 *)(in_x0 + 0x4e0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(in_x0 + 0x4e8));
  GenericMpManager::getInstance();
  GenericMpManager::cancelGetSessionData();
  if (*(void **)(in_x0 + 0x4b8) != (void *)0x0) {
    operator_delete(*(void **)(in_x0 + 0x4b8));
  }
  *(undefined8 *)(in_x0 + 0x4b8) = 0;
  in_x0[0x4c0] = (MasterServerManager)0x0;
  if (in_x0[0x17c] != (MasterServerManager)0x0) {
    puVar1 = (uint *)ENetNetworkManager::getInstance();
    ENetNetworkManager::closeConnection(puVar1,(bool)((char)in_x0 + -0x78),'\x01');
    in_x0[0x17c] = (MasterServerManager)0x0;
  }
  return;
}


