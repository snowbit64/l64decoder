// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleAnalogDpad
// Entry Point: 00b22ca0
// Size: 248 bytes
// Signature: undefined __thiscall handleAnalogDpad(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handleAnalogDpad(AInputEvent*) */

undefined8 __thiscall
AndroidInputDevice::handleAnalogDpad(AndroidInputDevice *this,AInputEvent *param_1)

{
  AndroidInputDevice *pAVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)AMotionEvent_getAxisValue(param_1,0xf,0);
  fVar6 = (float)AMotionEvent_getAxisValue(param_1,0x10,0);
  pAVar1 = this + 0x13c4;
  if (((*pAVar1 == (AndroidInputDevice)0x0) && (fVar5 == 0.0)) && (fVar6 == 0.0)) {
    return 0;
  }
  puVar3 = (undefined4 *)(this + 0x1440);
  *pAVar1 = (AndroidInputDevice)0x0;
  *(undefined8 *)(this + 0x1440) = 0;
  *(undefined8 *)(this + 0x1438) = 0;
  if (fVar5 == 1.0) {
    lVar4 = 0x143c;
  }
  else {
    if (fVar5 != -1.0) {
      uVar2 = 0;
      goto LAB_00b22d50;
    }
    lVar4 = 0x1444;
  }
  uVar2 = 1;
  *(undefined4 *)(this + lVar4) = 0x3f800000;
  *pAVar1 = (AndroidInputDevice)0x1;
LAB_00b22d50:
  if (fVar6 != 1.0) {
    if (fVar6 != -1.0) {
      return uVar2;
    }
    puVar3 = (undefined4 *)(this + 0x1438);
  }
  *puVar3 = 0x3f800000;
  *pAVar1 = (AndroidInputDevice)0x1;
  return 1;
}


