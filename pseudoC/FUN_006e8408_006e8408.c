// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8408
// Entry Point: 006e8408
// Size: 92 bytes
// Signature: undefined FUN_006e8408(void)


void FUN_006e8408(uint *param_1)

{
  AndroidInputDevice *this;
  undefined *puVar1;
  
  EngineManager::getInstance();
  this = (AndroidInputDevice *)EngineManager::getInputDevice();
  if (this == (AndroidInputDevice *)0x0) {
    puVar1 = &DAT_0050a39f;
  }
  else {
    puVar1 = (undefined *)AndroidInputDevice::getGamePadAxisLabel(this,param_1[4],*param_1);
  }
  *(undefined **)(param_1 + 0x40) = puVar1;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


