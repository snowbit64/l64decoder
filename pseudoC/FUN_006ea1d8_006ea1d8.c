// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea1d8
// Entry Point: 006ea1d8
// Size: 36 bytes
// Signature: undefined FUN_006ea1d8(void)


void FUN_006ea1d8(uint *param_1)

{
  MasterServerManager *this;
  
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::requestServerDetails(this,*param_1);
  return;
}


