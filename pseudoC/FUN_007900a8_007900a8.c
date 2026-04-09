// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007900a8
// Entry Point: 007900a8
// Size: 36 bytes
// Signature: undefined FUN_007900a8(void)


void FUN_007900a8(float *param_1)

{
  TextureStreamingManager *this;
  
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  TextureStreamingManager::setDowngradeDelay(this,*param_1);
  return;
}


