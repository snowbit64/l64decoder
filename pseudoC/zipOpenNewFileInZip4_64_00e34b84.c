// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipOpenNewFileInZip4_64
// Entry Point: 00e34b84
// Size: 2684 bytes
// Signature: undefined zipOpenNewFileInZip4_64(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined8 param_15, undefined8 param_16, undefined8 param_17, undefined8 param_18, undefined4 param_19)


void zipOpenNewFileInZip4_64
               (long param_1,char *param_2,uint *param_3,undefined8 param_4,undefined4 param_5,
               undefined *param_6,uint param_7,char *param_8,uint param_9,uint param_10,
               undefined4 param_11,int param_12,undefined4 param_13,undefined4 param_14,
               byte *param_15,undefined8 param_16,ulong param_17,ulong param_18,undefined4 param_19)

{
  ulong *puVar1;
  bool bVar2;
  char *__s;
  undefined uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  time_t tVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  byte local_80;
  byte local_7f;
  byte local_7e;
  byte local_7d;
  byte local_7c;
  byte local_7b;
  byte local_7a;
  byte local_79;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  byte local_74 [12];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = 0xffffff9a;
  if (((param_1 == 0) || ((param_9 & 0xfffffff7) != 0)) ||
     ((*(int *)(param_1 + 0x70) == 1 &&
      (uVar6 = zipCloseFileInZipRaw64(param_1,0,0), (int)uVar6 != 0)))) goto LAB_00e35574;
  puVar1 = (ulong *)(param_1 + 0x10128);
  __s = "-";
  if (param_2 != (char *)0x0) {
    __s = param_2;
  }
  if (param_8 == (char *)0x0) {
    uVar19 = 0;
  }
  else {
    sVar7 = strlen(param_8);
    uVar19 = (uint)sVar7;
  }
  sVar7 = strlen(__s);
  if (param_3 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(ulong *)(param_3 + 6);
    if (uVar11 == 0) {
      uVar17 = param_3[5];
      uVar12 = (ulong)uVar17;
      uVar11 = uVar12 - 0x50;
      if (uVar17 < 0x50) {
        uVar11 = uVar12;
      }
      uVar12 = uVar12 - 0x7bc;
      if (uVar17 < 0x7bc) {
        uVar12 = uVar11;
      }
      uVar11 = (ulong)(param_3[1] * 0x20 + (*param_3 >> 1)) + (ulong)param_3[2] * 0x800 |
               ((ulong)(param_3[3] + param_3[4] * 0x20 + 0x20) + uVar12 * 0x200) * 0x10000;
    }
  }
  *puVar1 = uVar11;
  uVar11 = param_18 | 2;
  if ((param_10 & 0xfffffffe) != 8) {
    uVar11 = param_18;
  }
  *(ulong *)(param_1 + 0x118) = uVar11;
  if (param_10 == 2) {
    uVar12 = 4;
LAB_00e34cfc:
    uVar11 = uVar11 | uVar12;
    *(ulong *)(param_1 + 0x118) = uVar11;
  }
  else if (param_10 == 1) {
    uVar12 = 6;
    goto LAB_00e34cfc;
  }
  if (param_15 != (byte *)0x0) {
    *(ulong *)(param_1 + 0x118) = uVar11 | 1;
  }
  *(undefined8 *)(param_1 + 0x10130) = 0;
  *(uint *)(param_1 + 0x120) = param_9;
  *(undefined4 *)(param_1 + 0x10138) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x124) = param_11;
  uVar11 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x58));
  iVar20 = (int)sVar7;
  uVar12 = (ulong)(param_7 + uVar19 + iVar20 + 0x2e);
  *(ulong *)(param_1 + 0xf0) = uVar11;
  *(ulong *)(param_1 + 0x108) = uVar12;
  *(undefined8 *)(param_1 + 0x110) = 0x20;
  puVar8 = (undefined4 *)malloc(uVar12 + 0x20);
  uVar12 = (ulong)param_7;
  *(char *)(puVar8 + 1) = (char)param_17;
  *(undefined4 **)(param_1 + 0xf8) = puVar8;
  *(ulong *)(param_1 + 0x100) = uVar12;
  *puVar8 = 0x2014b50;
  *(char *)((long)puVar8 + 5) = (char)(param_17 >> 8);
  if (0xffff < param_17) {
    *(undefined2 *)(puVar8 + 1) = 0xffff;
  }
  uVar13 = *(ulong *)(param_1 + 0x118);
  *(undefined2 *)((long)puVar8 + 6) = 0x14;
  *(short *)(puVar8 + 2) = (short)uVar13;
  if (uVar13 < 0x10000) {
    uVar17 = *(uint *)(param_1 + 0x120);
    *(short *)((long)puVar8 + 10) = (short)uVar17;
    if (0xffff < uVar17) goto LAB_00e34e64;
LAB_00e34db8:
    uVar13 = *puVar1;
    puVar8[3] = (int)uVar13;
  }
  else {
    *(undefined2 *)(puVar8 + 2) = 0xffff;
    uVar17 = *(uint *)(param_1 + 0x120);
    *(short *)((long)puVar8 + 10) = (short)uVar17;
    if (uVar17 < 0x10000) goto LAB_00e34db8;
LAB_00e34e64:
    *(undefined2 *)((long)puVar8 + 10) = 0xffff;
    uVar13 = *puVar1;
    puVar8[3] = (int)uVar13;
  }
  if (uVar13 >> 0x20 != 0) {
    puVar8[3] = 0xffffffff;
  }
  uVar13 = sVar7 & 0xffffffff;
  *(undefined8 *)(puVar8 + 4) = 0;
  puVar8[6] = 0;
  *(char *)(puVar8 + 7) = (char)sVar7;
  *(char *)((long)puVar8 + 0x1d) = (char)(sVar7 >> 8);
  uVar3 = (undefined)(param_7 >> 8);
  if (uVar13 < 0x10000) {
    *(char *)((long)puVar8 + 0x1e) = (char)param_7;
    *(undefined *)((long)puVar8 + 0x1f) = uVar3;
    if (0xffff < param_7) goto LAB_00e34e9c;
LAB_00e34e04:
    *(short *)(puVar8 + 8) = (short)uVar19;
    if (0xffff < uVar19) goto LAB_00e34eb0;
LAB_00e34e10:
    *(undefined2 *)((long)puVar8 + 0x22) = 0;
    if (param_3 == (uint *)0x0) goto LAB_00e34ec0;
LAB_00e34e18:
    uVar14 = *(ulong *)(param_3 + 8);
    *(short *)(puVar8 + 9) = (short)uVar14;
    if (uVar14 < 0x10000) {
      uVar14 = *(ulong *)(param_3 + 10);
      *(int *)((long)puVar8 + 0x26) = (int)uVar14;
    }
    else {
      *(undefined2 *)(puVar8 + 9) = 0xffff;
      uVar14 = *(ulong *)(param_3 + 10);
      *(int *)((long)puVar8 + 0x26) = (int)uVar14;
    }
    if (uVar14 >> 0x20 != 0) {
      *(undefined4 *)((long)puVar8 + 0x26) = 0xffffffff;
    }
    if (uVar11 < 0xffffffff) goto LAB_00e34f10;
LAB_00e34f24:
    *(undefined4 *)((long)puVar8 + 0x2a) = 0xffffffff;
  }
  else {
    *(undefined2 *)(puVar8 + 7) = 0xffff;
    *(char *)((long)puVar8 + 0x1e) = (char)param_7;
    *(undefined *)((long)puVar8 + 0x1f) = uVar3;
    if (param_7 < 0x10000) goto LAB_00e34e04;
LAB_00e34e9c:
    *(undefined2 *)((long)puVar8 + 0x1e) = 0xffff;
    *(short *)(puVar8 + 8) = (short)uVar19;
    if (uVar19 < 0x10000) goto LAB_00e34e10;
LAB_00e34eb0:
    *(undefined2 *)(puVar8 + 8) = 0xffff;
    *(undefined2 *)((long)puVar8 + 0x22) = 0;
    if (param_3 != (uint *)0x0) goto LAB_00e34e18;
LAB_00e34ec0:
    *(undefined2 *)(puVar8 + 9) = 0;
    *(undefined4 *)((long)puVar8 + 0x26) = 0;
    if (0xfffffffe < uVar11) goto LAB_00e34f24;
LAB_00e34f10:
    uVar11 = uVar11 - *(long *)(param_1 + 0x10188);
    *(int *)((long)puVar8 + 0x2a) = (int)uVar11;
    if (uVar11 >> 0x20 != 0) goto LAB_00e34f24;
  }
  if ((iVar20 != 0) && (*(char *)((long)puVar8 + 0x2e) = *__s, iVar20 != 1)) {
    lVar15 = 0;
    do {
      lVar18 = lVar15 + 1;
      lVar21 = *(long *)(param_1 + 0xf8) + lVar15;
      lVar15 = lVar15 + 1;
      *(char *)(lVar21 + 0x2f) = __s[lVar18];
    } while (uVar13 - 1 != lVar15);
  }
  if (param_7 != 0) {
    lVar15 = uVar13 + 0x2e;
    uVar11 = uVar12;
    do {
      uVar11 = uVar11 - 1;
      *(undefined *)(*(long *)(param_1 + 0xf8) + lVar15) = *param_6;
      lVar15 = lVar15 + 1;
      param_6 = param_6 + 1;
    } while (uVar11 != 0);
  }
  if (uVar19 != 0) {
    uVar11 = (ulong)uVar19;
    lVar15 = uVar12 + uVar13 + 0x2e;
    do {
      uVar11 = uVar11 - 1;
      *(char *)(*(long *)(param_1 + 0xf8) + lVar15) = *param_8;
      lVar15 = lVar15 + 1;
      param_8 = param_8 + 1;
    } while (uVar11 != 0);
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    uVar6 = 0xffffff98;
    goto LAB_00e35574;
  }
  *(undefined4 *)(param_1 + 0x1013c) = param_19;
  *(undefined8 *)(param_1 + 0x10148) = 0;
  *(undefined8 *)(param_1 + 0x10150) = 0;
  *(undefined8 *)(param_1 + 0x10140) = 0;
  uVar6 = Write_LocalFileHeader(param_1,__s,param_5,param_4);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x10000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(long *)(param_1 + 0x90) = param_1 + 0x128;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((int)uVar6 == 0) {
    if ((*(int *)(param_1 + 0x120) == 8) && (*(int *)(param_1 + 0x124) == 0)) {
      iVar20 = -param_12;
      if (-1 < param_12) {
        iVar20 = param_12;
      }
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      uVar6 = deflateInit2_(param_1 + 0x78,param_10,8,-iVar20,param_13,param_14,"1.2.11",0x70);
      if ((int)uVar6 != 0) goto LAB_00e35004;
      *(undefined4 *)(param_1 + 0xe8) = 8;
      *(undefined4 *)(param_1 + 0x10178) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10178) = 0;
    }
    if (param_15 != (byte *)0x0) {
      *(undefined4 *)(param_1 + 0x10138) = 1;
      lVar15 = get_crc_table();
      *(long *)(param_1 + 0x10170) = lVar15;
      iVar20 = DAT_02122f78 + 1;
      bVar2 = DAT_02122f78 == 0;
      DAT_02122f78 = iVar20;
      if (bVar2) {
        tVar9 = time((time_t *)0x0);
        srand((uint)tVar9 ^ 0xbb40e64e);
      }
      uVar11 = 0x34567890;
      lVar21 = 0x23456789;
      *(undefined8 *)(param_1 + 0x10168) = 0x34567890;
      uVar12 = 0x12345678;
      *(undefined8 *)(param_1 + 0x10160) = 0x23456789;
      *(undefined8 *)(param_1 + 0x10158) = 0x12345678;
      uVar19 = (uint)*param_15;
      if (*param_15 != 0) {
        uVar13 = 0x34567890;
        lVar18 = 0x23456789;
        uVar14 = 0x12345678;
        pbVar10 = param_15;
        do {
          pbVar10 = pbVar10 + 1;
          uVar14 = (ulong)*(uint *)(lVar15 + ((ulong)((uint)uVar14 ^ uVar19) & 0xff) * 4) ^
                   uVar14 >> 8;
          lVar18 = (lVar18 + (uVar14 & 0xff)) * 0x8088405 + 1;
          *(ulong *)(param_1 + 0x10158) = uVar14;
          *(long *)(param_1 + 0x10160) = lVar18;
          uVar13 = (ulong)*(uint *)(lVar15 + ((ulong)((uint)uVar13 ^ (uint)lVar18 >> 0x18) & 0xff) *
                                             4) ^ uVar13 >> 8;
          *(ulong *)(param_1 + 0x10168) = uVar13;
          uVar19 = (uint)*pbVar10;
        } while (uVar19 != 0);
      }
      lVar18 = 0;
      do {
        uVar5 = rand();
        uVar13 = (ulong)*(uint *)(lVar15 + (ulong)((uVar5 >> 7 ^ (uint)*(ulong *)(param_1 + 0x10158)
                                                   ) & 0xff) * 4) ^
                 *(ulong *)(param_1 + 0x10158) >> 8;
        uVar14 = *(ulong *)(param_1 + 0x10168);
        lVar16 = (*(long *)(param_1 + 0x10160) + (uVar13 & 0xff)) * 0x8088405 + 1;
        uVar17 = (uint)uVar14;
        uVar19 = uVar17 & 0xfffd;
        *(ulong *)(param_1 + 0x10158) = uVar13;
        *(long *)(param_1 + 0x10160) = lVar16;
        uVar17 = *(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar16 >> 0x18) & 0xff) * 4);
        local_74[lVar18] = (byte)(uVar5 >> 7) ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
        lVar18 = lVar18 + 1;
        *(ulong *)(param_1 + 0x10168) = (ulong)uVar17 ^ uVar14 >> 8;
      } while (lVar18 != 10);
      *(undefined8 *)(param_1 + 0x10168) = 0x34567890;
      *(undefined8 *)(param_1 + 0x10160) = 0x23456789;
      *(undefined8 *)(param_1 + 0x10158) = 0x12345678;
      uVar19 = (uint)*param_15;
      if (*param_15 != 0) {
        do {
          param_15 = param_15 + 1;
          uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)((uint)uVar12 ^ uVar19) & 0xff) * 4) ^
                   uVar12 >> 8;
          lVar21 = (lVar21 + (uVar12 & 0xff)) * 0x8088405 + 1;
          *(ulong *)(param_1 + 0x10158) = uVar12;
          *(long *)(param_1 + 0x10160) = lVar21;
          uVar11 = (ulong)*(uint *)(lVar15 + ((ulong)((uint)uVar11 ^ (uint)lVar21 >> 0x18) & 0xff) *
                                             4) ^ uVar11 >> 8;
          *(ulong *)(param_1 + 0x10168) = uVar11;
          uVar19 = (uint)*param_15;
        } while (uVar19 != 0);
      }
      uVar19 = (uint)uVar11 & 0xfffd;
      uVar12 = (ulong)*(uint *)(lVar15 + (uVar12 & 0xff ^ (ulong)local_74[0]) * 4) ^ uVar12 >> 8;
      uVar13 = uVar12 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_80 = local_74[0] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[1]) * 4) ^ uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + ((ulong)((uint)uVar11 ^ (uint)lVar21 >> 0x18) & 0xff) * 4)
               ^ uVar11 >> 8;
      uVar14 = uVar12 & 0xff;
      uVar17 = (uint)uVar11;
      uVar19 = uVar17 & 0xfffd;
      lVar21 = (uVar14 + lVar21) * 0x8088405 + 1;
      local_7f = local_74[1] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar13 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar11 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar14 ^ local_74[2]) * 4) ^ uVar12 >> 8;
      uVar17 = (uint)uVar13;
      uVar19 = uVar17 & 0xfffd;
      uVar14 = uVar11 & 0xff;
      lVar21 = (uVar14 + lVar21) * 0x8088405 + 1;
      local_7e = local_74[2] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar13 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar14 ^ local_74[3]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_7d = local_74[3] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[4]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_7c = local_74[4] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[5]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_7b = local_74[5] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[6]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_7a = local_74[6] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[7]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_79 = local_74[7] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[8]) * 4) ^ uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      uVar13 = uVar11 & 0xff;
      lVar21 = (uVar13 + lVar21) * 0x8088405 + 1;
      local_78 = local_74[8] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar5 = (uint)uVar12;
      uVar19 = uVar5 & 0xfffd;
      uVar11 = (ulong)*(uint *)(lVar15 + (uVar13 ^ local_74[9]) * 4) ^ uVar11 >> 8;
      lVar21 = (lVar21 + (uVar11 & 0xff)) * 0x8088405 + 1;
      uVar17 = (uint)((ulong)param_16 >> 0x10) & 0xffff;
      local_77 = local_74[9] ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar5 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (ulong)((uVar17 ^ (uint)uVar11) & 0xff) * 4) ^ uVar11 >> 8;
      uVar5 = (uint)uVar12;
      uVar19 = uVar5 & 0xfffd;
      lVar21 = (lVar21 + (uVar11 & 0xff)) * 0x8088405 + 1;
      local_76 = (byte)uVar17 ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      uVar12 = (ulong)*(uint *)(lVar15 + ((ulong)(uVar5 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
               uVar12 >> 8;
      uVar11 = (ulong)*(uint *)(lVar15 + (ulong)((uint)uVar11 & 0xff ^
                                                (uint)((ulong)param_16 >> 0x18) & 0xff) * 4) ^
               uVar11 >> 8;
      uVar17 = (uint)uVar12;
      uVar19 = uVar17 & 0xfffd;
      lVar21 = (lVar21 + (uVar11 & 0xff)) * 0x8088405 + 1;
      *(ulong *)(param_1 + 0x10158) = uVar11;
      *(long *)(param_1 + 0x10160) = lVar21;
      local_75 = (byte)((ulong)param_16 >> 0x18) ^ (byte)((uVar19 | 2) * (uVar19 ^ 3) >> 8);
      *(ulong *)(param_1 + 0x10168) =
           (ulong)*(uint *)(lVar15 + ((ulong)(uVar17 ^ (uint)lVar21 >> 0x18) & 0xff) * 4) ^
           uVar12 >> 8;
      *(undefined4 *)(param_1 + 0x10178) = 0xc;
      lVar15 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),&local_80,
                          0xc);
      if (lVar15 != 0xc) {
        uVar6 = 0xffffffff;
        goto LAB_00e35574;
      }
    }
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  else {
LAB_00e35004:
    *(undefined4 *)(param_1 + 0x10178) = 0;
  }
LAB_00e35574:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


