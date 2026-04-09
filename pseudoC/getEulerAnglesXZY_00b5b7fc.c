// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEulerAnglesXZY
// Entry Point: 00b5b7fc
// Size: 216 bytes
// Signature: undefined __thiscall getEulerAnglesXZY(Matrix4x4 * this, Vector3 * param_1)


/* Matrix4x4::getEulerAnglesXZY(Vector3&) const */

undefined8 __thiscall Matrix4x4::getEulerAnglesXZY(Matrix4x4 *this,Vector3 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 4);
  if (0.9999 <= fVar3) {
    fVar2 = atan2f(*(float *)(this + 0x20),*(float *)(this + 0x28));
    fVar3 = 1.570796;
  }
  else {
    if (-0.9999 < fVar3) {
      fVar2 = atan2f(*(float *)(this + 0x24),*(float *)(this + 0x14));
      *(float *)param_1 = -fVar2;
      fVar2 = atan2f(*(float *)(this + 8),*(float *)this);
      *(float *)(param_1 + 4) = -fVar2;
      fVar3 = asinf(fVar3);
      uVar1 = 1;
      goto LAB_00b5b8c0;
    }
    fVar2 = atan2f(*(float *)(this + 0x20),*(float *)(this + 0x28));
    fVar3 = -1.570796;
  }
  uVar1 = 0;
  *(float *)param_1 = fVar2;
  *(undefined4 *)(param_1 + 4) = 0;
LAB_00b5b8c0:
  *(float *)(param_1 + 8) = fVar3;
  return uVar1;
}


