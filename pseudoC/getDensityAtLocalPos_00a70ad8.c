// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityAtLocalPos
// Entry Point: 00a70ad8
// Size: 168 bytes
// Signature: undefined __thiscall getDensityAtLocalPos(TerrainDataPlane * this, float param_1, float param_2)


/* TerrainDataPlane::getDensityAtLocalPos(float, float) */

undefined8 __thiscall
TerrainDataPlane::getDensityAtLocalPos(TerrainDataPlane *this,float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  DensityMapModifier *this_00;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar8 = (float)BaseTerrain::getTerrainHalfSize();
  uVar5 = (uint)(*(float *)(this + 0x74) * (param_1 / fVar7 + fVar8));
  if ((-1 < (int)uVar5) &&
     (uVar6 = (uint)(*(float *)(this + 0x74) * (param_2 / fVar7 + fVar8)), -1 < (int)uVar6)) {
    this_00 = *(DensityMapModifier **)(this + 0x58);
    iVar1 = *(int *)(this_00 + 0x24);
    uVar2 = *(uint *)(this_00 + 0x28);
    bVar3 = false;
    if ((int)uVar5 < iVar1) {
      bVar3 = (int)(uVar2 - uVar6) < 0;
    }
    if (((int)uVar5 < iVar1 && uVar2 != uVar6) &&
        bVar3 == ((int)uVar5 < iVar1 && SBORROW4(uVar2,uVar6))) {
      uVar4 = DensityMapModifier::readValue(this_00,uVar5,uVar6);
      return uVar4;
    }
  }
  return 0;
}


