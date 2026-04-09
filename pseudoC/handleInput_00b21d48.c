// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleInput
// Entry Point: 00b21d48
// Size: 148 bytes
// Signature: undefined __thiscall handleInput(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handleInput(AInputEvent*) */

undefined8 __thiscall AndroidInputDevice::handleInput(AndroidInputDevice *this,AInputEvent *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = AInputEvent_getType(param_1);
  if (iVar1 == 1) {
    uVar3 = handleKeyEvent(this,param_1);
    return uVar3;
  }
  iVar1 = AInputEvent_getType(param_1);
  if (iVar1 == 2) {
    uVar2 = AInputEvent_getSource(param_1);
    if ((uVar2 & 0x1000010) != 0) {
      uVar3 = handleJoystickEvent(this,param_1);
      return uVar3;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      handlePointerEvent(this,param_1);
    }
  }
  return 0;
}


