// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9fcc
// Entry Point: 006e9fcc
// Size: 28 bytes
// Signature: undefined FUN_006e9fcc(void)


void FUN_006e9fcc(void)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::disconnect(this,false,false);
  return;
}


