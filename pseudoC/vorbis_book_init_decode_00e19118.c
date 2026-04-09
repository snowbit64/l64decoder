// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_book_init_decode
// Entry Point: 00e19118
// Size: 1824 bytes
// Signature: undefined vorbis_book_init_decode(void)


void vorbis_book_init_decode(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  uint3 uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  undefined (**ppauVar19) [16];
  uint **ppuVar20;
  long lVar21;
  uint *puVar22;
  undefined4 *puVar23;
  int *piVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  void *__base;
  size_t __size;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar38;
  long lVar37;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar50;
  undefined (*pauVar49) [16];
  int iVar51;
  int iVar54;
  long lVar52;
  undefined (*pauVar53) [16];
  long lVar55;
  undefined (*pauVar56) [16];
  undefined auVar57 [16];
  long lVar58;
  undefined (*pauVar59) [16];
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  undefined auVar64 [16];
  uint5 uVar65;
  undefined auVar66 [16];
  undefined auVar67 [16];
  uint5 uVar68;
  undefined auVar69 [16];
  undefined8 uStack_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar12 = param_2[1];
  if ((long)uVar12 < 1) {
    uVar14 = *param_2;
    uVar16 = 0;
    param_1[1] = uVar12;
    param_1[2] = 0;
    *param_1 = uVar14;
    goto LAB_00e19808;
  }
  lVar13 = param_2[2];
  if (uVar12 < 8) {
    uVar17 = 0;
    uVar30 = 0;
LAB_00e192f0:
    lVar18 = uVar12 - uVar17;
    pcVar15 = (char *)(lVar13 + uVar17);
    do {
      if (*pcVar15 != '\0') {
        uVar30 = uVar30 + 1;
      }
      lVar18 = lVar18 + -1;
      pcVar15 = pcVar15 + 1;
    } while (lVar18 != 0);
  }
  else if (uVar12 < 0x20) {
    uVar30 = 0;
    uVar28 = 0;
LAB_00e19290:
    iVar32 = 0;
    iVar33 = 0;
    uVar17 = uVar12 & 0xfffffffffffffff8;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar38 = 0;
    iVar31 = 0;
    lVar18 = uVar28 - uVar17;
    puVar11 = (undefined8 *)(lVar13 + uVar28);
    do {
      lVar18 = lVar18 + 8;
      uVar16 = NEON_cmtst(*puVar11,*puVar11,1);
      uVar8 = CONCAT12((char)((ulong)uVar16 >> 8),(short)uVar16) & 0xff00ff;
      iVar34 = iVar34 + (uint)((byte)((ulong)uVar16 >> 0x20) & 1);
      iVar35 = iVar35 + (uint)((byte)((ulong)uVar16 >> 0x28) & 1);
      iVar36 = iVar36 + (uint)((byte)((ulong)uVar16 >> 0x30) & 1);
      iVar38 = iVar38 + (uint)((byte)((ulong)uVar16 >> 0x38) & 1);
      uVar30 = uVar30 + ((byte)uVar8 & 1);
      iVar31 = iVar31 + (uint)((byte)(uVar8 >> 0x10) & 1);
      iVar32 = iVar32 + (uint)((byte)((ulong)uVar16 >> 0x10) & 1);
      iVar33 = iVar33 + (uint)((byte)((ulong)uVar16 >> 0x18) & 1);
      puVar11 = puVar11 + 1;
    } while (lVar18 != 0);
    uVar30 = uVar30 + iVar34 + iVar31 + iVar35 + iVar32 + iVar36 + iVar33 + iVar38;
    if (uVar12 != uVar17) goto LAB_00e192f0;
  }
  else {
    uVar17 = uVar12 & 0xffffffffffffffe0;
    pauVar49 = (undefined (*) [16])(lVar13 + 0x10);
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar34 = 0;
    iVar44 = 0;
    iVar45 = 0;
    iVar46 = 0;
    iVar47 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    iVar42 = 0;
    iVar43 = 0;
    iVar48 = 0;
    iVar50 = 0;
    iVar51 = 0;
    iVar54 = 0;
    iVar60 = 0;
    iVar61 = 0;
    iVar62 = 0;
    iVar63 = 0;
    uVar28 = uVar17;
    auVar64 = ZEXT816(0);
    auVar67 = ZEXT816(0);
    do {
      pauVar53 = pauVar49 + -1;
      auVar57 = *pauVar49;
      pauVar49 = pauVar49 + 2;
      uVar28 = uVar28 - 0x20;
      auVar66 = NEON_cmtst(*pauVar53,*pauVar53,1);
      auVar69 = NEON_cmtst(auVar57,auVar57,1);
      uVar65 = CONCAT14(auVar66[9],(uint)(auVar66[8] & 1)) & 0x1ffffffff;
      uVar68 = CONCAT14(auVar69[13],(uint)(auVar69[12] & 1)) & 0x1ffffffff;
      iVar40 = iVar40 + (uint)(auVar66[12] & 1);
      iVar41 = iVar41 + (uint)(auVar66[13] & 1);
      iVar42 = iVar42 + (uint)(auVar66[14] & 1);
      iVar43 = iVar43 + (uint)(auVar66[15] & 1);
      iVar35 = iVar35 + (int)uVar65;
      iVar36 = iVar36 + (uint)(byte)(uVar65 >> 0x20);
      iVar38 = iVar38 + (uint)(auVar66[10] & 1);
      iVar39 = iVar39 + (uint)(auVar66[11] & 1);
      iVar44 = iVar44 + (uint)(auVar66[4] & 1);
      iVar45 = iVar45 + (uint)(auVar66[5] & 1);
      iVar46 = iVar46 + (uint)(auVar66[6] & 1);
      iVar47 = iVar47 + (uint)(auVar66[7] & 1);
      iVar31 = iVar31 + (uint)(auVar66[0] & 1);
      iVar32 = iVar32 + (uint)(auVar66[1] & 1);
      iVar33 = iVar33 + (uint)(auVar66[2] & 1);
      iVar34 = iVar34 + (uint)(auVar66[3] & 1);
      iVar60 = iVar60 + (int)uVar68;
      iVar61 = iVar61 + (uint)(byte)(uVar68 >> 0x20);
      iVar62 = iVar62 + (uint)(auVar69[14] & 1);
      iVar63 = iVar63 + (uint)(auVar69[15] & 1);
      auVar57._0_4_ = auVar64._0_4_ + (uint)(auVar69[8] & 1);
      auVar57._4_4_ = auVar64._4_4_ + (uint)(auVar69[9] & 1);
      auVar57._8_4_ = auVar64._8_4_ + (uint)(auVar69[10] & 1);
      auVar57._12_4_ = auVar64._12_4_ + (uint)(auVar69[11] & 1);
      auVar66._0_4_ = auVar67._0_4_ + (uint)(auVar69[4] & 1);
      auVar66._4_4_ = auVar67._4_4_ + (uint)(auVar69[5] & 1);
      auVar66._8_4_ = auVar67._8_4_ + (uint)(auVar69[6] & 1);
      auVar66._12_4_ = auVar67._12_4_ + (uint)(auVar69[7] & 1);
      iVar48 = iVar48 + (uint)(auVar69[0] & 1);
      iVar50 = iVar50 + (uint)(auVar69[1] & 1);
      iVar51 = iVar51 + (uint)(auVar69[2] & 1);
      iVar54 = iVar54 + (uint)(auVar69[3] & 1);
      auVar64 = auVar57;
      auVar67 = auVar66;
    } while (uVar28 != 0);
    uVar30 = iVar48 + iVar31 + auVar57._0_4_ + iVar35 + auVar66._0_4_ + iVar44 + iVar60 + iVar40 +
             iVar50 + iVar32 + auVar57._4_4_ + iVar36 + auVar66._4_4_ + iVar45 + iVar61 + iVar41 +
             iVar51 + iVar33 + auVar57._8_4_ + iVar38 + auVar66._8_4_ + iVar46 + iVar62 + iVar42 +
             iVar54 + iVar34 + auVar57._12_4_ + iVar39 + auVar66._12_4_ + iVar47 + iVar63 + iVar43;
    if (uVar12 != uVar17) {
      uVar28 = uVar17;
      if ((uVar12 & 0x18) == 0) goto LAB_00e192f0;
      goto LAB_00e19290;
    }
  }
  uVar28 = (ulong)uVar30;
  uVar16 = *param_2;
  param_1[1] = uVar12;
  param_1[2] = uVar28;
  *param_1 = uVar16;
  if (uVar30 != 0) {
    pvVar9 = (void *)_make_words(param_2[2],uVar12,uVar28);
    lVar13 = -(uVar28 * 8 + 0xf & 0xffffffff0);
    __base = (void *)((long)&uStack_60 + lVar13);
    if (pvVar9 == (void *)0x0) {
      vorbis_book_clear(param_1);
      uVar16 = 0xffffffff;
      goto LAB_00e19808;
    }
    if (uVar30 < 8) {
      uVar17 = 0;
LAB_00e193f0:
      lVar13 = uVar28 - uVar17;
      ppuVar20 = (uint **)((long)__base + uVar17 * 8);
      puVar22 = (uint *)((long)pvVar9 + uVar17 * 4);
      do {
        uVar26 = *puVar22;
        lVar13 = lVar13 + -1;
        *ppuVar20 = puVar22;
        uVar26 = (uVar26 & 0xaaaaaaaa) >> 1 | (uVar26 & 0x55555555) << 1;
        uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        *puVar22 = uVar26 >> 0x10 | uVar26 << 0x10;
        ppuVar20 = ppuVar20 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar17 = uVar28 & 0xfffffff8;
      lVar21 = 3;
      lVar18 = 2;
      lVar37 = 1;
      lVar25 = 0;
      ppauVar19 = (undefined (**) [16])(&stack0xffffffffffffffc0 + lVar13);
      uVar12 = uVar17;
      do {
        lVar13 = lVar25 * 4;
        lVar52 = lVar37 * 4;
        uVar12 = uVar12 - 8;
        lVar55 = lVar18 * 4;
        lVar58 = lVar21 * 4;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        lVar37 = lVar37 + 8;
        pauVar49 = (undefined (*) [16])((long)pvVar9 + lVar13);
        pauVar53 = (undefined (*) [16])((long)pvVar9 + lVar52);
        pauVar56 = (undefined (*) [16])((long)pvVar9 + lVar55);
        pauVar59 = (undefined (*) [16])((long)pvVar9 + lVar58);
        ppauVar19[-3] = pauVar53;
        ppauVar19[-4] = pauVar49;
        ppauVar19[-1] = pauVar59;
        ppauVar19[-2] = pauVar56;
        auVar64 = *pauVar49;
        auVar67 = pauVar49[1];
        ppauVar19[1] = pauVar53 + 1;
        *ppauVar19 = pauVar49 + 1;
        ppauVar19[3] = pauVar59 + 1;
        ppauVar19[2] = pauVar56 + 1;
        auVar64 = NEON_rev32(auVar64,1);
        auVar67 = NEON_rev32(auVar67,1);
        auVar64 = NEON_rbit(auVar64,1);
        auVar67 = NEON_rbit(auVar67,1);
        *(long *)(*pauVar49 + 8) = auVar64._8_8_;
        *(long *)*pauVar49 = auVar64._0_8_;
        *(long *)(pauVar49[1] + 8) = auVar67._8_8_;
        *(long *)pauVar49[1] = auVar67._0_8_;
        ppauVar19 = ppauVar19 + 8;
      } while (uVar12 != 0);
      if (uVar17 != uVar28) goto LAB_00e193f0;
    }
    qsort(__base,uVar28,8,FUN_00e19838);
    __size = uVar28 * 4;
    lVar13 = (long)__base - (__size + 0xf & 0x7fffffff0);
    pvVar10 = malloc(__size);
    param_1[5] = pvVar10;
    uVar26 = uVar30;
    if (uVar30 < 2) {
      uVar26 = 1;
    }
    uVar12 = (ulong)uVar26;
    if (1 < uVar26) {
      uVar28 = 0;
      uVar17 = uVar12 & 0xfffffffe;
      do {
        plVar3 = (long *)((long)__base + uVar28 * 8);
        iVar31 = (int)uVar28;
        lVar18 = plVar3[1];
        *(int *)(lVar13 + (long)(int)((ulong)(*plVar3 - (long)pvVar9) >> 2) * 4) = iVar31;
        uVar28 = uVar28 + 2;
        *(int *)(lVar13 + (long)(int)((ulong)(lVar18 - (long)pvVar9) >> 2) * 4) = iVar31 + 1;
        if (uVar17 == uVar28) goto joined_r0x00e194ac;
      } while( true );
    }
    uVar17 = 0;
    do {
      *(int *)(lVar13 + (long)(int)((ulong)(*(long *)((long)__base + uVar17 * 8) - (long)pvVar9) >>
                                   2) * 4) = (int)uVar17;
      uVar17 = uVar17 + 1;
joined_r0x00e194ac:
    } while (uVar17 != uVar12);
    if (uVar26 < 2) {
      uVar17 = 0;
LAB_00e19514:
      lVar18 = uVar12 - uVar17;
      piVar24 = (int *)(lVar13 + uVar17 * 4);
      puVar23 = (undefined4 *)((long)pvVar9 + uVar17 * 4);
      do {
        lVar18 = lVar18 + -1;
        *(undefined4 *)((long)pvVar10 + (long)*piVar24 * 4) = *puVar23;
        piVar24 = piVar24 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar18 != 0);
    }
    else {
      uVar17 = uVar12 & 0xfffffffe;
      puVar23 = (undefined4 *)((long)pvVar9 + 4);
      lVar18 = lVar13 + 4;
      uVar28 = uVar17;
      do {
        piVar24 = (int *)(lVar18 + -4);
        iVar31 = *(int *)(lVar18 + 4);
        puVar2 = puVar23 + -1;
        uVar4 = *puVar23;
        puVar23 = puVar23 + 2;
        lVar18 = lVar18 + 8;
        uVar28 = uVar28 - 2;
        *(undefined4 *)((long)pvVar10 + (long)*piVar24 * 4) = *puVar2;
        *(undefined4 *)((long)pvVar10 + (long)iVar31 * 4) = uVar4;
      } while (uVar28 != 0);
      if (uVar17 != uVar12) goto LAB_00e19514;
    }
    free(pvVar9);
    uVar16 = _book_unquantize(param_2,uVar30,lVar13);
    param_1[4] = uVar16;
    pvVar9 = malloc(__size);
    lVar18 = param_2[1];
    param_1[6] = pvVar9;
    if (lVar18 < 1) {
      iVar31 = 0;
    }
    else {
      lVar21 = 0;
      iVar31 = 0;
      lVar25 = param_2[2];
      do {
        if (*(char *)(lVar25 + lVar21) != '\0') {
          *(int *)((long)pvVar9 + (long)*(int *)(lVar13 + (long)iVar31 * 4) * 4) = (int)lVar21;
          iVar31 = iVar31 + 1;
        }
        lVar21 = lVar21 + 1;
      } while (lVar18 != lVar21);
    }
    pvVar9 = malloc((long)iVar31);
    param_1[7] = pvVar9;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    if (lVar18 < 1) {
      uVar30 = 0;
    }
    else {
      uVar26 = 0;
      lVar18 = 0;
      uVar30 = 0;
      lVar21 = param_2[2];
      do {
        if (*(char *)(lVar21 + lVar18) != '\0') {
          *(char *)(param_1[7] + (long)*(int *)(lVar13 + (long)(int)uVar30 * 4)) =
               *(char *)(lVar21 + lVar18);
          uVar30 = uVar30 + 1;
          lVar21 = param_2[2];
          uVar26 = *(uint *)((long)param_1 + 0x4c);
          if ((int)uVar26 < (int)(uint)*(byte *)(lVar21 + lVar18)) {
            uVar26 = (uint)*(byte *)(lVar21 + lVar18);
            *(uint *)((long)param_1 + 0x4c) = uVar26;
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < (long)param_2[1]);
      if ((uVar30 == 1) && (uVar30 = 1, uVar26 == 1)) {
        *(undefined4 *)(param_1 + 9) = 1;
        puVar11 = (undefined8 *)calloc(2,4);
        uVar16 = 0;
        param_1[8] = puVar11;
        *puVar11 = 0x100000001;
        goto LAB_00e19808;
      }
    }
    if (*(uint *)(param_1 + 2) == 0) {
LAB_00e1968c:
      uVar29 = 5;
    }
    else {
      uVar27 = *(uint *)(param_1 + 2);
      uVar26 = 0xffffffff;
      do {
        uVar29 = uVar26;
        uVar26 = uVar29 + 1;
        bVar1 = 1 < uVar27;
        uVar27 = uVar27 >> 1;
      } while (bVar1);
      if (uVar26 < 8) goto LAB_00e1968c;
      uVar29 = uVar29 - 2;
      if (7 < uVar29) {
        uVar29 = 8;
      }
    }
    uVar26 = 1 << (ulong)(uVar29 & 0x1f);
    *(uint *)(param_1 + 9) = uVar29;
    pvVar9 = calloc((ulong)uVar26,4);
    param_1[8] = pvVar9;
    if (0 < (int)uVar30) {
      uVar12 = 0;
      lVar13 = param_1[7];
      do {
        bVar6 = *(byte *)(lVar13 + uVar12);
        uVar27 = (uint)bVar6;
        if (((int)(uint)bVar6 <= (int)uVar29) && (uVar29 - bVar6 != 0x1f)) {
          iVar31 = 0;
          uVar5 = *(uint *)(param_1[5] + uVar12 * 4);
          uVar5 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
          uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          do {
            uVar27 = iVar31 << (ulong)(uVar27 & 0x1f);
            iVar31 = iVar31 + 1;
            *(int *)((long)pvVar9 + (ulong)(uVar27 | uVar5 >> 0x10 | uVar5 << 0x10) * 4) =
                 (int)uVar12 + 1;
            uVar27 = (uint)*(byte *)(lVar13 + uVar12);
          } while (iVar31 < 1 << (ulong)(uVar29 - uVar27 & 0x1f));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar30);
    }
    uVar27 = 0;
    uVar12 = 0;
    lVar18 = (long)(int)uVar30;
    lVar13 = 0;
    do {
      uVar30 = uVar27 << (ulong)(0x20 - uVar29 & 0x1f);
      uVar5 = (uVar30 & 0xaaaaaaaa) >> 1 | (uVar30 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar28 = (ulong)(uVar5 >> 0x10 | uVar5 << 0x10);
      lVar21 = lVar13;
      if (*(int *)((long)pvVar9 + uVar28 * 4) == 0) {
        lVar25 = uVar12 + 1;
        lVar37 = lVar18;
        if (lVar18 < lVar25) {
          lVar37 = uVar12 + 1;
        }
        do {
          lVar55 = lVar25;
          lVar52 = lVar37;
          if (lVar37 == lVar55) break;
          lVar25 = lVar55 + 1;
          lVar52 = lVar55;
        } while (*(uint *)(param_1[5] + lVar55 * 4) <= uVar30);
        uVar12 = lVar52 - 1;
        if (lVar13 < lVar18) {
          do {
            lVar21 = lVar13;
            if (uVar30 < (*(uint *)(param_1[5] + lVar13 * 4) & -2 << (ulong)((uVar29 ^ 0x1f) & 0x1f)
                         )) break;
            lVar13 = lVar13 + 1;
            lVar21 = lVar18;
          } while (lVar18 != lVar13);
        }
        iVar31 = (int)uVar12;
        if (0x7ffe < uVar12) {
          iVar31 = 0x7fff;
        }
        uVar30 = (uint)(lVar18 - lVar21);
        if (0x7ffe < (ulong)(lVar18 - lVar21)) {
          uVar30 = 0x7fff;
        }
        *(uint *)((long)pvVar9 + uVar28 * 4) = uVar30 | iVar31 << 0xf | 0x80000000;
      }
      uVar27 = uVar27 + 1;
      lVar13 = lVar21;
    } while (uVar27 != uVar26);
  }
  uVar16 = 0;
LAB_00e19808:
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}


