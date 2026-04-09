// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectPoint
// Entry Point: 00b5bf90
// Size: 56 bytes
// Signature: undefined __thiscall projectPoint(Plane * this, Vector3 * param_1)


/* Plane::projectPoint(Vector3 const&) const */

float __thiscall Plane::projectPoint(Plane *this,Vector3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(float *)this,*(float *)param_1,*(float *)(this + 4) * *(float *)(param_1 + 4)
                    );
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 8),*(undefined4 *)(param_1 + 8),uVar1);
  return *(float *)param_1 - *(float *)this * fVar2;
}


