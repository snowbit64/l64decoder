// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayIntersection
// Entry Point: 00b61790
// Size: 112 bytes
// Signature: undefined __thiscall rayIntersection(BoundingSphere * this, Vector3 * param_1, Vector3 * param_2, float * param_3)


/* BoundingSphere::rayIntersection(Vector3 const&, Vector3 const&, float&) const */

bool __thiscall
BoundingSphere::rayIntersection
          (BoundingSphere *this,Vector3 *param_1,Vector3 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar1 = *(float *)(param_1 + 4) - *(float *)(this + 0x10);
  fVar2 = *(float *)param_1 - *(float *)(this + 0xc);
  fVar3 = *(float *)(param_1 + 8) - *(float *)(this + 0x14);
  uVar4 = NEON_fmadd(fVar2,fVar2,fVar1 * fVar1);
  fVar1 = (float)NEON_fmadd(fVar2,*(undefined4 *)param_2,fVar1 * *(float *)(param_2 + 4));
  uVar4 = NEON_fmadd(fVar3,fVar3,uVar4);
  uVar5 = NEON_fmadd(fVar3,*(undefined4 *)(param_2 + 8),fVar1);
  fVar2 = (float)NEON_fnmadd(fVar3,*(undefined4 *)(param_2 + 8),-fVar1);
  uVar4 = NEON_fmsub(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x18),uVar4);
  fVar3 = (float)NEON_fnmsub(uVar5,uVar5,uVar4);
  fVar1 = INFINITY;
  if (0.0 <= fVar3) {
    fVar1 = fVar2 - SQRT(fVar3);
  }
  *param_3 = fVar1;
  return 0.0 <= fVar3;
}


