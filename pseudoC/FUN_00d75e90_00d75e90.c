// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75e90
// Entry Point: 00d75e90
// Size: 700 bytes
// Signature: undefined FUN_00d75e90(void)


void FUN_00d75e90(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long local_78 [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar20 = *(long *)(param_1 + 0x230);
  if (0 < *(int *)(param_1 + 0x1a0)) {
    lVar21 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x1a8 + lVar21 * 8);
      iVar14 = *(int *)(lVar15 + 0xc);
      lVar6 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar20 + (long)*(int *)(lVar15 + 4) * 8 + 0x88),
                         iVar14 * *(int *)(param_1 + 0xa0),iVar14,1);
      iVar14 = *(int *)(param_1 + 0x1a0);
      lVar15 = lVar21 + 1;
      local_78[lVar21] = lVar6;
      lVar21 = lVar15;
    } while (lVar15 < iVar14);
  }
  iVar14 = *(int *)(lVar20 + 0x30);
  lVar21 = (long)*(int *)(lVar20 + 0x2c);
  if (*(int *)(lVar20 + 0x2c) < iVar14) {
    uVar22 = *(uint *)(lVar20 + 0x28);
    uVar16 = *(uint *)(param_1 + 0x1c8);
    do {
      if (uVar22 < uVar16) {
        do {
          uVar16 = *(uint *)(param_1 + 0x1a0);
          if (0 < (int)uVar16) {
            uVar18 = 0;
            iVar14 = 0;
            do {
              lVar15 = *(long *)(param_1 + uVar18 * 8 + 0x1a8);
              uVar2 = *(uint *)(lVar15 + 0x3c);
              if (0 < (int)uVar2) {
                iVar3 = *(int *)(lVar15 + 0x38);
                if (0 < iVar3) {
                  lVar15 = local_78[uVar18];
                  uVar1 = (ulong)(iVar3 - 1U) + 1;
                  uVar19 = 0;
                  uVar7 = uVar1 & 0x1fffffffc;
                  do {
                    lVar9 = (long)iVar14;
                    lVar6 = *(long *)(lVar15 + (uVar19 + lVar21) * 8) +
                            (ulong)(iVar3 * uVar22) * 0x80;
                    if (iVar3 - 1U < 3) {
LAB_00d76048:
                      iVar10 = (int)lVar9 - iVar3;
                      plVar12 = (long *)(lVar20 + 0x38 + lVar9 * 8);
                      do {
                        iVar10 = iVar10 + 1;
                        *plVar12 = lVar6;
                        lVar6 = lVar6 + 0x80;
                        plVar12 = plVar12 + 1;
                      } while (iVar14 != iVar10);
                    }
                    else {
                      plVar12 = (long *)(lVar20 + 0x48 + (long)iVar14 * 8);
                      lVar9 = uVar7 + lVar9;
                      lVar11 = lVar6;
                      uVar13 = uVar7;
                      do {
                        uVar13 = uVar13 - 4;
                        plVar12[-1] = lVar11 + 0x80;
                        plVar12[-2] = lVar11;
                        plVar12[1] = lVar11 + 0x180;
                        *plVar12 = lVar11 + 0x100;
                        plVar12 = plVar12 + 4;
                        lVar11 = lVar11 + 0x200;
                      } while (uVar13 != 0);
                      lVar6 = lVar6 + uVar7 * 0x80;
                      if (uVar1 != uVar7) goto LAB_00d76048;
                    }
                    iVar14 = iVar14 + iVar3;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 != uVar2);
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar16);
          }
          cVar5 = (**(code **)(*(long *)(param_1 + 0x250) + 8))(param_1,lVar20 + 0x38);
          if (cVar5 == '\0') {
            uVar8 = 0;
            *(uint *)(lVar20 + 0x28) = uVar22;
            *(int *)(lVar20 + 0x2c) = (int)lVar21;
            goto LAB_00d7611c;
          }
          uVar22 = uVar22 + 1;
          uVar16 = *(uint *)(param_1 + 0x1c8);
        } while (uVar22 < uVar16);
        iVar14 = *(int *)(lVar20 + 0x30);
      }
      uVar22 = 0;
      lVar21 = lVar21 + 1;
      *(undefined4 *)(lVar20 + 0x28) = 0;
    } while (lVar21 < iVar14);
  }
  uVar22 = *(int *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0xa0) = uVar22;
  if (uVar22 < *(uint *)(param_1 + 400)) {
    lVar20 = *(long *)(param_1 + 0x230);
    if (*(int *)(param_1 + 0x1a0) < 2) {
      lVar21 = 0xc;
      if (*(uint *)(param_1 + 400) - 1 <= uVar22) {
        lVar21 = 0x4c;
      }
      uVar17 = *(undefined4 *)(*(long *)(param_1 + 0x1a8) + lVar21);
    }
    else {
      uVar17 = 1;
    }
    *(undefined4 *)(lVar20 + 0x30) = uVar17;
    uVar8 = 3;
    *(undefined8 *)(lVar20 + 0x28) = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1);
    uVar8 = 4;
  }
LAB_00d7611c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


