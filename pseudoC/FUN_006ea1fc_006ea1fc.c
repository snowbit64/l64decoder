// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea1fc
// Entry Point: 006ea1fc
// Size: 36 bytes
// Signature: undefined FUN_006ea1fc(void)


void FUN_006ea1fc(char **param_1)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::requestServerDetailsWithPlatformServerId(this,*param_1);
  return;
}


