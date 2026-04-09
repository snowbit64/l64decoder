// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8a1c
// Entry Point: 006e8a1c
// Size: 36 bytes
// Signature: undefined FUN_006e8a1c(void)


void FUN_006e8a1c(void)

{
  long lVar1;
  
  EngineManager::getInstance();
  lVar1 = EngineManager::getHeadTrackingDevice();
  if (lVar1 != 0) {
    HeadTrackingDevice::center();
    return;
  }
  return;
}


