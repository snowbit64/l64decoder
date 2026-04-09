// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointInFrustum
// Entry Point: 00a1e43c
// Size: 140 bytes
// Signature: undefined __thiscall pointInFrustum(NPlaneFrustum * this, Vector3 * param_1)


/* NPlaneFrustum::pointInFrustum(Vector3 const&) const */

bool __thiscall NPlaneFrustum::pointInFrustum(NPlaneFrustum *this,Vector3 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == 0) {
    return true;
  }
  puVar3 = *(undefined4 **)(this + 8);
  uVar6 = NEON_fmadd(*puVar3,*(undefined4 *)param_1,(float)puVar3[1] * *(float *)(param_1 + 4));
  fVar7 = (float)NEON_fmadd(puVar3[2],*(undefined4 *)(param_1 + 8),uVar6);
  if (fVar7 + (float)puVar3[3] <= 0.0) {
    return false;
  }
  pfVar4 = (float *)(puVar3 + 7);
  uVar2 = 1;
  do {
    uVar5 = uVar2;
    if (uVar1 == uVar5) break;
    uVar6 = NEON_fmadd(pfVar4[-3],*(undefined4 *)param_1,pfVar4[-2] * *(float *)(param_1 + 4));
    fVar7 = (float)NEON_fmadd(pfVar4[-1],*(undefined4 *)(param_1 + 8),uVar6);
    fVar8 = *pfVar4;
    pfVar4 = pfVar4 + 4;
    uVar2 = uVar5 + 1;
  } while (0.0 < fVar7 + fVar8);
  return uVar1 <= uVar5;
}


