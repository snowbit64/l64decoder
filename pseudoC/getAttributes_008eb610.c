// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAttributes
// Entry Point: 008eb610
// Size: 348 bytes
// Signature: undefined __thiscall getAttributes(BaseTerrain * this, int param_1, int param_2, float * param_3, bool * param_4, uint param_5)


/* BaseTerrain::getAttributes(int, int, float*, bool const*, unsigned int) */

ulong __thiscall
BaseTerrain::getAttributes
          (BaseTerrain *this,int param_1,int param_2,float *param_3,bool *param_4,uint param_5)

{
  undefined8 *puVar1;
  TerrainLodTexture *this_00;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (s_allowGetAttributes == '\0') {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = 0;
    this_00 = *(TerrainLodTexture **)(this + 0xd8);
  }
  else {
    if (*(int *)(*(long *)(this + 0xd8) + 8) <= param_1) {
      param_1 = *(int *)(*(long *)(this + 0xd8) + 8) - 1;
    }
    this_00 = *(TerrainLodTexture **)(this + 0xd8);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (*(int *)(this_00 + 8) <= param_2) {
    param_2 = *(int *)(this_00 + 8) - 1;
  }
  uVar2 = TerrainLodTexture::getLayerIndex(this_00,param_1,param_2);
  lVar4 = *(long *)(this + 8);
  uVar6 = (*(long *)(this + 0x10) - lVar4 >> 4) * 0x2e8ba2e8ba2e8ba3;
  uVar2 = uVar2 & 0xffffffff;
  if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
    lVar7 = lVar4 + uVar2 * 0xb0;
    uVar5 = (uint)((ulong)(*(long *)(lVar7 + 0x98) - *(long *)(lVar7 + 0x90)) >> 2);
    if (uVar5 <= param_5) {
      param_5 = uVar5;
    }
    uVar6 = (ulong)param_5;
    if (param_5 == 0) {
      return uVar6;
    }
    pfVar3 = *(float **)(lVar4 + uVar2 * 0xb0 + 0x90);
    if ((param_5 < 8) || (param_3 < pfVar3 + uVar6 && pfVar3 < param_3 + uVar6)) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar6 & 0xfffffff8;
      puVar8 = (undefined8 *)(pfVar3 + 4);
      puVar10 = (undefined8 *)(param_3 + 4);
      uVar11 = uVar2;
      do {
        puVar1 = puVar8 + -1;
        uVar12 = puVar8[-2];
        uVar14 = puVar8[1];
        uVar13 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar11 = uVar11 - 8;
        puVar10[-1] = *puVar1;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      if (uVar2 == uVar6) {
        return uVar6;
      }
    }
    lVar4 = uVar6 - uVar2;
    pfVar3 = pfVar3 + uVar2;
    pfVar9 = param_3 + uVar2;
    do {
      lVar4 = lVar4 + -1;
      *pfVar9 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar9 = pfVar9 + 1;
    } while (lVar4 != 0);
    return uVar6;
  }
  return 0;
}


