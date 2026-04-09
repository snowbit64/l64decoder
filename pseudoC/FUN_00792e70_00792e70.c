// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792e70
// Entry Point: 00792e70
// Size: 44 bytes
// Signature: undefined FUN_00792e70(void)


void FUN_00792e70(char **param_1)

{
  I3DManager *this;
  
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::pinSharedI3D(this,*param_1,*(bool *)(param_1 + 2),false);
  return;
}


