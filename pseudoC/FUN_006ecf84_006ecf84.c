// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ecf84
// Entry Point: 006ecf84
// Size: 56 bytes
// Signature: undefined FUN_006ecf84(void)


void FUN_006ecf84(undefined8 param_1,AInputEvent *param_2)

{
  long lVar1;
  AndroidInputDevice *this;
  
  lVar1 = AndroidInputDevice::getInputDevice();
  if (lVar1 != 0) {
    this = (AndroidInputDevice *)AndroidInputDevice::getInputDevice();
    AndroidInputDevice::handleInput(this,param_2);
    return;
  }
  return;
}


