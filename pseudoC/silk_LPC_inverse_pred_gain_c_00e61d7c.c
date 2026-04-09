// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LPC_inverse_pred_gain_c
// Entry Point: 00e61d7c
// Size: 1036 bytes
// Signature: undefined silk_LPC_inverse_pred_gain_c(void)


void silk_LPC_inverse_pred_gain_c(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  short *psVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  short sVar43;
  short sVar44;
  undefined8 uVar42;
  short sVar45;
  undefined8 uVar46;
  short sVar48;
  short sVar49;
  undefined8 uVar47;
  short sVar50;
  undefined8 uVar51;
  uint local_a8 [8];
  undefined8 auStack_88 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  uVar7 = (uint)param_2;
  local_48 = *(long *)(lVar5 + 0x28);
  if ((int)uVar7 < 1) {
LAB_00e620ec:
    iVar27 = uVar7 - 1;
    lVar13 = 0x40000000;
LAB_00e620f0:
    if (0xfe0020c2 < local_a8[iVar27] - 0xffef9f) {
      uVar7 = (uint)((ulong)(((long)(0x4000000000000000 -
                                    ((long)(int)(local_a8[0] * -0x80) *
                                     (long)(int)(local_a8[0] * -0x80) & 0x7fffffff00000000U)) >>
                             0x20) * lVar13) >> 0x1e) & 0xfffffffc;
      uVar6 = 0;
      if (0x1a36d < (int)uVar7) {
        uVar6 = uVar7;
      }
      if (*(long *)(lVar5 + 0x28) == local_48) {
        return;
      }
      goto LAB_00e62184;
    }
  }
  else {
    uVar12 = param_2 & 0xffffffff;
    if (uVar7 < 0x10) {
      param_2 = 0;
      iVar26 = 0;
LAB_00e61e40:
      lVar13 = uVar12 - param_2;
      puVar10 = local_a8 + param_2;
      psVar16 = (short *)(param_1 + param_2 * 2);
      do {
        lVar13 = lVar13 + -1;
        iVar26 = iVar26 + *psVar16;
        *puVar10 = (int)*psVar16 << 0xc;
        puVar10 = puVar10 + 1;
        psVar16 = psVar16 + 1;
      } while (lVar13 != 0);
    }
    else {
      param_2 = param_2 & 0xfffffff0;
      iVar26 = 0;
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      puVar14 = (undefined8 *)(param_1 + 0x10);
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      puVar15 = auStack_88;
      uVar9 = param_2;
      do {
        uVar46 = puVar14[-1];
        uVar42 = puVar14[-2];
        uVar51 = puVar14[1];
        uVar47 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar9 = uVar9 - 0x10;
        sVar20 = (short)((ulong)uVar46 >> 0x10);
        sVar22 = (short)((ulong)uVar46 >> 0x20);
        sVar24 = (short)((ulong)uVar46 >> 0x30);
        iVar30 = iVar30 + (short)uVar46;
        iVar31 = iVar31 + sVar20;
        iVar32 = iVar32 + sVar22;
        iVar33 = iVar33 + sVar24;
        sVar43 = (short)((ulong)uVar42 >> 0x10);
        sVar44 = (short)((ulong)uVar42 >> 0x20);
        sVar45 = (short)((ulong)uVar42 >> 0x30);
        sVar21 = (short)((ulong)uVar51 >> 0x10);
        sVar23 = (short)((ulong)uVar51 >> 0x20);
        sVar25 = (short)((ulong)uVar51 >> 0x30);
        sVar48 = (short)((ulong)uVar47 >> 0x10);
        sVar49 = (short)((ulong)uVar47 >> 0x20);
        sVar50 = (short)((ulong)uVar47 >> 0x30);
        iVar26 = iVar26 + (short)uVar42;
        iVar27 = iVar27 + sVar43;
        iVar28 = iVar28 + sVar44;
        iVar29 = iVar29 + sVar45;
        iVar38 = iVar38 + (short)uVar51;
        iVar39 = iVar39 + sVar21;
        iVar40 = iVar40 + sVar23;
        iVar41 = iVar41 + sVar25;
        puVar15[-3] = CONCAT44((int)sVar45 << 0xc,(int)sVar44 << 0xc);
        puVar15[-4] = CONCAT44((int)sVar43 << 0xc,(int)(short)uVar42 << 0xc);
        puVar15[-1] = CONCAT44((int)sVar24 << 0xc,(int)sVar22 << 0xc);
        puVar15[-2] = CONCAT44((int)sVar20 << 0xc,(int)(short)uVar46 << 0xc);
        iVar34 = iVar34 + (short)uVar47;
        iVar35 = iVar35 + sVar48;
        iVar36 = iVar36 + sVar49;
        iVar37 = iVar37 + sVar50;
        puVar15[1] = CONCAT44((int)sVar50 << 0xc,(int)sVar49 << 0xc);
        *puVar15 = CONCAT44((int)sVar48 << 0xc,(int)(short)uVar47 << 0xc);
        puVar15[3] = CONCAT44((int)sVar25 << 0xc,(int)sVar23 << 0xc);
        puVar15[2] = CONCAT44((int)sVar21 << 0xc,(int)(short)uVar51 << 0xc);
        puVar15 = puVar15 + 8;
      } while (uVar9 != 0);
      iVar26 = iVar34 + iVar26 + iVar38 + iVar30 + iVar35 + iVar27 + iVar39 + iVar31 +
               iVar36 + iVar28 + iVar40 + iVar32 + iVar37 + iVar29 + iVar41 + iVar33;
      if (param_2 != uVar12) goto LAB_00e61e40;
    }
    if (iVar26 < 0x1000) {
      iVar26 = uVar7 - 2;
      if ((int)uVar7 < 2) goto LAB_00e620ec;
      lVar13 = 0x40000000;
      uVar7 = uVar7 - 1;
      do {
        uVar6 = local_a8[uVar7];
        if (uVar6 - 0xffef9f < 0xfe0020c3) goto LAB_00e62110;
        lVar8 = (long)(int)uVar6 * -0x80;
        iVar27 = 0x40000000 - (int)((ulong)-((long)(int)uVar6 * 0x80 * lVar8) >> 0x20);
        uVar6 = (uint)((ulong)(lVar13 * iVar27) >> 0x1e) & 0xfffffffc;
        if ((int)uVar6 < 0x1a36e) goto LAB_00e62110;
        iVar28 = -iVar27;
        if (-1 < iVar27) {
          iVar28 = iVar27;
        }
        iVar30 = (int)LZCOUNT(iVar28);
        iVar27 = iVar27 << (ulong)(iVar30 - 1U & 0x1f);
        iVar28 = iVar27 >> 0x10;
        iVar29 = 0;
        if (iVar28 != 0) {
          iVar29 = 0x1fffffff / iVar28;
        }
        uVar9 = uVar12 >> 1;
        lVar13 = (long)((int)((ulong)(((long)-((long)iVar27 * (long)(short)iVar29 * 0x80000 &
                                              0xfffffff800000000U) >> 0x20) * (long)iVar29) >> 0x10)
                       + iVar29 * 0x10000);
        if (iVar30 == 0x1f) {
          puVar10 = local_a8;
          iVar27 = iVar26;
          do {
            uVar3 = local_a8[iVar27];
            uVar19 = *puVar10;
            uVar17 = (uint)(((ulong)((int)uVar3 * lVar8) >> 0x1e) + 1 >> 1);
            uVar4 = uVar19 - uVar17;
            uVar11 = uVar19;
            if ((int)uVar4 < 0) {
              uVar11 = uVar17;
              uVar17 = uVar19;
            }
            if ((int)(uVar11 & (uVar17 ^ 0xffffffff)) < 0) {
              uVar4 = (int)uVar4 >> 0x1f ^ 0x80000000;
            }
            lVar18 = ((int)uVar4 * lVar13 & 1U) + ((int)uVar4 * lVar13 >> 1);
            uVar11 = (uint)lVar18;
            if (lVar18 != (int)uVar11) goto LAB_00e62110;
            *puVar10 = uVar11;
            uVar19 = (uint)(((ulong)((int)uVar19 * lVar8) >> 0x1e) + 1 >> 1);
            uVar4 = uVar3 - uVar19;
            uVar11 = uVar3;
            if ((int)uVar4 < 0) {
              uVar11 = uVar19;
              uVar19 = uVar3;
            }
            if ((int)(uVar11 & (uVar19 ^ 0xffffffff)) < 0) {
              uVar4 = (int)uVar4 >> 0x1f ^ 0x80000000;
            }
            lVar18 = ((int)uVar4 * lVar13 & 1U) + ((int)uVar4 * lVar13 >> 1);
            uVar11 = (uint)lVar18;
            if (lVar18 != (int)uVar11) goto LAB_00e62110;
            lVar18 = (long)iVar27;
            uVar9 = uVar9 - 1;
            puVar10 = puVar10 + 1;
            iVar27 = iVar27 + -1;
            local_a8[lVar18] = uVar11;
          } while (uVar9 != 0);
        }
        else {
          puVar10 = local_a8;
          iVar27 = iVar26;
          do {
            uVar3 = local_a8[iVar27];
            uVar19 = *puVar10;
            uVar17 = (uint)(((ulong)((int)uVar3 * lVar8) >> 0x1e) + 1 >> 1);
            uVar4 = uVar19 - uVar17;
            uVar11 = uVar19;
            if ((int)uVar4 < 0) {
              uVar11 = uVar17;
              uVar17 = uVar19;
            }
            if ((int)(uVar11 & (uVar17 ^ 0xffffffff)) < 0) {
              uVar4 = (int)uVar4 >> 0x1f ^ 0x80000000;
            }
            uVar2 = ((int)uVar4 * lVar13 >> ((ulong)(0x1f - iVar30) & 0x3f)) + 1;
            lVar18 = (long)uVar2 >> 1;
            if (lVar18 != (int)lVar18) goto LAB_00e62110;
            *puVar10 = (uint)(uVar2 >> 1);
            uVar19 = (uint)(((ulong)((int)uVar19 * lVar8) >> 0x1e) + 1 >> 1);
            uVar4 = uVar3 - uVar19;
            uVar11 = uVar3;
            if ((int)uVar4 < 0) {
              uVar11 = uVar19;
              uVar19 = uVar3;
            }
            if ((int)(uVar11 & (uVar19 ^ 0xffffffff)) < 0) {
              uVar4 = (int)uVar4 >> 0x1f ^ 0x80000000;
            }
            uVar2 = ((int)uVar4 * lVar13 >> ((ulong)(0x1f - iVar30) & 0x3f)) + 1;
            lVar18 = (long)uVar2 >> 1;
            if (lVar18 != (int)lVar18) goto LAB_00e62110;
            lVar18 = (long)iVar27;
            uVar9 = uVar9 - 1;
            puVar10 = puVar10 + 1;
            iVar27 = iVar27 + -1;
            local_a8[lVar18] = (uint)(uVar2 >> 1);
          } while (uVar9 != 0);
        }
        iVar27 = 0;
        lVar13 = (long)(int)uVar6;
        uVar12 = uVar12 - 1;
        iVar26 = iVar26 + -1;
        uVar6 = uVar7 - 1;
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar6;
      } while (uVar6 != 0 && bVar1);
      goto LAB_00e620f0;
    }
  }
LAB_00e62110:
  uVar6 = 0;
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
LAB_00e62184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


