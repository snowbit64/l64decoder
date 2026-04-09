// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSettingsChanged
// Entry Point: 007571f0
// Size: 64 bytes
// Signature: undefined onSettingsChanged(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HardwareScalability::onSettingsChanged() */

void HardwareScalability::onSettingsChanged(void)

{
  long in_x0;
  TextureStreamingManager *this;
  
  this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
  TextureStreamingManager::setMemoryBudget(this,*(ulonglong *)(in_x0 + 200));
  TextureStreamingManager::setDowngradeDelay(this,*(float *)(in_x0 + 0xd0));
  TextureStreamingManager::setTargetTexelToPixelRatio(this,*(float *)(in_x0 + 0xd4));
  return;
}


