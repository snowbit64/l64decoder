// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initHeightTypeProperties
// Entry Point: 0085ceac
// Size: 1116 bytes
// Signature: undefined __thiscall initHeightTypeProperties(DensityMapHeightUpdater * this, bool param_1)


/* DensityMapHeightUpdater::initHeightTypeProperties(bool) */

void __thiscall
DensityMapHeightUpdater::initHeightTypeProperties(DensityMapHeightUpdater *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *this_00;
  long lVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  ChunkedBitSquare *this_01;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  
  lVar14 = *(long *)(this + 0xa40);
  this_00 = *(long **)(lVar14 + 0x50);
  lVar4 = *(long *)(lVar14 + 0x58);
  uVar2 = *(uint *)(lVar14 + 0x88);
  uVar3 = *(uint *)(lVar14 + 0x8c);
  if (((this[0xa50] == (DensityMapHeightUpdater)0x0) && (!param_1)) ||
     (uVar7 = DensityMap::getSquareSize(), uVar7 == 0)) {
    this[0xa50] = (DensityMapHeightUpdater)0x0;
  }
  else {
    bVar6 = false;
    uVar11 = 0;
    uVar5 = ~(-1 << (ulong)(uVar3 & 0x1f));
    do {
      uVar22 = 0;
      do {
        if (*(ChunkedBitSquare **)(lVar4 + 0x10) == (ChunkedBitSquare *)0x0) {
          lVar17 = **(long **)(lVar4 + 0x18);
          uVar8 = *(uint *)(this + 0xa48) +
                  (uVar22 + uVar11 * *(int *)(lVar4 + 0x24)) * *(int *)(lVar4 + 0x2c);
          uVar16 = (ulong)(uVar8 >> 3) & 0xffff;
          lVar14 = *(long *)(lVar17 + (ulong)(uVar8 >> 0x13) * 8);
          if ((uint)uVar16 < 0xfffd) {
            uVar13 = *(uint *)(lVar14 + uVar16);
          }
          else {
            uVar13 = (uVar8 >> 3) + 1;
            uVar12 = (uVar8 >> 3) + 2;
            uVar13 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar17 + (ulong)(uVar12 >> 0x10) * 8) +
                                     ((ulong)uVar12 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar17 + (ulong)(uVar13 >> 0x10) * 8) +
                                              ((ulong)uVar13 & 0xffff)),
                                             *(undefined *)(lVar14 + uVar16)));
          }
          uVar8 = uVar13 >> (ulong)(uVar8 & 7) &
                  (-1 << (ulong)(*(uint *)(this + 0xa4c) & 0x1f) ^ 0xffffffffU) & 0xffff;
        }
        else {
          uVar8 = ChunkedBitSquare::readBits
                            (*(ChunkedBitSquare **)(lVar4 + 0x10),uVar22,uVar11,
                             *(uint *)(this + 0xa48),*(uint *)(this + 0xa4c));
        }
        if ((uVar8 - 1 < 0x7f) &&
           (uVar13 = *(uint *)(this + (ulong)uVar8 * 4 + 0xa54), uVar13 != uVar8)) {
          uVar8 = *(uint *)(this + 0xa48);
          uVar12 = *(uint *)(this + 0xa4c);
          this_01 = *(ChunkedBitSquare **)(lVar4 + 0x10);
          if (uVar13 - 1 < 0x7f) {
            if (this_01 == (ChunkedBitSquare *)0x0) {
              DensityMapAccessUtil::writeBits
                        (*(BitVector **)(lVar4 + 0x18),*(uint *)(lVar4 + 0x2c),
                         *(uint *)(lVar4 + 0x24),uVar22,uVar11,uVar8,uVar12,uVar13);
            }
            else {
LAB_0085cfb8:
              ChunkedBitSquare::writeBits(this_01,uVar22,uVar11,uVar8,uVar12,uVar13);
            }
            bVar6 = true;
          }
          else {
            if (this_01 == (ChunkedBitSquare *)0x0) {
              plVar15 = *(long **)(lVar4 + 0x18);
              uVar8 = uVar8 + (uVar22 + uVar11 * *(int *)(lVar4 + 0x24)) * *(int *)(lVar4 + 0x2c);
              lVar17 = *plVar15;
              uVar13 = ~(-1 << (ulong)(uVar12 & 0x1f));
              uVar16 = (ulong)(uVar8 >> 3) & 0xffff;
              lVar14 = *(long *)(lVar17 + (ulong)(uVar8 >> 0x13) * 8);
              if ((uint)uVar16 < 0xfffd) {
                *(uint *)(lVar14 + uVar16) =
                     *(uint *)(lVar14 + uVar16) & (uVar13 << (ulong)(uVar8 & 7) ^ 0xffffffff);
                this_01 = *(ChunkedBitSquare **)(lVar4 + 0x10);
              }
              else {
                uVar12 = (uVar8 >> 3) + 1;
                uVar1 = (uVar8 >> 3) + 2;
                lVar20 = (ulong)(uVar12 >> 0x10) * 8;
                lVar21 = (ulong)(uVar1 >> 0x10) * 8;
                uVar19 = (ulong)uVar12 & 0xffff;
                uVar18 = (ulong)uVar1 & 0xffff;
                uVar8 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar17 + lVar21) + uVar18),
                                       CONCAT11(*(undefined *)(*(long *)(lVar17 + lVar20) + uVar19),
                                                *(undefined *)(lVar14 + uVar16))) &
                        (uVar13 << (uVar8 & 7) ^ 0xffffffff);
                *(char *)(lVar14 + uVar16) = (char)uVar8;
                *(char *)(*(long *)(*plVar15 + lVar20) + uVar19) = (char)(uVar8 >> 8);
                *(char *)(*(long *)(*plVar15 + lVar21) + uVar18) = (char)(uVar8 >> 0x10);
                this_01 = *(ChunkedBitSquare **)(lVar4 + 0x10);
              }
            }
            else {
              ChunkedBitSquare::writeBits(this_01,uVar22,uVar11,uVar8,uVar12,0);
              this_01 = *(ChunkedBitSquare **)(lVar4 + 0x10);
            }
            if (this_01 != (ChunkedBitSquare *)0x0) {
              uVar13 = 0;
              uVar8 = uVar2;
              uVar12 = uVar3;
              goto LAB_0085cfb8;
            }
            plVar15 = *(long **)(lVar4 + 0x18);
            uVar8 = uVar2 + (uVar22 + uVar11 * *(int *)(lVar4 + 0x24)) * *(int *)(lVar4 + 0x2c);
            lVar17 = *plVar15;
            uVar16 = (ulong)(uVar8 >> 3) & 0xffff;
            lVar14 = *(long *)(lVar17 + (ulong)(uVar8 >> 0x13) * 8);
            if ((uint)uVar16 < 0xfffd) {
              bVar6 = true;
              *(uint *)(lVar14 + uVar16) =
                   *(uint *)(lVar14 + uVar16) & (uVar5 << (ulong)(uVar8 & 7) ^ 0xffffffff);
            }
            else {
              uVar13 = (uVar8 >> 3) + 1;
              uVar12 = (uVar8 >> 3) + 2;
              lVar20 = (ulong)(uVar13 >> 0x10) * 8;
              lVar21 = (ulong)(uVar12 >> 0x10) * 8;
              uVar19 = (ulong)uVar13 & 0xffff;
              uVar18 = (ulong)uVar12 & 0xffff;
              bVar6 = true;
              uVar8 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar17 + lVar21) + uVar18),
                                     CONCAT11(*(undefined *)(*(long *)(lVar17 + lVar20) + uVar19),
                                              *(undefined *)(lVar14 + uVar16))) &
                      (uVar5 << (ulong)(uVar8 & 7) ^ 0xffffffff);
              *(char *)(lVar14 + uVar16) = (char)uVar8;
              *(char *)(*(long *)(*plVar15 + lVar20) + uVar19) = (char)(uVar8 >> 8);
              *(char *)(*(long *)(*plVar15 + lVar21) + uVar18) = (char)(uVar8 >> 0x10);
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar7 != uVar22);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
    this[0xa50] = (DensityMapHeightUpdater)0x0;
    if (bVar6) {
      uVar7 = (**(code **)(*this_00 + 0x48))(this_00);
      uVar11 = (**(code **)(*this_00 + 0x50))(this_00);
      DensityMap::markDensityRegionDirty
                ((DensityMap *)this_00,0,0,uVar7,uVar11,uVar2,uVar3,0xffffffff,true,true,true);
      return;
    }
  }
  uVar9 = (**(code **)(*this_00 + 0x48))(this_00);
  uVar10 = (**(code **)(*this_00 + 0x50))(this_00);
                    /* WARNING: Could not recover jumptable at 0x0085d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,this_00,0,0,uVar9,uVar10,0xffffffff,1);
  return;
}


