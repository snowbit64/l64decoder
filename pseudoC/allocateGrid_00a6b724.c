// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGrid
// Entry Point: 00a6b724
// Size: 328 bytes
// Signature: undefined __thiscall allocateGrid(DensityAnimationMap * this, uint param_1, uint param_2, float param_3, TerrainTransformGroup * param_4)


/* DensityAnimationMap::allocateGrid(unsigned int, unsigned int, float, TerrainTransformGroup*) */

void __thiscall
DensityAnimationMap::allocateGrid
          (DensityAnimationMap *this,uint param_1,uint param_2,float param_3,
          TerrainTransformGroup *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  *(TerrainTransformGroup **)(this + 0x10) = param_4;
  iVar3 = BaseTerrain::getHeightMapSize();
  fVar4 = (float)BaseTerrain::getUnitsPerPixel();
  fVar4 = fVar4 * (float)(ulong)(iVar3 - 1);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1 / param_2;
  }
  *(uint *)(this + 0x1c) = param_1;
  *(float *)(this + 0x18) = fVar4;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(this + 0x44) / param_2;
  }
  *(uint *)(this + 0x20) = param_2;
  *(uint *)(this + 0x24) = uVar1;
  *(uint *)(this + 0x50) = uVar2;
  fVar6 = (param_3 / fVar4) * (float)(ulong)uVar1;
  fVar5 = fVar4 / (float)(ulong)uVar1;
  *(float *)(this + 0x38) = fVar6;
  uVar7 = *(undefined4 *)(param_4 + 0x214);
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(float *)(this + 0x28) = fVar5;
  *(undefined4 *)(this + 0x2c) = uVar7;
  uVar2 = (int)((float)(int)(fVar6 / (float)(ulong)uVar2) + 1.0) * uVar2 * 2;
  *(float *)(this + 0x30) = param_3;
  *(float *)(this + 0x34) = (param_3 / fVar4) * (float)(ulong)param_1;
  *(undefined8 *)(this + 0x3c) = 0;
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  *(undefined8 *)(this + 0x48) = 0;
  this[0x78] = (DensityAnimationMap)0x1;
  uVar2 = uVar1 - 1 | uVar1 - 1 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  fVar4 = (((float)(ulong)(param_2 - 1) * 0.5) / (float)(ulong)param_1 + -0.5) * fVar4;
  uVar2 = uVar2 | uVar2 >> 0x10;
  uVar1 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    uVar1 = 1;
  }
  *(ulong *)(this + 0x5c) = CONCAT44(fVar4,fVar4);
  *(ulong *)(this + 0x54) = CONCAT44(fVar4,fVar4);
  *(uint *)(this + 0x6c) = uVar1;
  *(uint *)(this + 0x70) = uVar1 * param_2;
  *(float *)(this + 0x74) = fVar5 * (float)(ulong)uVar1;
  return;
}


