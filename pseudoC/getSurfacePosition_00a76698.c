// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSurfacePosition
// Entry Point: 00a76698
// Size: 164 bytes
// Signature: undefined __thiscall getSurfacePosition(TerrainTransformGroup * this, float param_1, float param_2, Vector3 * param_3)


/* TerrainTransformGroup::getSurfacePosition(float, float, Vector3&) const */

void __thiscall
TerrainTransformGroup::getSurfacePosition
          (TerrainTransformGroup *this,float param_1,float param_2,Vector3 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar1 = BaseTerrain::getHeightMapSize();
  fVar4 = (float)iVar1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  uVar2 = (uint)(fVar4 * param_1);
  uVar3 = (uint)(fVar4 * param_2);
  fVar4 = (float)BaseTerrain::getUnitsPerPixel();
  *(float *)param_3 = fVar4 * (float)(uVar2 - (iVar1 >> 1));
  uVar5 = BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)(this + 0x170),uVar2,uVar3);
  *(undefined4 *)(param_3 + 4) = uVar5;
  *(float *)(param_3 + 8) = fVar4 * (float)(uVar3 - (iVar1 >> 1));
  return;
}


