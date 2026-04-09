// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea474
// Entry Point: 006ea474
// Size: 36 bytes
// Signature: undefined FUN_006ea474(void)


void FUN_006ea474(uint *param_1)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::setServerNumPlayers(this,*param_1);
  return;
}


