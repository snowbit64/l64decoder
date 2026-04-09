// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_inner_prod_aligned
// Entry Point: 00e8d660
// Size: 200 bytes
// Signature: undefined silk_inner_prod_aligned(void)


int silk_inner_prod_aligned(long param_1,long param_2,uint param_3)

{
  undefined (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined (*pauVar7) [16];
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  undefined (*pauVar12) [16];
  short *psVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  
  if ((int)param_3 < 1) {
    return 0;
  }
  uVar8 = (ulong)param_3;
  if (param_3 < 0x10) {
    uVar10 = 0;
    iVar15 = 0;
  }
  else {
    uVar10 = uVar8 & 0xfffffff0;
    pauVar7 = (undefined (*) [16])(param_1 + 0x10);
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    pauVar12 = (undefined (*) [16])(param_2 + 0x10);
    iVar19 = 0;
    iVar20 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    uVar14 = uVar10;
    do {
      pauVar1 = pauVar7 + -1;
      uVar2 = *(undefined8 *)*pauVar1;
      uVar3 = *(undefined8 *)*pauVar7;
      auVar33 = *pauVar7;
      auVar32 = *pauVar7;
      pauVar7 = pauVar7 + 2;
      uVar14 = uVar14 - 0x10;
      auVar31 = NEON_ext(*pauVar1,*pauVar1,8,1);
      pauVar1 = pauVar12 + -1;
      uVar4 = *(undefined8 *)*pauVar1;
      uVar5 = *(undefined8 *)*pauVar12;
      auVar6 = *pauVar12;
      auVar34 = *pauVar12;
      auVar32 = NEON_ext(auVar32,auVar33,8,1);
      pauVar12 = pauVar12 + 2;
      auVar33 = NEON_ext(*pauVar1,*pauVar1,8,1);
      iVar15 = iVar15 + (int)(short)uVar4 * (int)(short)uVar2;
      iVar16 = iVar16 + (int)(short)((ulong)uVar4 >> 0x10) * (int)(short)((ulong)uVar2 >> 0x10);
      iVar17 = iVar17 + (int)(short)((ulong)uVar4 >> 0x20) * (int)(short)((ulong)uVar2 >> 0x20);
      iVar18 = iVar18 + (int)(short)((ulong)uVar4 >> 0x30) * (int)(short)((ulong)uVar2 >> 0x30);
      auVar34 = NEON_ext(auVar34,auVar6,8,1);
      iVar23 = iVar23 + (int)(short)uVar5 * (int)(short)uVar3;
      iVar24 = iVar24 + (int)(short)((ulong)uVar5 >> 0x10) * (int)(short)((ulong)uVar3 >> 0x10);
      iVar25 = iVar25 + (int)(short)((ulong)uVar5 >> 0x20) * (int)(short)((ulong)uVar3 >> 0x20);
      iVar26 = iVar26 + (int)(short)((ulong)uVar5 >> 0x30) * (int)(short)((ulong)uVar3 >> 0x30);
      iVar19 = iVar19 + (int)auVar33._0_2_ * (int)auVar31._0_2_;
      iVar20 = iVar20 + (int)auVar33._2_2_ * (int)auVar31._2_2_;
      iVar21 = iVar21 + (int)auVar33._4_2_ * (int)auVar31._4_2_;
      iVar22 = iVar22 + (int)auVar33._6_2_ * (int)auVar31._6_2_;
      iVar27 = iVar27 + (int)auVar34._0_2_ * (int)auVar32._0_2_;
      iVar28 = iVar28 + (int)auVar34._2_2_ * (int)auVar32._2_2_;
      iVar29 = iVar29 + (int)auVar34._4_2_ * (int)auVar32._4_2_;
      iVar30 = iVar30 + (int)auVar34._6_2_ * (int)auVar32._6_2_;
    } while (uVar14 != 0);
    iVar15 = iVar23 + iVar15 + iVar27 + iVar19 + iVar24 + iVar16 + iVar28 + iVar20 +
             iVar25 + iVar17 + iVar29 + iVar21 + iVar26 + iVar18 + iVar30 + iVar22;
    if (uVar10 == uVar8) {
      return iVar15;
    }
  }
  lVar9 = uVar8 - uVar10;
  psVar11 = (short *)(param_2 + uVar10 * 2);
  psVar13 = (short *)(param_1 + uVar10 * 2);
  do {
    lVar9 = lVar9 + -1;
    iVar15 = iVar15 + (int)*psVar11 * (int)*psVar13;
    psVar11 = psVar11 + 1;
    psVar13 = psVar13 + 1;
  } while (lVar9 != 0);
  return iVar15;
}


