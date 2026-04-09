// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d798d4
// Entry Point: 00d798d4
// Size: 4848 bytes
// Signature: undefined FUN_00d798d4(void)


void FUN_00d798d4(long *param_1,char param_2,uint param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  undefined uVar17;
  long lVar18;
  bool bVar19;
  ulong uVar20;
  long lVar21;
  code **ppcVar22;
  uint *puVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong __n;
  long lVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  uint auStack_57c [258];
  byte local_174 [260];
  long local_70;
  
  lVar18 = tpidr_el0;
  local_70 = *(long *)(lVar18 + 0x28);
  if (3 < param_3) {
    lVar21 = *param_1;
    *(undefined4 *)(lVar21 + 0x28) = 0x34;
    *(uint *)(lVar21 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar21 = (long)(int)param_3 + 0x1f;
  if (param_2 != '\0') {
    lVar21 = (long)(int)param_3 + 0x1b;
  }
  lVar21 = param_1[lVar21];
  if (lVar21 == 0) {
    lVar29 = *param_1;
    *(undefined4 *)(lVar29 + 0x28) = 0x34;
    *(uint *)(lVar29 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
    lVar29 = *param_4;
  }
  else {
    lVar29 = *param_4;
  }
  if (lVar29 == 0) {
    lVar29 = (**(code **)param_1[1])(param_1,1,0x620);
    *param_4 = lVar29;
    *(long *)(lVar29 + 0x118) = lVar21;
    bVar13 = *(byte *)(lVar21 + 1);
  }
  else {
    *(long *)(lVar29 + 0x118) = lVar21;
    bVar13 = *(byte *)(lVar21 + 1);
  }
  __n = (ulong)bVar13;
  if (bVar13 != 0) {
    memset(local_174,1,__n);
  }
  bVar14 = *(byte *)(lVar21 + 2);
  if (0x100 < (uint)bVar13 + (uint)bVar14) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar14 != 0) {
    memset(local_174 + __n,2,(ulong)bVar14);
    __n = (ulong)((uint)bVar13 + (uint)bVar14);
  }
  bVar13 = *(byte *)(lVar21 + 3);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,3,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 4);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,4,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 5);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,5,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 6);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,6,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 7);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,7,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 8);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,8,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 9);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,9,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 10);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,10,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0xb);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0xb,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0xc);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0xc,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0xd);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0xd,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0xe);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0xe,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0xf);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0xf,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  bVar13 = *(byte *)(lVar21 + 0x10);
  if (0x100 < (int)__n + (uint)bVar13) {
    ppcVar22 = (code **)*param_1;
    *(undefined4 *)(ppcVar22 + 5) = 9;
    (**ppcVar22)(param_1);
  }
  if (bVar13 != 0) {
    memset(local_174 + __n,0x10,(ulong)bVar13);
    __n = (ulong)((int)__n + (uint)bVar13);
  }
  local_174[__n] = 0;
  uVar30 = (ulong)local_174[0];
  if (local_174[0] != 0) {
    iVar31 = 0;
    uVar32 = 0;
    do {
      if (uVar30 == local_174[0]) {
        puVar23 = auStack_57c + (long)iVar31 + 1;
        pbVar24 = (byte *)(((ulong)local_174 | 1) + (long)iVar31);
        do {
          bVar13 = *pbVar24;
          *puVar23 = uVar32;
          uVar32 = uVar32 + 1;
          iVar31 = iVar31 + 1;
          puVar23 = puVar23 + 1;
          pbVar24 = pbVar24 + 1;
        } while (uVar30 == bVar13);
      }
      if (1L << (uVar30 & 0x3f) <= (long)(ulong)uVar32) {
        ppcVar22 = (code **)*param_1;
        *(undefined4 *)(ppcVar22 + 5) = 9;
        (**ppcVar22)();
      }
      local_174[0] = local_174[iVar31];
      uVar32 = uVar32 << 1;
      uVar30 = uVar30 + 1;
    } while (local_174[0] != 0);
  }
  uVar30 = (ulong)*(byte *)(lVar21 + 1);
  if (*(byte *)(lVar21 + 1) == 0) {
    *(undefined8 *)(lVar29 + 8) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 2);
  }
  else {
    *(ulong *)(lVar29 + 0x98) = -(ulong)auStack_57c[1];
    uVar30 = (ulong)*(byte *)(lVar21 + 1);
    *(ulong *)(lVar29 + 8) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 2);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x10) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 3);
  }
  else {
    *(ulong *)(lVar29 + 0xa0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 2);
    *(ulong *)(lVar29 + 0x10) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 3);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x18) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 4);
  }
  else {
    *(ulong *)(lVar29 + 0xa8) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 3);
    *(ulong *)(lVar29 + 0x18) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 4);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x20) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 5);
  }
  else {
    *(ulong *)(lVar29 + 0xb0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 4);
    *(ulong *)(lVar29 + 0x20) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 5);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x28) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 6);
  }
  else {
    *(ulong *)(lVar29 + 0xb8) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 5);
    *(ulong *)(lVar29 + 0x28) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 6);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x30) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 7);
  }
  else {
    *(ulong *)(lVar29 + 0xc0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 6);
    *(ulong *)(lVar29 + 0x30) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 7);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x38) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 8);
  }
  else {
    *(ulong *)(lVar29 + 200) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 7);
    *(ulong *)(lVar29 + 0x38) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 8);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x40) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 9);
  }
  else {
    *(ulong *)(lVar29 + 0xd0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 8);
    *(ulong *)(lVar29 + 0x40) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 9);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x48) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 10);
  }
  else {
    *(ulong *)(lVar29 + 0xd8) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 9);
    *(ulong *)(lVar29 + 0x48) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 10);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x50) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0xb);
  }
  else {
    *(ulong *)(lVar29 + 0xe0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 10);
    *(ulong *)(lVar29 + 0x50) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0xb);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x58) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0xc);
  }
  else {
    *(ulong *)(lVar29 + 0xe8) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 0xb);
    *(ulong *)(lVar29 + 0x58) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0xc);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x60) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0xd);
  }
  else {
    *(ulong *)(lVar29 + 0xf0) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 0xc);
    *(ulong *)(lVar29 + 0x60) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0xd);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x68) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0xe);
  }
  else {
    *(ulong *)(lVar29 + 0xf8) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 0xd);
    *(ulong *)(lVar29 + 0x68) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0xe);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x70) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0xf);
  }
  else {
    *(ulong *)(lVar29 + 0x100) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 0xe);
    *(ulong *)(lVar29 + 0x70) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0xf);
  }
  if (cVar15 == '\0') {
    *(undefined8 *)(lVar29 + 0x78) = 0xffffffffffffffff;
    cVar15 = *(char *)(lVar21 + 0x10);
  }
  else {
    *(ulong *)(lVar29 + 0x108) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = uVar30 + *(byte *)(lVar21 + 0xf);
    *(ulong *)(lVar29 + 0x78) = (ulong)auStack_57c[uVar30];
    cVar15 = *(char *)(lVar21 + 0x10);
  }
  if (cVar15 == '\0') {
    uVar30 = 0xffffffffffffffff;
  }
  else {
    *(ulong *)(lVar29 + 0x110) = uVar30 - auStack_57c[uVar30 + 1];
    uVar30 = (ulong)auStack_57c[uVar30 + *(byte *)(lVar21 + 0x10)];
  }
  *(ulong *)(lVar29 + 0x80) = uVar30;
  *(undefined8 *)(lVar29 + 0x88) = 0xfffff;
  memset((void *)(lVar29 + 0x120),0,0x400);
  uVar30 = (ulong)*(byte *)(lVar21 + 1);
  if (*(byte *)(lVar21 + 1) != 0) {
    uVar30 = 0;
    uVar32 = 1;
    do {
      puVar1 = (undefined *)(lVar21 + uVar30 + 0x12);
      puVar2 = (undefined *)(lVar21 + uVar30 + 0x11);
      uVar28 = auStack_57c[uVar30 + 1] << 7;
      uVar20 = -(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2;
      uVar27 = (ulong)(int)uVar28;
      puVar8 = (undefined *)(lVar29 + 0x5a0 + uVar27);
      puVar3 = (undefined *)(lVar29 + uVar20 + 0x120);
      puVar9 = (undefined *)(lVar29 + 800 + uVar20);
      puVar4 = (undefined *)(lVar29 + uVar27 + 0x520);
      if (((puVar3 < puVar8 && puVar4 < puVar9) || (puVar3 < puVar1 && puVar2 < puVar9)) ||
         (puVar4 < puVar1 && puVar2 < puVar8)) {
        uVar28 = 0x81;
        do {
          uVar28 = uVar28 - 1;
          *(undefined4 *)(lVar29 + 0x520 + uVar27 * 4 + -0x400) = 1;
          *(undefined *)(lVar29 + 0x520 + uVar27) = *puVar2;
          uVar27 = uVar27 + 1;
        } while (1 < uVar28);
      }
      else {
        lVar26 = lVar29 + 0x120;
        puVar10 = (undefined8 *)(lVar26 + uVar27 * 4);
        puVar11 = (undefined8 *)(lVar26 + (uVar27 | 0x20) * 4);
        puVar10[5] = 0x100000001;
        puVar10[4] = 0x100000001;
        puVar10[7] = 0x100000001;
        puVar10[6] = 0x100000001;
        puVar10[1] = 0x100000001;
        *puVar10 = 0x100000001;
        puVar10[3] = 0x100000001;
        puVar10[2] = 0x100000001;
        puVar10[0xd] = 0x100000001;
        puVar10[0xc] = 0x100000001;
        puVar10[0xf] = 0x100000001;
        puVar10[0xe] = 0x100000001;
        puVar10[9] = 0x100000001;
        puVar10[8] = 0x100000001;
        puVar10[0xb] = 0x100000001;
        puVar10[10] = 0x100000001;
        lVar25 = lVar29 + 0x520;
        uVar17 = *puVar2;
        puVar10 = (undefined8 *)(lVar25 + uVar27);
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[3] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[2] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10 = (undefined8 *)(lVar25 + (uVar27 | 0x20));
        puVar11[5] = 0x100000001;
        puVar11[4] = 0x100000001;
        puVar11[7] = 0x100000001;
        puVar11[6] = 0x100000001;
        puVar11[1] = 0x100000001;
        *puVar11 = 0x100000001;
        puVar11[3] = 0x100000001;
        puVar11[2] = 0x100000001;
        puVar11[0xd] = 0x100000001;
        puVar11[0xc] = 0x100000001;
        puVar11[0xf] = 0x100000001;
        puVar11[0xe] = 0x100000001;
        puVar11[9] = 0x100000001;
        puVar11[8] = 0x100000001;
        puVar11[0xb] = 0x100000001;
        puVar11[10] = 0x100000001;
        puVar11 = (undefined8 *)(lVar26 + (uVar27 | 0x40) * 4);
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[3] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[2] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10 = (undefined8 *)(lVar25 + (uVar27 | 0x40));
        puVar12 = (undefined8 *)(lVar26 + (uVar27 | 0x60) * 4);
        puVar7 = (undefined8 *)(lVar25 + (uVar27 | 0x60));
        puVar11[5] = 0x100000001;
        puVar11[4] = 0x100000001;
        puVar11[7] = 0x100000001;
        puVar11[6] = 0x100000001;
        puVar11[1] = 0x100000001;
        *puVar11 = 0x100000001;
        puVar11[3] = 0x100000001;
        puVar11[2] = 0x100000001;
        puVar11[0xd] = 0x100000001;
        puVar11[0xc] = 0x100000001;
        puVar11[0xf] = 0x100000001;
        puVar11[0xe] = 0x100000001;
        puVar11[9] = 0x100000001;
        puVar11[8] = 0x100000001;
        puVar11[0xb] = 0x100000001;
        puVar11[10] = 0x100000001;
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[3] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[2] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar12[5] = 0x100000001;
        puVar12[4] = 0x100000001;
        puVar12[7] = 0x100000001;
        puVar12[6] = 0x100000001;
        puVar12[1] = 0x100000001;
        *puVar12 = 0x100000001;
        puVar12[3] = 0x100000001;
        puVar12[2] = 0x100000001;
        puVar12[0xd] = 0x100000001;
        puVar12[0xc] = 0x100000001;
        puVar12[0xf] = 0x100000001;
        puVar12[0xe] = 0x100000001;
        puVar12[9] = 0x100000001;
        puVar12[8] = 0x100000001;
        puVar12[0xb] = 0x100000001;
        puVar12[10] = 0x100000001;
        puVar7[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar7 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar7[3] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar7[2] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
      }
      uVar30 = uVar30 + 1;
      bVar19 = uVar32 < *(byte *)(lVar21 + 1);
      uVar32 = uVar32 + 1;
    } while (bVar19);
  }
  if (*(char *)(lVar21 + 2) != '\0') {
    lVar25 = 0;
    uVar30 = (ulong)(int)uVar30;
    lVar26 = uVar30 + 1;
    uVar32 = 1;
    do {
      puVar3 = (undefined *)(lVar21 + 0x11 + uVar30);
      puVar4 = (undefined *)(lVar21 + 0x11 + lVar26 + lVar25);
      uVar28 = auStack_57c[uVar30 + 1] << 6;
      uVar20 = -(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2;
      uVar27 = (ulong)(int)uVar28;
      puVar8 = (undefined *)(lVar29 + 0x560 + uVar27);
      puVar1 = (undefined *)(lVar29 + uVar20 + 0x120);
      puVar9 = (undefined *)(lVar29 + 0x220 + uVar20);
      puVar2 = (undefined *)(lVar29 + uVar27 + 0x520);
      if (((puVar1 < puVar8 && puVar2 < puVar9) || (puVar1 < puVar4 && puVar3 < puVar9)) ||
         (puVar2 < puVar4 && puVar3 < puVar8)) {
        uVar28 = 0x41;
        do {
          uVar28 = uVar28 - 1;
          *(undefined4 *)(lVar29 + 0x520 + uVar27 * 4 + -0x400) = 2;
          *(undefined *)(lVar29 + 0x520 + uVar27) = *puVar3;
          uVar27 = uVar27 + 1;
        } while (1 < uVar28);
      }
      else {
        lVar5 = lVar29 + 0x120;
        puVar10 = (undefined8 *)(lVar5 + uVar27 * 4);
        puVar11 = (undefined8 *)(lVar5 + (uVar27 | 0x20) * 4);
        puVar10[5] = 0x200000002;
        puVar10[4] = 0x200000002;
        puVar10[7] = 0x200000002;
        puVar10[6] = 0x200000002;
        puVar10[1] = 0x200000002;
        *puVar10 = 0x200000002;
        puVar10[3] = 0x200000002;
        puVar10[2] = 0x200000002;
        puVar10 = (undefined8 *)(lVar5 + (uVar27 | 0x10) * 4);
        uVar17 = *puVar3;
        lVar6 = lVar29 + 0x520;
        ((undefined8 *)(lVar6 + uVar27))[1] =
             CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *(undefined8 *)(lVar6 + uVar27) =
             CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar10[5] = 0x200000002;
        puVar10[4] = 0x200000002;
        puVar10[7] = 0x200000002;
        puVar10[6] = 0x200000002;
        puVar12 = (undefined8 *)(lVar5 + (uVar27 | 0x30) * 4);
        puVar10[1] = 0x200000002;
        *puVar10 = 0x200000002;
        puVar10[3] = 0x200000002;
        puVar10[2] = 0x200000002;
        puVar10 = (undefined8 *)(lVar6 + (uVar27 | 0x10));
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar11[5] = 0x200000002;
        puVar11[4] = 0x200000002;
        puVar11[7] = 0x200000002;
        puVar11[6] = 0x200000002;
        puVar11[1] = 0x200000002;
        *puVar11 = 0x200000002;
        puVar11[3] = 0x200000002;
        puVar11[2] = 0x200000002;
        puVar10 = (undefined8 *)(lVar6 + (uVar27 | 0x20));
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        puVar12[5] = 0x200000002;
        puVar12[4] = 0x200000002;
        puVar12[7] = 0x200000002;
        puVar12[6] = 0x200000002;
        puVar12[1] = 0x200000002;
        *puVar12 = 0x200000002;
        puVar12[3] = 0x200000002;
        puVar12[2] = 0x200000002;
        puVar10 = (undefined8 *)(lVar6 + (uVar27 | 0x30));
        puVar10[1] = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17
                                                  ,CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
        *puVar10 = CONCAT17(uVar17,CONCAT16(uVar17,CONCAT15(uVar17,CONCAT14(uVar17,CONCAT13(uVar17,
                                                  CONCAT12(uVar17,CONCAT11(uVar17,uVar17)))))));
      }
      uVar30 = uVar30 + 1;
      lVar25 = lVar25 + 1;
      bVar19 = uVar32 < *(byte *)(lVar21 + 2);
      uVar32 = uVar32 + 1;
    } while (bVar19);
  }
  iVar31 = (int)uVar30;
  if (*(char *)(lVar21 + 3) != '\0') {
    lVar25 = 0;
    lVar26 = lVar21 + iVar31 + 0x11;
    do {
      lVar5 = lVar29 + 0x120;
      lVar6 = lVar29 + 0x520;
      uVar30 = (ulong)(int)(auStack_57c[iVar31 + lVar25 + 1] << 5);
      *(undefined4 *)(lVar5 + (long)(int)(auStack_57c[iVar31 + lVar25 + 1] << 5) * 4) = 3;
      *(undefined *)(lVar6 + uVar30) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 1) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 1)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 2) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 2)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 3) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 3)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 4) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 4)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 5) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 5)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 6) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 6)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 7) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 7)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 8) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 8)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 9) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 9)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 10) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 10)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xb) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0xb)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xc) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0xc)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xd) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0xd)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xe) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0xe)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xf) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0xf)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x10) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x10)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x11) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x11)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x12) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x12)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x13) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x13)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x14) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x14)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x15) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x15)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x16) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x16)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x17) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x17)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x18) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x18)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x19) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x19)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1a) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x1a)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1b) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x1b)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1c) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x1c)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1d) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x1d)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1e) * 4) = 3;
      *(undefined *)(lVar6 + (uVar30 | 0x1e)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0x1f) * 4) = 3;
      puVar1 = (undefined *)(lVar26 + lVar25);
      lVar25 = lVar25 + 1;
      *(undefined *)(lVar6 + (uVar30 | 0x1f)) = *puVar1;
    } while ((uint)lVar25 < (uint)*(byte *)(lVar21 + 3));
    iVar31 = iVar31 + (uint)lVar25;
  }
  if (*(char *)(lVar21 + 4) != '\0') {
    lVar25 = 0;
    lVar26 = lVar21 + iVar31 + 0x11;
    do {
      lVar5 = lVar29 + 0x120;
      uVar30 = (ulong)(int)(auStack_57c[iVar31 + lVar25 + 1] << 4);
      *(undefined4 *)(lVar5 + (long)(int)(auStack_57c[iVar31 + lVar25 + 1] << 4) * 4) = 4;
      lVar6 = lVar29 + 0x520;
      *(undefined *)(lVar6 + uVar30) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 1) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 1)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 2) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 2)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 3) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 3)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 4) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 4)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 5) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 5)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 6) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 6)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 7) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 7)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 8) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 8)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 9) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 9)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 10) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 10)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xb) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 0xb)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xc) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 0xc)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xd) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 0xd)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xe) * 4) = 4;
      *(undefined *)(lVar6 + (uVar30 | 0xe)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 0xf) * 4) = 4;
      puVar1 = (undefined *)(lVar26 + lVar25);
      lVar25 = lVar25 + 1;
      *(undefined *)(lVar6 + (uVar30 | 0xf)) = *puVar1;
    } while ((uint)lVar25 < (uint)*(byte *)(lVar21 + 4));
    iVar31 = iVar31 + (uint)lVar25;
  }
  if (*(char *)(lVar21 + 5) != '\0') {
    lVar25 = 0;
    lVar26 = lVar21 + iVar31 + 0x11;
    do {
      uVar32 = auStack_57c[iVar31 + lVar25 + 1];
      lVar5 = lVar29 + 0x120;
      lVar6 = lVar29 + 0x520;
      *(undefined4 *)(lVar5 + (long)(int)(uVar32 << 3) * 4) = 5;
      uVar30 = (ulong)(int)(uVar32 << 3);
      *(undefined *)(lVar6 + uVar30) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 1) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 1)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 2) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 2)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 3) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 3)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 4) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 4)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 5) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 5)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 6) * 4) = 5;
      *(undefined *)(lVar6 + (uVar30 | 6)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 7) * 4) = 5;
      puVar1 = (undefined *)(lVar26 + lVar25);
      lVar25 = lVar25 + 1;
      *(undefined *)(lVar6 + (uVar30 | 7)) = *puVar1;
    } while ((uint)lVar25 < (uint)*(byte *)(lVar21 + 5));
    iVar31 = iVar31 + (uint)lVar25;
  }
  if (*(char *)(lVar21 + 6) != '\0') {
    lVar25 = 0;
    lVar26 = lVar21 + iVar31 + 0x11;
    do {
      uVar32 = auStack_57c[iVar31 + lVar25 + 1];
      lVar5 = lVar29 + 0x120;
      lVar6 = lVar29 + 0x520;
      *(undefined4 *)(lVar5 + (long)(int)(uVar32 << 2) * 4) = 6;
      uVar30 = (ulong)(int)(uVar32 << 2);
      *(undefined *)(lVar6 + uVar30) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 1) * 4) = 6;
      *(undefined *)(lVar6 + (uVar30 | 1)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 2) * 4) = 6;
      *(undefined *)(lVar6 + (uVar30 | 2)) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar5 + (uVar30 | 3) * 4) = 6;
      puVar1 = (undefined *)(lVar26 + lVar25);
      lVar25 = lVar25 + 1;
      *(undefined *)(lVar6 + (uVar30 | 3)) = *puVar1;
    } while ((uint)lVar25 < (uint)*(byte *)(lVar21 + 6));
    iVar31 = iVar31 + (uint)lVar25;
  }
  if (*(char *)(lVar21 + 7) != '\0') {
    lVar25 = 0;
    lVar26 = lVar21 + iVar31 + 0x11;
    do {
      iVar16 = auStack_57c[iVar31 + lVar25 + 1] << 1;
      *(undefined4 *)(lVar29 + 0x120 + (long)iVar16 * 4) = 7;
      uVar30 = (long)iVar16 | 1;
      *(undefined *)(lVar29 + 0x520 + (long)iVar16) = *(undefined *)(lVar26 + lVar25);
      *(undefined4 *)(lVar29 + 0x120 + uVar30 * 4) = 7;
      puVar1 = (undefined *)(lVar26 + lVar25);
      lVar25 = lVar25 + 1;
      *(undefined *)(lVar29 + 0x520 + uVar30) = *puVar1;
    } while ((uint)lVar25 < (uint)*(byte *)(lVar21 + 7));
    iVar31 = iVar31 + (uint)lVar25;
  }
  if (*(char *)(lVar21 + 8) != '\0') {
    lVar26 = 0;
    do {
      uVar32 = auStack_57c[iVar31 + lVar26 + 1];
      *(undefined4 *)(lVar29 + (long)(int)uVar32 * 4 + 0x120) = 8;
      puVar1 = (undefined *)(lVar21 + iVar31 + 0x11 + lVar26);
      lVar26 = lVar26 + 1;
      *(undefined *)(lVar29 + (int)uVar32 + 0x520) = *puVar1;
    } while ((uint)lVar26 < (uint)*(byte *)(lVar21 + 8));
  }
  if ((param_2 != '\0') && ((int)__n != 0)) {
    pbVar24 = (byte *)(lVar21 + 0x11);
    do {
      if (0xf < *pbVar24) {
        ppcVar22 = (code **)*param_1;
        *(undefined4 *)(ppcVar22 + 5) = 9;
        (**ppcVar22)(param_1);
      }
      pbVar24 = pbVar24 + 1;
      __n = __n - 1;
    } while (__n != 0);
  }
  if (*(long *)(lVar18 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


