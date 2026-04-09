// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readTouchData
// Entry Point: 00b22b10
// Size: 224 bytes
// Signature: undefined __thiscall readTouchData(AndroidInputDevice * this, TouchInputEvent * param_1, AInputEvent * param_2, int param_3)


/* AndroidInputDevice::readTouchData(AndroidInputDevice::TouchInputEvent&, AInputEvent*, int) */

void __thiscall
AndroidInputDevice::readTouchData
          (AndroidInputDevice *this,TouchInputEvent *param_1,AInputEvent *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar4 = (long)param_3;
  *(short *)param_1 = (short)param_3;
  uVar1 = AMotionEvent_getPointerId(param_2,lVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = AMotionEvent_getAction(param_2);
  *(uint *)(param_1 + 4) = uVar2 & 0xff;
  lVar3 = AMotionEvent_getEventTime(param_2);
  *(double *)(param_1 + 8) = (((double)lVar3 / 1000.0) / 1000.0) / 1000.0;
  fVar5 = (float)AMotionEvent_getX(param_2,lVar4);
  fVar6 = (float)AMotionEvent_getY(param_2,lVar4);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x3c));
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x38));
  fVar6 = 1.0 - fVar6 / fVar7;
  uVar10 = NEON_fmin(fVar5 / fVar8,0x3f800000);
  uVar9 = NEON_fmin(fVar6,0x3f800000);
  uVar1 = 0;
  if (0.0 <= fVar5 / fVar8) {
    uVar1 = uVar10;
  }
  uVar10 = 0;
  if (0.0 <= fVar6) {
    uVar10 = uVar9;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  return;
}


