// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792f08
// Entry Point: 00792f08
// Size: 52 bytes
// Signature: undefined FUN_00792f08(void)


void FUN_00792f08(char **param_1)

{
  I3DManager *this;
  undefined4 uVar1;
  
  this = (I3DManager *)I3DManager::getInstance();
  uVar1 = I3DManager::getSharedI3DRefCount(this,*param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


