// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7c98
// Entry Point: 006e7c98
// Size: 88 bytes
// Signature: undefined FUN_006e7c98(void)


void FUN_006e7c98(MOUSE_BUTTONS *param_1)

{
  AndroidInputDevice *this;
  undefined *puVar1;
  
  EngineManager::getInstance();
  this = (AndroidInputDevice *)EngineManager::getInputDevice();
  if (this == (AndroidInputDevice *)0x0) {
    puVar1 = &DAT_0050a39f;
  }
  else {
    puVar1 = (undefined *)AndroidInputDevice::getMouseButtonName(this,*param_1);
  }
  *(undefined **)(param_1 + 0x40) = puVar1;
  param_1[0x42] = 6;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  return;
}


