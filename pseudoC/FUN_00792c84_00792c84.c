// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792c84
// Entry Point: 00792c84
// Size: 36 bytes
// Signature: undefined FUN_00792c84(void)


void FUN_00792c84(undefined8 param_1)

{
  I3DManager *this;
  
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::enableTrace(this,*(bool *)param_1);
  return;
}


