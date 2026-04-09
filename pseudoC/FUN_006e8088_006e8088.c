// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8088
// Entry Point: 006e8088
// Size: 40 bytes
// Signature: undefined FUN_006e8088(void)


void FUN_006e8088(void)

{
  bool bVar1;
  
  EngineManager::getInstance();
  bVar1 = (bool)EngineManager::getInputDevice();
  AndroidInputDevice::setShowMouseCursor(bVar1);
  return;
}


