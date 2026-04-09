// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getJaroDistance
// Entry Point: 00ba02fc
// Size: 1868 bytes
// Signature: undefined __cdecl getJaroDistance(basic_string * param_1, basic_string * param_2)


/* StringUtil::getJaroDistance(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

float StringUtil::getJaroDistance(basic_string *param_1,basic_string *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  void *local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  fVar31 = 0.0;
  local_80 = *(long *)(lVar6 + 0x28);
  bVar3 = *(byte *)param_1;
  bVar4 = *(byte *)param_2;
  uVar10 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 2);
  }
  uVar13 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar13 = *(ulong *)(param_2 + 2);
  }
  iVar30 = (int)uVar10;
  if ((iVar30 == 0) || (iVar23 = (int)uVar13, iVar23 == 0)) goto LAB_00ba09ec;
  iVar28 = iVar23;
  if (iVar23 <= iVar30) {
    iVar28 = iVar30;
  }
  if (iVar28 < 0) {
    iVar28 = iVar28 + 1;
  }
  iVar28 = iVar28 >> 1;
  if (iVar28 < 2) {
    iVar28 = 1;
  }
  if ((iVar30 < 0x40) && (iVar23 < 0x40)) {
    lVar15 = *(long *)(param_1 + 4);
    lVar17 = *(long *)(param_2 + 4);
    if ((bVar3 & 1) == 0) {
      lVar15 = (long)param_1 + 1;
    }
    if ((bVar4 & 1) == 0) {
      lVar17 = (long)param_2 + 1;
    }
    if (iVar30 < 1) goto LAB_00ba09ec;
    uVar9 = 0;
    uVar29 = 0;
    uVar26 = 0;
    uVar25 = 0;
    uVar14 = -iVar28;
    do {
      uVar14 = uVar14 + 1;
      iVar27 = iVar28 + (int)uVar9;
      uVar5 = (int)uVar9 - (iVar28 + -1);
      iVar24 = iVar23;
      if (iVar27 <= iVar23) {
        iVar24 = iVar27;
      }
      if (iVar24 <= (int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) break;
      uVar5 = uVar14;
      if ((int)uVar14 < 1) {
        uVar5 = 0;
      }
      uVar19 = (ulong)uVar5;
      do {
        uVar21 = 1L << (uVar19 & 0x3f);
        if (((uVar21 & uVar25) == 0) && (*(char *)(lVar15 + uVar9) == *(char *)(lVar17 + uVar19))) {
          uVar25 = uVar21 | uVar25;
          uVar26 = 1L << (uVar9 & 0x3f) | uVar26;
          uVar29 = (ulong)((int)uVar29 + 1);
          break;
        }
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)iVar24);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar30);
    iVar28 = (int)uVar29;
    if (iVar28 == 0) goto LAB_00ba09ec;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    if (iVar28 < 0) {
                    /* try { // try from 00ba0a3c to 00ba0a43 has its CatchHandler @ 00ba0a54 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
                    /* try { // try from 00ba07ec to 00ba07f3 has its CatchHandler @ 00ba0a54 */
    pvVar7 = operator_new(uVar9);
    memset(pvVar7,0,uVar9);
                    /* try { // try from 00ba0804 to 00ba080b has its CatchHandler @ 00ba0a48 */
    pvVar8 = operator_new(uVar9);
    memset(pvVar8,0,uVar9);
    if (0 < iVar30) {
      uVar9 = 0;
      iVar27 = 0;
      do {
        if ((uVar26 >> (uVar9 & 0x3f) & 1) != 0) {
          *(int *)((long)pvVar7 + (long)iVar27 * 4) = (int)uVar9;
          iVar27 = iVar27 + 1;
        }
        uVar9 = uVar9 + 1;
      } while ((uVar10 & 0xffffffff) != uVar9);
    }
    if (0 < iVar23) {
      uVar10 = 0;
      iVar27 = 0;
      do {
        if ((uVar25 >> (uVar10 & 0x3f) & 1) != 0) {
          *(int *)((long)pvVar8 + (long)iVar27 * 4) = (int)uVar10;
          iVar27 = iVar27 + 1;
        }
        uVar10 = uVar10 + 1;
      } while ((uVar13 & 0xffffffff) != uVar10);
    }
    if (iVar28 < 1) {
      iVar27 = 0;
    }
    else {
      if (iVar28 == 1) {
        uVar13 = 0;
        iVar27 = 0;
      }
      else {
        uVar13 = uVar29 & 0xfffffffe;
        iVar28 = 0;
        iVar27 = 0;
        lVar11 = (long)pvVar7 + 4;
        lVar20 = (long)pvVar8 + 4;
        uVar10 = uVar13;
        do {
          piVar16 = (int *)(lVar11 + -4);
          piVar1 = (int *)(lVar11 + 4);
          piVar18 = (int *)(lVar20 + -4);
          piVar2 = (int *)(lVar20 + 4);
          lVar11 = lVar11 + 8;
          lVar20 = lVar20 + 8;
          if (*(char *)(lVar15 + *piVar16) != *(char *)(lVar17 + *piVar18)) {
            iVar28 = iVar28 + 1;
          }
          if (*(char *)(lVar15 + *piVar1) != *(char *)(lVar17 + *piVar2)) {
            iVar27 = iVar27 + 1;
          }
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
        iVar27 = iVar27 + iVar28;
        if (uVar13 == uVar29) goto LAB_00ba0990;
      }
      lVar11 = uVar29 - uVar13;
      piVar16 = (int *)((long)pvVar7 + uVar13 * 4);
      piVar18 = (int *)((long)pvVar8 + uVar13 * 4);
      do {
        if (*(char *)(lVar15 + *piVar16) != *(char *)(lVar17 + *piVar18)) {
          iVar27 = iVar27 + 1;
        }
        lVar11 = lVar11 + -1;
        piVar16 = piVar16 + 1;
        piVar18 = piVar18 + 1;
      } while (lVar11 != 0);
    }
LAB_00ba0990:
    operator_delete(pvVar8);
    operator_delete(pvVar7);
  }
  else {
    uVar9 = (ulong)iVar30;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    if (uVar10 << 0x20 != 0) {
      if ((long)(uVar10 << 0x20) < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = (uVar9 - 1 >> 6) + 1;
      local_98 = operator_new(lVar15 * 8);
      uStack_90 = 0;
      local_88 = lVar15;
      FUN_00af6bb0(&local_98,uVar9,0);
    }
    local_b0 = (void *)0x0;
    uStack_a8 = 0;
    local_a0 = 0;
    if (uVar13 << 0x20 != 0) {
      if ((long)(uVar13 << 0x20) < 0) {
                    /* try { // try from 00ba0a34 to 00ba0a3b has its CatchHandler @ 00ba0a6c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar15 = ((long)iVar23 - 1U >> 6) + 1;
                    /* try { // try from 00ba04d8 to 00ba04f3 has its CatchHandler @ 00ba0a6c */
      local_b0 = operator_new(lVar15 * 8);
      uStack_a8 = 0;
      local_a0 = lVar15;
      FUN_00af6bb0(&local_b0,(long)iVar23,0);
    }
    bVar22 = true;
    if (iVar30 < 1) {
      iVar27 = 0;
      uVar29 = 0;
    }
    else {
      uVar25 = 0;
      iVar27 = 0;
      uVar29 = 0;
      uVar14 = -iVar28;
      do {
        uVar14 = uVar14 + 1;
        iVar24 = iVar28 + (int)uVar25;
        uVar5 = (int)uVar25 - (iVar28 + -1);
        iVar12 = iVar23;
        if (iVar24 <= iVar23) {
          iVar12 = iVar24;
        }
        if (iVar12 <= (int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) break;
        uVar5 = uVar14;
        if ((int)uVar14 < 1) {
          uVar5 = 0;
        }
        uVar26 = (ulong)uVar5;
        lVar15 = (long)param_1 + 1;
        if ((*(byte *)param_1 & 1) != 0) {
          lVar15 = *(long *)(param_1 + 4);
        }
        lVar17 = (long)param_2 + 1;
        if ((*(byte *)param_2 & 1) != 0) {
          lVar17 = *(long *)(param_2 + 4);
        }
        do {
          uVar19 = 1L << (uVar26 & 0x3f);
          if (((*(ulong *)((long)local_b0 + (uVar26 >> 6) * 8) & uVar19) == 0) &&
             (*(char *)(lVar15 + uVar25) == *(char *)(lVar17 + uVar26))) {
            uVar21 = uVar25 >> 3 & 0x1ffffffffffffff8;
            lVar15 = (uVar26 >> 6) * 8;
            uVar29 = (ulong)((int)uVar29 + 1);
            *(ulong *)((long)local_98 + uVar21) =
                 *(ulong *)((long)local_98 + uVar21) | 1L << (uVar25 & 0x3f);
            *(ulong *)((long)local_b0 + lVar15) = *(ulong *)((long)local_b0 + lVar15) | uVar19;
            break;
          }
          uVar26 = uVar26 + 1;
        } while ((long)uVar26 < (long)iVar12);
        iVar24 = (int)uVar29;
        if (iVar24 == 0) {
          bVar22 = false;
          goto joined_r0x00ba08c8;
        }
        if (iVar24 < 0) {
                    /* try { // try from 00ba0a24 to 00ba0a2b has its CatchHandler @ 00ba0a84 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar26 = -(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2;
                    /* try { // try from 00ba0640 to 00ba0647 has its CatchHandler @ 00ba0aa0 */
        pvVar7 = operator_new(uVar26);
        memset(pvVar7,0,uVar26);
                    /* try { // try from 00ba0658 to 00ba065f has its CatchHandler @ 00ba0a74 */
        pvVar8 = operator_new(uVar26);
        memset(pvVar8,0,uVar26);
        uVar26 = 0;
        iVar12 = 0;
        do {
          if ((*(ulong *)((long)local_98 + (uVar26 >> 3 & 0x1ffffffffffffff8)) >> (uVar26 & 0x3f) &
              1) != 0) {
            *(int *)((long)pvVar7 + (long)iVar12 * 4) = (int)uVar26;
            iVar12 = iVar12 + 1;
          }
          uVar26 = uVar26 + 1;
        } while ((uVar10 & 0xffffffff) != uVar26);
        if (0 < iVar23) {
          uVar26 = 0;
          iVar12 = 0;
          do {
            if ((*(ulong *)((long)local_b0 + (uVar26 >> 3 & 0x1ffffffffffffff8)) >> (uVar26 & 0x3f)
                & 1) != 0) {
              *(int *)((long)pvVar8 + (long)iVar12 * 4) = (int)uVar26;
              iVar12 = iVar12 + 1;
            }
            uVar26 = uVar26 + 1;
          } while ((uVar13 & 0xffffffff) != uVar26);
        }
        lVar15 = (long)param_1 + 1;
        if ((*(byte *)param_1 & 1) != 0) {
          lVar15 = *(long *)(param_1 + 4);
        }
        lVar17 = (long)param_2 + 1;
        if ((*(byte *)param_2 & 1) != 0) {
          lVar17 = *(long *)(param_2 + 4);
        }
        if (0 < iVar24) {
          if (iVar24 == 1) {
            uVar19 = 0;
          }
          else {
            uVar19 = uVar29 & 0xfffffffe;
            iVar24 = 0;
            lVar11 = (long)pvVar7 + 4;
            lVar20 = (long)pvVar8 + 4;
            uVar26 = uVar19;
            do {
              piVar16 = (int *)(lVar11 + -4);
              piVar1 = (int *)(lVar11 + 4);
              piVar18 = (int *)(lVar20 + -4);
              piVar2 = (int *)(lVar20 + 4);
              lVar11 = lVar11 + 8;
              lVar20 = lVar20 + 8;
              if (*(char *)(lVar15 + *piVar16) != *(char *)(lVar17 + *piVar18)) {
                iVar27 = iVar27 + 1;
              }
              if (*(char *)(lVar15 + *piVar1) != *(char *)(lVar17 + *piVar2)) {
                iVar24 = iVar24 + 1;
              }
              uVar26 = uVar26 - 2;
            } while (uVar26 != 0);
            iVar27 = iVar24 + iVar27;
            if (uVar19 == uVar29) goto LAB_00ba053c;
          }
          lVar11 = uVar29 - uVar19;
          piVar16 = (int *)((long)pvVar7 + uVar19 * 4);
          piVar18 = (int *)((long)pvVar8 + uVar19 * 4);
          do {
            if (*(char *)(lVar15 + *piVar16) != *(char *)(lVar17 + *piVar18)) {
              iVar27 = iVar27 + 1;
            }
            lVar11 = lVar11 + -1;
            piVar16 = piVar16 + 1;
            piVar18 = piVar18 + 1;
          } while (lVar11 != 0);
        }
LAB_00ba053c:
        operator_delete(pvVar8);
        operator_delete(pvVar7);
        uVar25 = uVar25 + 1;
      } while (uVar25 != uVar9);
      bVar22 = true;
    }
joined_r0x00ba08c8:
    if (local_b0 != (void *)0x0) {
      operator_delete(local_b0);
    }
    if (local_98 != (void *)0x0) {
      operator_delete(local_98);
    }
    if (!bVar22) goto LAB_00ba09ec;
  }
  fVar31 = (float)(int)uVar29;
  if (iVar27 < 0) {
    iVar27 = iVar27 + 1;
  }
  fVar32 = fVar31 * 0.3333333;
  fVar31 = fVar32 / (float)iVar30 + fVar32 / (float)iVar23 +
           ((float)((int)uVar29 - (iVar27 >> 1)) * 0.3333333) / fVar31;
LAB_00ba09ec:
  if (*(long *)(lVar6 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar31;
}


