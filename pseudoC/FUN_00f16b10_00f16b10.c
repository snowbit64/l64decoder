// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f16b10
// Entry Point: 00f16b10
// Size: 848 bytes
// Signature: undefined FUN_00f16b10(void)


void FUN_00f16b10(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  double *pdVar19;
  ulong uVar20;
  uint uVar21;
  double dVar22;
  double local_78;
  undefined4 local_70;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((0x4000000 < (int)param_3) || (0x4000000 < param_4)) goto LAB_00f16e44;
  iVar18 = *(int *)(param_2 + 8);
  bVar2 = *(byte *)(param_2 + 6);
  puVar16 = *(undefined1 **)(param_2 + 0x20);
  if (iVar18 < (int)param_3) {
    if ((int)param_3 < 0) goto LAB_00f16e54;
    uVar20 = (ulong)param_3;
    lVar6 = FUN_00f10724(param_1,*(undefined8 *)(param_2 + 0x18),(long)iVar18 << 4,uVar20 << 4,
                         *(undefined *)(param_2 + 2));
    lVar14 = (long)*(int *)(param_2 + 8);
    *(long *)(param_2 + 0x18) = lVar6;
    if (*(int *)(param_2 + 8) < (int)param_3) {
      uVar11 = uVar20 - lVar14;
      lVar10 = lVar14;
      if (1 < uVar11) {
        uVar13 = uVar11 & 0xfffffffffffffffe;
        lVar10 = uVar13 + lVar14;
        puVar12 = (undefined4 *)(lVar6 + lVar14 * 0x10 + 0x1c);
        uVar15 = uVar13;
        do {
          uVar15 = uVar15 - 2;
          puVar12[-4] = 0;
          *puVar12 = 0;
          puVar12 = puVar12 + 8;
        } while (uVar15 != 0);
        if (uVar11 == uVar13) goto LAB_00f16c00;
      }
      lVar14 = uVar20 - lVar10;
      puVar12 = (undefined4 *)(lVar6 + lVar10 * 0x10 + 0xc);
      do {
        lVar14 = lVar14 + -1;
        *puVar12 = 0;
        puVar12 = puVar12 + 4;
      } while (lVar14 != 0);
    }
LAB_00f16c00:
    *(uint *)(param_2 + 8) = param_3;
  }
  if (param_4 == 0) {
    uVar21 = 0;
    *(undefined1 **)(param_2 + 0x20) = luaH_dummynode;
    uVar17 = 0;
  }
  else {
    iVar5 = FUN_00f10ffc(param_4 + -1);
    if (0x19 < iVar5) {
LAB_00f16e44:
                    /* WARNING: Subroutine does not return */
      FUN_00f09b70(param_1,"table overflow");
    }
    uVar17 = iVar5 + 1;
    uVar21 = 1 << (ulong)(uVar17 & 0x1f);
    lVar6 = FUN_00f10090(param_1,-(ulong)(uVar21 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar21 << 5,
                         *(undefined *)(param_2 + 2));
    *(long *)(param_2 + 0x20) = lVar6;
    uVar1 = uVar21;
    if ((int)uVar21 < 2) {
      uVar1 = 1;
    }
    *(undefined4 *)(lVar6 + 0x1c) = 0;
    *(undefined4 *)(lVar6 + 0xc) = 0;
    if (1 < (int)uVar21) {
      lVar6 = 0;
      do {
        lVar14 = *(long *)(param_2 + 0x20) + lVar6;
        lVar6 = lVar6 + 0x20;
        *(undefined4 *)(lVar14 + 0x3c) = 0;
        *(undefined4 *)(lVar14 + 0x2c) = 0;
      } while ((ulong)uVar1 * 0x20 + -0x20 != lVar6);
    }
  }
  *(char *)(param_2 + 6) = (char)uVar17;
  *(uint *)(param_2 + 0xc) = uVar21;
  *(byte *)(param_2 + 7) = ~(byte)(-1 << (ulong)(uVar17 & 0x1f));
  if ((int)param_3 < iVar18) {
    *(uint *)(param_2 + 8) = param_3;
    lVar6 = (long)(int)param_3;
    do {
      while (lVar14 = *(long *)(param_2 + 0x18), *(int *)(lVar14 + lVar6 * 0x10 + 0xc) == 0) {
        lVar6 = lVar6 + 1;
        if ((int)lVar6 == iVar18) goto LAB_00f16d1c;
      }
      local_6c = 3;
      iVar5 = (int)(lVar6 + 1);
      local_78 = (double)iVar5;
      puVar7 = (undefined8 *)FUN_00f17668(param_1,param_2,&local_78);
      puVar3 = (undefined8 *)(lVar14 + lVar6 * 0x10);
      uVar8 = *puVar3;
      puVar7[1] = puVar3[1];
      *puVar7 = uVar8;
      lVar6 = lVar6 + 1;
    } while (iVar5 != iVar18);
LAB_00f16d1c:
    if ((int)param_3 < 0) {
LAB_00f16e54:
                    /* WARNING: Subroutine does not return */
      FUN_00f1007c(param_1);
    }
    uVar8 = FUN_00f10724(param_1,*(undefined8 *)(param_2 + 0x18),(long)iVar18 << 4,
                         (ulong)param_3 << 4,*(undefined *)(param_2 + 2));
    *(undefined8 *)(param_2 + 0x18) = uVar8;
  }
  uVar17 = 1 << (ulong)(bVar2 & 0x1f);
  if (bVar2 != 0x1f) {
    iVar18 = uVar17 + 1;
    pdVar19 = (double *)(puVar16 + (ulong)(uVar17 - 1) * 0x20 + 0x10);
    do {
      if (*(int *)((long)pdVar19 + -4) != 0) {
        local_78 = *pdVar19;
        local_70 = *(undefined4 *)(pdVar19 + 1);
        local_6c = *(uint *)((long)pdVar19 + 0xc) & 0xf;
        if (((local_6c == 3) && (local_78 == (double)(int)local_78)) &&
           (uVar21 = (int)local_78 - 1, uVar21 < *(uint *)(param_2 + 8))) {
          pdVar9 = (double *)(*(long *)(param_2 + 0x18) + (long)(int)uVar21 * 0x10);
        }
        else {
          pdVar9 = (double *)FUN_00f17668(param_1,param_2,&local_78);
        }
        dVar22 = pdVar19[-2];
        pdVar9[1] = pdVar19[-1];
        *pdVar9 = dVar22;
      }
      iVar18 = iVar18 + -1;
      pdVar19 = pdVar19 + -4;
    } while (1 < iVar18);
  }
  if (puVar16 != luaH_dummynode) {
    FUN_00f1043c(param_1,puVar16,-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5,
                 *(undefined *)(param_2 + 2));
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


