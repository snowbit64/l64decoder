// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792268
// Entry Point: 00792268
// Size: 40 bytes
// Signature: undefined FUN_00792268(void)


void FUN_00792268(float *param_1)

{
  I3DStreamingManager *this;
  
  this = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::setRandomCallbackDelay(this,*param_1,param_1[4]);
  return;
}


