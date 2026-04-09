// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMap
// Entry Point: 0085d308
// Size: 1796 bytes
// Signature: undefined __thiscall setCollisionMap(DensityMapHeightUpdater * this, BitVector * param_1, bool param_2)


/* DensityMapHeightUpdater::setCollisionMap(BitVector*, bool) */

undefined4 __thiscall
DensityMapHeightUpdater::setCollisionMap
          (DensityMapHeightUpdater *this,BitVector *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *this_00;
  DensityMapModifier *pDVar5;
  uint uVar6;
  uint3 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ChunkedBitSquare *this_01;
  Logger *this_02;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  uint uVar25;
  
  if (param_1 == (BitVector *)0x0) {
    uVar24 = 1;
    *(undefined8 *)(this + 0xa38) = 0;
  }
  else {
    iVar9 = DensityMap::getSquareSize();
    uVar10 = iVar9 * iVar9 * 2;
    if (*(uint *)(param_1 + 8) == uVar10) {
      *(BitVector **)(this + 0xa38) = param_1;
      if (param_2) {
        this_00 = *(long **)(*(long *)(this + 0xa40) + 0x50);
        pDVar5 = *(DensityMapModifier **)(*(long *)(this + 0xa40) + 0x58);
        uVar10 = DensityMap::getSquareSize();
        if (uVar10 != 0) {
          uVar18 = 0;
          uVar13 = 0;
          uVar3 = *(uint *)(*(long *)(this + 0xa40) + 0x88);
          uVar4 = *(uint *)(*(long *)(this + 0xa40) + 0x8c);
          uVar6 = ~(-1 << (ulong)(uVar4 & 0x1f));
          bVar8 = false;
          do {
            uVar25 = 0;
            uVar1 = uVar18;
            do {
              lVar19 = **(long **)(this + 0xa38);
              lVar14 = *(long *)(lVar19 + (ulong)(uVar1 >> 0x13) * 8);
              uVar17 = (ulong)(uVar1 >> 3) & 0xffff;
              if ((uint)uVar17 < 0xfffd) {
                uVar12 = *(uint *)(lVar14 + uVar17);
              }
              else {
                uVar12 = (uVar1 >> 3) + 1;
                uVar11 = (uVar1 >> 3) + 2;
                uVar12 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar19 + (ulong)(uVar11 >> 0x10) * 8) +
                                         ((ulong)uVar11 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar19 + (ulong)(uVar12 >> 0x10) * 8) +
                                                  ((ulong)uVar12 & 0xffff)),
                                                 *(undefined *)(lVar14 + uVar17)));
              }
              uVar12 = uVar12 >> (ulong)(uVar1 & 6) & 3;
              if (uVar12 != 0) {
                if (*(ChunkedBitSquare **)(pDVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
                  lVar19 = **(long **)(pDVar5 + 0x18);
                  uVar11 = uVar3 + (uVar25 + uVar13 * *(int *)(pDVar5 + 0x24)) *
                                   *(int *)(pDVar5 + 0x2c);
                  uVar17 = (ulong)(uVar11 >> 3) & 0xffff;
                  lVar14 = *(long *)(lVar19 + (ulong)(uVar11 >> 0x13) * 8);
                  if ((uint)uVar17 < 0xfffd) {
                    uVar16 = *(uint *)(lVar14 + uVar17);
                  }
                  else {
                    uVar16 = (uVar11 >> 3) + 1;
                    uVar2 = (uVar11 >> 3) + 2;
                    uVar16 = (uint)CONCAT12(*(undefined *)
                                             (*(long *)(lVar19 + (ulong)(uVar2 >> 0x10) * 8) +
                                             ((ulong)uVar2 & 0xffff)),
                                            CONCAT11(*(undefined *)
                                                      (*(long *)(lVar19 + (ulong)(uVar16 >> 0x10) *
                                                                          8) +
                                                      ((ulong)uVar16 & 0xffff)),
                                                     *(undefined *)(lVar14 + uVar17)));
                  }
                  uVar11 = uVar16 >> (ulong)(uVar11 & 7) & uVar6 & 0xffff;
                }
                else {
                  uVar11 = ChunkedBitSquare::readBits
                                     (*(ChunkedBitSquare **)(pDVar5 + 0x10),uVar25,uVar13,uVar3,
                                      uVar4);
                }
                if (uVar11 != 0) {
                  if (uVar12 == 1) {
                    if (*(ChunkedBitSquare **)(pDVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
                      plVar15 = *(long **)(pDVar5 + 0x18);
                      uVar11 = *(uint *)(this + 0xa48) +
                               (uVar25 + uVar13 * *(int *)(pDVar5 + 0x24)) * *(int *)(pDVar5 + 0x2c)
                      ;
                      lVar19 = *plVar15;
                      uVar17 = (ulong)(uVar11 >> 3) & 0xffff;
                      lVar14 = *(long *)(lVar19 + (ulong)(uVar11 >> 0x13) * 8);
                      uVar12 = ~(-1 << (ulong)(*(uint *)(this + 0xa4c) & 0x1f)) <<
                               (ulong)(uVar11 & 7);
                      if ((uint)uVar17 < 0xfffd) {
                        *(uint *)(lVar14 + uVar17) =
                             *(uint *)(lVar14 + uVar17) & (uVar12 ^ 0xffffffff);
                        this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                      }
                      else {
                        uVar16 = (uVar11 >> 3) + 1;
                        uVar11 = (uVar11 >> 3) + 2;
                        lVar22 = (ulong)(uVar16 >> 0x10) * 8;
                        lVar23 = (ulong)(uVar11 >> 0x10) * 8;
                        uVar21 = (ulong)uVar16 & 0xffff;
                        uVar20 = (ulong)uVar11 & 0xffff;
                        uVar12 = (uint)CONCAT12(*(undefined *)(*(long *)(lVar19 + lVar23) + uVar20),
                                                CONCAT11(*(undefined *)
                                                          (*(long *)(lVar19 + lVar22) + uVar21),
                                                         *(undefined *)(lVar14 + uVar17))) &
                                 (uVar12 ^ 0xffffffff);
                        *(char *)(lVar14 + uVar17) = (char)uVar12;
                        *(char *)(*(long *)(*plVar15 + lVar22) + uVar21) = (char)(uVar12 >> 8);
                        *(char *)(*(long *)(*plVar15 + lVar23) + uVar20) = (char)(uVar12 >> 0x10);
                        this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                      }
                    }
                    else {
                      ChunkedBitSquare::writeBits
                                (*(ChunkedBitSquare **)(pDVar5 + 0x10),uVar25,uVar13,
                                 *(uint *)(this + 0xa48),*(uint *)(this + 0xa4c),0);
                      this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                    }
                    if (this_01 == (ChunkedBitSquare *)0x0) {
                      plVar15 = *(long **)(pDVar5 + 0x18);
                      uVar11 = uVar3 + (uVar25 + uVar13 * *(int *)(pDVar5 + 0x24)) *
                                       *(int *)(pDVar5 + 0x2c);
                      lVar19 = *plVar15;
                      uVar17 = (ulong)(uVar11 >> 3) & 0xffff;
                      lVar14 = *(long *)(lVar19 + (ulong)(uVar11 >> 0x13) * 8);
                      uVar12 = uVar6 << (ulong)(uVar11 & 7);
                      if ((uint)uVar17 < 0xfffd) {
                        uVar11 = *(uint *)(lVar14 + uVar17);
                        goto LAB_0085d8d8;
                      }
                      uVar16 = (uVar11 >> 3) + 1;
                      uVar11 = (uVar11 >> 3) + 2;
                      lVar22 = (ulong)(uVar16 >> 0x10) * 8;
                      lVar23 = (ulong)(uVar11 >> 0x10) * 8;
                      uVar21 = (ulong)uVar16 & 0xffff;
                      uVar20 = (ulong)uVar11 & 0xffff;
                      uVar7 = CONCAT12(*(undefined *)(*(long *)(lVar19 + lVar23) + uVar20),
                                       CONCAT11(*(undefined *)(*(long *)(lVar19 + lVar22) + uVar21),
                                                *(undefined *)(lVar14 + uVar17)));
LAB_0085d898:
                      uVar12 = (uint)uVar7 & (uVar12 ^ 0xffffffff);
                      *(char *)(lVar14 + uVar17) = (char)uVar12;
                      *(char *)(*(long *)(*plVar15 + lVar22) + uVar21) = (char)(uVar12 >> 8);
                      bVar8 = true;
                      *(char *)(*(long *)(*plVar15 + lVar23) + uVar20) = (char)(uVar12 >> 0x10);
                    }
                    else {
LAB_0085d7c0:
                      uVar12 = 0;
LAB_0085d7d4:
                      ChunkedBitSquare::writeBits(this_01,uVar25,uVar13,uVar3,uVar4,uVar12);
LAB_0085d7d8:
                      bVar8 = true;
                    }
                  }
                  else {
                    uVar12 = getMaxHeightOfReachableNeighbors
                                       (this,uVar25,uVar13,pDVar5,uVar10,uVar3,uVar4);
                    if (uVar12 == 0) {
                      if (*(ChunkedBitSquare **)(pDVar5 + 0x10) == (ChunkedBitSquare *)0x0) {
                        plVar15 = *(long **)(pDVar5 + 0x18);
                        uVar12 = *(uint *)(this + 0xa48) +
                                 (uVar25 + uVar13 * *(int *)(pDVar5 + 0x24)) *
                                 *(int *)(pDVar5 + 0x2c);
                        lVar19 = *plVar15;
                        uVar11 = ~(-1 << (ulong)(*(uint *)(this + 0xa4c) & 0x1f));
                        uVar17 = (ulong)(uVar12 >> 3) & 0xffff;
                        lVar14 = *(long *)(lVar19 + (ulong)(uVar12 >> 0x13) * 8);
                        if ((uint)uVar17 < 0xfffd) {
                          *(uint *)(lVar14 + uVar17) =
                               *(uint *)(lVar14 + uVar17) &
                               (uVar11 << (ulong)(uVar12 & 7) ^ 0xffffffff);
                          this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                        }
                        else {
                          uVar16 = (uVar12 >> 3) + 1;
                          uVar2 = (uVar12 >> 3) + 2;
                          lVar22 = (ulong)(uVar16 >> 0x10) * 8;
                          lVar23 = (ulong)(uVar2 >> 0x10) * 8;
                          uVar21 = (ulong)uVar16 & 0xffff;
                          uVar20 = (ulong)uVar2 & 0xffff;
                          uVar12 = (uint)CONCAT12(*(undefined *)
                                                   (*(long *)(lVar19 + lVar23) + uVar20),
                                                  CONCAT11(*(undefined *)
                                                            (*(long *)(lVar19 + lVar22) + uVar21),
                                                           *(undefined *)(lVar14 + uVar17))) &
                                   (uVar11 << (ulong)(uVar12 & 7) ^ 0xffffffff);
                          *(char *)(lVar14 + uVar17) = (char)uVar12;
                          *(char *)(*(long *)(*plVar15 + lVar22) + uVar21) = (char)(uVar12 >> 8);
                          *(char *)(*(long *)(*plVar15 + lVar23) + uVar20) = (char)(uVar12 >> 0x10);
                          this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                        }
                      }
                      else {
                        ChunkedBitSquare::writeBits
                                  (*(ChunkedBitSquare **)(pDVar5 + 0x10),uVar25,uVar13,
                                   *(uint *)(this + 0xa48),*(uint *)(this + 0xa4c),0);
                        this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                      }
                      if (this_01 != (ChunkedBitSquare *)0x0) goto LAB_0085d7c0;
                      plVar15 = *(long **)(pDVar5 + 0x18);
                      uVar12 = uVar3 + (uVar25 + uVar13 * *(int *)(pDVar5 + 0x24)) *
                                       *(int *)(pDVar5 + 0x2c);
                      lVar19 = *plVar15;
                      uVar17 = (ulong)(uVar12 >> 3) & 0xffff;
                      lVar14 = *(long *)(lVar19 + (ulong)(uVar12 >> 0x13) * 8);
                      if (0xfffc < (uint)uVar17) {
                        uVar11 = (uVar12 >> 3) + 1;
                        uVar16 = (uVar12 >> 3) + 2;
                        lVar22 = (ulong)(uVar11 >> 0x10) * 8;
                        lVar23 = (ulong)(uVar16 >> 0x10) * 8;
                        uVar21 = (ulong)uVar11 & 0xffff;
                        uVar20 = (ulong)uVar16 & 0xffff;
                        uVar7 = CONCAT12(*(undefined *)(*(long *)(lVar19 + lVar23) + uVar20),
                                         CONCAT11(*(undefined *)
                                                   (*(long *)(lVar19 + lVar22) + uVar21),
                                                  *(undefined *)(lVar14 + uVar17)));
                        uVar12 = uVar6 << (ulong)(uVar12 & 7);
                        goto LAB_0085d898;
                      }
                      uVar11 = *(uint *)(lVar14 + uVar17);
                      uVar12 = uVar6 << (ulong)(uVar12 & 7);
LAB_0085d8d8:
                      *(uint *)(lVar14 + uVar17) = uVar11 & (uVar12 ^ 0xffffffff);
                      bVar8 = true;
                    }
                    else if (uVar12 < uVar11) {
                      this_01 = *(ChunkedBitSquare **)(pDVar5 + 0x10);
                      if (this_01 != (ChunkedBitSquare *)0x0) goto LAB_0085d7d4;
                      DensityMapAccessUtil::writeBits
                                (*(BitVector **)(pDVar5 + 0x18),*(uint *)(pDVar5 + 0x2c),
                                 *(uint *)(pDVar5 + 0x24),uVar25,uVar13,uVar3,uVar4,uVar12);
                      goto LAB_0085d7d8;
                    }
                  }
                }
              }
              uVar25 = uVar25 + 1;
              uVar1 = uVar1 + 2;
            } while (uVar10 != uVar25);
            uVar13 = uVar13 + 1;
            uVar18 = uVar18 + uVar10 * 2;
            if (uVar13 == uVar10) {
              if (!bVar8) {
                return 1;
              }
              uVar10 = (**(code **)(*this_00 + 0x48))(this_00);
              uVar13 = (**(code **)(*this_00 + 0x50))(this_00);
              DensityMap::markDensityRegionDirty
                        ((DensityMap *)this_00,0,0,uVar10,uVar13,uVar3,uVar4,0xffffffff,false,true,
                         true);
              return 1;
            }
          } while( true );
        }
      }
      uVar24 = 1;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar9 != 0))
      {
                    /* try { // try from 0085d9cc to 0085d9d3 has its CatchHandler @ 0085da1c */
        this_02 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085d9d8 to 0085d9db has its CatchHandler @ 0085da0c */
        Logger::Logger(this_02);
        LogManager::getInstance()::singletonLogManager = this_02;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Trying to set DensityMapHeightUpdater collision map with invalid size (%u vs %u)\n"
                         ,(ulong)*(uint *)(param_1 + 8),(ulong)uVar10);
      uVar24 = 0;
    }
  }
  return uVar24;
}


