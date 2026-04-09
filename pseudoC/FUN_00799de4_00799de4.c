// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799de4
// Entry Point: 00799de4
// Size: 56 bytes
// Signature: undefined FUN_00799de4(void)


void FUN_00799de4(char **param_1)

{
  ENetNetworkManager *this;
  size_t sVar1;
  char *__s;
  
  __s = *param_1;
  this = (ENetNetworkManager *)ENetNetworkManager::getInstance();
  sVar1 = strlen(__s);
  ENetNetworkManager::setIncomingPassword(this,__s,(int)sVar1);
  return;
}


