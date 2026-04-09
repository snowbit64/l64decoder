// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePatchHeightInfo
// Entry Point: 008ef410
// Size: 228 bytes
// Signature: undefined __thiscall updatePatchHeightInfo(GeoMipMappingTerrain * this, uint param_1, uint param_2)


/* GeoMipMappingTerrain::updatePatchHeightInfo(unsigned int, unsigned int) */

void __thiscall
GeoMipMappingTerrain::updatePatchHeightInfo(GeoMipMappingTerrain *this,uint param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = (undefined8 *)
           (*(long *)(this + 0x188) + (ulong)(param_1 + *(int *)(this + 0x19c) * param_2) * 8);
  *puVar1 = 0xf99a130c799a130c;
  BaseTerrain::getUnitsPerPixel();
  BaseTerrain::getTerrainHalfSize();
  uVar3 = *(uint *)(this + 0x198);
  uVar4 = 1 << (ulong)(uVar3 & 0x1f);
  uVar6 = param_2 << (ulong)(uVar3 & 0x1f);
  uVar2 = uVar6 + uVar4;
  if (!CARRY4(uVar6,uVar4)) {
    uVar3 = param_1 << (ulong)(uVar3 & 0x1f);
    uVar5 = uVar3;
    do {
      while (uVar5 <= uVar3 + uVar4) {
        fVar7 = (float)BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)this,uVar5,uVar6);
        fVar9 = *(float *)((long)puVar1 + 4);
        fVar8 = fVar7;
        if (*(float *)puVar1 <= fVar7) {
          fVar8 = *(float *)puVar1;
        }
        if (fVar7 <= fVar9) {
          fVar7 = fVar9;
        }
        *(float *)puVar1 = fVar8;
        *(float *)((long)puVar1 + 4) = fVar7;
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar3;
    } while (uVar6 <= uVar2);
  }
  return;
}


