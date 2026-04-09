// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea1a0
// Entry Point: 006ea1a0
// Size: 56 bytes
// Signature: undefined FUN_006ea1a0(void)


void FUN_006ea1a0(LANGUAGE_TYPE *param_1)

{
  LANGUAGE_TYPE LVar1;
  MasterServerManager *this;
  
  LVar1 = *param_1;
  if (0x17 < (int)LVar1) {
    LVar1 = 0x18;
  }
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::requestFilteredServers(this,LVar1,*(bool *)(param_1 + 4));
  return;
}


