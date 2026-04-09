// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testLimitValue
// Entry Point: 00f3eb20
// Size: 244 bytes
// Signature: undefined __thiscall testLimitValue(btRotationalLimitMotor * this, float param_1)


/* btRotationalLimitMotor::testLimitValue(float) */

undefined8 __thiscall
btRotationalLimitMotor::testLimitValue(btRotationalLimitMotor *this,float param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  if (fVar3 <= fVar2) {
    if (fVar3 <= param_1) {
      if (param_1 <= fVar2) goto LAB_00f3eb9c;
      fVar3 = param_1 - fVar2;
      *(float *)(this + 0x30) = fVar3;
      *(undefined4 *)(this + 0x38) = 2;
      if (fVar3 <= 3.141593) {
        if (-3.141593 <= fVar3) {
          return 2;
        }
        fVar2 = 6.283185;
      }
      else {
        fVar2 = -6.283185;
      }
      uVar1 = 2;
    }
    else {
      fVar3 = param_1 - fVar3;
      *(float *)(this + 0x30) = fVar3;
      *(undefined4 *)(this + 0x38) = 1;
      if (fVar3 <= 3.141593) {
        if (-3.141593 <= fVar3) {
          return 1;
        }
        fVar2 = 6.283185;
      }
      else {
        fVar2 = -6.283185;
      }
      uVar1 = 1;
    }
    *(float *)(this + 0x30) = fVar3 + fVar2;
    return uVar1;
  }
LAB_00f3eb9c:
  *(undefined4 *)(this + 0x38) = 0;
  return 0;
}


