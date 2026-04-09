// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00790080
// Entry Point: 00790080
// Size: 40 bytes
// Signature: undefined FUN_00790080(void)


void FUN_00790080(int *param_1)

{
  TextureStreamingManager *this;
  
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  TextureStreamingManager::setMemoryBudget(this,(long)*param_1 << 0x14);
  return;
}


