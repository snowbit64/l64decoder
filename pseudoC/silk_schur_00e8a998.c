// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_schur
// Entry Point: 00e8a998
// Size: 912 bytes
// Signature: undefined silk_schur(void)


void silk_schur(long param_1,uint *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined (*pauVar2) [16];
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined (*pauVar18) [16];
  ulong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined auVar25 [16];
  int iVar26;
  int iVar28;
  undefined8 uVar27;
  int iVar29;
  int iVar31;
  undefined8 uVar30;
  undefined auVar32 [16];
  uint local_f0 [10];
  int local_c8 [40];
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  local_f0[0] = *param_2;
  if (local_f0[0] >> 0x1e == 0) {
    uVar20 = (int)LZCOUNT(local_f0[0]) - 2;
    if (uVar20 == 0) {
      local_f0[1] = local_f0[0];
      if (0 < (int)param_3) {
        uVar13 = (ulong)(param_3 + 1) - 1;
        if (uVar13 < 8) {
          uVar11 = 1;
        }
        else {
          uVar15 = uVar13 & 0xfffffffffffffff8;
          uVar11 = uVar15 | 1;
          piVar16 = local_c8;
          puVar17 = (undefined8 *)(param_2 + 5);
          uVar19 = uVar15;
          do {
            uVar30 = puVar17[-1];
            uVar27 = puVar17[-2];
            iVar23 = (int)puVar17[1];
            iVar24 = (int)((ulong)puVar17[1] >> 0x20);
            iVar21 = (int)*puVar17;
            iVar22 = (int)((ulong)*puVar17 >> 0x20);
            puVar17 = puVar17 + 4;
            uVar19 = uVar19 - 8;
            iVar26 = (int)uVar27;
            piVar16[-8] = iVar26;
            piVar16[-7] = iVar26;
            iVar26 = (int)((ulong)uVar27 >> 0x20);
            piVar16[-6] = iVar26;
            piVar16[-5] = iVar26;
            iVar26 = (int)uVar30;
            piVar16[-4] = iVar26;
            piVar16[-3] = iVar26;
            iVar26 = (int)((ulong)uVar30 >> 0x20);
            piVar16[-2] = iVar26;
            piVar16[-1] = iVar26;
            *piVar16 = iVar21;
            piVar16[1] = iVar21;
            piVar16[2] = iVar22;
            piVar16[3] = iVar22;
            piVar16[4] = iVar23;
            piVar16[5] = iVar23;
            piVar16[6] = iVar24;
            piVar16[7] = iVar24;
            piVar16 = piVar16 + 0x10;
          } while (uVar19 != 0);
          if (uVar13 == uVar15) goto LAB_00e8abcc;
        }
        lVar10 = (param_3 + 1) - uVar11;
        puVar14 = local_f0 + uVar11 * 2 + 1;
        puVar12 = param_2 + uVar11;
        do {
          uVar20 = *puVar12;
          lVar10 = lVar10 + -1;
          puVar14[-1] = uVar20;
          *puVar14 = uVar20;
          puVar14 = puVar14 + 2;
          puVar12 = puVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    else {
      local_f0[0] = local_f0[0] << (ulong)(uVar20 & 0x1f);
      local_f0[1] = local_f0[0];
      if (0 < (int)param_3) {
        uVar13 = (ulong)(param_3 + 1) - 1;
        if (uVar13 < 8) {
          uVar11 = 1;
        }
        else {
          uVar15 = uVar13 & 0xfffffffffffffff8;
          uVar11 = uVar15 | 1;
          piVar16 = local_c8;
          pauVar18 = (undefined (*) [16])(param_2 + 5);
          uVar19 = uVar15;
          do {
            pauVar2 = pauVar18 + -1;
            auVar9 = *pauVar18;
            pauVar18 = pauVar18 + 2;
            uVar19 = uVar19 - 8;
            auVar25._4_4_ = uVar20;
            auVar25._0_4_ = uVar20;
            auVar25._8_4_ = uVar20;
            auVar25._12_4_ = uVar20;
            auVar32 = NEON_ushl(*pauVar2,auVar25,4);
            auVar8._4_4_ = uVar20;
            auVar8._0_4_ = uVar20;
            auVar8._8_4_ = uVar20;
            auVar8._12_4_ = uVar20;
            auVar25 = NEON_ushl(auVar9,auVar8,4);
            piVar16[-8] = auVar32._0_4_;
            piVar16[-7] = auVar32._0_4_;
            piVar16[-6] = auVar32._4_4_;
            piVar16[-5] = auVar32._4_4_;
            piVar16[-4] = auVar32._8_4_;
            piVar16[-3] = auVar32._8_4_;
            piVar16[-2] = auVar32._12_4_;
            piVar16[-1] = auVar32._12_4_;
            *piVar16 = auVar25._0_4_;
            piVar16[1] = auVar25._0_4_;
            piVar16[2] = auVar25._4_4_;
            piVar16[3] = auVar25._4_4_;
            piVar16[4] = auVar25._8_4_;
            piVar16[5] = auVar25._8_4_;
            piVar16[6] = auVar25._12_4_;
            piVar16[7] = auVar25._12_4_;
            piVar16 = piVar16 + 0x10;
          } while (uVar19 != 0);
          if (uVar13 == uVar15) goto LAB_00e8abcc;
        }
        lVar10 = (param_3 + 1) - uVar11;
        puVar14 = local_f0 + uVar11 * 2 + 1;
        puVar12 = param_2 + uVar11;
        do {
          lVar10 = lVar10 + -1;
          uVar4 = *puVar12 << (ulong)(uVar20 & 0x1f);
          puVar14[-1] = uVar4;
          *puVar14 = uVar4;
          puVar14 = puVar14 + 2;
          puVar12 = puVar12 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    local_f0[0] = (int)local_f0[0] >> 1;
    local_f0[1] = local_f0[0];
    if (0 < (int)param_3) {
      uVar13 = (ulong)(param_3 + 1) - 1;
      if (uVar13 < 8) {
        uVar11 = 1;
      }
      else {
        uVar15 = uVar13 & 0xfffffffffffffff8;
        uVar11 = uVar15 | 1;
        piVar16 = local_c8;
        puVar17 = (undefined8 *)(param_2 + 5);
        uVar19 = uVar15;
        do {
          puVar1 = puVar17 + -2;
          puVar7 = puVar17 + -1;
          puVar6 = puVar17 + 1;
          uVar27 = *puVar17;
          puVar17 = puVar17 + 4;
          uVar19 = uVar19 - 8;
          iVar26 = (int)*puVar1 >> 1;
          iVar28 = (int)((long)*puVar1 >> 0x21);
          iVar29 = (int)*puVar7 >> 1;
          iVar31 = (int)((long)*puVar7 >> 0x21);
          iVar21 = (int)uVar27 >> 1;
          iVar22 = (int)((long)uVar27 >> 0x21);
          iVar23 = (int)*puVar6 >> 1;
          iVar24 = (int)((long)*puVar6 >> 0x21);
          piVar16[-8] = iVar26;
          piVar16[-7] = iVar26;
          piVar16[-6] = iVar28;
          piVar16[-5] = iVar28;
          piVar16[-4] = iVar29;
          piVar16[-3] = iVar29;
          piVar16[-2] = iVar31;
          piVar16[-1] = iVar31;
          *piVar16 = iVar21;
          piVar16[1] = iVar21;
          piVar16[2] = iVar22;
          piVar16[3] = iVar22;
          piVar16[4] = iVar23;
          piVar16[5] = iVar23;
          piVar16[6] = iVar24;
          piVar16[7] = iVar24;
          piVar16 = piVar16 + 0x10;
        } while (uVar19 != 0);
        if (uVar13 == uVar15) goto LAB_00e8abcc;
      }
      lVar10 = (param_3 + 1) - uVar11;
      puVar14 = local_f0 + uVar11 * 2 + 1;
      puVar12 = param_2 + uVar11;
      do {
        uVar20 = *puVar12;
        lVar10 = lVar10 + -1;
        puVar14[-1] = (int)uVar20 >> 1;
        *puVar14 = (int)uVar20 >> 1;
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 1;
      } while (lVar10 != 0);
    }
  }
LAB_00e8abcc:
  if ((int)param_3 < 1) {
    uVar13 = 0;
    if (0 < (int)param_3) {
LAB_00e8acc0:
      memset((void *)(param_1 + (uVar13 & 0xffffffff) * 2),0,
             (ulong)(~(uint)uVar13 + param_3) * 2 + 2);
    }
  }
  else {
    lVar10 = 0;
    uVar19 = (ulong)param_3;
    uVar11 = 0;
    do {
      uVar13 = uVar11 + 1;
      uVar4 = local_f0[uVar13 * 2];
      uVar20 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar20 = uVar4;
      }
      if ((int)local_f0[1] <= (int)uVar20) {
        uVar3 = 0x7eb8;
        if (0 < (int)uVar4) {
          uVar3 = 0x8148;
        }
        *(undefined2 *)(param_1 + (uVar11 & 0xffffffff) * 2) = uVar3;
        if ((int)uVar13 < (int)param_3) goto LAB_00e8acc0;
        break;
      }
      iVar21 = (int)local_f0[1] >> 0xf;
      if (iVar21 < 2) {
        iVar21 = 1;
      }
      iVar22 = 0;
      if (iVar21 != 0) {
        iVar22 = (int)uVar4 / iVar21;
      }
      iVar21 = -0x8000;
      if (iVar22 != 0x8000 && -iVar22 + 0x8000 < 0 == SCARRY4(-iVar22,0x8000)) {
        iVar21 = -iVar22;
      }
      if (0x7ffe < iVar21) {
        iVar21 = 0x7fff;
      }
      *(short *)(param_1 + uVar11 * 2) = (short)iVar21;
      iVar22 = (int)uVar19;
      if ((int)uVar11 < (int)param_3) {
        uVar20 = local_f0[1];
        puVar14 = local_f0;
        while( true ) {
          puVar12 = puVar14 + 2;
          uVar19 = uVar19 - 1;
          iVar23 = *(int *)((long)puVar12 + lVar10);
          *(int *)((long)puVar12 + lVar10) =
               iVar23 + (int)((ulong)((long)(int)(uVar20 << 1) * (long)iVar21) >> 0x10);
          puVar14[1] = uVar20 + (int)((ulong)((long)(iVar23 << 1) * (long)iVar21) >> 0x10);
          if (uVar19 == 0) break;
          uVar20 = puVar14[3];
          puVar14 = puVar12;
        }
      }
      uVar19 = (ulong)(iVar22 - 1);
      lVar10 = lVar10 + 8;
      uVar11 = uVar13;
    } while (uVar13 != param_3);
  }
  uVar20 = local_f0[1];
  if ((int)local_f0[1] < 2) {
    uVar20 = 1;
  }
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar20);
  }
  return;
}


