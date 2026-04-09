// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6488c
// Entry Point: 00d6488c
// Size: 836 bytes
// Signature: undefined FUN_00d6488c(void)


void FUN_00d6488c(long *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  code **ppcVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  char *pcVar17;
  uint auStack_898 [257];
  int local_494 [256];
  char cStack_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  memset(local_494,0,0x404);
  memset(auStack_898,0xff,0x404);
  lVar13 = 0;
  uVar6 = 0xffffffff;
  lVar10 = 1000000000;
  *(undefined8 *)(param_3 + 0x800) = 1;
  while( true ) {
    do {
      lVar16 = *(long *)(param_3 + lVar13 * 8);
      uVar4 = (uint)uVar6;
      if (lVar16 != 0 && lVar16 <= lVar10) {
        uVar4 = (uint)lVar13;
      }
      uVar6 = (ulong)uVar4;
      if (lVar16 != 0 && lVar16 <= lVar10) {
        lVar10 = lVar16;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x101);
    uVar14 = 0;
    uVar11 = 0xffffffff;
    lVar13 = 1000000000;
    do {
      lVar10 = *(long *)(param_3 + uVar14 * 8);
      uVar8 = (uint)uVar11;
      if ((lVar10 != 0 && lVar10 <= lVar13) && uVar6 != uVar14) {
        uVar8 = (uint)uVar14;
      }
      uVar11 = (ulong)uVar8;
      if ((lVar10 != 0 && lVar10 <= lVar13) && uVar6 != uVar14) {
        lVar13 = lVar10;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x101);
    if ((int)uVar8 < 0) break;
    uVar14 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
    iVar9 = *(int *)((long)local_494 + uVar6);
    uVar12 = *(uint *)((long)auStack_898 + uVar6);
    *(long *)(param_3 + uVar14) = *(long *)(param_3 + uVar14) + *(long *)(param_3 + uVar11 * 8);
    *(undefined8 *)(param_3 + uVar11 * 8) = 0;
    *(int *)((long)local_494 + uVar6) = iVar9 + 1;
    if ((int)uVar12 < 0) {
      uVar6 = (ulong)(int)uVar4;
    }
    else {
      do {
        uVar6 = (ulong)uVar12;
        uVar12 = auStack_898[uVar6];
        local_494[uVar6] = local_494[uVar6] + 1;
      } while (-1 < (int)uVar12);
    }
    auStack_898[uVar6] = uVar8;
    uVar4 = auStack_898[(int)uVar8];
    lVar13 = 0;
    uVar6 = 0xffffffff;
    lVar10 = 1000000000;
    local_494[uVar11] = local_494[uVar11] + 1;
    if (-1 < (int)uVar4) {
      do {
        uVar6 = (ulong)uVar4;
        local_494[uVar4] = local_494[uVar4] + 1;
        uVar4 = auStack_898[uVar6];
      } while (-1 < (int)auStack_898[uVar6]);
      lVar13 = 0;
      uVar6 = 0xffffffff;
      lVar10 = 1000000000;
    }
  }
  lVar13 = 0;
  do {
    iVar9 = *(int *)((long)local_494 + lVar13);
    if (iVar9 != 0) {
      if (0x20 < iVar9) {
        ppcVar7 = (code **)*param_1;
        *(undefined4 *)(ppcVar7 + 5) = 0x28;
        (**ppcVar7)(param_1);
      }
      *(char *)((long)&local_90 + (long)iVar9) = *(char *)((long)&local_90 + (long)iVar9) + '\x01';
    }
    lVar13 = lVar13 + 4;
  } while (lVar13 != 0x404);
  lVar13 = 0x2000000000;
  pcVar15 = (char *)((long)&uStack_78 + 7);
  uVar6 = 0x20;
  do {
    cVar2 = *(char *)((long)&local_90 + uVar6);
    while (pcVar17 = pcVar15, lVar10 = lVar13, cVar2 != '\0') {
      do {
        pcVar17 = pcVar17 + -1;
        lVar10 = lVar10 + -0x100000000;
      } while (*pcVar17 == '\0');
      lVar10 = lVar10 >> 0x20;
      *(char *)((long)&local_90 + uVar6) = cVar2 + -2;
      (&cStack_91)[uVar6] = (&cStack_91)[uVar6] + '\x01';
      *(char *)((long)&local_90 + lVar10) = *(char *)((long)&local_90 + lVar10) + '\x02';
      *pcVar17 = *pcVar17 + -1;
      cVar2 = *(char *)((long)&local_90 + uVar6);
    }
    pcVar15 = pcVar15 + -1;
    lVar13 = lVar13 + -0x100000000;
    bVar1 = 0x11 < uVar6;
    uVar6 = uVar6 - 1;
  } while (bVar1);
  pcVar15 = (char *)((long)&local_80 + 1);
  do {
    pcVar15 = pcVar15 + -1;
  } while (*pcVar15 == '\0');
  iVar5 = 0;
  *pcVar15 = *pcVar15 + -1;
  iVar9 = 1;
  param_2[1] = uStack_88;
  *param_2 = local_90;
  *(undefined *)(param_2 + 2) = (undefined)local_80;
  do {
    lVar13 = 0;
    do {
      if (local_494[lVar13] == iVar9) {
        lVar10 = (long)iVar5;
        iVar5 = iVar5 + 1;
        *(char *)((long)param_2 + lVar10 + 0x11) = (char)lVar13;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x100);
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x21);
  *(undefined *)((long)param_2 + 0x111) = 0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


