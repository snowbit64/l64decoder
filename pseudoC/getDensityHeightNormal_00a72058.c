// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityHeightNormal
// Entry Point: 00a72058
// Size: 636 bytes
// Signature: undefined __thiscall getDensityHeightNormal(TerrainFillDataPlane * this, uint param_1, uint param_2, float param_3, float param_4, uint param_5, float param_6, float param_7, float param_8, BaseTerrain * param_9, float * param_10)


/* TerrainFillDataPlane::getDensityHeightNormal(unsigned int, unsigned int, float, float, unsigned
   int, float, float, float, BaseTerrain*, float*) */

void __thiscall
TerrainFillDataPlane::getDensityHeightNormal
          (TerrainFillDataPlane *this,uint param_1,uint param_2,float param_3,float param_4,
          uint param_5,float param_6,float param_7,float param_8,BaseTerrain *param_9,
          float *param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = param_5 - 1;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_2 - 1;
  }
  uVar3 = uVar4;
  if (param_2 < uVar4) {
    uVar3 = param_2 + 1;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = param_1 - 1;
  }
  if (param_1 < uVar4) {
    uVar4 = param_1 + 1;
  }
  fVar5 = (float)BaseTerrain::getInterpolatedHeightAtPoint(param_9,param_3,param_4);
  fVar6 = (float)getDeltaDensityHeight(this,param_1,param_2,param_8);
  fVar5 = fVar5 + fVar6;
  fVar6 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,param_3,(float)(ulong)uVar1 * param_6);
  fVar7 = (float)getDeltaDensityHeight(this,param_1,uVar1,param_8);
  fVar6 = (fVar6 + fVar7) - fVar5;
  fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,(float)(ulong)uVar4 * param_6,param_4);
  fVar8 = (float)getDeltaDensityHeight(this,uVar4,param_2,param_8);
  fVar9 = (fVar7 + fVar8) - fVar5;
  fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,param_3,(float)(ulong)uVar3 * param_6);
  fVar8 = (float)getDeltaDensityHeight(this,param_1,uVar3,param_8);
  fVar10 = (fVar7 + fVar8) - fVar5;
  fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,(float)(ulong)uVar2 * param_6,param_4);
  fVar8 = (float)getDeltaDensityHeight(this,uVar2,param_2,param_8);
  fVar11 = (fVar7 + fVar8) - fVar5;
  fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,(float)(ulong)uVar4 * param_6,(float)(ulong)uVar1 * param_6);
  fVar8 = (float)getDeltaDensityHeight(this,uVar4,uVar1,param_8);
  fVar12 = (fVar7 + fVar8) - fVar5;
  fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                           (param_9,(float)(ulong)uVar2 * param_6,(float)(ulong)uVar3 * param_6);
  fVar8 = (float)getDeltaDensityHeight(this,uVar2,uVar3,param_8);
  fVar5 = (fVar7 + fVar8) - fVar5;
  param_10[1] = param_7 * 6.0;
  *param_10 = fVar11 + fVar11 + (fVar5 - fVar10) + ((((fVar6 - fVar12) + 0.0) - fVar9) - fVar9);
  param_10[2] = fVar6 + (fVar11 - fVar5) + (((fVar6 + 0.0 + (fVar12 - fVar9)) - fVar10) - fVar10);
  return;
}


