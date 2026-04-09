// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e74e64
// Entry Point: 00e74e64
// Size: 516 bytes
// Signature: undefined FUN_00e74e64(void)


void FUN_00e74e64(undefined2 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  void *__src;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 auStack_40 [4];
  long local_38;
  
  lVar5 = tpidr_el0;
  uVar4 = param_3 * param_2;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar9 = -((-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1) + 0xf &
           0xfffffffffffffff0);
  __src = (void *)((long)auStack_40 + lVar9);
  if (param_4 == 0) {
    if ((0 < (int)param_3) && (0 < (int)param_2)) {
      uVar16 = (ulong)param_3;
      uVar18 = (ulong)param_2;
      lVar15 = 0;
      uVar14 = 0;
      uVar17 = uVar18 & 0xfffffffe;
      puVar7 = (undefined2 *)((long)auStack_40 + lVar9 + 2);
      puVar6 = param_1;
      do {
        puVar8 = puVar7;
        uVar11 = uVar17;
        puVar12 = puVar6;
        if (param_2 < 2) {
          uVar11 = 0;
LAB_00e7500c:
          lVar9 = uVar16 * 2 * uVar11;
          lVar10 = uVar18 - uVar11;
          puVar8 = (undefined2 *)((long)__src + (uVar11 + lVar15) * 2);
          do {
            puVar12 = (undefined2 *)((long)puVar6 + lVar9);
            lVar9 = lVar9 + uVar16 * 2;
            lVar10 = lVar10 + -1;
            *puVar8 = *puVar12;
            puVar8 = puVar8 + 1;
          } while (lVar10 != 0);
        }
        else {
          do {
            uVar1 = puVar12[uVar16];
            uVar11 = uVar11 - 2;
            puVar8[-1] = *puVar12;
            *puVar8 = uVar1;
            puVar8 = puVar8 + 2;
            puVar12 = puVar12 + uVar16 * 2;
          } while (uVar11 != 0);
          uVar11 = uVar17;
          if (uVar17 != uVar18) goto LAB_00e7500c;
        }
        uVar14 = uVar14 + 1;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + uVar18;
        lVar15 = lVar15 + uVar18;
      } while (uVar14 != uVar16);
    }
  }
  else if ((0 < (int)param_3) && (0 < (int)param_2)) {
    lVar15 = (long)(int)param_3;
    uVar16 = (ulong)param_2;
    uVar14 = 0;
    uVar18 = uVar16 & 0xfffffffe;
    puVar7 = param_1;
    do {
      iVar3 = *(int *)(&DAT_00567918 + uVar14 * 4 + (long)(int)param_3 * 4);
      if (param_2 < 2) {
        uVar17 = 0;
LAB_00e74f50:
        lVar10 = lVar15 * 2 * uVar17;
        lVar13 = uVar16 - uVar17;
        puVar6 = (undefined2 *)((long)__src + (uVar17 + (long)iVar3 * (long)(int)param_2) * 2);
        do {
          puVar8 = (undefined2 *)((long)puVar7 + lVar10);
          lVar10 = lVar10 + lVar15 * 2;
          lVar13 = lVar13 + -1;
          *puVar6 = *puVar8;
          puVar6 = puVar6 + 1;
        } while (lVar13 != 0);
      }
      else {
        puVar8 = (undefined2 *)((long)auStack_40 + (long)iVar3 * (long)(int)param_2 * 2 + lVar9 + 2)
        ;
        uVar17 = uVar18;
        puVar6 = puVar7;
        do {
          uVar2 = puVar6[lVar15];
          uVar17 = uVar17 - 2;
          uVar1 = *puVar6;
          puVar6 = puVar6 + lVar15 * 2;
          puVar8[-1] = uVar1;
          *puVar8 = uVar2;
          puVar8 = puVar8 + 2;
        } while (uVar17 != 0);
        uVar17 = uVar18;
        if (uVar18 != uVar16) goto LAB_00e74f50;
      }
      uVar14 = uVar14 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar14 != param_3);
  }
  memcpy(param_1,__src,(long)(int)uVar4 << 1);
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


