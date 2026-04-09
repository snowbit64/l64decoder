// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007900cc
// Entry Point: 007900cc
// Size: 36 bytes
// Signature: undefined FUN_007900cc(void)


void FUN_007900cc(float *param_1)

{
  TextureStreamingManager *this;
  
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  TextureStreamingManager::setTargetTexelToPixelRatio(this,*param_1);
  return;
}


