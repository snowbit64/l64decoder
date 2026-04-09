// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e282f8
// Entry Point: 00e282f8
// Size: 1728 bytes
// Signature: undefined FUN_00e282f8(void)


undefined4 FUN_00e282f8(long **param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong __n;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  void **ppvVar16;
  
  uVar10 = *(uint *)(param_1 + 10);
  plVar9 = *param_1;
  if ((long)param_1[3] - 5U <= (ulong)uVar10) {
    uVar10 = (uint)((long)param_1[3] - 5U);
  }
  iVar3 = *(int *)(plVar9 + 1);
  do {
    uVar7 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    uVar11 = *(uint *)(plVar9 + 4) - uVar7;
    if (*(uint *)(plVar9 + 4) < uVar7) {
LAB_00e285cc:
      bVar6 = true;
      iVar4 = *(int *)(plVar9 + 1);
      goto joined_r0x00e285d8;
    }
    uVar5 = *(int *)((long)param_1 + 0xac) - *(int *)(param_1 + 0x13);
    uVar7 = uVar5 + *(uint *)(plVar9 + 1);
    uVar1 = uVar7;
    if (0xfffe < (ulong)uVar5 + (ulong)*(uint *)(plVar9 + 1)) {
      uVar1 = 0xffff;
    }
    if (uVar1 <= uVar11) {
      uVar11 = uVar1;
    }
    if (uVar11 < uVar10) {
      if ((param_2 == 0) || (param_2 != 4 && uVar11 == 0 || uVar11 != uVar7)) goto LAB_00e285cc;
    }
    bVar6 = uVar11 == uVar7;
    _tr_stored_block(param_1,0,0,param_2 == 4 && bVar6);
    *(char *)((long)param_1[5] + (long)param_1[2] + -4) = (char)uVar11;
    *(char *)((long)param_1[5] + (long)param_1[2] + -3) = (char)(uVar11 >> 8);
    *(char *)((long)param_1[5] + (long)param_1[2] + -2) = (char)~uVar11;
    *(char *)((long)param_1[5] + (long)param_1[2] + -1) = (char)(~uVar11 >> 8);
    plVar9 = *param_1;
    lVar13 = plVar9[7];
    _tr_flush_bits(lVar13);
    uVar7 = *(uint *)(plVar9 + 4);
    if (*(uint *)(lVar13 + 0x28) <= *(uint *)(plVar9 + 4)) {
      uVar7 = *(uint *)(lVar13 + 0x28);
    }
    uVar14 = (ulong)uVar7;
    if (uVar7 != 0) {
      memcpy((void *)plVar9[3],*(void **)(lVar13 + 0x20),uVar14);
      lVar12 = *(long *)(lVar13 + 0x20);
      lVar2 = *(long *)(lVar13 + 0x28);
      plVar9[3] = plVar9[3] + uVar14;
      lVar2 = lVar2 - uVar14;
      plVar9[5] = plVar9[5] + uVar14;
      *(uint *)(plVar9 + 4) = *(int *)(plVar9 + 4) - uVar7;
      *(ulong *)(lVar13 + 0x20) = lVar12 + uVar14;
      *(long *)(lVar13 + 0x28) = lVar2;
      if (lVar2 == 0) {
        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
      }
    }
    if (uVar5 != 0) {
      uVar7 = uVar11;
      if (uVar5 <= uVar11) {
        uVar7 = uVar5;
      }
      uVar14 = (ulong)uVar7;
      memcpy((void *)(*param_1)[3],(void *)((long)param_1[0xc] + (long)param_1[0x13]),uVar14);
      plVar9 = *param_1;
      uVar11 = uVar11 - uVar7;
      lVar13 = plVar9[3];
      iVar4 = *(int *)(plVar9 + 4);
      lVar12 = plVar9[5];
      param_1[0x13] = (long *)((long)param_1[0x13] + uVar14);
      plVar9[3] = lVar13 + uVar14;
      *(uint *)(plVar9 + 4) = iVar4 - uVar7;
      plVar9[5] = lVar12 + uVar14;
    }
    if (uVar11 != 0) {
      ppvVar16 = (void **)*param_1;
      uVar1 = *(uint *)(ppvVar16 + 1);
      pvVar15 = ppvVar16[3];
      uVar7 = uVar11;
      if (uVar1 <= uVar11) {
        uVar7 = uVar1;
      }
      uVar14 = (ulong)uVar7;
      if (uVar7 != 0) {
        *(uint *)(ppvVar16 + 1) = uVar1 - uVar7;
        memcpy(pvVar15,*ppvVar16,uVar14);
        if (*(int *)((long)ppvVar16[7] + 0x30) == 2) {
          pvVar15 = (void *)crc32(ppvVar16[0xc],pvVar15,uVar14);
LAB_00e28358:
          ppvVar16[0xc] = pvVar15;
        }
        else if (*(int *)((long)ppvVar16[7] + 0x30) == 1) {
          pvVar15 = (void *)adler32(ppvVar16[0xc],pvVar15,uVar14);
          goto LAB_00e28358;
        }
        *ppvVar16 = (void *)((long)*ppvVar16 + uVar14);
        ppvVar16[2] = (void *)((long)ppvVar16[2] + uVar14);
        ppvVar16 = (void **)*param_1;
        pvVar15 = ppvVar16[3];
      }
      ppvVar16[3] = (void *)((long)pvVar15 + (ulong)uVar11);
      *(uint *)(ppvVar16 + 4) = *(int *)(ppvVar16 + 4) - uVar11;
      ppvVar16[5] = (void *)((long)ppvVar16[5] + (ulong)uVar11);
    }
    plVar9 = *param_1;
  } while (param_2 != 4 || !bVar6);
  bVar6 = false;
  iVar4 = *(int *)(plVar9 + 1);
joined_r0x00e285d8:
  uVar10 = iVar3 - iVar4;
  if (uVar10 == 0) {
    uVar7 = *(uint *)((long)param_1 + 0xac);
    plVar9 = (long *)(ulong)uVar7;
    if (param_1[0x2e7] < plVar9) {
LAB_00e286d8:
      param_1[0x2e7] = plVar9;
    }
  }
  else {
    __n = (ulong)uVar10;
    uVar7 = *(uint *)(param_1 + 10);
    uVar14 = (ulong)uVar7;
    if (uVar10 < uVar7) {
      if ((long)param_1[0xd] - (ulong)*(uint *)((long)param_1 + 0xac) <= __n) {
        uVar7 = *(uint *)((long)param_1 + 0xac) - uVar7;
        *(uint *)((long)param_1 + 0xac) = uVar7;
        memcpy(param_1[0xc],(void *)((long)param_1[0xc] + uVar14),(ulong)uVar7);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
      }
      memcpy((void *)((long)param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac)),
             (void *)(**param_1 - __n),__n);
      uVar11 = *(uint *)(param_1 + 10);
      uVar7 = *(int *)((long)param_1 + 0xac) + uVar10;
      *(uint *)((long)param_1 + 0xac) = uVar7;
    }
    else {
      lVar13 = *plVar9;
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy(param_1[0xc],(void *)(lVar13 - uVar14),uVar14);
      uVar11 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar11;
      uVar7 = uVar11;
    }
    plVar9 = (long *)(ulong)uVar7;
    uVar11 = uVar11 - *(int *)((long)param_1 + 0x172c);
    param_1[0x13] = plVar9;
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    *(uint *)((long)param_1 + 0x172c) = uVar11 + *(int *)((long)param_1 + 0x172c);
    if (param_1[0x2e7] < plVar9) goto LAB_00e286d8;
  }
  if (!bVar6) {
    return 3;
  }
  ppvVar16 = (void **)*param_1;
  uVar10 = *(uint *)(ppvVar16 + 1);
  if (((param_2 & 0xfffffffb) == 0) || (uVar10 != 0)) {
    uVar11 = *(int *)(param_1 + 0xd) + ~(uint)plVar9;
    if (uVar11 < uVar10) {
      uVar14 = (ulong)*(uint *)(param_1 + 10);
      if ((long)uVar14 <= (long)param_1[0x13]) {
        uVar7 = uVar7 - *(uint *)(param_1 + 10);
        param_1[0x13] = (long *)((long)param_1[0x13] - uVar14);
        *(uint *)((long)param_1 + 0xac) = uVar7;
        memcpy(param_1[0xc],(void *)((long)param_1[0xc] + uVar14),(ulong)uVar7);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
        ppvVar16 = (void **)*param_1;
        uVar11 = *(int *)(param_1 + 10) + uVar11;
        uVar10 = *(uint *)(ppvVar16 + 1);
      }
    }
    uVar7 = uVar10;
    if (uVar11 <= uVar10) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) goto LAB_00e287e8;
    uVar14 = (ulong)uVar7;
    plVar9 = param_1[0xc];
    uVar11 = *(uint *)((long)param_1 + 0xac);
    *(uint *)(ppvVar16 + 1) = uVar10 - uVar7;
    pvVar15 = (void *)((long)plVar9 + (ulong)uVar11);
    memcpy(pvVar15,*ppvVar16,uVar14);
    if (*(int *)((long)ppvVar16[7] + 0x30) == 2) {
      pvVar15 = (void *)crc32(ppvVar16[0xc],pvVar15,uVar14);
LAB_00e28810:
      ppvVar16[0xc] = pvVar15;
    }
    else if (*(int *)((long)ppvVar16[7] + 0x30) == 1) {
      pvVar15 = (void *)adler32(ppvVar16[0xc],pvVar15,uVar14);
      goto LAB_00e28810;
    }
    uVar7 = *(int *)((long)param_1 + 0xac) + uVar7;
    *ppvVar16 = (void *)((long)*ppvVar16 + uVar14);
    ppvVar16[2] = (void *)((long)ppvVar16[2] + uVar14);
    *(uint *)((long)param_1 + 0xac) = uVar7;
    plVar9 = (long *)(ulong)uVar7;
    if (plVar9 <= param_1[0x2e7]) goto LAB_00e2884c;
  }
  else {
    if (param_1[0x13] == plVar9) {
      return 1;
    }
LAB_00e287e8:
    plVar9 = (long *)(ulong)*(uint *)((long)param_1 + 0xac);
    if (plVar9 <= param_1[0x2e7]) goto LAB_00e2884c;
  }
  param_1[0x2e7] = plVar9;
LAB_00e2884c:
  uVar14 = (long)param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
  uVar10 = (uint)uVar14;
  if (0xfffe < uVar14) {
    uVar10 = 0xffff;
  }
  uVar11 = (int)plVar9 - (int)param_1[0x13];
  uVar7 = *(uint *)(param_1 + 10);
  if (uVar10 <= *(uint *)(param_1 + 10)) {
    uVar7 = uVar10;
  }
  if (uVar11 < uVar7) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 4 && uVar11 == 0) {
      return 0;
    }
    if (*(int *)(*param_1 + 1) != 0) {
      return 0;
    }
    if (uVar10 < uVar11) {
      return 0;
    }
  }
  uVar7 = uVar10;
  if (uVar11 <= uVar10) {
    uVar7 = uVar11;
  }
  if (param_2 == 4) {
    bVar6 = *(int *)(*param_1 + 1) == 0 && uVar11 <= uVar10;
  }
  else {
    bVar6 = false;
  }
  _tr_stored_block(param_1,(long)param_1[0xc] + (long)param_1[0x13],(ulong)uVar7,bVar6);
  plVar9 = *param_1;
  lVar13 = plVar9[7];
  param_1[0x13] = (long *)((long)param_1[0x13] + (ulong)uVar7);
  _tr_flush_bits(lVar13);
  uVar10 = *(uint *)(plVar9 + 4);
  if (*(uint *)(lVar13 + 0x28) <= *(uint *)(plVar9 + 4)) {
    uVar10 = *(uint *)(lVar13 + 0x28);
  }
  uVar14 = (ulong)uVar10;
  if (uVar10 != 0) {
    memcpy((void *)plVar9[3],*(void **)(lVar13 + 0x20),uVar14);
    lVar12 = *(long *)(lVar13 + 0x20);
    lVar2 = *(long *)(lVar13 + 0x28);
    plVar9[3] = plVar9[3] + uVar14;
    lVar2 = lVar2 - uVar14;
    plVar9[5] = plVar9[5] + uVar14;
    *(uint *)(plVar9 + 4) = *(int *)(plVar9 + 4) - uVar10;
    *(ulong *)(lVar13 + 0x20) = lVar12 + uVar14;
    *(long *)(lVar13 + 0x28) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar13 + 0x10);
    }
  }
  uVar8 = 2;
  if (bVar6 == false) {
    uVar8 = 0;
  }
  return uVar8;
}


