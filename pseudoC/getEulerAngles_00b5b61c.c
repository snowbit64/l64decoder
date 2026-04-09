// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEulerAngles
// Entry Point: 00b5b61c
// Size: 280 bytes
// Signature: undefined __thiscall getEulerAngles(Matrix4x4 * this, Vector3 * param_1, Vector3 * param_2)


/* Matrix4x4::getEulerAngles(Vector3&, Vector3*) const */

void __thiscall Matrix4x4::getEulerAngles(Matrix4x4 *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float __y;
  
  fVar1 = 1.0;
  fVar4 = 1.0;
  fVar2 = 1.0;
  if (param_2 != (Vector3 *)0x0) {
    fVar1 = 1.0;
    fVar4 = 1.0 / *(float *)(param_2 + 4);
    fVar2 = 1.0 / *(float *)param_2;
    if (*(float *)param_2 == 0.0) {
      fVar2 = 1.0;
    }
    if (*(float *)(param_2 + 4) == 0.0) {
      fVar4 = 1.0;
    }
    if (*(float *)(param_2 + 8) != 0.0) {
      fVar1 = 1.0 / *(float *)(param_2 + 8);
    }
  }
  __y = fVar2 * -*(float *)(this + 8);
  fVar3 = (float)NEON_fmsub(__y,__y,0x3f800000);
  if (fVar3 <= 1e-05) {
    fVar2 = atan2f(fVar1 * -*(float *)(this + 0x24),fVar4 * *(float *)(this + 0x14));
    fVar1 = 0.0;
    fVar3 = 0.0;
    *(float *)param_1 = fVar2;
  }
  else {
    fVar3 = SQRT(fVar3);
    fVar1 = atan2f((fVar4 * *(float *)(this + 0x18)) / fVar3,
                   (fVar1 * *(float *)(this + 0x28)) / fVar3);
    *(float *)param_1 = fVar1;
    fVar1 = atan2f((fVar2 * *(float *)(this + 4)) / fVar3,(fVar2 * *(float *)this) / fVar3);
  }
  *(float *)(param_1 + 8) = fVar1;
  fVar2 = atan2f(__y,fVar3);
  *(float *)(param_1 + 4) = fVar2;
  return;
}


