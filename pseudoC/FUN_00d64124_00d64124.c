// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d64124
// Entry Point: 00d64124
// Size: 1668 bytes
// Signature: undefined FUN_00d64124(void)


void FUN_00d64124(long *param_1,char param_2,uint param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code **ppcVar5;
  uint *puVar6;
  byte *pbVar7;
  long lVar8;
  ulong __n;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint auStack_578 [257];
  byte local_174 [260];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (3 < param_3) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0x34;
    *(uint *)(lVar4 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar4 = (long)(int)param_3 + 0x18;
  if (param_2 != '\0') {
    lVar4 = (long)(int)param_3 + 0x14;
  }
  lVar4 = param_1[lVar4];
  if (lVar4 == 0) {
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x34;
    *(uint *)(lVar8 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
    lVar8 = *param_4;
  }
  else {
    lVar8 = *param_4;
  }
  if (lVar8 == 0) {
    lVar8 = (**(code **)param_1[1])(param_1,1,0x500);
    *param_4 = lVar8;
    bVar3 = *(byte *)(lVar4 + 1);
  }
  else {
    bVar3 = *(byte *)(lVar4 + 1);
  }
  __n = (ulong)bVar3;
  if (bVar3 != 0) {
    memset(local_174,1,__n);
  }
  bVar1 = *(byte *)(lVar4 + 2);
  if (0x100 < (uint)bVar3 + (uint)bVar1) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar1 != 0) {
    memset(local_174 + __n,2,(ulong)bVar1);
    __n = (ulong)((uint)bVar3 + (uint)bVar1);
  }
  bVar3 = *(byte *)(lVar4 + 3);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,3,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 4);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,4,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 5);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,5,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 6);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,6,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 7);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,7,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 8);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,8,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 9);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,9,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 10);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,10,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0xb);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0xb,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0xc);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0xc,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0xd);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0xd,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0xe);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0xe,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0xf);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0xf,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  bVar3 = *(byte *)(lVar4 + 0x10);
  if (0x100 < (int)__n + (uint)bVar3) {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 9;
    (**ppcVar5)(param_1);
  }
  if (bVar3 != 0) {
    memset(local_174 + __n,0x10,(ulong)bVar3);
    __n = (ulong)((int)__n + (uint)bVar3);
  }
  local_174[__n] = 0;
  uVar10 = (ulong)local_174[0];
  if (local_174[0] != 0) {
    uVar11 = 0;
    iVar12 = 0;
    do {
      if (uVar10 == local_174[0]) {
        puVar6 = auStack_578 + iVar12;
        pbVar7 = (byte *)(((ulong)local_174 | 1) + (long)iVar12);
        do {
          bVar3 = *pbVar7;
          *puVar6 = uVar11;
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 1;
          puVar6 = puVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar10 == bVar3);
      }
      if (1L << (uVar10 & 0x3f) <= (long)(ulong)uVar11) {
        ppcVar5 = (code **)*param_1;
        *(undefined4 *)(ppcVar5 + 5) = 9;
        (**ppcVar5)(param_1);
      }
      local_174[0] = local_174[iVar12];
      uVar11 = uVar11 << 1;
      uVar10 = uVar10 + 1;
    } while (local_174[0] != 0);
  }
  bVar3 = 0xff;
  if (param_2 != '\0') {
    bVar3 = 0xf;
  }
  *(undefined8 *)(lVar8 + 0x4f8) = 0;
  *(undefined8 *)(lVar8 + 0x4f0) = 0;
  *(undefined8 *)(lVar8 + 0x4e8) = 0;
  *(undefined8 *)(lVar8 + 0x4e0) = 0;
  *(undefined8 *)(lVar8 + 0x4d8) = 0;
  *(undefined8 *)(lVar8 + 0x4d0) = 0;
  *(undefined8 *)(lVar8 + 0x4c8) = 0;
  *(undefined8 *)(lVar8 + 0x4c0) = 0;
  *(undefined8 *)(lVar8 + 0x4b8) = 0;
  *(undefined8 *)(lVar8 + 0x4b0) = 0;
  *(undefined8 *)(lVar8 + 0x4a8) = 0;
  *(undefined8 *)(lVar8 + 0x4a0) = 0;
  *(undefined8 *)(lVar8 + 0x498) = 0;
  *(undefined8 *)(lVar8 + 0x490) = 0;
  *(undefined8 *)(lVar8 + 0x488) = 0;
  *(undefined8 *)(lVar8 + 0x480) = 0;
  *(undefined8 *)(lVar8 + 0x478) = 0;
  *(undefined8 *)(lVar8 + 0x470) = 0;
  *(undefined8 *)(lVar8 + 0x468) = 0;
  *(undefined8 *)(lVar8 + 0x460) = 0;
  *(undefined8 *)(lVar8 + 0x458) = 0;
  *(undefined8 *)(lVar8 + 0x450) = 0;
  *(undefined8 *)(lVar8 + 0x448) = 0;
  *(undefined8 *)(lVar8 + 0x440) = 0;
  *(undefined8 *)(lVar8 + 0x438) = 0;
  *(undefined8 *)(lVar8 + 0x430) = 0;
  *(undefined8 *)(lVar8 + 0x428) = 0;
  *(undefined8 *)(lVar8 + 0x420) = 0;
  *(undefined8 *)(lVar8 + 0x418) = 0;
  *(undefined8 *)(lVar8 + 0x410) = 0;
  *(undefined8 *)(lVar8 + 0x408) = 0;
  *(undefined8 *)(lVar8 + 0x400) = 0;
  if ((int)__n != 0) {
    pbVar7 = (byte *)(lVar4 + 0x11);
    pbVar9 = local_174;
    puVar6 = auStack_578;
    do {
      uVar10 = (ulong)*pbVar7;
      if ((bVar3 < *pbVar7) || (*(char *)(lVar8 + uVar10 + 0x400) != '\0')) {
        ppcVar5 = (code **)*param_1;
        *(undefined4 *)(ppcVar5 + 5) = 9;
        (**ppcVar5)(param_1);
      }
      pbVar7 = pbVar7 + 1;
      *(uint *)(lVar8 + uVar10 * 4) = *puVar6;
      __n = __n - 1;
      *(byte *)(lVar8 + uVar10 + 0x400) = *pbVar9;
      pbVar9 = pbVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (__n != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


