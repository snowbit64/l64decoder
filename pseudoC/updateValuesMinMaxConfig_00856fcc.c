// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateValuesMinMaxConfig
// Entry Point: 00856fcc
// Size: 972 bytes
// Signature: undefined __thiscall updateValuesMinMaxConfig(DensityMapUpdater * this, uint param_1, uint param_2, uint param_3, uint param_4, DensityMapModifier * param_5, DensityMapModifier * param_6, float param_7, float param_8)


/* DensityMapUpdater::updateValuesMinMaxConfig(unsigned int, unsigned int, unsigned int, unsigned
   int, DensityMapModifier*, DensityMapModifier*, float, float) */

void __thiscall
DensityMapUpdater::updateValuesMinMaxConfig
          (DensityMapUpdater *this,uint param_1,uint param_2,uint param_3,uint param_4,
          DensityMapModifier *param_5,DensityMapModifier *param_6,float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  DensityMapUpdater *pDVar13;
  long lVar14;
  
  if (param_2 < param_4) {
    bVar5 = false;
    uVar1 = param_2;
    do {
      uVar2 = param_1;
      if (param_1 < param_3) {
        do {
          uVar6 = *(uint *)(this + 0x40);
          if (uVar6 == 0) {
LAB_0085714c:
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar14 = **(long **)(param_5 + 0x18);
              uVar6 = *(uint *)(this + 0x48) +
                      (uVar2 + uVar1 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
              uVar7 = (ulong)(uVar6 >> 3) & 0xffff;
              lVar11 = *(long *)(lVar14 + (ulong)(uVar6 >> 0x13) * 8);
              if ((uint)uVar7 < 0xfffd) {
                uVar10 = *(uint *)(lVar11 + uVar7);
              }
              else {
                uVar10 = (uVar6 >> 3) + 1;
                uVar9 = (uVar6 >> 3) + 2;
                uVar10 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar14 + (ulong)(uVar9 >> 0x10) * 8) +
                                         ((ulong)uVar9 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar14 + (ulong)(uVar10 >> 0x10) * 8) +
                                                  ((ulong)uVar10 & 0xffff)),
                                                 *(undefined *)(lVar11 + uVar7)));
              }
              uVar6 = uVar10 >> (ulong)(uVar6 & 7) &
                      (-1 << (ulong)(*(uint *)(this + 0x4c) & 0x1f) ^ 0xffffffffU) & 0xffff;
            }
            else {
              uVar6 = ChunkedBitSquare::readBits
                                (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,
                                 *(uint *)(this + 0x48),*(uint *)(this + 0x4c));
            }
            puVar8 = (uint *)(this + 0x58);
            puVar12 = (uint *)(this + 0x54);
            pDVar13 = this + 0x5c;
            if (param_6 != (DensityMapModifier *)0x0) {
              if (*(ChunkedBitSquare **)(param_6 + 0x10) == (ChunkedBitSquare *)0x0) {
                uVar10 = *(uint *)(this + 0x1070) +
                         ((int)((float)(ulong)uVar2 * param_7) +
                         *(int *)(param_6 + 0x24) * (int)((float)(ulong)uVar1 * param_8)) *
                         *(int *)(param_6 + 0x2c);
                lVar14 = **(long **)(param_6 + 0x18);
                uVar7 = (ulong)(uVar10 >> 3) & 0xffff;
                lVar11 = *(long *)(lVar14 + (ulong)(uVar10 >> 0x13) * 8);
                if ((uint)uVar7 < 0xfffd) {
                  uVar9 = *(uint *)(lVar11 + uVar7);
                }
                else {
                  uVar9 = (uVar10 >> 3) + 1;
                  uVar4 = (uVar10 >> 3) + 2;
                  uVar9 = (uint)CONCAT12(*(undefined *)
                                          (*(long *)(lVar14 + (ulong)(uVar4 >> 0x10) * 8) +
                                          ((ulong)uVar4 & 0xffff)),
                                         CONCAT11(*(undefined *)
                                                   (*(long *)(lVar14 + (ulong)(uVar9 >> 0x10) * 8) +
                                                   ((ulong)uVar9 & 0xffff)),
                                                  *(undefined *)(lVar11 + uVar7)));
                }
                uVar7 = (ulong)(uVar9 >> (ulong)(uVar10 & 7) &
                                (-1 << (ulong)(*(uint *)(this + 0x1074) & 0x1f) ^ 0xffffffffU) &
                               0xffff);
              }
              else {
                uVar7 = ChunkedBitSquare::readBits
                                  (*(ChunkedBitSquare **)(param_6 + 0x10),
                                   (int)((float)(ulong)uVar2 * param_7),
                                   (int)((float)(ulong)uVar1 * param_8),*(uint *)(this + 0x1070),
                                   *(uint *)(this + 0x1074));
              }
              uVar7 = uVar7 & 0xffffffff;
              puVar12 = (uint *)(this + uVar7 * 0xc + 0x54);
              puVar8 = (uint *)(this + uVar7 * 0xc + 0x58);
              pDVar13 = this + uVar7 * 0xc + 0x5c;
            }
            uVar9 = *puVar12;
            uVar4 = *puVar8;
            uVar10 = uVar6;
            if ((int)uVar9 <= (int)uVar6) {
              uVar10 = uVar9;
            }
            uVar3 = uVar6;
            if ((int)uVar6 <= (int)uVar4) {
              uVar3 = uVar4;
            }
            if (*pDVar13 != (DensityMapUpdater)0x0) {
              uVar9 = uVar10;
            }
            if (*pDVar13 != (DensityMapUpdater)0x0) {
              uVar4 = uVar3;
            }
            if ((int)uVar9 <= (int)(*(int *)(this + 0x354) + uVar6)) {
              uVar9 = *(int *)(this + 0x354) + uVar6;
            }
            if ((int)uVar9 <= (int)uVar4) {
              uVar4 = uVar9;
            }
            if (uVar4 != uVar6) {
              if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
                DensityMapAccessUtil::writeBits
                          (*(BitVector **)(param_5 + 0x18),*(uint *)(param_5 + 0x2c),
                           *(uint *)(param_5 + 0x24),uVar2,uVar1,*(uint *)(this + 0x48),
                           *(uint *)(this + 0x4c),uVar4);
              }
              else {
                ChunkedBitSquare::writeBits
                          (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,*(uint *)(this + 0x48)
                           ,*(uint *)(this + 0x4c),uVar4);
              }
              bVar5 = true;
            }
          }
          else {
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar14 = **(long **)(param_5 + 0x18);
              uVar10 = *(uint *)(this + 0x3c) +
                       (uVar2 + uVar1 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
              uVar7 = (ulong)(uVar10 >> 3) & 0xffff;
              lVar11 = *(long *)(lVar14 + (ulong)(uVar10 >> 0x13) * 8);
              if ((uint)uVar7 < 0xfffd) {
                uVar9 = *(uint *)(lVar11 + uVar7);
              }
              else {
                uVar9 = (uVar10 >> 3) + 1;
                uVar4 = (uVar10 >> 3) + 2;
                uVar9 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar14 + (ulong)(uVar4 >> 0x10) * 8) +
                                        ((ulong)uVar4 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar14 + (ulong)(uVar9 >> 0x10) * 8) +
                                                 ((ulong)uVar9 & 0xffff)),
                                                *(undefined *)(lVar11 + uVar7)));
              }
              uVar6 = uVar9 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU) &
                      0xffff;
            }
            else {
              uVar6 = ChunkedBitSquare::readBits
                                (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,
                                 *(uint *)(this + 0x3c),uVar6);
            }
            if (*(uint *)(this + 0x44) <= uVar6) goto LAB_0085714c;
          }
          uVar2 = uVar2 + 1;
        } while (param_3 != uVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_4);
    if (bVar5) {
      DensityMap::markDensityRegionDirty
                (*(DensityMap **)(this + 0x30),param_1,param_2,param_3,param_4,
                 *(uint *)(this + 0x48),*(uint *)(this + 0x4c),0xffffffff,false,false,true);
    }
  }
  return;
}


