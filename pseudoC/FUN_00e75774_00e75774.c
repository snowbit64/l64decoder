// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e75774
// Entry Point: 00e75774
// Size: 516 bytes
// Signature: undefined FUN_00e75774(void)


void FUN_00e75774(void *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *__src;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined2 auStack_40 [4];
  long local_38;
  
  lVar4 = tpidr_el0;
  uVar3 = param_3 * param_2;
  local_38 = *(long *)(lVar4 + 0x28);
  __src = (undefined2 *)
          ((long)auStack_40 -
          ((-(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1) + 0xf &
          0xfffffffffffffff0));
  if (param_4 == 0) {
    if ((0 < (int)param_3) && (0 < (int)param_2)) {
      uVar14 = (ulong)param_2;
      uVar16 = (ulong)param_3;
      lVar13 = 0;
      uVar12 = 0;
      uVar15 = uVar14 & 0xfffffffe;
      puVar6 = (undefined2 *)((long)param_1 + 2);
      puVar5 = __src;
      do {
        puVar7 = puVar6;
        puVar9 = puVar5;
        uVar10 = uVar15;
        if (param_2 < 2) {
          uVar10 = 0;
LAB_00e7591c:
          lVar8 = uVar16 * 2 * uVar10;
          lVar11 = uVar14 - uVar10;
          puVar7 = (undefined2 *)((long)param_1 + (uVar10 + lVar13) * 2);
          do {
            lVar11 = lVar11 + -1;
            *(undefined2 *)((long)puVar5 + lVar8) = *puVar7;
            lVar8 = lVar8 + uVar16 * 2;
            puVar7 = puVar7 + 1;
          } while (lVar11 != 0);
        }
        else {
          do {
            uVar2 = puVar7[-1];
            uVar10 = uVar10 - 2;
            puVar9[uVar16] = *puVar7;
            *puVar9 = uVar2;
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + uVar16 * 2;
          } while (uVar10 != 0);
          uVar10 = uVar15;
          if (uVar15 != uVar14) goto LAB_00e7591c;
        }
        uVar12 = uVar12 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + uVar14;
        lVar13 = lVar13 + uVar14;
      } while (uVar12 != uVar16);
    }
  }
  else if ((0 < (int)param_3) && (0 < (int)param_2)) {
    lVar13 = (long)(int)param_3;
    uVar14 = (ulong)param_2;
    uVar12 = 0;
    uVar16 = uVar14 & 0xfffffffe;
    puVar6 = __src;
    do {
      iVar1 = *(int *)(&DAT_00567918 + uVar12 * 4 + (long)(int)param_3 * 4);
      if (param_2 < 2) {
        uVar15 = 0;
LAB_00e75860:
        lVar8 = lVar13 * 2 * uVar15;
        lVar11 = uVar14 - uVar15;
        puVar5 = (undefined2 *)((long)param_1 + (uVar15 + (long)iVar1 * (long)(int)param_2) * 2);
        do {
          lVar11 = lVar11 + -1;
          *(undefined2 *)((long)puVar6 + lVar8) = *puVar5;
          lVar8 = lVar8 + lVar13 * 2;
          puVar5 = puVar5 + 1;
        } while (lVar11 != 0);
      }
      else {
        puVar7 = (undefined2 *)((long)param_1 + (long)iVar1 * (long)(int)param_2 * 2 + 2);
        puVar5 = puVar6;
        uVar15 = uVar16;
        do {
          uVar2 = puVar7[-1];
          uVar15 = uVar15 - 2;
          puVar5[lVar13] = *puVar7;
          *puVar5 = uVar2;
          puVar5 = puVar5 + lVar13 * 2;
          puVar7 = puVar7 + 2;
        } while (uVar15 != 0);
        uVar15 = uVar16;
        if (uVar16 != uVar14) goto LAB_00e75860;
      }
      uVar12 = uVar12 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar12 != param_3);
  }
  memcpy(param_1,__src,(long)(int)uVar3 << 1);
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


