// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_fir_c
// Entry Point: 00e7a418
// Size: 848 bytes
// Signature: undefined celt_fir_c(void)


void celt_fir_c(undefined8 *param_1,long param_2,undefined8 *param_3,int param_4,uint param_5)

{
  long lVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  short *psVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar29;
  undefined8 uVar28;
  int iVar30;
  int iVar32;
  undefined8 uVar31;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  long alStack_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  alStack_90[1] = tpidr_el0;
  uVar19 = (ulong)param_5;
  local_68 = *(long *)(alStack_90[1] + 0x28);
  lVar12 = -((-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | uVar19 << 1) + 0xf &
            0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)alStack_90 + lVar12);
  uVar20 = param_5 - 1;
  if (0 < (int)param_5) {
    if (param_5 < 4) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      if (((int)(uVar20 - (int)(uVar19 - 1)) <= (int)uVar20) && (uVar19 - 1 >> 0x20 == 0)) {
        uVar11 = uVar19 & 0xfffffffc;
        uVar18 = uVar11;
        puVar17 = puVar16;
        do {
          uVar14 = (ulong)uVar20;
          uVar6 = uVar20 >> 0x1f;
          uVar18 = uVar18 - 4;
          uVar20 = uVar20 - 4;
          uVar23 = NEON_rev64(*(undefined8 *)
                               (param_2 + -6 + (-(ulong)uVar6 & 0xfffffffe00000000 | uVar14 << 1)),2
                             );
          *puVar17 = uVar23;
          puVar17 = puVar17 + 1;
        } while (uVar18 != 0);
        if (uVar11 == uVar19) goto LAB_00e7a4ac;
      }
    }
    iVar13 = ~(uint)uVar11 + param_5;
    lVar10 = uVar19 - uVar11;
    puVar15 = (undefined2 *)((long)puVar16 + uVar11 * 2);
    do {
      lVar1 = (long)iVar13;
      iVar13 = iVar13 + -1;
      lVar10 = lVar10 + -1;
      *puVar15 = *(undefined2 *)(param_2 + lVar1 * 2);
      puVar15 = puVar15 + 1;
    } while (lVar10 != 0);
  }
LAB_00e7a4ac:
  if (param_4 < 4) {
    uVar20 = 0;
    if (-1 < -param_4) goto LAB_00e7a730;
  }
  else {
    uVar20 = 0;
    puVar17 = param_3;
    puVar21 = param_1;
    do {
      uVar23 = *puVar21;
      local_80 = CONCAT44((int)(short)((ulong)uVar23 >> 0x10) << 0xc,(int)(short)uVar23 << 0xc);
      uStack_78 = CONCAT44((int)(short)((ulong)uVar23 >> 0x30) << 0xc,
                           (int)(short)((ulong)uVar23 >> 0x20) << 0xc);
      FUN_00e7a768(puVar16,(long)puVar21 + (long)(int)param_5 * -2,&local_80,uVar19);
      uVar20 = uVar20 + 4;
      *puVar17 = CONCAT26((short)((int)((ulong)uStack_78 >> 0x20) + 0x800U >> 0xc),
                          CONCAT24((short)((int)uStack_78 + 0x800U >> 0xc),
                                   CONCAT22((short)((int)((ulong)local_80 >> 0x20) + 0x800U >> 0xc),
                                            (short)((int)local_80 + 0x800U >> 0xc))));
      puVar17 = puVar17 + 1;
      puVar21 = puVar21 + 1;
    } while ((int)uVar20 < param_4 + -3);
    if (param_4 <= (int)uVar20) goto LAB_00e7a730;
  }
  uVar11 = (ulong)uVar20;
  if ((int)param_5 < 1) {
    uVar20 = ~uVar20 + param_4;
    if (0xe < uVar20) {
      lVar10 = uVar11 * 2;
      lVar12 = (uVar11 + uVar20) * 2 + 2;
      if (((ulong)((long)param_1 + lVar12) <= (ulong)((long)param_3 + lVar10)) ||
         ((ulong)((long)param_3 + lVar12) <= (ulong)((long)param_1 + lVar10))) {
        uVar19 = (ulong)uVar20 + 1;
        uVar14 = uVar19 & 0x1fffffff0;
        puVar16 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
        uVar11 = uVar14 + uVar11;
        puVar17 = (undefined8 *)((long)param_3 + lVar10 + 0x10);
        uVar18 = uVar14;
        do {
          puVar21 = puVar16 + -1;
          uVar23 = puVar16[-2];
          uVar31 = puVar16[1];
          uVar28 = *puVar16;
          uVar18 = uVar18 - 0x10;
          puVar16 = puVar16 + 4;
          puVar17[-1] = *puVar21;
          puVar17[-2] = uVar23;
          puVar17[1] = uVar31;
          *puVar17 = uVar28;
          puVar17 = puVar17 + 4;
        } while (uVar18 != 0);
        if (uVar19 == uVar14) goto LAB_00e7a730;
      }
    }
    do {
      lVar12 = uVar11 * 2;
      uVar11 = uVar11 + 1;
      *(undefined2 *)((long)param_3 + lVar12) = *(undefined2 *)((long)param_1 + lVar12);
    } while ((int)uVar11 < param_4);
  }
  else {
    iVar13 = 0;
    uVar18 = uVar19 & 0xfffffff0;
    iVar4 = uVar20 - param_5;
    do {
      iVar22 = (int)*(short *)((long)param_1 + uVar11 * 2) << 0xc;
      if (param_5 < 0x10) {
        uVar14 = 0;
LAB_00e7a588:
        iVar7 = iVar4 + (int)uVar14;
        lVar10 = uVar19 - uVar14;
        psVar9 = (short *)((long)puVar16 + uVar14 * 2);
        do {
          lVar1 = (long)iVar7;
          iVar7 = iVar7 + 1;
          lVar10 = lVar10 + -1;
          iVar22 = iVar22 + (int)*(short *)((long)param_1 + lVar1 * 2) * (int)*psVar9;
          psVar9 = psVar9 + 1;
        } while (lVar10 != 0);
      }
      else {
        iVar7 = (uVar20 - param_5) + iVar13;
        uVar14 = 0;
        if ((iVar7 + (int)(uVar19 - 1) < iVar7) || (uVar19 - 1 >> 0x20 != 0)) goto LAB_00e7a588;
        iVar25 = 0;
        iVar26 = 0;
        iVar27 = 0;
        iVar29 = 0;
        iVar30 = 0;
        iVar32 = 0;
        iVar33 = 0;
        iVar34 = 0;
        iVar35 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar38 = 0;
        iVar39 = 0;
        iVar40 = 0;
        iVar24 = 0;
        pauVar8 = (undefined (*) [16])((long)&local_80 + lVar12);
        uVar14 = uVar18;
        iVar7 = iVar4;
        do {
          pauVar3 = (undefined (*) [16])((long)param_1 + (long)iVar7 * 2);
          uVar14 = uVar14 - 0x10;
          pauVar2 = pauVar8 + -1;
          uVar23 = *(undefined8 *)*pauVar2;
          uVar28 = *(undefined8 *)*pauVar8;
          auVar43 = *pauVar8;
          auVar42 = *pauVar8;
          pauVar8 = pauVar8 + 2;
          iVar7 = iVar7 + 0x10;
          auVar41 = NEON_ext(*pauVar2,*pauVar2,8,1);
          uVar31 = *(undefined8 *)*pauVar3;
          pauVar2 = pauVar3 + 1;
          uVar5 = *(undefined8 *)*pauVar2;
          auVar42 = NEON_ext(auVar42,auVar43,8,1);
          auVar43 = NEON_ext(*pauVar3,*pauVar3,8,1);
          iVar22 = iVar22 + (int)(short)uVar31 * (int)(short)uVar23;
          iVar24 = iVar24 + (int)(short)((ulong)uVar31 >> 0x10) *
                            (int)(short)((ulong)uVar23 >> 0x10);
          iVar25 = iVar25 + (int)(short)((ulong)uVar31 >> 0x20) *
                            (int)(short)((ulong)uVar23 >> 0x20);
          iVar26 = iVar26 + (int)(short)((ulong)uVar31 >> 0x30) *
                            (int)(short)((ulong)uVar23 >> 0x30);
          auVar44 = NEON_ext(*pauVar2,*pauVar2,8,1);
          iVar33 = iVar33 + (int)(short)uVar5 * (int)(short)uVar28;
          iVar34 = iVar34 + (int)(short)((ulong)uVar5 >> 0x10) * (int)(short)((ulong)uVar28 >> 0x10)
          ;
          iVar35 = iVar35 + (int)(short)((ulong)uVar5 >> 0x20) * (int)(short)((ulong)uVar28 >> 0x20)
          ;
          iVar36 = iVar36 + (int)(short)((ulong)uVar5 >> 0x30) * (int)(short)((ulong)uVar28 >> 0x30)
          ;
          iVar27 = iVar27 + (int)auVar43._0_2_ * (int)auVar41._0_2_;
          iVar29 = iVar29 + (int)auVar43._2_2_ * (int)auVar41._2_2_;
          iVar30 = iVar30 + (int)auVar43._4_2_ * (int)auVar41._4_2_;
          iVar32 = iVar32 + (int)auVar43._6_2_ * (int)auVar41._6_2_;
          iVar37 = iVar37 + (int)auVar44._0_2_ * (int)auVar42._0_2_;
          iVar38 = iVar38 + (int)auVar44._2_2_ * (int)auVar42._2_2_;
          iVar39 = iVar39 + (int)auVar44._4_2_ * (int)auVar42._4_2_;
          iVar40 = iVar40 + (int)auVar44._6_2_ * (int)auVar42._6_2_;
        } while (uVar14 != 0);
        iVar22 = iVar33 + iVar22 + iVar37 + iVar27 + iVar34 + iVar24 + iVar38 + iVar29 +
                 iVar35 + iVar25 + iVar39 + iVar30 + iVar36 + iVar26 + iVar40 + iVar32;
        uVar14 = uVar18;
        if (uVar18 != uVar19) goto LAB_00e7a588;
      }
      iVar13 = iVar13 + 1;
      iVar4 = iVar4 + 1;
      *(short *)((long)param_3 + uVar11 * 2) = (short)(iVar22 + 0x800U >> 0xc);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < param_4);
  }
LAB_00e7a730:
  if (*(long *)(alStack_90[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


