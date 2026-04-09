// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e82bc
// Entry Point: 006e82bc
// Size: 92 bytes
// Signature: undefined FUN_006e82bc(void)


void FUN_006e82bc(uint *param_1)

{
  AndroidInputDevice *this;
  uint uVar1;
  
  EngineManager::getInstance();
  this = (AndroidInputDevice *)EngineManager::getInputDevice();
  if (this == (AndroidInputDevice *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_1[6] == 1) {
      uVar1 = param_1[4];
    }
    else {
      uVar1 = 0;
    }
    uVar1 = AndroidInputDevice::getAxis(this,uVar1,*param_1);
  }
  param_1[0x40] = uVar1;
  param_1[0x42] = 4;
  return;
}


