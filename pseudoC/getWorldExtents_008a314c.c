// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWorldExtents
// Entry Point: 008a314c
// Size: 352 bytes
// Signature: undefined __thiscall getWorldExtents(TerrainDeformation * this, float * param_1, float * param_2)


/* TerrainDeformation::getWorldExtents(float*, float*) */

void __thiscall
TerrainDeformation::getWorldExtents(TerrainDeformation *this,float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar1 = *(uint *)(this + 0xf0);
  uVar2 = *(uint *)(this + 0xf4);
  iVar3 = *(int *)(this + 0x108);
  iVar4 = *(int *)(this + 0x10c);
  lVar7 = *(long *)(this + 0x38);
  fVar9 = (float)(ulong)uVar1;
  fVar11 = (float)(ulong)uVar2;
  iVar5 = *(int *)(lVar7 + 0x90);
  *param_1 = fVar9;
  param_1[1] = (float)(ulong)(iVar3 + uVar1);
  param_1[2] = fVar9;
  *param_2 = fVar11;
  param_2[1] = fVar11;
  param_2[2] = (float)(ulong)(iVar4 + uVar2);
  fVar12 = *param_1;
  uVar6 = BaseTerrain::getLodTextureSize();
  fVar10 = *(float *)(lVar7 + 0xa8);
  lVar8 = *(long *)(this + 0x38);
  fVar9 = (float)(ulong)(iVar5 - 1) / (float)(uVar6 & 0xffffffff);
  iVar3 = *(int *)(lVar8 + 0x90);
  fVar12 = (float)NEON_fnmsub(fVar12 + 0.5,fVar9,*(undefined4 *)(lVar7 + 0x94));
  fVar9 = (float)NEON_fnmsub(fVar11 + 0.5,fVar9,*(undefined4 *)(lVar7 + 0x94));
  *param_1 = fVar10 * fVar12;
  *param_2 = fVar10 * fVar9;
  fVar11 = param_2[1];
  fVar12 = param_1[1];
  uVar6 = BaseTerrain::getLodTextureSize();
  fVar10 = *(float *)(lVar8 + 0xa8);
  lVar7 = *(long *)(this + 0x38);
  fVar9 = (float)(ulong)(iVar3 - 1) / (float)(uVar6 & 0xffffffff);
  iVar3 = *(int *)(lVar7 + 0x90);
  fVar12 = (float)NEON_fnmsub(fVar12 + 0.5,fVar9,*(undefined4 *)(lVar8 + 0x94));
  fVar9 = (float)NEON_fnmsub(fVar11 + 0.5,fVar9,*(undefined4 *)(lVar8 + 0x94));
  param_1[1] = fVar10 * fVar12;
  param_2[1] = fVar10 * fVar9;
  fVar11 = param_2[2];
  fVar12 = param_1[2];
  uVar6 = BaseTerrain::getLodTextureSize();
  fVar10 = *(float *)(lVar7 + 0xa8);
  fVar9 = (float)(ulong)(iVar3 - 1) / (float)(uVar6 & 0xffffffff);
  fVar12 = (float)NEON_fnmsub(fVar12 + 0.5,fVar9,*(undefined4 *)(lVar7 + 0x94));
  fVar9 = (float)NEON_fnmsub(fVar11 + 0.5,fVar9,*(undefined4 *)(lVar7 + 0x94));
  param_1[2] = fVar10 * fVar12;
  param_2[2] = fVar10 * fVar9;
  return;
}


