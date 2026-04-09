// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f268
// Entry Point: 00d8f268
// Size: 700 bytes
// Signature: undefined FUN_00d8f268(void)


void FUN_00d8f268(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  code **ppcVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = param_1[0x4e];
  iVar6 = *(int *)((long)param_1 + 100);
  uVar1 = *(undefined4 *)(lVar15 + 0x28);
  param_1[0x12] = *(undefined8 *)(lVar15 + 0x20);
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  if (iVar6 == 2) {
    *(undefined *)(lVar15 + 0x90) = 0;
    *(code **)(lVar15 + 8) = FUN_00d8fb30;
    if (*(long *)(lVar15 + 0x70) == 0) {
      if (*(int *)((long)param_1 + 0x7c) < 1) {
        return;
      }
      iVar6 = *(int *)((long)param_1 + 0x74);
      lVar16 = 0;
      do {
        uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)(iVar6 + 2) << 1);
        iVar5 = *(int *)((long)param_1 + 0x7c);
        *(undefined8 *)(lVar15 + 0x70 + lVar16 * 8) = uVar3;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar5);
    }
    else {
      iVar5 = *(int *)((long)param_1 + 0x7c);
    }
    if (0 < iVar5) {
      iVar6 = *(int *)((long)param_1 + 0x74);
      lVar16 = 0;
      do {
        memset(*(void **)(lVar15 + 0x70 + lVar16 * 8),0,(ulong)(iVar6 + 2) << 1);
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((long)param_1 + 0x7c));
    }
  }
  else if (iVar6 == 1) {
    iVar6 = *(int *)((long)param_1 + 0x7c);
    *(undefined4 *)(lVar15 + 0x4c) = 0;
    pcVar8 = FUN_00d8f8cc;
    if (iVar6 != 3) {
      pcVar8 = FUN_00d8f9dc;
    }
    *(code **)(lVar15 + 8) = pcVar8;
    if (*(char *)(lVar15 + 0x38) == '\0') {
      FUN_00d8f53c(param_1);
      lVar15 = *(long *)(lVar15 + 0x50);
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x50);
    }
    if ((lVar15 == 0) && (iVar6 = *(int *)((long)param_1 + 0x7c), 0 < iVar6)) {
      lVar16 = param_1[0x4e];
      lVar15 = 0;
LAB_00d8f454:
      do {
        iVar5 = *(int *)(lVar16 + lVar15 * 4 + 0x3c);
        if (lVar15 != 0) {
          lVar9 = 0;
          do {
            if (iVar5 == *(int *)(lVar16 + 0x3c + lVar9 * 4)) {
              lVar9 = *(long *)(lVar16 + 0x3c + lVar9 * 8 + 0x14);
              if (lVar9 != 0) {
                lVar12 = lVar15 * 8;
                lVar15 = lVar15 + 1;
                *(long *)(lVar16 + lVar12 + 0x50) = lVar9;
                if (iVar6 <= lVar15) {
                  return;
                }
                goto LAB_00d8f454;
              }
              break;
            }
            lVar9 = lVar9 + 1;
          } while (lVar15 != lVar9);
        }
        lVar4 = (**(code **)param_1[1])(param_1,1,0x400);
        uVar2 = iVar5 - 1;
        lVar9 = 0;
        uVar10 = -(ulong)(uVar2 >> 0x1f) & 0xfffffe0000000000 | (ulong)uVar2 << 9;
        puVar11 = &DAT_00548b44;
        lVar12 = lVar4;
        do {
          lVar13 = 0;
          do {
            lVar14 = (ulong)(byte)puVar11[lVar13] * -0x1fe;
            iVar6 = 0;
            if (uVar10 != 0) {
              iVar6 = (int)((lVar14 + 0xfe01) / (long)uVar10);
            }
            iVar5 = 0;
            if (uVar10 != 0) {
              iVar5 = (int)((long)((ulong)(byte)puVar11[lVar13] * 0x1fe + -0xfe01) / (long)uVar10);
            }
            if (lVar14 < -0xfe01) {
              iVar6 = -iVar5;
            }
            *(int *)(lVar12 + lVar13 * 4) = iVar6;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0x10);
          lVar9 = lVar9 + 1;
          lVar12 = lVar12 + 0x40;
          puVar11 = puVar11 + 0x10;
        } while (lVar9 != 0x10);
        iVar6 = *(int *)((long)param_1 + 0x7c);
        lVar9 = lVar15 * 8;
        lVar15 = lVar15 + 1;
        *(long *)(lVar16 + lVar9 + 0x50) = lVar4;
      } while (lVar15 < iVar6);
    }
  }
  else {
    if (iVar6 != 0) {
      ppcVar7 = (code **)*param_1;
      *(undefined4 *)(ppcVar7 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x00d8f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar7)(param_1);
      return;
    }
    if (*(int *)((long)param_1 + 0x7c) == 3) {
      pcVar8 = FUN_00d8f71c;
    }
    else {
      pcVar8 = FUN_00d8f794;
    }
    *(code **)(lVar15 + 8) = pcVar8;
  }
  return;
}


