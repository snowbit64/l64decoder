// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sphereInFrustum
// Entry Point: 00a1e6e4
// Size: 144 bytes
// Signature: undefined __thiscall sphereInFrustum(NPlaneFrustum * this, Vector3 * param_1, float param_2)


/* NPlaneFrustum::sphereInFrustum(Vector3 const&, float) const */

bool __thiscall NPlaneFrustum::sphereInFrustum(NPlaneFrustum *this,Vector3 *param_1,float param_2)

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
  uVar6 = NEON_fmadd(*puVar3,*(undefined4 *)param_1,*(float *)(param_1 + 4) * (float)puVar3[1]);
  fVar7 = (float)NEON_fmadd(puVar3[2],*(undefined4 *)(param_1 + 8),uVar6);
  if ((float)puVar3[3] + fVar7 <= -param_2) {
    return false;
  }
  pfVar4 = (float *)(puVar3 + 7);
  uVar2 = 1;
  do {
    uVar5 = uVar2;
    if (uVar1 == uVar5) break;
    uVar6 = NEON_fmadd(pfVar4[-3],*(undefined4 *)param_1,*(float *)(param_1 + 4) * pfVar4[-2]);
    fVar7 = (float)NEON_fmadd(pfVar4[-1],*(undefined4 *)(param_1 + 8),uVar6);
    fVar8 = *pfVar4;
    pfVar4 = pfVar4 + 4;
    uVar2 = uVar5 + 1;
  } while (-param_2 < fVar8 + fVar7);
  return uVar1 <= uVar5;
}


