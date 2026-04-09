// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInFrustum
// Entry Point: 00b55b50
// Size: 220 bytes
// Signature: undefined __thiscall pointInFrustum(Frustum * this, Vector3 * param_1)


/* Frustum::pointInFrustum(Vector3 const&) const */

undefined8 __thiscall Frustum::pointInFrustum(Frustum *this,Vector3 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar3 = *(undefined4 *)param_1;
  fVar1 = *(float *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar4 = NEON_fmadd(*(undefined4 *)(this + 8),uVar3,*(float *)(this + 0xc) * fVar1);
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x10),uVar2,uVar4);
  if (0.0 < fVar5 + *(float *)(this + 0x14)) {
    uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x18),uVar3,*(float *)(this + 0x1c) * fVar1);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x20),uVar2,uVar4);
    if (0.0 < fVar5 + *(float *)(this + 0x24)) {
      uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x28),uVar3,*(float *)(this + 0x2c) * fVar1);
      fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x30),uVar2,uVar4);
      if (0.0 < fVar5 + *(float *)(this + 0x34)) {
        uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x38),uVar3,*(float *)(this + 0x3c) * fVar1);
        fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x40),uVar2,uVar4);
        if (0.0 < fVar5 + *(float *)(this + 0x44)) {
          uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x48),uVar3,*(float *)(this + 0x4c) * fVar1);
          fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x50),uVar2,uVar4);
          if (0.0 < fVar5 + *(float *)(this + 0x54)) {
            uVar3 = NEON_fmadd(*(undefined4 *)(this + 0x58),uVar3,*(float *)(this + 0x5c) * fVar1);
            fVar1 = (float)NEON_fmadd(*(undefined4 *)(this + 0x60),uVar2,uVar3);
            if (0.0 < fVar1 + *(float *)(this + 100)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


