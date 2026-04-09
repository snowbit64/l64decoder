// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLodLevel
// Entry Point: 008f8e6c
// Size: 248 bytes
// Signature: undefined __thiscall getLodLevel(TerrainPatchOccluderManager * this, OccluderData * param_1, Matrix4x4 * param_2, Vector3 * param_3, float param_4)


/* TerrainPatchOccluderManager::getLodLevel(TerrainPatchOccluderManager::OccluderData&, Matrix4x4
   const&, Vector3 const&, float) const */

int __thiscall
TerrainPatchOccluderManager::getLodLevel
          (TerrainPatchOccluderManager *this,OccluderData *param_1,Matrix4x4 *param_2,
          Vector3 *param_3,float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar8 = *(undefined4 *)(lVar1 + 0xc);
  fVar2 = *(float *)(lVar1 + 0x10);
  uVar4 = NEON_fmadd(uVar8,*(undefined4 *)param_2,fVar2 * *(float *)(param_2 + 0x10));
  uVar6 = NEON_fmadd(uVar8,*(undefined4 *)(param_2 + 4),fVar2 * *(float *)(param_2 + 0x14));
  uVar9 = *(undefined4 *)(lVar1 + 0x14);
  fVar5 = (float)NEON_fmadd(uVar9,*(undefined4 *)(param_2 + 0x20),uVar4);
  fVar7 = (float)NEON_fmadd(uVar9,*(undefined4 *)(param_2 + 0x24),uVar6);
  uVar4 = NEON_fmadd(uVar8,*(undefined4 *)(param_2 + 8),fVar2 * *(float *)(param_2 + 0x18));
  fVar3 = (float)NEON_fmadd(uVar9,*(undefined4 *)(param_2 + 0x28),uVar4);
  fVar2 = (fVar5 + *(float *)(param_2 + 0x30)) - *(float *)param_3;
  fVar5 = (*(float *)(param_2 + 0x34) + fVar7) - *(float *)(param_3 + 4);
  fVar3 = (*(float *)(param_2 + 0x38) + fVar3) - *(float *)(param_3 + 8);
  uVar4 = NEON_fmadd(fVar5,fVar5,fVar2 * fVar2);
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x104));
  fVar5 = (float)NEON_fmadd(fVar3,fVar3,uVar4);
  fVar3 = (float)NEON_fmadd(param_4 + -1.0,0x3e4ccccd,0x3f800000);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x68) + 0x268));
  fVar3 = fVar3 * *(float *)(*(long *)(this + 0x68) + 0x26c);
  fVar2 = (fVar2 + fVar2) * fVar7;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(lVar1 + 0x18),0xbf666666,SQRT(fVar5));
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = (float)NEON_fmin(fVar3 / fVar2,0x3f800000);
  return (int)(fVar2 * fVar7);
}


