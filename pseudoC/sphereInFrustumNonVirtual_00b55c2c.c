// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sphereInFrustumNonVirtual
// Entry Point: 00b55c2c
// Size: 224 bytes
// Signature: undefined __thiscall sphereInFrustumNonVirtual(Frustum * this, Vector3 * param_1, float param_2)


/* Frustum::sphereInFrustumNonVirtual(Vector3 const&, float) const */

undefined8 __thiscall
Frustum::sphereInFrustumNonVirtual(Frustum *this,Vector3 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar4 = *(undefined4 *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = -param_2;
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar5 = NEON_fmadd(*(undefined4 *)(this + 8),uVar4,*(float *)(this + 0xc) * fVar2);
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x10),uVar3,uVar5);
  if (fVar1 < fVar6 + *(float *)(this + 0x14)) {
    uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x18),uVar4,*(float *)(this + 0x1c) * fVar2);
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x20),uVar3,uVar5);
    if (fVar1 < fVar6 + *(float *)(this + 0x24)) {
      uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x28),uVar4,*(float *)(this + 0x2c) * fVar2);
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x30),uVar3,uVar5);
      if (fVar1 < fVar6 + *(float *)(this + 0x34)) {
        uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x38),uVar4,*(float *)(this + 0x3c) * fVar2);
        fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x40),uVar3,uVar5);
        if (fVar1 < fVar6 + *(float *)(this + 0x44)) {
          uVar5 = NEON_fmadd(*(undefined4 *)(this + 0x48),uVar4,*(float *)(this + 0x4c) * fVar2);
          fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x50),uVar3,uVar5);
          if (fVar1 < fVar6 + *(float *)(this + 0x54)) {
            uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x58),uVar4,*(float *)(this + 0x5c) * fVar2);
            fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 0x60),uVar3,uVar4);
            if (fVar1 < fVar2 + *(float *)(this + 100)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


