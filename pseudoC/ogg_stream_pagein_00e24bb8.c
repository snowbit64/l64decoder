// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_pagein
// Entry Point: 00e24bb8
// Size: 1052 bytes
// Signature: undefined ogg_stream_pagein(void)


undefined8 ogg_stream_pagein(void **param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  void *__n;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  void *pvVar17;
  void *pvVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  ulong uVar24;
  size_t __n_00;
  void *pvVar25;
  byte bVar26;
  void *pvVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  undefined8 uVar40;
  byte bVar42;
  
  if (param_1 == (void **)0x0) {
    return 0xffffffff;
  }
  pvVar17 = *param_1;
  if (pvVar17 == (void *)0x0) {
    return 0xffffffff;
  }
  lVar28 = *param_2;
  pvVar25 = (void *)param_2[2];
  __n_00 = param_2[3];
  bVar3 = *(byte *)(lVar28 + 0xd);
  bVar4 = *(byte *)(lVar28 + 0xc);
  cVar5 = *(char *)(lVar28 + 4);
  bVar6 = *(byte *)(lVar28 + 5);
  bVar7 = *(byte *)(lVar28 + 0xb);
  bVar8 = *(byte *)(lVar28 + 10);
  iVar16 = *(int *)(lVar28 + 0xe);
  bVar9 = *(byte *)(lVar28 + 9);
  uVar2 = *(uint *)(lVar28 + 0x12);
  bVar10 = *(byte *)(lVar28 + 0x1a);
  uVar30 = (ulong)bVar10;
  bVar11 = *(byte *)(lVar28 + 7);
  bVar12 = *(byte *)(lVar28 + 8);
  pvVar27 = param_1[9];
  bVar13 = *(byte *)(lVar28 + 6);
  pvVar18 = param_1[3];
  if (pvVar18 != (void *)0x0) {
    __n = (void *)((long)param_1[2] - (long)pvVar18);
    param_1[2] = __n;
    if (__n != (void *)0x0) {
      memmove(pvVar17,(void *)((long)pvVar17 + (long)pvVar18),(size_t)__n);
    }
    param_1[3] = (void *)0x0;
  }
  if (pvVar27 != (void *)0x0) {
    pvVar17 = (void *)((long)param_1[7] - (long)pvVar27);
    if (pvVar17 != (void *)0x0) {
      memmove(param_1[4],(void *)((long)param_1[4] + (long)pvVar27 * 4),(long)pvVar17 * 4);
      memmove(param_1[5],(void *)((long)param_1[5] + (long)pvVar27 * 8),
              ((long)param_1[7] - (long)pvVar27) * 8);
      pvVar17 = (void *)((long)param_1[7] - (long)pvVar27);
    }
    param_1[9] = (void *)0x0;
    param_1[7] = pvVar17;
    param_1[8] = (void *)((long)param_1[8] - (long)pvVar27);
  }
  if (param_1[0x2f] != (void *)(long)iVar16) {
    return 0xffffffff;
  }
  if (cVar5 != '\0') {
    return 0xffffffff;
  }
  iVar16 = FUN_00e2414c(param_1,uVar30 + 1);
  if (iVar16 != 0) {
    return 0xffffffff;
  }
  bVar26 = bVar6 & 2;
  if ((void *)(ulong)uVar2 == param_1[0x30]) goto LAB_00e24dd4;
  pvVar17 = param_1[7];
  pvVar18 = param_1[8];
  lVar20 = (long)(int)pvVar18;
  uVar21 = (long)pvVar17 - lVar20;
  if (uVar21 != 0 && lVar20 <= (long)pvVar17) {
    pvVar27 = param_1[2];
    if (uVar21 < 8) {
LAB_00e24d98:
      do {
        lVar36 = lVar20 * 4;
        lVar20 = lVar20 + 1;
        pvVar27 = (void *)((long)pvVar27 - (ulong)*(byte *)((long)param_1[4] + lVar36));
      } while (lVar20 < (long)pvVar17);
    }
    else {
      lVar33 = 0;
      uVar24 = uVar21 & 0xfffffffffffffff8;
      lVar31 = 0;
      lVar32 = 0;
      lVar36 = lVar20 * 4;
      lVar20 = lVar20 + uVar24;
      lVar34 = 0;
      lVar35 = 0;
      puVar23 = (undefined8 *)((long)param_1[4] + lVar36 + 0x10);
      lVar36 = 0;
      lVar37 = 0;
      uVar19 = uVar24;
      do {
        puVar1 = puVar23 + -2;
        puVar14 = puVar23 + -1;
        puVar15 = puVar23 + 1;
        uVar40 = *puVar23;
        uVar19 = uVar19 - 8;
        puVar23 = puVar23 + 4;
        bVar38 = (byte)((ulong)*puVar1 >> 0x20);
        bVar39 = (byte)((ulong)*puVar14 >> 0x20);
        bVar41 = (byte)((ulong)uVar40 >> 0x20);
        bVar42 = (byte)((ulong)*puVar15 >> 0x20);
        lVar31 = lVar31 - ((ulong)CONCAT14(bVar39,(uint)(byte)*puVar14) & 0xffffffff);
        lVar32 = lVar32 - (ulong)bVar39;
        pvVar27 = (void *)((long)pvVar27 -
                          ((ulong)CONCAT14(bVar38,(uint)(byte)*puVar1) & 0xffffffff));
        lVar33 = lVar33 - (ulong)bVar38;
        lVar36 = lVar36 - ((ulong)CONCAT14(bVar42,(uint)(byte)*puVar15) & 0xffffffff);
        lVar37 = lVar37 - (ulong)bVar42;
        lVar34 = lVar34 - ((ulong)CONCAT14(bVar41,(uint)(byte)uVar40) & 0xffffffff);
        lVar35 = lVar35 - (ulong)bVar41;
      } while (uVar19 != 0);
      pvVar27 = (void *)((long)pvVar27 +
                        lVar35 + lVar33 + lVar37 + lVar32 + lVar36 + lVar31 + lVar34);
      if (uVar21 != uVar24) goto LAB_00e24d98;
    }
    param_1[2] = pvVar27;
  }
  param_1[7] = pvVar18;
  if (param_1[0x30] != (void *)0xffffffffffffffff) {
    *(undefined4 *)((long)param_1[4] + (long)pvVar18 * 4) = 0x400;
    param_1[7] = (void *)((long)pvVar18 + 1);
    param_1[8] = (void *)((long)pvVar18 + 1);
  }
LAB_00e24dd4:
  if (((bVar6 & 1) == 0) ||
     (((0 < (long)param_1[7] &&
       (uVar29 = *(uint *)((long)param_1[4] + (long)param_1[7] * 4 + -4), uVar29 != 0x400)) &&
      ((uVar29 & 0xff) == 0xff)))) {
    uVar29 = 0;
  }
  else {
    uVar29 = (uint)bVar10;
    if (uVar29 == 0) {
      bVar26 = 0;
      uVar29 = 0;
    }
    else {
      uVar21 = 0;
      do {
        uVar19 = (ulong)*(byte *)(lVar28 + 0x1b + uVar21);
        pvVar25 = (void *)((long)pvVar25 + uVar19);
        __n_00 = __n_00 - uVar19;
        if (uVar19 != 0xff) {
          bVar26 = 0;
          uVar29 = (int)uVar21 + 1;
          goto LAB_00e24e08;
        }
        uVar21 = uVar21 + 1;
      } while (uVar30 != uVar21);
      bVar26 = 0;
    }
  }
LAB_00e24e08:
  if (__n_00 != 0) {
    iVar16 = FUN_00e2405c(param_1,__n_00);
    if (iVar16 != 0) {
      return 0xffffffff;
    }
    memcpy((void *)((long)*param_1 + (long)param_1[2]),pvVar25,__n_00);
    param_1[2] = (void *)((long)param_1[2] + __n_00);
  }
  if ((int)uVar29 < (int)(uint)bVar10) {
    uVar21 = (ulong)uVar29;
    pvVar17 = param_1[7];
    bVar10 = *(byte *)(uVar21 + lVar28 + 0x1b);
    pvVar25 = param_1[4];
    pvVar18 = param_1[5];
    *(uint *)((long)pvVar25 + (long)pvVar17 * 4) = (uint)bVar10;
    *(undefined8 *)((long)pvVar18 + (long)pvVar17 * 8) = 0xffffffffffffffff;
    if (bVar26 != 0) {
      *(uint *)((long)pvVar25 + (long)pvVar17 * 4) = bVar10 | 0x100;
    }
    if (bVar10 == 0xff) {
      pvVar27 = (void *)0xffffffff;
      param_1[7] = (void *)((long)pvVar17 + 1);
    }
    else {
      param_1[7] = (void *)((long)pvVar17 + 1);
      param_1[8] = (void *)((long)pvVar17 + 1);
      pvVar27 = pvVar17;
    }
    pvVar17 = (void *)((long)pvVar17 + 1);
    iVar16 = (int)pvVar27;
    if (uVar21 + 1 != uVar30) {
      pbVar22 = (byte *)(uVar21 + lVar28 + 0x1c);
      lVar28 = ~uVar21 + uVar30;
      do {
        while( true ) {
          iVar16 = (int)pvVar27;
          bVar10 = *pbVar22;
          *(undefined8 *)((long)pvVar18 + (long)pvVar17 * 8) = 0xffffffffffffffff;
          *(uint *)((long)pvVar25 + (long)pvVar17 * 4) = (uint)bVar10;
          if (bVar10 == 0xff) break;
          pvVar27 = (void *)((ulong)pvVar17 & 0xffffffff);
          iVar16 = (int)pvVar17;
          pvVar17 = (void *)((long)pvVar17 + 1);
          param_1[7] = pvVar17;
          param_1[8] = pvVar17;
          pbVar22 = pbVar22 + 1;
          lVar28 = lVar28 + -1;
          if (lVar28 == 0) goto LAB_00e24f3c;
        }
        pvVar17 = (void *)((long)pvVar17 + 1);
        param_1[7] = pvVar17;
        pbVar22 = pbVar22 + 1;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
LAB_00e24f3c:
    if (iVar16 != -1) {
      *(ulong *)((long)param_1[5] + (long)iVar16 * 8) =
           ((ulong)bVar8 << 0x18 | (ulong)bVar9 << 0x10 |
           (ulong)((uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar7) << 0x20) << 8 |
           (ulong)bVar11 << 8 | (ulong)bVar12 << 0x10 | (ulong)bVar13;
    }
  }
  if ((bVar6 >> 2 & 1) != 0) {
    pvVar17 = param_1[7];
    *(undefined4 *)(param_1 + 0x2e) = 1;
    if (0 < (long)pvVar17) {
      *(uint *)((long)param_1[4] + (long)pvVar17 * 4 + -4) =
           *(uint *)((long)param_1[4] + (long)pvVar17 * 4 + -4) | 0x200;
    }
  }
  param_1[0x30] = (void *)((long)(void *)(ulong)uVar2 + 1);
  return 0;
}


