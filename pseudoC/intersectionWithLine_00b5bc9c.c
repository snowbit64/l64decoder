// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectionWithLine
// Entry Point: 00b5bc9c
// Size: 120 bytes
// Signature: undefined __thiscall intersectionWithLine(Plane * this, Vector3 * param_1, Vector3 * param_2, float * param_3)


/* Plane::intersectionWithLine(Vector3 const&, Vector3 const&, float&) const */

bool __thiscall
Plane::intersectionWithLine(Plane *this,Vector3 *param_1,Vector3 *param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_2,*(undefined4 *)this,
                     *(float *)(param_2 + 4) * *(float *)(this + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),*(undefined4 *)(this + 8),uVar1);
  if (0.0001 <= ABS(fVar2)) {
    uVar1 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)this,
                       *(float *)(this + 4) * *(float *)(param_1 + 4));
    fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8),uVar1);
    *param_3 = -(*(float *)(this + 0xc) + fVar3) / fVar2;
  }
  return 0.0001 <= ABS(fVar2);
}


