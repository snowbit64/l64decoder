// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792e9c
// Entry Point: 00792e9c
// Size: 36 bytes
// Signature: undefined FUN_00792e9c(void)


void FUN_00792e9c(char **param_1)

{
  I3DManager *this;
  
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::unpinSharedI3D(this,*param_1);
  return;
}


