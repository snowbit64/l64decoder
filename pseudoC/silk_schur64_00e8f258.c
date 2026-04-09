// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_schur64
// Entry Point: 00e8f258
// Size: 704 bytes
// Signature: undefined silk_schur64(void)


void silk_schur64(void *param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int local_100 [10];
  undefined4 local_d8 [40];
  long local_38;
  
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  iVar8 = *param_2;
  if (iVar8 < 1) {
    memset(param_1,0,-(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2);
    iVar8 = 0;
    goto LAB_00e8f4d4;
  }
  iVar10 = (int)param_3;
  local_100[0] = iVar8;
  local_100[1] = iVar8;
  if (0 < iVar10) {
    uVar14 = (ulong)(iVar10 + 1) - 1;
    if (uVar14 < 8) {
      uVar12 = 1;
    }
    else {
      uVar16 = uVar14 & 0xfffffffffffffff8;
      uVar12 = uVar16 | 1;
      puVar17 = local_d8;
      puVar18 = (undefined8 *)(param_2 + 5);
      uVar20 = uVar16;
      do {
        uVar26 = puVar18[-1];
        uVar25 = puVar18[-2];
        uVar24 = puVar18[1];
        uVar23 = *puVar18;
        puVar18 = puVar18 + 4;
        uVar20 = uVar20 - 8;
        uVar22 = (undefined4)uVar25;
        puVar17[-8] = uVar22;
        puVar17[-7] = uVar22;
        uVar22 = (undefined4)((ulong)uVar25 >> 0x20);
        puVar17[-6] = uVar22;
        puVar17[-5] = uVar22;
        uVar22 = (undefined4)uVar26;
        puVar17[-4] = uVar22;
        puVar17[-3] = uVar22;
        uVar22 = (undefined4)((ulong)uVar26 >> 0x20);
        puVar17[-2] = uVar22;
        puVar17[-1] = uVar22;
        uVar22 = (undefined4)uVar23;
        *puVar17 = uVar22;
        puVar17[1] = uVar22;
        uVar22 = (undefined4)((ulong)uVar23 >> 0x20);
        puVar17[2] = uVar22;
        puVar17[3] = uVar22;
        uVar22 = (undefined4)uVar24;
        puVar17[4] = uVar22;
        puVar17[5] = uVar22;
        uVar22 = (undefined4)((ulong)uVar24 >> 0x20);
        puVar17[6] = uVar22;
        puVar17[7] = uVar22;
        puVar17 = puVar17 + 0x10;
      } while (uVar20 != 0);
      if (uVar14 == uVar16) goto LAB_00e8f334;
    }
    lVar11 = (iVar10 + 1) - uVar12;
    piVar15 = local_100 + uVar12 * 2 + 1;
    piVar13 = param_2 + uVar12;
    do {
      iVar8 = *piVar13;
      lVar11 = lVar11 + -1;
      piVar15[-1] = iVar8;
      *piVar15 = iVar8;
      piVar15 = piVar15 + 2;
      piVar13 = piVar13 + 1;
    } while (lVar11 != 0);
  }
LAB_00e8f334:
  if (iVar10 < 1) {
    uVar14 = 0;
    if (0 < iVar10) {
LAB_00e8f4ac:
      memset((void *)((long)param_1 + (uVar14 & 0xffffffff) * 4),0,
             (ulong)(~(uint)uVar14 + iVar10) * 4 + 4);
    }
  }
  else {
    lVar11 = 0;
    uVar20 = param_3 & 0xffffffff;
    uVar12 = 0;
    do {
      uVar14 = uVar12 + 1;
      iVar19 = local_100[uVar14 * 2];
      iVar8 = -iVar19;
      if (-1 < iVar19) {
        iVar8 = iVar19;
      }
      if (local_100[1] <= iVar8) {
        uVar22 = 0xfd71;
        if (0 < iVar19) {
          uVar22 = 0xffff028f;
        }
        *(undefined4 *)((long)param_1 + (uVar12 & 0xffffffff) * 4) = uVar22;
        if ((int)uVar14 < iVar10) goto LAB_00e8f4ac;
        break;
      }
      iVar9 = -local_100[1];
      if (-1 < local_100[1]) {
        iVar9 = local_100[1];
      }
      iVar5 = (int)LZCOUNT(iVar8) - (int)LZCOUNT(iVar9);
      iVar19 = -iVar19 << (ulong)((int)LZCOUNT(iVar8) - 1U & 0x1f);
      uVar6 = 2 - iVar5;
      iVar9 = local_100[1] << (ulong)((int)LZCOUNT(iVar9) - 1U & 0x1f);
      iVar8 = iVar9 >> 0x10;
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)(0x1fffffff / iVar8);
      }
      lVar21 = (long)sVar4 * (long)iVar19;
      uVar2 = -0x80000000 >> (uVar6 & 0x1f);
      uVar1 = (int)((ulong)((long)sVar4 *
                           (long)(int)(iVar19 - ((uint)((ulong)((lVar21 >> 0x10) * (long)iVar9) >>
                                                       0x1d) & 0xfffffff8))) >> 0x10) +
              (int)((ulong)lVar21 >> 0x10);
      uVar3 = 0x7fffffff >> (ulong)(uVar6 & 0x1f);
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      if ((int)uVar1 <= (int)uVar3) {
        uVar3 = uVar2;
      }
      iVar8 = (int)uVar1 >> (iVar5 - 2U & 0x1f);
      if (iVar5 < 2) {
        iVar8 = uVar3 << (ulong)(uVar6 & 0x1f);
      }
      *(int *)((long)param_1 + uVar12 * 4) = (iVar8 >> 0xe) + 1 >> 1;
      iVar19 = (int)uVar20;
      if ((int)uVar12 < iVar10) {
        iVar9 = local_100[1];
        piVar15 = local_100;
        while( true ) {
          piVar13 = piVar15 + 2;
          uVar20 = uVar20 - 1;
          iVar5 = *(int *)((long)piVar13 + lVar11);
          *(int *)((long)piVar13 + lVar11) =
               iVar5 + (int)((ulong)((long)(iVar9 << 1) * (long)iVar8) >> 0x20);
          piVar15[1] = iVar9 + (int)((ulong)((long)(iVar5 << 1) * (long)iVar8) >> 0x20);
          if (uVar20 == 0) break;
          iVar9 = piVar15[3];
          piVar15 = piVar13;
        }
      }
      uVar20 = (ulong)(iVar19 - 1);
      lVar11 = lVar11 + 8;
      uVar12 = uVar14;
    } while (uVar14 != (param_3 & 0xffffffff));
  }
  iVar8 = local_100[1];
  if (local_100[1] < 2) {
    iVar8 = 1;
  }
LAB_00e8f4d4:
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}


