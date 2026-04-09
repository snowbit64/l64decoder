// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10a70
// Entry Point: 00f10a70
// Size: 1364 bytes
// Signature: undefined FUN_00f10a70(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00f10a70(ulong param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  bool bVar20;
  bool bVar21;
  undefined2 *puVar22;
  undefined2 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulong uVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  undefined uVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined2 auStack_40 [2];
  undefined8 auStack_3c [2];
  long local_28;
  
  lVar29 = tpidr_el0;
  local_28 = *(long *)(lVar29 + 0x28);
  lVar24 = -((long)param_1 >> 0x3f);
  uVar30 = (uint)(param_1 >> 0x34) & 0x7ff;
  param_1 = param_1 & 0xfffffffffffff;
  if (uVar30 == 0x7ff) {
    puVar22 = (undefined2 *)FUN_00f10fc4(param_2);
    if (*(long *)(lVar29 + 0x28) == local_28) {
      return;
    }
    goto LAB_00f10fc0;
  }
  puVar1 = (undefined8 *)(param_2 + lVar24);
  *param_2 = 0x2d;
  if ((param_1 == 0) && (uVar30 == 0)) {
    puVar22 = (undefined2 *)((long)puVar1 + 1);
    *(undefined *)puVar1 = 0x30;
    if (*(long *)(lVar29 + 0x28) == local_28) {
      return;
    }
    goto LAB_00f10fc0;
  }
  iVar37 = -0x432;
  if (uVar30 != 0) {
    param_1 = param_1 | 0x10000000000000;
    iVar37 = uVar30 - 0x433;
  }
  uVar30 = -iVar37;
  if ((uVar30 < 0x35) && ((param_1 & (-1L << ((ulong)uVar30 & 0x3f) ^ 0xffffffffffffffffU)) == 0)) {
    iVar31 = 0;
    param_1 = param_1 >> ((ulong)uVar30 & 0x3f);
  }
  else {
    iVar31 = -0x1ffc0;
    uVar30 = (uint)(param_1 == 0x10000000000000 && iVar37 != -0x432);
    if (uVar30 == 0) {
      iVar31 = 0;
    }
    iVar31 = iVar31 + iVar37 * 0x4d104 >> 0x14;
    uVar28 = 0x124U - iVar31 & 0xf;
    lVar41 = (ulong)(0x124U - iVar31 >> 4) * 0x18;
    uVar25 = (ulong)(iVar37 + (iVar31 * -0x35269e >> 0x14) + 1);
    uVar45 = *(ulong *)(&DAT_0056fca0 + (ulong)uVar28 * 8);
    uVar33 = (ulong)((uint)param_1 & 1);
    uVar38 = (param_1 << 2 | (ulong)uVar30) - 2 << (uVar25 & 0x3f);
    uVar44 = (param_1 << 2) << (uVar25 & 0x3f);
    uVar27 = uVar45 * *(ulong *)(&DAT_0056f8f8 + lVar41);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar45;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(&DAT_0056f900 + lVar41);
    uVar26 = SUB168(auVar4 * auVar12,8);
    uVar36 = *(ulong *)(&DAT_0056f908 + lVar41) >> (uVar28 << 2);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar45;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulong *)(&DAT_0056f8f8 + lVar41);
    lVar41 = SUB168(auVar5 * auVar13,8);
    uVar43 = uVar36 >> 3 & 1;
    uVar45 = uVar26 + uVar27;
    if (CARRY8(uVar26,uVar27)) {
      lVar41 = lVar41 + 1;
    }
    uVar26 = (lVar41 << uVar43) + (uVar36 >> 3 & uVar45 >> 0x3f);
    uVar45 = ((uVar45 << uVar43) - (uVar36 & 7)) + 4;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar45;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar38;
    uVar36 = SUB168(auVar6 * auVar14,8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar26;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar38;
    uVar27 = SUB168(auVar7 * auVar15,8);
    uVar43 = (param_1 << 2 | 2) << (uVar25 & 0x3f);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar45;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar44;
    uVar25 = SUB168(auVar8 * auVar16,8);
    if (CARRY8(uVar26 * uVar38,uVar36)) {
      uVar27 = uVar27 + 1;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar26;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar44;
    uVar32 = SUB168(auVar9 * auVar17,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar45;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar43;
    uVar45 = SUB168(auVar10 * auVar18,8);
    if (CARRY8(uVar26 * uVar44,uVar25)) {
      uVar32 = uVar32 + 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar43;
    uVar39 = SUB168(auVar11 * auVar19,8);
    if (CARRY8(uVar26 * uVar43,uVar45)) {
      uVar39 = uVar39 + 1;
    }
    uVar27 = uVar27 | 1 < uVar26 * uVar38 + uVar36;
    uVar25 = uVar32 | 1 < uVar26 * uVar44 + uVar25;
    uVar39 = uVar39 | 1 < uVar26 * uVar43 + uVar45;
    if (0x27 < uVar25) {
      param_1 = uVar32 / 0x28;
      uVar45 = param_1 * 0x28;
      bVar21 = (uVar33 | param_1 * 0x28) + 0x28 <= uVar39;
      if (bVar21) {
        param_1 = param_1 + 1;
      }
      if (uVar45 < uVar27 + uVar33 == bVar21) {
        iVar31 = iVar31 + 1;
        goto LAB_00f10cf8;
      }
    }
    bVar21 = (uVar32 & 0xfffffffffffffffc | uVar33) + 4 <= uVar39;
    bVar20 = (uVar32 | 3) - (uVar32 >> 2 & 1) <= uVar25;
    if ((uVar32 & 0xfffffffffffffffc) < uVar27 + uVar33 == bVar21) {
      bVar20 = bVar21;
    }
    param_1 = (uVar32 >> 2) + (ulong)bVar20;
  }
LAB_00f10cf8:
  puVar34 = auStack_3c;
  if (param_1 >> 4 < 0x271) {
    puVar35 = auStack_3c;
    if (9 < (uint)param_1) goto LAB_00f10d8c;
LAB_00f10e1c:
    iVar37 = (int)param_1;
    iVar42 = iVar37;
  }
  else {
    do {
      uVar45 = param_1 / 10000;
      uVar28 = (int)param_1 + (uint)uVar45 * -10000;
      uVar30 = (uVar28 >> 2 & 0x3fff) / 0x19;
      uVar3 = *(undefined2 *)
               (
               "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               + ((ulong)(uVar28 + uVar30 * -100) & 0xffff) * 2);
      puVar35 = (undefined8 *)((long)puVar34 + -4);
      *(undefined2 *)puVar35 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)uVar30 * 2);
      *(undefined2 *)((long)puVar34 + -2) = uVar3;
      bVar21 = 99999999 < param_1;
      puVar34 = puVar35;
      param_1 = uVar45;
    } while (bVar21);
    if ((uint)uVar45 < 10) goto LAB_00f10e1c;
LAB_00f10d8c:
    do {
      uVar45 = param_1 & 0xffffffff;
      uVar30 = (uint)param_1;
      iVar37 = (int)(uVar45 / 100);
      puVar35 = (undefined8 *)((long)puVar35 + -2);
      *(undefined2 *)puVar35 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar30 + (int)(uVar45 / 100) * -100) * 2);
      param_1 = uVar45 / 100;
    } while (999 < uVar30);
    iVar42 = (int)(uVar45 / 100);
  }
  if (iVar42 != 0) {
    puVar35 = (undefined8 *)((long)puVar35 + -1);
    *(char *)puVar35 = (char)iVar37 + '0';
  }
  iVar37 = (int)auStack_3c - (int)puVar35;
  uVar30 = iVar31 + iVar37;
  uVar45 = (ulong)uVar30;
  if (uVar30 + 5 < 0x1b) {
    if ((int)uVar30 < 1) {
      param_2[lVar24] = 0x30;
      *(undefined4 *)((long)puVar1 + 2) = 0x30303030;
      *(undefined *)((long)puVar1 + 6) = 0x30;
      puVar34 = (undefined8 *)((long)(undefined4 *)((long)puVar1 + 2) + (ulong)-uVar30);
      *(undefined *)((long)puVar1 + 1) = 0x2e;
      uVar47 = puVar35[1];
      uVar46 = *puVar35;
      puVar22 = (undefined2 *)(param_2 + lVar24 + iVar37 + (ulong)-uVar30 + 3);
      *(undefined *)(puVar34 + 2) = *(undefined *)(puVar35 + 2);
      puVar34[1] = uVar47;
      *puVar34 = uVar46;
      do {
        puVar23 = puVar22 + -1;
        puVar22 = (undefined2 *)((long)puVar22 + -1);
      } while (*(char *)puVar23 == '0');
LAB_00f10f88:
      lVar29 = *(long *)(lVar29 + 0x28);
    }
    else if (iVar31 == 0) {
      uVar47 = puVar35[1];
      uVar46 = *puVar35;
      *(undefined *)(puVar1 + 2) = *(undefined *)(puVar35 + 2);
      puVar1[1] = uVar47;
      *puVar1 = uVar46;
      puVar22 = (undefined2 *)((long)puVar1 + uVar45);
      lVar29 = *(long *)(lVar29 + 0x28);
    }
    else {
      if (iVar31 < 0) {
        uVar46 = *puVar35;
        puVar2 = (undefined *)((long)puVar1 + uVar45);
        puVar1[1] = puVar35[1];
        *puVar1 = uVar46;
        *puVar2 = 0x2e;
        uVar46 = *(undefined8 *)((long)puVar35 + uVar45);
        puVar22 = (undefined2 *)(param_2 + lVar24 + iVar37 + 2);
        *(undefined8 *)(puVar2 + 9) = ((undefined8 *)((long)puVar35 + uVar45))[1];
        *(undefined8 *)(puVar2 + 1) = uVar46;
        do {
          puVar23 = puVar22 + -1;
          puVar22 = (undefined2 *)((long)puVar22 + -1);
        } while (*(char *)puVar23 == '0');
        goto LAB_00f10f88;
      }
      uVar47 = puVar35[1];
      uVar46 = *puVar35;
      *(undefined *)(puVar1 + 2) = *(undefined *)(puVar35 + 2);
      puVar1[1] = uVar47;
      *puVar1 = uVar46;
      *(undefined8 *)((long)puVar1 + (long)iVar37) = 0x3030303030303030;
      puVar22 = (undefined2 *)((long)puVar1 + uVar45);
      lVar29 = *(long *)(lVar29 + 0x28);
    }
  }
  else {
    param_2[lVar24] = *(undefined *)puVar35;
    *(undefined *)((long)puVar1 + 1) = 0x2e;
    uVar46 = *(undefined8 *)((long)puVar35 + 1);
    *(undefined8 *)((long)puVar1 + 10) = *(undefined8 *)((long)puVar35 + 9);
    *(undefined8 *)((long)puVar1 + 2) = uVar46;
    puVar23 = (undefined2 *)(param_2 + lVar24 + iVar37 + 5);
    do {
      puVar22 = puVar23;
      puVar23 = (undefined2 *)((long)puVar22 + -1);
    } while (*(char *)((long)puVar22 + -5) == '0');
    uVar40 = 0x2d;
    uVar28 = 1 - uVar30;
    if (0 < (int)uVar30) {
      uVar40 = 0x2b;
      uVar28 = uVar30 - 1;
    }
    *(undefined *)(puVar22 + -2) = 0x65;
    *(undefined *)((long)puVar22 + -3) = uVar40;
    if ((int)uVar28 < 100) {
      puVar23 = puVar22 + -1;
    }
    else {
      uVar30 = uVar28 / 100;
      uVar28 = uVar28 % 100;
      *(char *)(puVar22 + -1) = (char)uVar30 + '0';
    }
    puVar22 = puVar23 + 1;
    *puVar23 = *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (ulong)uVar28 * 2);
    lVar29 = *(long *)(lVar29 + 0x28);
  }
  if (lVar29 == local_28) {
    return;
  }
LAB_00f10fc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar22);
}


