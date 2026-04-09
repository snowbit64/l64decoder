// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e87dc
// Entry Point: 006e87dc
// Size: 60 bytes
// Signature: undefined FUN_006e87dc(void)


void FUN_006e87dc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  EngineManager::getInstance();
  lVar2 = EngineManager::getHeadTrackingDevice();
  bVar1 = (byte)lVar2;
  if (lVar2 != 0) {
    bVar1 = HeadTrackingDevice::isAvailable();
  }
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  *(undefined4 *)(param_1 + 0x108) = 3;
  return;
}


