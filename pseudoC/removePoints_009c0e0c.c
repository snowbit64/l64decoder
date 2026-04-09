// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removePoints
// Entry Point: 009c0e0c
// Size: 1964 bytes
// Signature: undefined removePoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::removePoints() */

void ProceduralPlacementCacheManager::DistanceMatrixTypeField::removePoints(void)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  bool bVar16;
  long *in_x0;
  ulong *__dest;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  ulong __n;
  int iVar29;
  uint uVar30;
  ulong *puVar31;
  ulong *puVar32;
  int iVar33;
  ulong uVar34;
  int iVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 uVar41;
  int iVar42;
  int iVar43;
  undefined8 uVar44;
  int iVar45;
  float in_s5;
  float in_s6;
  ulong *local_80;
  ulong *local_70;
  
  lVar14 = tpidr_el0;
  lVar19 = *(long *)(lVar14 + 0x28);
  lVar9 = in_x0[5];
  lVar10 = in_x0[6];
  uVar11 = *(uint *)(in_x0 + 8);
  lVar24 = *in_x0;
  if (lVar10 - lVar9 == 0) {
    uVar38 = 0xf4240000f4240;
    uVar37 = 0;
  }
  else {
    iVar23 = uVar11 * uVar11;
    uVar37 = 0;
    uVar38 = 0xf4240000f4240;
    uVar25 = 0;
    lVar27 = in_x0[1];
    uVar12 = ~uVar11;
    do {
      uVar41 = *(undefined8 *)(lVar9 + uVar25 * 8);
      iVar42 = (int)((ulong)uVar41 >> 0x20);
      iVar15 = (int)uVar41;
      iVar17 = iVar15 + uVar11 * iVar42;
      if ((*(float *)(lVar27 + (long)iVar17 * 4) == 0.0) &&
         (*(undefined4 *)(lVar27 + (long)iVar17 * 4) = 0x49742400, 0.0 < *(float *)(lVar24 + 0x30)))
      {
        iVar18 = uVar11 * iVar42;
        uVar30 = 0;
        iVar17 = 0;
        uVar3 = iVar15 + iVar18;
        iVar29 = iVar15 + uVar11 + iVar18;
        uVar44 = uVar41;
        iVar33 = iVar15;
        uVar28 = uVar3;
        iVar1 = iVar15;
        iVar13 = iVar18;
        uVar6 = uVar3;
        uVar4 = uVar3;
        iVar5 = iVar29;
        do {
          uVar22 = iVar17 * 2;
          iVar26 = iVar42 - iVar17;
          iVar45 = iVar15 - iVar17;
          iVar43 = (int)uVar44;
          if (iVar45 <= iVar17 + iVar15) {
            iVar35 = iVar45;
            if ((iVar17 != 0) && (CARRY4(uVar3 + iVar17 * uVar12,iVar17 << 1) == false)) {
              iVar35 = iVar45 + uVar22;
              uVar7 = uVar30;
              uVar21 = uVar28;
              do {
                uVar8 = uVar21 + 1;
                if (0 < (int)uVar21 && (int)uVar21 < iVar23) {
                  in_s5 = *(float *)(lVar27 + (ulong)uVar21 * 4);
                }
                if (0 < (int)uVar8 && (int)uVar8 < iVar23) {
                  in_s6 = *(float *)(lVar27 + (ulong)uVar8 * 4);
                }
                if ((0 < (int)uVar21 && (int)uVar21 < iVar23) && in_s5 != 0.0) {
                  *(undefined4 *)(lVar27 + (ulong)uVar21 * 4) = 0x49742400;
                }
                if ((0 < (int)uVar8 && (int)uVar8 < iVar23) && in_s6 != 0.0) {
                  *(undefined4 *)(lVar27 + (ulong)uVar8 * 4) = 0x49742400;
                }
                uVar7 = uVar7 - 2;
                uVar21 = uVar21 + 2;
              } while (uVar7 != 0);
            }
            uVar21 = iVar35 + iVar13;
            iVar35 = (iVar43 - iVar35) + 1;
            do {
              if (((0 < (int)uVar21) && ((int)uVar21 < iVar23)) &&
                 (in_s5 = *(float *)(lVar27 + (ulong)uVar21 * 4), in_s5 != 0.0)) {
                *(undefined4 *)(lVar27 + (ulong)uVar21 * 4) = 0x49742400;
              }
              iVar35 = iVar35 + -1;
              uVar21 = uVar21 + 1;
            } while (iVar35 != 0);
            if (iVar45 <= iVar17 + iVar15) {
              bVar16 = CARRY4(uVar3 + (uVar11 - 1) * iVar17,uVar22);
              uVar21 = (uint)bVar16;
              if ((iVar17 != 0) && (bVar16 == false)) {
                iVar45 = iVar45 + uVar22;
                do {
                  uVar8 = uVar4 + uVar21;
                  uVar7 = uVar8 + 1;
                  if (0 < (int)uVar8 && (int)uVar8 < iVar23) {
                    in_s5 = *(float *)(lVar27 + (ulong)uVar8 * 4);
                  }
                  if (0 < (int)uVar7 && (int)uVar7 < iVar23) {
                    in_s6 = *(float *)(lVar27 + (ulong)uVar7 * 4);
                  }
                  if ((0 < (int)uVar8 && (int)uVar8 < iVar23) && in_s5 != 0.0) {
                    *(undefined4 *)(lVar27 + (ulong)uVar8 * 4) = 0x49742400;
                  }
                  if ((0 < (int)uVar7 && (int)uVar7 < iVar23) && in_s6 != 0.0) {
                    *(undefined4 *)(lVar27 + (ulong)uVar7 * 4) = 0x49742400;
                  }
                  uVar21 = uVar21 + 2;
                } while (uVar30 != uVar21);
              }
              uVar21 = iVar45 + iVar18;
              iVar45 = (iVar43 - iVar45) + 1;
              do {
                if (((0 < (int)uVar21) && ((int)uVar21 < iVar23)) &&
                   (in_s5 = *(float *)(lVar27 + (ulong)uVar21 * 4), in_s5 != 0.0)) {
                  *(undefined4 *)(lVar27 + (ulong)uVar21 * 4) = 0x49742400;
                }
                iVar45 = iVar45 + -1;
                uVar21 = uVar21 + 1;
              } while (iVar45 != 0);
            }
          }
          iVar45 = (int)((ulong)uVar44 >> 0x20);
          if (iVar26 <= iVar17 + iVar42) {
            iVar35 = iVar26;
            if (((iVar17 != 0) && (uVar11 == 1)) &&
               (CARRY4(iVar15 + iVar42 + iVar17 * -2,uVar22) == false)) {
              iVar20 = 0;
              iVar35 = iVar26 + uVar22;
              uVar21 = uVar30;
              do {
                uVar7 = uVar28 + iVar20;
                uVar8 = iVar5 + iVar20;
                if (0 < (int)uVar7 && (int)uVar7 < iVar23) {
                  in_s5 = *(float *)(lVar27 + (ulong)uVar7 * 4);
                }
                if (0 < (int)uVar8 && (int)uVar8 < iVar23) {
                  in_s6 = *(float *)(lVar27 + (ulong)uVar8 * 4);
                }
                if ((0 < (int)uVar7 && (int)uVar7 < iVar23) && in_s5 != 0.0) {
                  *(undefined4 *)(lVar27 + (ulong)uVar7 * 4) = 0x49742400;
                }
                if ((0 < (int)uVar8 && (int)uVar8 < iVar23) && in_s6 != 0.0) {
                  *(undefined4 *)(lVar27 + (ulong)uVar8 * 4) = 0x49742400;
                }
                uVar21 = uVar21 - 2;
                iVar20 = iVar20 + uVar11 * 2;
              } while (uVar21 != 0);
            }
            uVar21 = iVar33 + uVar11 * iVar35;
            iVar35 = iVar35 + -1;
            do {
              if (((0 < (int)uVar21) && ((int)uVar21 < iVar23)) &&
                 (in_s5 = *(float *)(lVar27 + (ulong)uVar21 * 4), in_s5 != 0.0)) {
                *(undefined4 *)(lVar27 + (ulong)uVar21 * 4) = 0x49742400;
              }
              iVar35 = iVar35 + 1;
              uVar21 = uVar21 + uVar11;
            } while (iVar45 != iVar35);
            if (iVar26 <= iVar17 + iVar42) {
              if (((iVar17 != 0) && (uVar11 == 1)) && (uVar22 <= (uint)~(iVar15 + iVar42))) {
                iVar35 = 0;
                iVar26 = iVar26 + uVar22;
                uVar22 = uVar30;
                do {
                  uVar21 = uVar6 + iVar35;
                  uVar7 = iVar29 + iVar35;
                  if (0 < (int)uVar21 && (int)uVar21 < iVar23) {
                    in_s5 = *(float *)(lVar27 + (ulong)uVar21 * 4);
                  }
                  if (0 < (int)uVar7 && (int)uVar7 < iVar23) {
                    in_s6 = *(float *)(lVar27 + (ulong)uVar7 * 4);
                  }
                  if ((0 < (int)uVar21 && (int)uVar21 < iVar23) && in_s5 != 0.0) {
                    *(undefined4 *)(lVar27 + (ulong)uVar21 * 4) = 0x49742400;
                  }
                  if ((0 < (int)uVar7 && (int)uVar7 < iVar23) && in_s6 != 0.0) {
                    *(undefined4 *)(lVar27 + (ulong)uVar7 * 4) = 0x49742400;
                  }
                  uVar22 = uVar22 - 2;
                  iVar35 = iVar35 + uVar11 * 2;
                } while (uVar22 != 0);
              }
              uVar22 = iVar1 + uVar11 * iVar26;
              iVar26 = (iVar45 - iVar26) + 1;
              do {
                if (((0 < (int)uVar22) && ((int)uVar22 < iVar23)) &&
                   (*(float *)(lVar27 + (ulong)uVar22 * 4) != 0.0)) {
                  *(undefined4 *)(lVar27 + (ulong)uVar22 * 4) = 0x49742400;
                }
                iVar26 = iVar26 + -1;
                uVar22 = uVar22 + uVar11;
              } while (iVar26 != 0);
            }
          }
          iVar17 = iVar17 + 1;
          uVar44 = CONCAT44(iVar45 + 1,iVar43 + 1);
          uVar30 = uVar30 + 2;
          uVar28 = uVar28 + uVar12;
          iVar13 = iVar13 - uVar11;
          in_s5 = (float)iVar17;
          in_s6 = *(float *)(lVar24 + 0x30);
          uVar4 = uVar4 + (uVar11 - 1);
          iVar18 = iVar18 + uVar11;
          iVar5 = iVar5 + uVar12;
          iVar33 = iVar33 + -1;
          iVar1 = iVar1 + 1;
          uVar6 = uVar6 + (1 - uVar11);
          iVar29 = iVar29 + (1 - uVar11);
        } while (in_s5 < in_s6);
      }
      uVar38 = NEON_smin(uVar41,uVar38,4);
      uVar37 = NEON_smax(uVar41,uVar37,4);
      uVar25 = uVar25 + 1;
    } while ((uVar25 & 0xffffffff) < (ulong)(lVar10 - lVar9 >> 3));
  }
  local_80 = (ulong *)0x0;
  local_70 = (ulong *)0x0;
  in_x0[6] = lVar9;
  iVar23 = (int)(*(float *)(lVar24 + 0x30) + *(float *)(lVar24 + 0x30));
  uVar40 = NEON_smax(CONCAT44((int)((ulong)uVar38 >> 0x20) - iVar23,(int)uVar38 - iVar23),0,4);
  uVar39 = NEON_smin(CONCAT44((int)((ulong)uVar37 >> 0x20) + iVar23,(int)uVar37 + iVar23),
                     CONCAT44(uVar11,uVar11),4);
  uVar25 = NEON_cmgt(uVar39,uVar40,4);
  if ((uVar25 & 0x100000000) != 0) {
    uVar34 = uVar40 >> 0x20;
    puVar31 = (ulong *)0x0;
    do {
      if ((uVar25 & 1) != 0) {
        puVar32 = puVar31;
        uVar36 = uVar40 & 0xffffffff;
        do {
          puVar31 = puVar32;
          __dest = local_80;
          if (*(float *)(in_x0[1] +
                        (ulong)(uint)((int)uVar36 + (int)uVar34 * *(int *)(in_x0 + 8)) * 4) == 0.0)
          {
            if (puVar32 == local_70) {
              __n = (long)puVar32 - (long)local_80;
              uVar2 = ((long)__n >> 3) + 1;
              if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 009c15a0 to 009c15b3 has its CatchHandler @ 009c15bc */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar2 <= (ulong)((long)__n >> 2)) {
                uVar2 = (long)__n >> 2;
              }
              if (0x7ffffffffffffff7 < __n) {
                uVar2 = 0x1fffffffffffffff;
              }
              if (uVar2 == 0) {
                __dest = (ulong *)0x0;
              }
              else {
                if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 009c14ec to 009c14ef has its CatchHandler @ 009c15b8 */
                __dest = (ulong *)operator_new(uVar2 << 3);
              }
              puVar31 = __dest + ((long)__n >> 3) + 1;
              __dest[(long)__n >> 3] = uVar34 << 0x20 | uVar36;
              if (0 < (long)__n) {
                memcpy(__dest,local_80,__n);
              }
              local_70 = __dest + uVar2;
              if (local_80 != (ulong *)0x0) {
                operator_delete(local_80);
              }
            }
            else {
              puVar31 = puVar32 + 1;
              *puVar32 = uVar34 << 0x20 | uVar36;
            }
          }
          local_80 = __dest;
          uVar36 = uVar36 + 1;
          puVar32 = puVar31;
        } while ((uVar39 & 0xffffffff) != uVar36);
      }
      uVar34 = uVar34 + 1;
      puVar32 = local_80;
    } while (uVar34 != uVar39 >> 0x20);
    for (; puVar32 != puVar31; puVar32 = puVar32 + 1) {
      addPoint((DistanceMatrixTypeField *)in_x0,*(int *)puVar32,*(int *)((long)puVar32 + 4));
    }
    if (local_80 != (ulong *)0x0) {
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar14 + 0x28) != lVar19) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


