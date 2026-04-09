// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _celt_lpc
// Entry Point: 00e7a160
// Size: 696 bytes
// Signature: undefined _celt_lpc(void)


void _celt_lpc(long param_1,int *param_2,uint param_3)

{
  int *piVar1;
  undefined (*pauVar2) [16];
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined (*pauVar13) [16];
  int *piVar14;
  undefined (*pauVar15) [16];
  undefined2 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  int *piVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar27;
  undefined8 uVar26;
  int iVar28;
  int iVar30;
  undefined8 uVar29;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  int local_c8 [4];
  undefined8 auStack_b8 [2];
  undefined auStack_a8 [64];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar20 = *param_2;
  __memset_chk(local_c8,0,-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2,0x60)
  ;
  if (iVar20 != 0) {
    uVar4 = param_3;
    if ((int)param_3 < 1) {
      uVar4 = 0;
    }
    pauVar15 = (undefined (*) [16])(param_2 + -3);
    lVar21 = -4;
    piVar19 = param_2;
    uVar11 = 0;
    do {
      if (uVar11 == uVar4) break;
      if (uVar11 == 0) {
        iVar8 = 0;
      }
      else {
        if (uVar11 < 8) {
          uVar9 = 0;
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          uVar12 = uVar11 & 0xfffffffffffffff8;
          iVar25 = 0;
          iVar27 = 0;
          iVar28 = 0;
          iVar30 = 0;
          uVar9 = uVar11 & 0x7ffffffffffffff8;
          pauVar13 = pauVar15;
          puVar17 = auStack_b8;
          do {
            pauVar2 = pauVar13 + -1;
            auVar31 = *pauVar13;
            pauVar13 = pauVar13 + -2;
            uVar12 = uVar12 - 8;
            auVar32 = NEON_rev64(*pauVar2,4);
            auVar31 = NEON_rev64(auVar31,4);
            puVar3 = puVar17 + -2;
            puVar6 = puVar17 + -1;
            puVar7 = puVar17 + 1;
            uVar26 = *puVar17;
            auVar32 = NEON_ext(auVar32,auVar32,8,1);
            puVar17 = puVar17 + 4;
            auVar31 = NEON_ext(auVar31,auVar31,8,1);
            iVar25 = iVar25 + (int)((ulong)((long)auVar32._0_4_ * (long)(int)uVar26) >> 0x1f);
            iVar27 = iVar27 + (int)((ulong)((long)auVar32._4_4_ * (long)(int)((ulong)uVar26 >> 0x20)
                                           ) >> 0x1f);
            iVar28 = iVar28 + (int)((ulong)((long)auVar32._8_4_ * (long)(int)*puVar7) >> 0x1f);
            iVar30 = iVar30 + (int)((ulong)((long)auVar32._12_4_ *
                                           (long)(int)((ulong)*puVar7 >> 0x20)) >> 0x1f);
            iVar8 = iVar8 + (int)((ulong)((long)auVar31._0_4_ * (long)(int)*puVar3) >> 0x1f);
            iVar22 = iVar22 + (int)((ulong)((long)auVar31._4_4_ *
                                           (long)(int)((ulong)*puVar3 >> 0x20)) >> 0x1f);
            iVar23 = iVar23 + (int)((ulong)((long)auVar31._8_4_ * (long)(int)*puVar6) >> 0x1f);
            iVar24 = iVar24 + (int)((ulong)((long)auVar31._12_4_ *
                                           (long)(int)((ulong)*puVar6 >> 0x20)) >> 0x1f);
          } while (uVar12 != 0);
          iVar8 = iVar25 + iVar8 + iVar27 + iVar22 + iVar28 + iVar23 + iVar30 + iVar24;
          if (uVar11 == uVar9) goto LAB_00e7a2d4;
        }
        piVar14 = piVar19 + -uVar9;
        do {
          piVar1 = local_c8 + uVar9;
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + (int)((ulong)((long)*piVar14 * (long)*piVar1) >> 0x1f);
          piVar14 = piVar14 + -1;
        } while (uVar11 != uVar9);
      }
LAB_00e7a2d4:
      uVar9 = uVar11 + 1;
      iVar8 = frac_div32(param_2[uVar9 & 0xffffffff] + iVar8 * 8 & 0xfffffff8,iVar20);
      lVar10 = (long)-iVar8;
      local_c8[uVar11] = -iVar8 >> 3;
      if (uVar11 != 0) {
        uVar11 = 0;
        lVar18 = lVar21;
        do {
          iVar8 = *(int *)((long)local_c8 + lVar18);
          uVar12 = uVar11 + 1;
          iVar22 = local_c8[uVar11];
          local_c8[uVar11] = iVar22 + (int)((ulong)(iVar8 * lVar10) >> 0x1f);
          *(int *)((long)local_c8 + lVar18) = iVar8 + (int)((ulong)(iVar22 * lVar10) >> 0x1f);
          lVar18 = lVar18 + -4;
          uVar11 = uVar12;
        } while (uVar12 < (uVar9 >> 1 & 0x7fffffff));
      }
      pauVar15 = (undefined (*) [16])((long)*pauVar15 + 4);
      piVar19 = piVar19 + 1;
      lVar21 = lVar21 + 4;
      iVar20 = iVar20 - (int)((ulong)((long)(int)((ulong)(lVar10 * lVar10) >> 0x1f) * (long)iVar20)
                             >> 0x1f);
      uVar11 = uVar9;
    } while (*param_2 >> 10 <= iVar20);
  }
  if (0 < (int)param_3) {
    uVar11 = (ulong)param_3;
    if (param_3 < 0x10) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar11 & 0xfffffff0;
      puVar16 = (undefined2 *)(param_1 + 0x10);
      pauVar15 = (undefined (*) [16])auStack_a8;
      uVar9 = uVar12;
      do {
        uVar29 = *(undefined8 *)(pauVar15[-2] + 8);
        uVar26 = *(undefined8 *)pauVar15[-2];
        auVar31 = pauVar15[-1];
        uVar9 = uVar9 - 0x10;
        auVar32 = *pauVar15;
        uVar34 = *(undefined8 *)(pauVar15[1] + 8);
        uVar33 = *(undefined8 *)pauVar15[1];
        *(ulong *)(puVar16 + -4) =
             CONCAT26((short)((uint)(auVar31._12_4_ + 0x8000) >> 0x10),
                      CONCAT24((short)((uint)(auVar31._8_4_ + 0x8000) >> 0x10),
                               CONCAT22((short)((uint)(auVar31._4_4_ + 0x8000) >> 0x10),
                                        (short)((uint)(auVar31._0_4_ + 0x8000) >> 0x10))));
        *(ulong *)(puVar16 + -8) =
             CONCAT26((short)((uint)((int)((ulong)uVar29 >> 0x20) + 0x8000) >> 0x10),
                      CONCAT24((short)((uint)((int)uVar29 + 0x8000) >> 0x10),
                               CONCAT22((short)((uint)((int)((ulong)uVar26 >> 0x20) + 0x8000) >>
                                               0x10),(short)((uint)((int)uVar26 + 0x8000) >> 0x10)))
                     );
        puVar16[8] = (short)((uint)((int)uVar33 + 0x8000) >> 0x10);
        puVar16[9] = (short)((uint)((int)((ulong)uVar33 >> 0x20) + 0x8000) >> 0x10);
        puVar16[10] = (short)((uint)((int)uVar34 + 0x8000) >> 0x10);
        puVar16[0xb] = (short)((uint)((int)((ulong)uVar34 >> 0x20) + 0x8000) >> 0x10);
        *puVar16 = (short)((uint)(auVar32._0_4_ + 0x8000) >> 0x10);
        puVar16[1] = (short)((uint)(auVar32._4_4_ + 0x8000) >> 0x10);
        puVar16[2] = (short)((uint)(auVar32._8_4_ + 0x8000) >> 0x10);
        puVar16[3] = (short)((uint)(auVar32._12_4_ + 0x8000) >> 0x10);
        puVar16 = puVar16 + 0x10;
        pauVar15 = pauVar15 + 4;
      } while (uVar9 != 0);
      if (uVar12 == uVar11) goto LAB_00e7a3e0;
    }
    lVar21 = uVar11 - uVar12;
    puVar16 = (undefined2 *)(param_1 + uVar12 * 2);
    piVar19 = local_c8 + uVar12;
    do {
      lVar21 = lVar21 + -1;
      *puVar16 = (short)((uint)(*piVar19 + 0x8000) >> 0x10);
      puVar16 = puVar16 + 1;
      piVar19 = piVar19 + 1;
    } while (lVar21 != 0);
  }
LAB_00e7a3e0:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


