// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerRegion
// Entry Point: 008f4ce4
// Size: 352 bytes
// Signature: undefined __thiscall getLayerRegion(TerrainLodTexture * this, uint param_1, int param_2, int param_3, uint param_4, uint param_5, float * param_6)


/* TerrainLodTexture::getLayerRegion(unsigned int, int, int, unsigned int, unsigned int, float*)
   const */

void __thiscall
TerrainLodTexture::getLayerRegion
          (TerrainLodTexture *this,uint param_1,int param_2,int param_3,uint param_4,uint param_5,
          float *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  
  if (param_5 != 0) {
    iVar3 = *(int *)(this + 8);
    uVar9 = (ulong)param_4;
    iVar7 = 0;
    uVar8 = 0;
    uVar10 = uVar9 & 0xfffffffe;
    uVar11 = 1;
    uVar5 = iVar3 - 1;
    do {
      uVar13 = uVar8 + param_3;
      if ((int)uVar5 <= (int)(uVar8 + param_3)) {
        uVar13 = uVar5;
      }
      if (param_4 != 0) {
        lVar6 = *(long *)(this + 0x18);
        iVar4 = (uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) * iVar3;
        if (param_4 == 1) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          if ((!CARRY4(uVar8 * param_4,(uint)(uVar9 - 1))) &&
             (uVar16 = uVar10, uVar13 = uVar11, uVar12 = param_2, uVar9 - 1 >> 0x20 == 0)) {
            do {
              uVar1 = uVar12;
              if ((int)uVar5 <= (int)uVar12) {
                uVar1 = uVar5;
              }
              uVar2 = uVar5;
              if ((int)(uVar12 + 1) < (int)uVar5) {
                uVar2 = uVar12 + 1;
              }
              fVar17 = 1.0;
              if (*(byte *)(lVar6 + (ulong)((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + iVar4) *
                                    2) != param_1) {
                fVar17 = 0.0;
              }
              fVar18 = 1.0;
              if (*(byte *)(lVar6 + (ulong)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) + iVar4) *
                                    2) != param_1) {
                fVar18 = 0.0;
              }
              uVar16 = uVar16 - 2;
              param_6[uVar13] = fVar18;
              param_6[uVar13 - 1] = fVar17;
              uVar13 = uVar13 + 2;
              uVar12 = uVar12 + 2;
            } while (uVar16 != 0);
            uVar14 = uVar10;
            if (uVar10 == uVar9) goto LAB_008f4d24;
          }
        }
        uVar12 = iVar7 + (int)uVar14;
        uVar13 = param_2 + (int)uVar14;
        lVar15 = uVar9 - uVar14;
        do {
          uVar1 = uVar13;
          if ((int)uVar5 <= (int)uVar13) {
            uVar1 = uVar5;
          }
          uVar13 = uVar13 + 1;
          fVar17 = 1.0;
          if (*(byte *)(lVar6 + (ulong)((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + iVar4) * 2)
              != param_1) {
            fVar17 = 0.0;
          }
          lVar15 = lVar15 + -1;
          param_6[uVar12] = fVar17;
          uVar12 = uVar12 + 1;
        } while (lVar15 != 0);
      }
LAB_008f4d24:
      uVar8 = uVar8 + 1;
      uVar11 = uVar11 + param_4;
      iVar7 = iVar7 + param_4;
    } while (uVar8 != param_5);
  }
  return;
}


