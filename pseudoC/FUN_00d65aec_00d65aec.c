// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65aec
// Entry Point: 00d65aec
// Size: 672 bytes
// Signature: undefined FUN_00d65aec(void)


void FUN_00d65aec(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long local_78 [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar18 = *(int *)(param_1 + 0x164);
  lVar20 = *(long *)(param_1 + 0x1f8);
  if (0 < iVar18) {
    lVar21 = 0;
    do {
      lVar14 = *(long *)(param_1 + 0x168 + lVar21 * 8);
      iVar18 = *(int *)(lVar14 + 0xc);
      lVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar20 + (long)*(int *)(lVar14 + 4) * 8 + 0x70),
                         iVar18 * *(int *)(lVar20 + 0x10),iVar18,0);
      iVar18 = *(int *)(param_1 + 0x164);
      lVar14 = lVar21 + 1;
      local_78[lVar21] = lVar5;
      lVar21 = lVar14;
    } while (lVar14 < iVar18);
  }
  iVar13 = *(int *)(lVar20 + 0x1c);
  lVar21 = (long)*(int *)(lVar20 + 0x18);
  if (*(int *)(lVar20 + 0x18) < iVar13) {
    uVar22 = *(uint *)(lVar20 + 0x14);
    uVar15 = *(uint *)(param_1 + 0x188);
    do {
      if (uVar22 < uVar15) {
        do {
          uVar15 = *(uint *)(param_1 + 0x164);
          if (0 < (int)uVar15) {
            uVar17 = 0;
            iVar18 = 0;
            do {
              lVar14 = *(long *)(param_1 + uVar17 * 8 + 0x168);
              uVar2 = *(uint *)(lVar14 + 0x3c);
              if (0 < (int)uVar2) {
                iVar13 = *(int *)(lVar14 + 0x38);
                if (0 < iVar13) {
                  lVar14 = local_78[uVar17];
                  uVar1 = (ulong)(iVar13 - 1U) + 1;
                  uVar19 = 0;
                  uVar6 = uVar1 & 0x1fffffffc;
                  do {
                    lVar8 = (long)iVar18;
                    lVar5 = *(long *)(lVar14 + (uVar19 + lVar21) * 8) +
                            (ulong)(iVar13 * uVar22) * 0x80;
                    if (iVar13 - 1U < 3) {
LAB_00d65ca4:
                      iVar9 = (int)lVar8 - iVar13;
                      plVar11 = (long *)(lVar20 + 0x20 + lVar8 * 8);
                      do {
                        iVar9 = iVar9 + 1;
                        *plVar11 = lVar5;
                        lVar5 = lVar5 + 0x80;
                        plVar11 = plVar11 + 1;
                      } while (iVar18 != iVar9);
                    }
                    else {
                      plVar11 = (long *)(lVar20 + 0x30 + (long)iVar18 * 8);
                      lVar8 = uVar6 + lVar8;
                      lVar10 = lVar5;
                      uVar12 = uVar6;
                      do {
                        uVar12 = uVar12 - 4;
                        plVar11[-1] = lVar10 + 0x80;
                        plVar11[-2] = lVar10;
                        plVar11[1] = lVar10 + 0x180;
                        *plVar11 = lVar10 + 0x100;
                        plVar11 = plVar11 + 4;
                        lVar10 = lVar10 + 0x200;
                      } while (uVar12 != 0);
                      lVar5 = lVar5 + uVar6 * 0x80;
                      if (uVar1 != uVar6) goto LAB_00d65ca4;
                    }
                    iVar18 = iVar18 + iVar13;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar2);
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar15);
          }
          cVar4 = (**(code **)(*(long *)(param_1 + 0x220) + 8))(param_1,lVar20 + 0x20);
          if (cVar4 == '\0') {
            uVar7 = 0;
            *(uint *)(lVar20 + 0x14) = uVar22;
            *(int *)(lVar20 + 0x18) = (int)lVar21;
            goto LAB_00d65d5c;
          }
          uVar22 = uVar22 + 1;
          uVar15 = *(uint *)(param_1 + 0x188);
        } while (uVar22 < uVar15);
        iVar13 = *(int *)(lVar20 + 0x1c);
      }
      uVar22 = 0;
      lVar21 = lVar21 + 1;
      *(undefined4 *)(lVar20 + 0x14) = 0;
    } while (lVar21 < iVar13);
    iVar18 = *(int *)(param_1 + 0x164);
  }
  *(int *)(lVar20 + 0x10) = *(int *)(lVar20 + 0x10) + 1;
  lVar20 = *(long *)(param_1 + 0x1f8);
  if (iVar18 < 2) {
    lVar21 = 0xc;
    if (*(int *)(param_1 + 0x160) - 1U <= *(uint *)(lVar20 + 0x10)) {
      lVar21 = 0x4c;
    }
    uVar16 = *(undefined4 *)(*(long *)(param_1 + 0x168) + lVar21);
  }
  else {
    uVar16 = 1;
  }
  uVar7 = 1;
  *(undefined4 *)(lVar20 + 0x18) = 0;
  *(undefined4 *)(lVar20 + 0x1c) = uVar16;
  *(undefined4 *)(lVar20 + 0x14) = 0;
LAB_00d65d5c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


