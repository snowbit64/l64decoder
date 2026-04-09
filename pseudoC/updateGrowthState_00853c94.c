// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateGrowthState
// Entry Point: 00853c94
// Size: 1956 bytes
// Signature: undefined __thiscall updateGrowthState(FieldCropsUpdater * this, uint param_1, uint param_2)


/* FieldCropsUpdater::updateGrowthState(unsigned int, unsigned int) */

void __thiscall
FieldCropsUpdater::updateGrowthState(FieldCropsUpdater *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FieldCropsUpdater FVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  DensityMapModifier *pDVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *this_00;
  DensityMap *this_01;
  uint uVar34;
  float unaff_s8;
  float unaff_s9;
  uint local_120;
  DensityMapModifier aDStack_110 [48];
  DensityMapModifier aDStack_e0 [16];
  ChunkedBitSquare *local_d0;
  long *local_c8;
  uint local_bc;
  uint local_b4;
  DensityMapModifier aDStack_b0 [16];
  ChunkedBitSquare *local_a0;
  long *local_98;
  uint local_8c;
  uint local_84;
  long local_80;
  
  lVar16 = tpidr_el0;
  local_80 = *(long *)(lVar16 + 0x28);
  this_00 = *(long **)(this + 0x38);
  uVar34 = *(uint *)(this + 0xd0c);
  iVar7 = *(int *)(this + 0xd08);
  uVar19 = (**(code **)(*this_00 + 0x58))(this_00);
  uVar20 = (**(code **)(*this_00 + 0x60))(this_00);
  iVar8 = *(int *)(this + 0x48);
  uVar5 = *(uint *)(this + 0x4c);
  iVar6 = *(int *)(this + 0x50);
  this_01 = *(DensityMap **)(*(long *)(this + 0x40) + 0x50);
  iVar9 = *(int *)(*(long *)(this + 0x40) + 0x7c);
  uVar10 = *(uint *)(this + 0x54);
  DensityMapModifier::DensityMapModifier(aDStack_b0,this_01);
                    /* try { // try from 00853d40 to 00853d47 has its CatchHandler @ 00854444 */
  DensityMapModifier::DensityMapModifier(aDStack_e0,*(DensityMap **)(this + 0x38));
                    /* try { // try from 00853d48 to 00853d4f has its CatchHandler @ 0085443c */
  DensityMapModifier::DensityMapModifier(aDStack_110);
  if (*(DensityMap **)(this + 0xce8) == (DensityMap *)0x0) {
    pDVar30 = (DensityMapModifier *)0x0;
  }
  else {
                    /* try { // try from 00853d60 to 00853db7 has its CatchHandler @ 0085444c */
    DensityMapModifier::init(aDStack_110,*(DensityMap **)(this + 0xce8));
    uVar22 = (**(code **)(**(long **)(this + 0xce8) + 0x48))();
    uVar23 = (**(code **)(**(long **)(this + 0x38) + 0x48))();
    uVar24 = (**(code **)(**(long **)(this + 0xce8) + 0x50))();
    uVar25 = (**(code **)(**(long **)(this + 0x38) + 0x50))();
    pDVar30 = aDStack_110;
    unaff_s8 = (float)(uVar22 & 0xffffffff) / (float)(uVar23 & 0xffffffff);
    unaff_s9 = (float)(uVar24 & 0xffffffff) / (float)(uVar25 & 0xffffffff);
  }
  uVar15 = 0;
  if (uVar34 != 0) {
    uVar15 = param_1 / uVar34;
  }
  uVar12 = iVar7 * uVar15;
  uVar2 = uVar12 + iVar7;
  if (uVar12 < uVar2) {
    local_120 = 0;
    uVar3 = iVar9 + iVar8;
    bVar17 = false;
    bVar18 = false;
    uVar13 = (param_1 - uVar15 * uVar34) * iVar7;
    uVar15 = uVar13 + iVar7;
    uVar4 = iVar6 + iVar9;
    uVar34 = uVar12;
    do {
      uVar1 = uVar13;
      if (uVar13 < uVar15) {
        do {
          if (local_d0 == (ChunkedBitSquare *)0x0) {
            lVar31 = *local_c8;
            uVar21 = (uVar1 + local_bc * uVar34) * local_b4;
            uVar22 = (ulong)(uVar21 >> 3) & 0xffff;
            lVar29 = *(long *)(lVar31 + (ulong)(uVar21 >> 0x13) * 8);
            if ((uint)uVar22 < 0xfffd) {
              uVar27 = *(uint *)(lVar29 + uVar22);
            }
            else {
              uVar27 = (uVar21 >> 3) + 1;
              uVar14 = (uVar21 >> 3) + 2;
              uVar27 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar31 + (ulong)(uVar14 >> 0x10) * 8) +
                                       ((ulong)uVar14 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar31 + (ulong)(uVar27 >> 0x10) * 8) +
                                                ((ulong)uVar27 & 0xffff)),
                                               *(undefined *)(lVar29 + uVar22)));
            }
            uVar21 = uVar27 >> (ulong)(uVar21 & 7) & ~(-1 << (ulong)(uVar19 & 0x1f)) & 0xffffU;
          }
          else {
                    /* try { // try from 00853ed4 to 00853ee7 has its CatchHandler @ 00854458 */
            uVar21 = ChunkedBitSquare::readBits(local_d0,uVar1,uVar34,0,uVar19);
          }
          uVar14 = (uVar21 & ~(-1 << (ulong)(uVar20 & 0x1f))) - 1;
          uVar22 = (ulong)uVar14;
          uVar27 = 1 << (ulong)(uVar14 & 0x1f);
          if ((uVar27 & param_2) != 0) {
            uVar28 = *(uint *)(this + (ulong)uVar14 * 100 + 0x5c);
            uVar26 = *(uint *)(this + (ulong)uVar14 * 100 + 0x60);
            uVar21 = uVar21 >> ((ulong)uVar28 & 0x3f) & ~(-1 << (ulong)(uVar26 & 0x1f));
            if (uVar21 - 1 < 0x3f) {
              FVar11 = this[(ulong)uVar21 + uVar22 * 100 + 0x80];
              if (uVar21 != (byte)FVar11) {
                if (pDVar30 != (DensityMapModifier *)0x0) {
                  if (*(ChunkedBitSquare **)(pDVar30 + 0x10) == (ChunkedBitSquare *)0x0) {
                    lVar31 = **(long **)(pDVar30 + 0x18);
                    uVar21 = *(uint *)(this + 0xcf0) +
                             ((int)(unaff_s8 * (float)(ulong)uVar1) +
                             *(int *)(pDVar30 + 0x24) * (int)(unaff_s9 * (float)(ulong)uVar34)) *
                             *(int *)(pDVar30 + 0x2c);
                    uVar23 = (ulong)(uVar21 >> 3) & 0xffff;
                    lVar29 = *(long *)(lVar31 + (ulong)(uVar21 >> 0x13) * 8);
                    if ((uint)uVar23 < 0xfffd) {
                      uVar28 = *(uint *)(lVar29 + uVar23);
                    }
                    else {
                      uVar28 = (uVar21 >> 3) + 1;
                      uVar26 = (uVar21 >> 3) + 2;
                      uVar28 = (uint)CONCAT12(*(undefined *)
                                               (*(long *)(lVar31 + (ulong)(uVar26 >> 0x10) * 8) +
                                               ((ulong)uVar26 & 0xffff)),
                                              CONCAT11(*(undefined *)
                                                        (*(long *)(lVar31 + (ulong)(uVar28 >> 0x10)
                                                                            * 8) +
                                                        ((ulong)uVar28 & 0xffff)),
                                                       *(undefined *)(lVar29 + uVar23)));
                    }
                    uVar21 = uVar28 >> (ulong)(uVar21 & 7) &
                             (-1 << (ulong)(*(uint *)(this + 0xcf4) & 0x1f) ^ 0xffffffffU) & 0xffff;
                  }
                  else {
                    /* try { // try from 00853ff8 to 0085410b has its CatchHandler @ 00854454 */
                    uVar21 = ChunkedBitSquare::readBits
                                       (*(ChunkedBitSquare **)(pDVar30 + 0x10),
                                        (int)(unaff_s8 * (float)(ulong)uVar1),
                                        (int)(unaff_s9 * (float)(ulong)uVar34),
                                        *(uint *)(this + 0xcf0),*(uint *)(this + 0xcf4));
                  }
                  if (uVar21 != 0) goto LAB_00853ebc;
                  uVar28 = *(uint *)(this + (ulong)uVar14 * 100 + 0x5c);
                  uVar26 = *(uint *)(this + (ulong)uVar14 * 100 + 0x60);
                }
                if (local_d0 == (ChunkedBitSquare *)0x0) {
                  DensityMapAccessUtil::writeBits
                            ((BitVector *)local_c8,local_b4,local_bc,uVar1,uVar34,uVar28,uVar26,
                             (uint)(byte)FVar11);
                }
                else {
                  ChunkedBitSquare::writeBits
                            (local_d0,uVar1,uVar34,uVar28,uVar26,(uint)(byte)FVar11);
                }
                if (this[uVar22 * 100 + 100] != (FieldCropsUpdater)0x0) {
                  if (local_a0 == (ChunkedBitSquare *)0x0) {
                    uVar14 = uVar3 + (uVar1 + local_8c * uVar34) * local_84;
                    lVar31 = *local_98;
                    uVar23 = (ulong)(uVar14 >> 3) & 0xffff;
                    lVar29 = *(long *)(lVar31 + (ulong)(uVar14 >> 0x13) * 8);
                    uVar21 = ~(-1 << (ulong)(uVar5 & 0x1f)) << (ulong)(uVar14 & 7);
                    if ((uint)uVar23 < 0xfffd) {
                      *(uint *)(lVar29 + uVar23) =
                           *(uint *)(lVar29 + uVar23) & (uVar21 ^ 0xffffffff);
                      bVar18 = true;
                    }
                    else {
                      uVar28 = (uVar14 >> 3) + 1;
                      uVar14 = (uVar14 >> 3) + 2;
                      lVar32 = (ulong)(uVar28 >> 0x10) * 8;
                      lVar33 = (ulong)(uVar14 >> 0x10) * 8;
                      uVar25 = (ulong)uVar28 & 0xffff;
                      uVar24 = (ulong)uVar14 & 0xffff;
                      uVar21 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar31 + lVar33) + uVar24),
                                              CONCAT11(*(undefined *)
                                                        (*(long *)(lVar31 + lVar32) + uVar25),
                                                       *(undefined *)(lVar29 + uVar23))) &
                               (uVar21 ^ 0xffffffff);
                      *(char *)(lVar29 + uVar23) = (char)uVar21;
                      *(char *)(*(long *)(*local_98 + lVar32) + uVar25) = (char)(uVar21 >> 8);
                      bVar18 = true;
                      *(char *)(*(long *)(*local_98 + lVar33) + uVar24) = (char)(uVar21 >> 0x10);
                    }
                  }
                  else {
                    ChunkedBitSquare::writeBits(local_a0,uVar1,uVar34,uVar3,uVar5,0);
                    bVar18 = true;
                  }
                }
                local_120 = uVar27 | local_120;
                if (*(uint *)(this + uVar22 * 100 + 0x68) == (uint)(byte)FVar11) {
                  if (local_a0 == (ChunkedBitSquare *)0x0) {
                    uVar21 = uVar4 + (uVar1 + local_8c * uVar34) * local_84;
                    lVar31 = *local_98;
                    uVar23 = (ulong)(uVar21 >> 3) & 0xffff;
                    lVar29 = *(long *)(lVar31 + (ulong)(uVar21 >> 0x13) * 8);
                    if ((uint)uVar23 < 0xfffd) {
                      uVar27 = *(uint *)(lVar29 + uVar23);
                    }
                    else {
                      uVar27 = (uVar21 >> 3) + 1;
                      uVar14 = (uVar21 >> 3) + 2;
                      uVar27 = (uint)CONCAT12(*(undefined *)
                                               (*(long *)(lVar31 + (ulong)(uVar14 >> 0x10) * 8) +
                                               ((ulong)uVar14 & 0xffff)),
                                              CONCAT11(*(undefined *)
                                                        (*(long *)(lVar31 + (ulong)(uVar27 >> 0x10)
                                                                            * 8) +
                                                        ((ulong)uVar27 & 0xffff)),
                                                       *(undefined *)(lVar29 + uVar23)));
                    }
                    uVar21 = uVar27 >> (ulong)(uVar21 & 7) &
                             ~(-1 << (ulong)(uVar10 & 0x1f)) & 0xffffU;
                  }
                  else {
                    /* try { // try from 00854210 to 00854317 has its CatchHandler @ 00854450 */
                    uVar21 = ChunkedBitSquare::readBits(local_a0,uVar1,uVar34,uVar4,uVar10);
                  }
                  if ((*(uint *)(this + uVar22 * 100 + 0x70) >> (ulong)(uVar21 & 0x1f) & 1) != 0) {
                    if (local_a0 == (ChunkedBitSquare *)0x0) {
                      DensityMapAccessUtil::writeBits
                                ((BitVector *)local_98,local_84,local_8c,uVar1,uVar34,uVar4,uVar10,
                                 *(uint *)(this + uVar22 * 100 + 0x6c));
                    }
                    else {
                      ChunkedBitSquare::writeBits
                                (local_a0,uVar1,uVar34,uVar4,uVar10,
                                 *(uint *)(this + uVar22 * 100 + 0x6c));
                    }
                    bVar17 = true;
                  }
                }
              }
            }
          }
LAB_00853ebc:
          uVar1 = uVar1 + 1;
        } while (uVar1 != uVar15);
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar2);
    if ((bool)(bVar18 | bVar17)) {
      uVar5 = uVar3 + uVar5;
      if (!bVar18) {
        uVar3 = 0xffffffff;
        uVar5 = 0;
      }
      uVar34 = uVar3;
      uVar19 = uVar5;
      if (bVar17) {
        uVar34 = uVar4;
        if (uVar3 <= uVar4) {
          uVar34 = uVar3;
        }
        uVar19 = uVar4 + uVar10;
        if (uVar4 + uVar10 <= uVar5) {
          uVar19 = uVar5;
        }
      }
      this[0xd24] = (FieldCropsUpdater)0x1;
                    /* try { // try from 00854380 to 008543a3 has its CatchHandler @ 00854438 */
      DensityMap::markDensityRegionDirty
                (this_01,uVar13,uVar12,uVar15,uVar2,uVar34,uVar19 - uVar34,0xffffffff,bVar17,false,
                 true);
      this[0xd24] = (FieldCropsUpdater)0x0;
    }
    if (local_120 != 0) {
      this[0xd24] = (FieldCropsUpdater)0x1;
                    /* try { // try from 008543bc to 008543df has its CatchHandler @ 0085444c */
      DensityMap::markDensityRegionDirty
                ((DensityMap *)this_00,uVar13,uVar12,uVar15,uVar2,*(uint *)(this + 0xcdc),
                 *(uint *)(this + 0xce0),local_120,false,false,true);
      this[0xd24] = (FieldCropsUpdater)0x0;
    }
  }
  DensityMapModifier::~DensityMapModifier(aDStack_110);
  DensityMapModifier::~DensityMapModifier(aDStack_e0);
  DensityMapModifier::~DensityMapModifier(aDStack_b0);
  if (*(long *)(lVar16 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


