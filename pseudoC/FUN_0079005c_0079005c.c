// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079005c
// Entry Point: 0079005c
// Size: 36 bytes
// Signature: undefined FUN_0079005c(void)


void FUN_0079005c(undefined8 param_1)

{
  TextureStreamingManager *this;
  
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  TextureStreamingManager::setPaused(this,*(bool *)param_1);
  return;
}


