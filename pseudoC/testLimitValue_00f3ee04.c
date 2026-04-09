// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testLimitValue
// Entry Point: 00f3ee04
// Size: 132 bytes
// Signature: undefined __thiscall testLimitValue(btTranslationalLimitMotor * this, int param_1, float param_2)


/* btTranslationalLimitMotor::testLimitValue(int, float) */

undefined4 __thiscall
btTranslationalLimitMotor::testLimitValue(btTranslationalLimitMotor *this,int param_1,float param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = (long)param_1;
  fVar4 = *(float *)(this + (long)param_1 * 4);
  fVar3 = *(float *)((long)(this + (long)param_1 * 4) + 0x10);
  if (fVar4 <= fVar3) {
    if (fVar4 <= param_2) {
      if (param_2 <= fVar3) {
        fVar4 = 0.0;
        uVar1 = 0;
        *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 0;
      }
      else {
        uVar1 = 1;
        fVar4 = param_2 - fVar3;
        *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 1;
      }
    }
    else {
      uVar1 = 2;
      fVar4 = param_2 - fVar4;
      *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 2;
    }
  }
  else {
    fVar4 = 0.0;
    uVar1 = 0;
    *(undefined4 *)(this + lVar2 * 4 + 0xb0) = 0;
  }
  *(float *)(this + lVar2 * 4 + 0x90) = fVar4;
  return uVar1;
}


