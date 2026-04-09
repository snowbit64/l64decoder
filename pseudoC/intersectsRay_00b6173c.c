// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectsRay
// Entry Point: 00b6173c
// Size: 84 bytes
// Signature: undefined __thiscall intersectsRay(BoundingSphere * this, Vector3 * param_1, Vector3 * param_2)


/* BoundingSphere::intersectsRay(Vector3 const&, Vector3 const&) const */

bool __thiscall
BoundingSphere::intersectsRay(BoundingSphere *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar1 = *(float *)(param_1 + 4) - *(float *)(this + 0x10);
  fVar3 = *(float *)param_1 - *(float *)(this + 0xc);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(this + 0x14);
  uVar5 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  uVar2 = NEON_fmadd(fVar3,*(undefined4 *)param_2,fVar1 * *(float *)(param_2 + 4));
  uVar5 = NEON_fmadd(fVar4,fVar4,uVar5);
  uVar2 = NEON_fmadd(fVar4,*(undefined4 *)(param_2 + 8),uVar2);
  uVar5 = NEON_fmsub(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x18),uVar5);
  fVar1 = (float)NEON_fnmsub(uVar2,uVar2,uVar5);
  return 0.0 <= fVar1;
}


