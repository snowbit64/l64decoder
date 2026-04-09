// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxHeightOfReachableNeighbors
// Entry Point: 0085da34
// Size: 516 bytes
// Signature: undefined __thiscall getMaxHeightOfReachableNeighbors(DensityMapHeightUpdater * this, uint param_1, uint param_2, DensityMapModifier * param_3, uint param_4, uint param_5, uint param_6)


/* DensityMapHeightUpdater::getMaxHeightOfReachableNeighbors(unsigned int, unsigned int,
   DensityMapModifier*, unsigned int, unsigned int, unsigned int) */

uint __thiscall
DensityMapHeightUpdater::getMaxHeightOfReachableNeighbors
          (DensityMapHeightUpdater *this,uint param_1,uint param_2,DensityMapModifier *param_3,
          uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = param_1 - 1;
  }
  uVar2 = param_1;
  if (param_1 + 1 < param_4 - 1) {
    uVar2 = param_1 + 1;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    uVar14 = param_2 - 1;
  }
  uVar13 = 0;
  uVar3 = param_2;
  if (param_2 + 1 < param_4 - 1) {
    uVar3 = param_2 + 1;
  }
  if (uVar14 <= uVar3) {
    uVar13 = 0;
    uVar5 = (uVar4 + param_4 * uVar14) * 2;
    uVar6 = uVar4;
    uVar10 = uVar5;
    do {
      for (; uVar6 <= uVar2; uVar6 = uVar6 + 1) {
        lVar9 = *(long *)(**(long **)(this + 0xa38) + (ulong)(uVar5 >> 0x13) * 8);
        uVar11 = (ulong)(uVar5 >> 3) & 0xffff;
        if ((uint)uVar11 < 0xfffd) {
          uVar8 = *(uint *)(lVar9 + uVar11);
        }
        else {
          uVar8 = (uint)*(byte *)(lVar9 + uVar11);
        }
        uVar7 = uVar13;
        if (((uVar8 >> (ulong)(uVar5 & 6) & 3) == 0 && param_1 != uVar6) && uVar14 != param_2) {
          if (*(ChunkedBitSquare **)(param_3 + 0x10) == (ChunkedBitSquare *)0x0) {
            uVar8 = param_5 + (uVar6 + uVar14 * *(int *)(param_3 + 0x24)) * *(int *)(param_3 + 0x2c)
            ;
            lVar12 = **(long **)(param_3 + 0x18);
            uVar11 = (ulong)(uVar8 >> 3) & 0xffff;
            lVar9 = *(long *)(lVar12 + (ulong)(uVar8 >> 0x13) * 8);
            if ((uint)uVar11 < 0xfffd) {
              uVar7 = *(uint *)(lVar9 + uVar11);
            }
            else {
              uVar7 = (uVar8 >> 3) + 1;
              uVar1 = (uVar8 >> 3) + 2;
              uVar7 = (uint)CONCAT12(*(undefined *)
                                      (*(long *)(lVar12 + (ulong)(uVar1 >> 0x10) * 8) +
                                      ((ulong)uVar1 & 0xffff)),
                                     CONCAT11(*(undefined *)
                                               (*(long *)(lVar12 + (ulong)(uVar7 >> 0x10) * 8) +
                                               ((ulong)uVar7 & 0xffff)),
                                              *(undefined *)(lVar9 + uVar11)));
            }
            uVar7 = uVar7 >> (ulong)(uVar8 & 7) & ~(-1 << (ulong)(param_6 & 0x1f)) & 0xffffU;
          }
          else {
            uVar7 = ChunkedBitSquare::readBits
                              (*(ChunkedBitSquare **)(param_3 + 0x10),uVar6,uVar14,param_5,param_6);
          }
          if (uVar7 <= uVar13) {
            uVar7 = uVar13;
          }
        }
        uVar5 = uVar5 + 2;
        uVar13 = uVar7;
      }
      uVar14 = uVar14 + 1;
      uVar5 = uVar10 + param_4 * 2;
      uVar6 = uVar4;
      uVar10 = uVar5;
    } while (uVar14 <= uVar3);
  }
  return uVar13;
}


