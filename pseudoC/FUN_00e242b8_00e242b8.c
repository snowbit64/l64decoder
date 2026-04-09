// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e242b8
// Entry Point: 00e242b8
// Size: 1132 bytes
// Signature: undefined FUN_00e242b8(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e242b8(long *param_1,long **param_2,int param_3,int param_4)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte9 Var12;
  undefined auVar13 [12];
  undefined4 uVar14;
  unkbyte9 *__dest;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined (*pauVar25) [16];
  uint *puVar26;
  unkbyte9 *pVar27;
  uint uVar28;
  long *plVar29;
  uint uVar30;
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
  int iVar42;
  undefined auVar43 [16];
  undefined auVar44 [16];
  byte bVar45;
  undefined auVar46 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  
  uVar16 = param_1[7];
  if (0xfe < (long)uVar16) {
    uVar16 = 0xff;
  }
  uVar28 = (uint)uVar16;
  if (*param_1 == 0) {
    return 0;
  }
  if (uVar28 == 0) {
    return 0;
  }
  if (*(int *)((long)param_1 + 0x174) == 0) {
    if ((int)uVar28 < 1) {
      uVar28 = 0;
    }
    else {
      uVar15 = 0;
      do {
        if (*(char *)(param_1[4] + uVar15 * 4) != -1) {
          uVar17 = 0;
          uVar28 = (int)uVar15 + 1;
          goto joined_r0x00e24608;
        }
        uVar15 = uVar15 + 1;
      } while ((uVar16 & 0xffffffff) != uVar15);
    }
    uVar17 = 0;
LAB_00e243e8:
    if (param_3 == 0) {
      return 0;
    }
  }
  else if ((int)uVar28 < 1) {
    uVar28 = 0;
    uVar17 = 0xffffffffffffffff;
joined_r0x00e24608:
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    uVar15 = 0;
    iVar31 = 0;
    lVar20 = 0;
    uVar17 = 0xffffffffffffffff;
    iVar32 = 0;
    do {
      while( true ) {
        if ((param_4 < lVar20) && (3 < iVar31)) {
          param_3 = 1;
          uVar28 = (uint)uVar15;
          goto joined_r0x00e243d4;
        }
        bVar45 = *(byte *)(param_1[4] + uVar15 * 4);
        if (bVar45 != 0xff) break;
        iVar31 = 0;
        lVar20 = lVar20 + (ulong)bVar45;
        uVar15 = uVar15 + 1;
        if ((uVar16 & 0xffffffff) == uVar15) goto joined_r0x00e243d4;
      }
      iVar31 = iVar32 + 1;
      uVar17 = *(undefined8 *)(param_1[5] + uVar15 * 8);
      lVar20 = lVar20 + (ulong)bVar45;
      uVar15 = uVar15 + 1;
      iVar32 = iVar31;
    } while ((uVar16 & 0xffffffff) != uVar15);
joined_r0x00e243d4:
    if (uVar28 != 0xff) goto LAB_00e243e8;
    uVar28 = 0xff;
  }
  *(undefined4 *)(param_1 + 10) = 0x5367674f;
  __dest = (unkbyte9 *)param_1[4];
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  bVar45 = ~*(byte *)((long)__dest + 1) & 1;
  *(byte *)((long)param_1 + 0x55) = bVar45;
  if (*(int *)((long)param_1 + 0x174) == 0) {
    bVar45 = bVar45 | 2;
    *(byte *)((long)param_1 + 0x55) = bVar45;
  }
  if ((*(int *)(param_1 + 0x2e) != 0) && (param_1[7] == (long)(int)uVar28)) {
    *(byte *)((long)param_1 + 0x55) = bVar45 | 4;
  }
  *(char *)((long)param_1 + 0x56) = (char)uVar17;
  *(char *)((long)param_1 + 0x57) = (char)((ulong)uVar17 >> 8);
  *(char *)(param_1 + 0xb) = (char)((ulong)uVar17 >> 0x10);
  *(undefined4 *)((long)param_1 + 0x174) = 1;
  *(char *)((long)param_1 + 0x59) = (char)((ulong)uVar17 >> 0x18);
  *(undefined4 *)((long)param_1 + 0x66) = 0;
  *(char *)((long)param_1 + 0x5a) = (char)((ulong)uVar17 >> 0x20);
  lVar20 = 0;
  if (param_1[0x30] != -1) {
    lVar20 = param_1[0x30];
  }
  *(int *)((long)param_1 + 0x5e) = (int)param_1[0x2f];
  *(char *)((long)param_1 + 0x5c) = (char)((ulong)uVar17 >> 0x30);
  *(char *)((long)param_1 + 0x5d) = (char)((ulong)uVar17 >> 0x38);
  param_1[0x30] = lVar20 + 1;
  *(char *)((long)param_1 + 0x5b) = (char)((ulong)uVar17 >> 0x28);
  *(char *)((long)param_1 + 0x62) = (char)lVar20;
  *(char *)((long)param_1 + 99) = (char)((ulong)lVar20 >> 8);
  *(char *)((long)param_1 + 100) = (char)((ulong)lVar20 >> 0x10);
  *(char *)((long)param_1 + 0x65) = (char)((ulong)lVar20 >> 0x18);
  *(char *)((long)param_1 + 0x6a) = (char)uVar28;
  Var12 = _DAT_004c3bd0;
  if ((int)uVar28 < 1) {
    plVar29 = (long *)0x0;
    goto LAB_00e2452c;
  }
  uVar16 = (ulong)uVar28;
  if ((uVar28 < 8) ||
     (((long)param_1 + 0x6bU < (long)__dest + uVar16 * 4 &&
      (__dest < (unkbyte9 *)((long)param_1 + uVar16 + 0x6b))))) {
    uVar15 = 0;
    uVar30 = 0;
LAB_00e244fc:
    lVar20 = uVar16 - uVar15;
    puVar23 = (undefined *)((long)param_1 + uVar15 + 0x6b);
    puVar26 = (uint *)((long)__dest + uVar15 * 4);
    do {
      lVar20 = lVar20 + -1;
      uVar30 = uVar30 + (*puVar26 & 0xff);
      *puVar23 = (char)*puVar26;
      puVar23 = puVar23 + 1;
      puVar26 = puVar26 + 1;
    } while (lVar20 != 0);
  }
  else if (uVar28 < 0x10) {
    uVar30 = 0;
    uVar19 = 0;
LAB_00e246b8:
    auVar13 = _DAT_004c4870;
    iVar32 = 0;
    iVar33 = 0;
    uVar15 = uVar16 & 0xfffffff8;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar31 = 0;
    lVar20 = uVar19 - uVar15;
    pauVar25 = (undefined (*) [16])((long)__dest + uVar19 * 4);
    puVar22 = (undefined8 *)((long)param_1 + uVar19 + 0x6b);
    do {
      auVar46 = *pauVar25;
      uVar2 = *(undefined8 *)(pauVar25[1] + 8);
      bVar45 = (byte)((ulong)uVar2 >> 0x20);
      uVar17 = *(undefined8 *)pauVar25[1];
      lVar20 = lVar20 + 8;
      auVar44._12_4_ = 0xffffffff;
      auVar44._0_12_ = auVar13;
      auVar1[9] = (char)((ulong)uVar2 >> 8);
      auVar1._0_9_ = *(unkbyte9 *)pauVar25[1];
      auVar1[10] = (char)((ulong)uVar2 >> 0x10);
      auVar1[11] = (char)((ulong)uVar2 >> 0x18);
      auVar1[12] = bVar45;
      auVar1[13] = (char)((ulong)uVar2 >> 0x28);
      auVar1[14] = (char)((ulong)uVar2 >> 0x30);
      auVar1[15] = (char)((ulong)uVar2 >> 0x38);
      auVar44 = a64_TBL(ZEXT816(0),auVar46,auVar1,auVar44);
      uVar30 = auVar46[0] + uVar30;
      iVar31 = (uint)auVar46[4] + iVar31;
      iVar32 = (uint)auVar46[8] + iVar32;
      iVar33 = (uint)auVar46[12] + iVar33;
      iVar34 = (uint)(byte)uVar17 + iVar34;
      iVar35 = (uint)(byte)((ulong)uVar17 >> 0x20) + iVar35;
      iVar36 = (uint)(byte)uVar2 + iVar36;
      iVar37 = (uint)bVar45 + iVar37;
      *puVar22 = auVar44._0_8_;
      pauVar25 = pauVar25 + 2;
      puVar22 = puVar22 + 1;
    } while (lVar20 != 0);
    uVar30 = uVar30 + iVar34 + iVar31 + iVar35 + iVar32 + iVar36 + iVar33 + iVar37;
    if (uVar15 != uVar16) goto LAB_00e244fc;
  }
  else {
    uVar15 = uVar16 & 0xfffffff0;
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
    iVar42 = 0;
    puVar22 = (undefined8 *)((long)param_1 + 0x6b);
    uVar19 = uVar15;
    pVar27 = __dest;
    auVar44 = ZEXT816(0);
    do {
      uVar8 = *(undefined8 *)((long)pVar27 + 0x28);
      bVar48 = (byte)((ulong)uVar8 >> 0x20);
      uVar7 = *(undefined8 *)(pVar27 + 2);
      uVar11 = *(undefined8 *)((long)pVar27 + 0x38);
      bVar49 = (byte)((ulong)uVar11 >> 0x20);
      uVar10 = *(undefined8 *)(pVar27 + 3);
      uVar19 = uVar19 - 0x10;
      uVar17 = *(undefined8 *)((long)pVar27 + 8);
      bVar45 = (byte)((ulong)uVar17 >> 0x20);
      uVar5 = *(undefined8 *)((long)pVar27 + 0x18);
      bVar47 = (byte)((ulong)uVar5 >> 0x20);
      uVar2 = *(undefined8 *)(pVar27 + 1);
      iVar39 = (uint)(byte)uVar7 + iVar39;
      iVar40 = (uint)(byte)((ulong)uVar7 >> 0x20) + iVar40;
      iVar41 = (uint)(byte)uVar8 + iVar41;
      iVar42 = (uint)bVar48 + iVar42;
      auVar46[9] = 0x24;
      auVar46._0_9_ = Var12;
      auVar46[10] = 0x28;
      auVar46[11] = 0x2c;
      auVar46[12] = 0x30;
      auVar46[13] = 0x34;
      auVar46[14] = 0x38;
      auVar46[15] = 0x3c;
      auVar3[9] = (char)((ulong)uVar17 >> 8);
      auVar3._0_9_ = *pVar27;
      auVar3[10] = (char)((ulong)uVar17 >> 0x10);
      auVar3[11] = (char)((ulong)uVar17 >> 0x18);
      auVar3[12] = bVar45;
      auVar3[13] = (char)((ulong)uVar17 >> 0x28);
      auVar3[14] = (char)((ulong)uVar17 >> 0x30);
      auVar3[15] = (char)((ulong)uVar17 >> 0x38);
      auVar4[9] = (char)((ulong)uVar5 >> 8);
      auVar4._0_9_ = pVar27[1];
      auVar4[10] = (char)((ulong)uVar5 >> 0x10);
      auVar4[11] = (char)((ulong)uVar5 >> 0x18);
      auVar4[12] = bVar47;
      auVar4[13] = (char)((ulong)uVar5 >> 0x28);
      auVar4[14] = (char)((ulong)uVar5 >> 0x30);
      auVar4[15] = (char)((ulong)uVar5 >> 0x38);
      auVar6[9] = (char)((ulong)uVar8 >> 8);
      auVar6._0_9_ = pVar27[2];
      auVar6[10] = (char)((ulong)uVar8 >> 0x10);
      auVar6[11] = (char)((ulong)uVar8 >> 0x18);
      auVar6[12] = bVar48;
      auVar6[13] = (char)((ulong)uVar8 >> 0x28);
      auVar6[14] = (char)((ulong)uVar8 >> 0x30);
      auVar6[15] = (char)((ulong)uVar8 >> 0x38);
      auVar9[9] = (char)((ulong)uVar11 >> 8);
      auVar9._0_9_ = pVar27[3];
      auVar9[10] = (char)((ulong)uVar11 >> 0x10);
      auVar9[11] = (char)((ulong)uVar11 >> 0x18);
      auVar9[12] = bVar49;
      auVar9[13] = (char)((ulong)uVar11 >> 0x28);
      auVar9[14] = (char)((ulong)uVar11 >> 0x30);
      auVar9[15] = (char)((ulong)uVar11 >> 0x38);
      auVar46 = a64_TBL(ZEXT816(0),auVar3,auVar4,auVar6,auVar9,auVar46);
      iVar31 = (uint)(byte)*(undefined8 *)pVar27 + iVar31;
      iVar32 = (uint)(byte)((ulong)*(undefined8 *)pVar27 >> 0x20) + iVar32;
      iVar33 = (uint)(byte)uVar17 + iVar33;
      iVar34 = (uint)bVar45 + iVar34;
      puVar22[1] = auVar46._8_8_;
      *puVar22 = auVar46._0_8_;
      iVar35 = (uint)(byte)uVar2 + iVar35;
      iVar36 = (uint)(byte)((ulong)uVar2 >> 0x20) + iVar36;
      iVar37 = (uint)(byte)uVar5 + iVar37;
      iVar38 = (uint)bVar47 + iVar38;
      auVar43._0_4_ = (uint)(byte)uVar10 + auVar44._0_4_;
      auVar43._4_4_ = (uint)(byte)((ulong)uVar10 >> 0x20) + auVar44._4_4_;
      auVar43._8_4_ = (uint)(byte)uVar11 + auVar44._8_4_;
      auVar43._12_4_ = (uint)bVar49 + auVar44._12_4_;
      puVar22 = puVar22 + 2;
      pVar27 = pVar27 + 4;
      auVar44 = auVar43;
    } while (uVar19 != 0);
    uVar30 = iVar31 + iVar39 + iVar35 + auVar43._0_4_ + iVar32 + iVar40 + iVar36 + auVar43._4_4_ +
             iVar33 + iVar41 + iVar37 + auVar43._8_4_ + iVar34 + iVar42 + iVar38 + auVar43._12_4_;
    if (uVar15 != uVar16) {
      uVar19 = uVar15;
      if ((uVar28 >> 3 & 1) == 0) goto LAB_00e244fc;
      goto LAB_00e246b8;
    }
  }
  plVar29 = (long *)(ulong)uVar30;
LAB_00e2452c:
  lVar21 = param_1[7];
  lVar20 = *param_1;
  lVar24 = param_1[3];
  *(uint *)((long)param_1 + 0x16c) = uVar28 + 0x1b;
  *param_2 = param_1 + 10;
  param_2[1] = (long *)(long)(int)(uVar28 + 0x1b);
  param_1[7] = lVar21 - (int)uVar28;
  param_2[2] = (long *)(lVar20 + lVar24);
  param_2[3] = plVar29;
  memmove(__dest,(void *)((long)__dest + (long)(int)uVar28 * 4),(lVar21 - (int)uVar28) * 4);
  memmove((void *)param_1[5],(void *)((long)(void *)param_1[5] + (long)(int)uVar28 * 8),
          param_1[7] << 3);
  plVar18 = *param_2;
  param_1[3] = param_1[3] + (long)plVar29;
  *(undefined *)((long)plVar18 + 0x16) = 0;
  *(undefined *)((long)*param_2 + 0x17) = 0;
  *(undefined *)(*param_2 + 3) = 0;
  *(undefined *)((long)*param_2 + 0x19) = 0;
  plVar29 = *param_2;
  uVar17 = FUN_00e23d20(0,plVar29,*(undefined4 *)(param_2 + 1));
  uVar14 = FUN_00e23d20(uVar17,param_2[2],*(undefined4 *)(param_2 + 3));
  *(char *)((long)plVar29 + 0x16) = (char)uVar14;
  *(char *)((long)*param_2 + 0x17) = (char)((uint)uVar14 >> 8);
  *(char *)(*param_2 + 3) = (char)((uint)uVar14 >> 0x10);
  *(char *)((long)*param_2 + 0x19) = (char)((uint)uVar14 >> 0x18);
                    /* WARNING: Read-only address (ram,0x004c3bd0) is written */
                    /* WARNING: Read-only address (ram,0x004c4870) is written */
  return 1;
}


