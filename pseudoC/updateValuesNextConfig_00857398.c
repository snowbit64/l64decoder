// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateValuesNextConfig
// Entry Point: 00857398
// Size: 868 bytes
// Signature: undefined __thiscall updateValuesNextConfig(DensityMapUpdater * this, uint param_1, uint param_2, uint param_3, uint param_4, DensityMapModifier * param_5, DensityMapModifier * param_6, float param_7, float param_8)


/* DensityMapUpdater::updateValuesNextConfig(unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapModifier*, DensityMapModifier*, float, float) */

void __thiscall
DensityMapUpdater::updateValuesNextConfig
          (DensityMapUpdater *this,uint param_1,uint param_2,uint param_3,uint param_4,
          DensityMapModifier *param_5,DensityMapModifier *param_6,float param_7,float param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 < param_4) {
    bVar4 = false;
    uVar1 = param_2;
    do {
      uVar2 = param_1;
      if (param_1 < param_3) {
        do {
          uVar5 = *(uint *)(this + 0x40);
          if (uVar5 == 0) {
LAB_00857504:
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar11 = **(long **)(param_5 + 0x18);
              uVar5 = *(uint *)(this + 0x48) +
                      (uVar2 + uVar1 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
              uVar6 = (ulong)(uVar5 >> 3) & 0xffff;
              lVar10 = *(long *)(lVar11 + (ulong)(uVar5 >> 0x13) * 8);
              if ((uint)uVar6 < 0xfffd) {
                uVar8 = *(uint *)(lVar10 + uVar6);
              }
              else {
                uVar8 = (uVar5 >> 3) + 1;
                uVar9 = (uVar5 >> 3) + 2;
                uVar8 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar11 + (ulong)(uVar9 >> 0x10) * 8) +
                                        ((ulong)uVar9 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar11 + (ulong)(uVar8 >> 0x10) * 8) +
                                                 ((ulong)uVar8 & 0xffff)),
                                                *(undefined *)(lVar10 + uVar6)));
              }
              uVar6 = (ulong)(uVar8 >> (ulong)(uVar5 & 7) &
                              (-1 << (ulong)(*(uint *)(this + 0x4c) & 0x1f) ^ 0xffffffffU) & 0xffff)
              ;
              if (param_6 != (DensityMapModifier *)0x0) goto LAB_00857524;
LAB_00857644:
              uVar5 = (uint)uVar6;
              lVar10 = uVar6 + 0x54;
            }
            else {
              uVar6 = ChunkedBitSquare::readBits
                                (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,
                                 *(uint *)(this + 0x48),*(uint *)(this + 0x4c));
              uVar6 = uVar6 & 0xffffffff;
              if (param_6 == (DensityMapModifier *)0x0) goto LAB_00857644;
LAB_00857524:
              uVar5 = (uint)uVar6;
              if (*(ChunkedBitSquare **)(param_6 + 0x10) == (ChunkedBitSquare *)0x0) {
                lVar11 = **(long **)(param_6 + 0x18);
                uVar8 = *(uint *)(this + 0x1070) +
                        ((int)((float)(ulong)uVar2 * param_7) +
                        *(int *)(param_6 + 0x24) * (int)((float)(ulong)uVar1 * param_8)) *
                        *(int *)(param_6 + 0x2c);
                uVar7 = (ulong)(uVar8 >> 3) & 0xffff;
                lVar10 = *(long *)(lVar11 + (ulong)(uVar8 >> 0x13) * 8);
                if ((uint)uVar7 < 0xfffd) {
                  uVar9 = *(uint *)(lVar10 + uVar7);
                }
                else {
                  uVar9 = (uVar8 >> 3) + 1;
                  uVar3 = (uVar8 >> 3) + 2;
                  uVar9 = (uint)CONCAT12(*(undefined *)
                                          (*(long *)(lVar11 + (ulong)(uVar3 >> 0x10) * 8) +
                                          ((ulong)uVar3 & 0xffff)),
                                         CONCAT11(*(undefined *)
                                                   (*(long *)(lVar11 + (ulong)(uVar9 >> 0x10) * 8) +
                                                   ((ulong)uVar9 & 0xffff)),
                                                  *(undefined *)(lVar10 + uVar7)));
                }
                uVar7 = (ulong)(uVar9 >> (ulong)(uVar8 & 7) &
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
              lVar10 = uVar6 + (uVar7 & 0xffffffff) * 0x40 + 0x54;
            }
            uVar8 = (uint)(byte)this[lVar10];
            if (uVar5 != uVar8) {
              if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
                DensityMapAccessUtil::writeBits
                          (*(BitVector **)(param_5 + 0x18),*(uint *)(param_5 + 0x2c),
                           *(uint *)(param_5 + 0x24),uVar2,uVar1,*(uint *)(this + 0x48),
                           *(uint *)(this + 0x4c),uVar8);
              }
              else {
                ChunkedBitSquare::writeBits
                          (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,*(uint *)(this + 0x48)
                           ,*(uint *)(this + 0x4c),uVar8);
              }
              bVar4 = true;
            }
          }
          else {
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar11 = **(long **)(param_5 + 0x18);
              uVar8 = *(uint *)(this + 0x3c) +
                      (uVar2 + uVar1 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
              uVar6 = (ulong)(uVar8 >> 3) & 0xffff;
              lVar10 = *(long *)(lVar11 + (ulong)(uVar8 >> 0x13) * 8);
              if ((uint)uVar6 < 0xfffd) {
                uVar9 = *(uint *)(lVar10 + uVar6);
              }
              else {
                uVar9 = (uVar8 >> 3) + 1;
                uVar3 = (uVar8 >> 3) + 2;
                uVar9 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar11 + (ulong)(uVar3 >> 0x10) * 8) +
                                        ((ulong)uVar3 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar11 + (ulong)(uVar9 >> 0x10) * 8) +
                                                 ((ulong)uVar9 & 0xffff)),
                                                *(undefined *)(lVar10 + uVar6)));
              }
              uVar5 = uVar9 >> (ulong)(uVar8 & 7) & (-1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU) &
                      0xffff;
            }
            else {
              uVar5 = ChunkedBitSquare::readBits
                                (*(ChunkedBitSquare **)(param_5 + 0x10),uVar2,uVar1,
                                 *(uint *)(this + 0x3c),uVar5);
            }
            if (*(uint *)(this + 0x44) <= uVar5) goto LAB_00857504;
          }
          uVar2 = uVar2 + 1;
        } while (param_3 != uVar2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_4);
    if (bVar4) {
      DensityMap::markDensityRegionDirty
                (*(DensityMap **)(this + 0x30),param_1,param_2,param_3,param_4,
                 *(uint *)(this + 0x48),*(uint *)(this + 0x4c),0xffffffff,false,false,true);
    }
  }
  return;
}


