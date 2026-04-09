// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792b1c
// Entry Point: 00792b1c
// Size: 56 bytes
// Signature: undefined FUN_00792b1c(void)


void FUN_00792b1c(float *param_1)

{
  I3DManager *pIVar1;
  
  pIVar1 = (I3DManager *)I3DManager::getInstance();
  I3DManager::setRandomCallbackDelay(pIVar1,*param_1,param_1[4]);
  pIVar1 = (I3DManager *)I3DManager::getInstance();
  I3DManager::setRandomCallbackDelayCached(pIVar1,param_1[8],param_1[0xc]);
  return;
}


