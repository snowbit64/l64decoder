// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProjectionSides
// Entry Point: 00a50f6c
// Size: 204 bytes
// Signature: undefined __thiscall getProjectionSides(Camera * this, float param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* Camera::getProjectionSides(float, float&, float&, float&, float&) const */

void __thiscall
Camera::getProjectionSides
          (Camera *this,float param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this[0x16c] == (Camera)0x0) {
    fVar1 = tanf(*(float *)(this + 0x154) * 0.5);
    fVar3 = fVar1 * param_1;
    fVar2 = (float)NEON_fnmsub(fVar3 + fVar3,*(undefined4 *)(this + 0x160),fVar3);
    *param_2 = fVar2;
    fVar2 = (float)NEON_fmadd(fVar3 + fVar3,*(undefined4 *)(this + 0x160),fVar3);
    *param_3 = fVar2;
    fVar2 = (float)NEON_fnmsub(fVar1 + fVar1,*(undefined4 *)(this + 0x164),fVar1);
    *param_4 = fVar2;
    fVar1 = (float)NEON_fmadd(fVar1 + fVar1,*(undefined4 *)(this + 0x164),fVar1);
    *param_5 = fVar1;
  }
  else {
    fVar1 = *(float *)(this + 0x168);
    *param_5 = fVar1 * 0.5;
    *param_4 = -(fVar1 * 0.5);
    fVar1 = *param_5;
    *param_3 = fVar1 * param_1;
    *param_2 = -(fVar1 * param_1);
  }
  return;
}


