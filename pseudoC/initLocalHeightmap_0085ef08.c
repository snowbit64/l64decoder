// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initLocalHeightmap
// Entry Point: 0085ef08
// Size: 1144 bytes
// Signature: undefined __thiscall initLocalHeightmap(DensityMapHeightUpdater * this, ushort * param_1, int param_2, int param_3, uint param_4, DensityMapModifier * param_5, int param_6, int param_7, bool param_8, uint param_9, OcclusionArea * param_10, DensityMapModifier * param_11, uint param_12, uint param_13, float param_14, float param_15)


/* DensityMapHeightUpdater::initLocalHeightmap(unsigned short*, int, int, unsigned int,
   DensityMapModifier*, int, int, bool, unsigned int, DensityMapHeightUpdater::OcclusionArea const*,
   DensityMapModifier*, unsigned int, unsigned int, float, float) */

void __thiscall
DensityMapHeightUpdater::initLocalHeightmap
          (DensityMapHeightUpdater *this,ushort *param_1,int param_2,int param_3,uint param_4,
          DensityMapModifier *param_5,int param_6,int param_7,bool param_8,uint param_9,
          OcclusionArea *param_10,DensityMapModifier *param_11,uint param_12,uint param_13,
          float param_14,float param_15)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  ushort *local_c0;
  uint local_b4;
  ulong local_b0;
  
  uVar13 = (ulong)param_9;
  uVar6 = *(uint *)(this + 0xa4c);
  uVar4 = *(uint *)(*(long *)(this + 0xa40) + 0x88);
  uVar5 = *(uint *)(*(long *)(this + 0xa40) + 0x8c);
  uVar7 = DensityMap::getSquareSize();
  uVar8 = (**(code **)(**(long **)(param_5 + 8) + 0x58))();
  if (0 < param_3) {
    local_b0 = 0;
    local_b4 = (param_6 + uVar7 * param_7) * 2;
    iVar20 = param_7;
    local_c0 = param_1;
    do {
      if (0 < param_2) {
        uVar3 = (int)local_b0 + param_7;
        puVar17 = local_c0;
        uVar19 = (ulong)(uint)param_2;
        uVar18 = param_6;
        uVar1 = local_b4;
        do {
          if ((uVar18 < uVar7) && (uVar3 < uVar7)) {
            if (*(ChunkedBitSquare **)(param_5 + 0x10) == (ChunkedBitSquare *)0x0) {
              lVar16 = **(long **)(param_5 + 0x18);
              uVar9 = (uVar18 + iVar20 * *(int *)(param_5 + 0x24)) * *(int *)(param_5 + 0x2c);
              uVar15 = (ulong)(uVar9 >> 3) & 0xffff;
              lVar11 = *(long *)(lVar16 + (ulong)(uVar9 >> 0x13) * 8);
              if ((uint)uVar15 < 0xfffd) {
                uVar12 = *(uint *)(lVar11 + uVar15);
              }
              else {
                uVar12 = (uVar9 >> 3) + 1;
                uVar2 = (uVar9 >> 3) + 2;
                uVar12 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar16 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar16 + (ulong)(uVar12 >> 0x10) * 8) +
                                                  ((ulong)uVar12 & 0xffff)),
                                                 *(undefined *)(lVar11 + uVar15)));
              }
              uVar9 = uVar12 >> (ulong)(uVar9 & 7) & ~(-1 << (ulong)(uVar8 & 0x1f)) & 0xffffU;
            }
            else {
              uVar9 = ChunkedBitSquare::readBits
                                (*(ChunkedBitSquare **)(param_5 + 0x10),uVar18,uVar3,0,uVar8);
            }
            uVar12 = uVar9 >> (ulong)(uVar4 & 0x1f) & ~(-1 << (ulong)(uVar5 & 0x1f));
            uVar10 = (ushort)uVar12;
            uVar9 = uVar9 >> (ulong)(*(uint *)(this + 0xa48) & 0x1f) &
                    ~(-1 << (ulong)(uVar6 & 0x1f));
            if ((uVar9 != param_4) && ((uVar12 & 0xffff) != 0)) {
              if (uVar9 == 0) {
                uVar10 = 0x400;
              }
              else {
                uVar10 = uVar10 | 0x5000;
              }
            }
            plVar14 = *(long **)(this + 0xa38);
            *puVar17 = uVar10;
            if ((plVar14 != (long *)0x0) && (param_8)) {
              lVar16 = *plVar14;
              uVar15 = (ulong)(uVar1 >> 3) & 0xffff;
              lVar11 = *(long *)(lVar16 + (ulong)(uVar1 >> 0x13) * 8);
              if ((uint)uVar15 < 0xfffd) {
                uVar9 = *(uint *)(lVar11 + uVar15);
              }
              else {
                uVar9 = (uVar1 >> 3) + 1;
                uVar12 = (uVar1 >> 3) + 2;
                uVar9 = (uint)CONCAT12(*(undefined *)
                                        (*(long *)(lVar16 + (ulong)(uVar12 >> 0x10) * 8) +
                                        ((ulong)uVar12 & 0xffff)),
                                       CONCAT11(*(undefined *)
                                                 (*(long *)(lVar16 + (ulong)(uVar9 >> 0x10) * 8) +
                                                 ((ulong)uVar9 & 0xffff)),
                                                *(undefined *)(lVar11 + uVar15)));
              }
              uVar9 = uVar9 >> (ulong)(uVar1 & 6) & 3;
              if (uVar9 != 0) {
                uVar10 = 0x4000;
                if (uVar9 != 1) {
                  uVar10 = 0x2000;
                }
                *puVar17 = *puVar17 | uVar10;
              }
            }
            if (param_11 != (DensityMapModifier *)0x0) {
              if (*(ChunkedBitSquare **)(param_11 + 0x10) == (ChunkedBitSquare *)0x0) {
                uVar9 = param_12 +
                        ((int)((float)uVar18 * param_14) +
                        *(int *)(param_11 + 0x24) * (int)((float)uVar3 * param_15)) *
                        *(int *)(param_11 + 0x2c);
                lVar16 = **(long **)(param_11 + 0x18);
                uVar15 = (ulong)(uVar9 >> 3) & 0xffff;
                lVar11 = *(long *)(lVar16 + (ulong)(uVar9 >> 0x13) * 8);
                if ((uint)uVar15 < 0xfffd) {
                  uVar12 = *(uint *)(lVar11 + uVar15);
                }
                else {
                  uVar12 = (uVar9 >> 3) + 1;
                  uVar2 = (uVar9 >> 3) + 2;
                  uVar12 = (uint)CONCAT12(*(undefined *)
                                           (*(long *)(lVar16 + (ulong)(uVar2 >> 0x10) * 8) +
                                           ((ulong)uVar2 & 0xffff)),
                                          CONCAT11(*(undefined *)
                                                    (*(long *)(lVar16 + (ulong)(uVar12 >> 0x10) * 8)
                                                    + ((ulong)uVar12 & 0xffff)),
                                                   *(undefined *)(lVar11 + uVar15)));
                }
                uVar9 = uVar12 >> (ulong)(uVar9 & 7) & ~(-1 << (ulong)(param_13 & 0x1f)) & 0xffffU;
              }
              else {
                uVar9 = ChunkedBitSquare::readBits
                                  (*(ChunkedBitSquare **)(param_11 + 0x10),
                                   (int)((float)uVar18 * param_14),(int)((float)uVar3 * param_15),
                                   param_12,param_13);
              }
              if (uVar9 != 0) {
                uVar10 = *puVar17 | 0x4000;
                goto LAB_0085f0a8;
              }
            }
          }
          else {
            uVar10 = 0x4000;
LAB_0085f0a8:
            *puVar17 = uVar10;
          }
          puVar17 = puVar17 + 1;
          uVar18 = uVar18 + 1;
          uVar1 = uVar1 + 2;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      iVar20 = iVar20 + 1;
      local_c0 = (ushort *)
                 ((long)local_c0 +
                 (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_2 << 1))
      ;
      local_b0 = local_b0 + 1;
      local_b4 = local_b4 + uVar7 * 2;
    } while (local_b0 != (uint)param_3);
  }
  if (param_9 != 0) {
    do {
      applyOcclusionArea(this,param_10,param_1,param_2,param_3,param_6,param_7);
      param_10 = param_10 + 0x28;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}


