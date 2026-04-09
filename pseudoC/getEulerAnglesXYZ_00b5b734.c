// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEulerAnglesXYZ
// Entry Point: 00b5b734
// Size: 200 bytes
// Signature: undefined __thiscall getEulerAnglesXYZ(Matrix4x4 * this, Vector3 * param_1)


/* Matrix4x4::getEulerAnglesXYZ(Vector3&) const */

undefined8 __thiscall Matrix4x4::getEulerAnglesXYZ(Matrix4x4 *this,Vector3 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 8);
  if (0.9999 <= fVar4) {
    fVar4 = atan2f(*(float *)(this + 0x10),*(float *)(this + 0x14));
    uVar2 = 0xbfc90fdb;
  }
  else {
    if (-0.9999 < fVar4) {
      fVar3 = atan2f(*(float *)(this + 0x18),*(float *)(this + 0x28));
      *(float *)param_1 = fVar3;
      fVar4 = asinf(fVar4);
      *(float *)(param_1 + 4) = -fVar4;
      fVar3 = atan2f(*(float *)(this + 4),*(float *)this);
      uVar1 = 1;
      goto LAB_00b5b7e8;
    }
    fVar4 = atan2f(*(float *)(this + 0x10),*(float *)(this + 0x14));
    uVar2 = 0x3fc90fdb;
  }
  uVar1 = 0;
  fVar3 = 0.0;
  *(float *)param_1 = -fVar4;
  *(undefined4 *)(param_1 + 4) = uVar2;
LAB_00b5b7e8:
  *(float *)(param_1 + 8) = fVar3;
  return uVar1;
}


