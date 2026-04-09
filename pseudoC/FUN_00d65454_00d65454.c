// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65454
// Entry Point: 00d65454
// Size: 784 bytes
// Signature: undefined FUN_00d65454(void)


undefined8 FUN_00d65454(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  code *pcVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int local_6c;
  
  lVar20 = *(long *)(param_1 + 0x1f8);
  local_6c = *(int *)(lVar20 + 0x18);
  iVar7 = *(int *)(lVar20 + 0x1c);
  lVar13 = lVar20;
  if (local_6c < iVar7) {
    lVar13 = lVar20 + 0x20;
    iVar2 = *(int *)(param_1 + 0x160);
    uVar16 = *(uint *)(lVar20 + 0x14);
    uVar5 = *(int *)(param_1 + 0x188) - 1;
    do {
      if (uVar16 <= uVar5) {
        do {
          iVar7 = *(int *)(param_1 + 0x164);
          if (0 < iVar7) {
            lVar15 = 0;
            iVar21 = 0;
            do {
              lVar18 = *(long *)(param_1 + lVar15 * 8 + 0x168);
              lVar14 = 0x38;
              if (uVar5 <= uVar16) {
                lVar14 = 0x48;
              }
              if (0 < *(int *)(lVar18 + 0x3c)) {
                iVar4 = *(int *)(lVar18 + lVar14);
                iVar7 = 0;
                iVar3 = *(int *)(lVar18 + 0x44);
                iVar19 = *(int *)(lVar18 + 0x28) * local_6c;
                pcVar17 = *(code **)(*(long *)(param_1 + 0x218) + (long)*(int *)(lVar18 + 4) * 8 + 8
                                    );
                do {
                  if ((*(uint *)(lVar20 + 0x10) < iVar2 - 1U) ||
                     (iVar7 + local_6c < *(int *)(lVar18 + 0x4c))) {
                    (*pcVar17)(param_1,lVar18,
                               *(undefined8 *)(param_2 + (long)*(int *)(lVar18 + 4) * 8),
                               *(undefined8 *)(lVar20 + (long)iVar21 * 8 + 0x20),iVar19,
                               iVar3 * uVar16,iVar4);
                    uVar8 = *(uint *)(lVar18 + 0x38);
                    if (iVar4 < (int)uVar8) {
                      memset(*(void **)(lVar20 + (long)(iVar21 + iVar4) * 8 + 0x20),0,
                             -(ulong)(uVar8 - iVar4 >> 0x1f) & 0xffffff8000000000 |
                             (ulong)(uVar8 - iVar4) << 7);
                      uVar8 = *(uint *)(lVar18 + 0x38);
                      if (iVar4 < (int)uVar8) {
                        puVar11 = (undefined8 *)(lVar13 + ((long)iVar4 + (long)iVar21) * 8);
                        lVar14 = (long)(int)uVar8 - (long)iVar4;
                        do {
                          puVar1 = puVar11 + -1;
                          puVar12 = (undefined2 *)*puVar11;
                          puVar11 = puVar11 + 1;
                          lVar14 = lVar14 + -1;
                          *puVar12 = *(undefined2 *)*puVar1;
                        } while (lVar14 != 0);
                      }
                    }
                  }
                  else {
                    memset(*(void **)(lVar20 + (long)iVar21 * 8 + 0x20),0,
                           (long)*(int *)(lVar18 + 0x38) << 7);
                    uVar8 = *(uint *)(lVar18 + 0x38);
                    uVar10 = (ulong)uVar8;
                    if (0 < (int)uVar8) {
                      puVar12 = *(undefined2 **)((long)iVar21 * 8 + lVar20 + 0x18);
                      puVar11 = (undefined8 *)(lVar13 + (long)iVar21 * 8);
                      do {
                        uVar10 = uVar10 - 1;
                        *(undefined2 *)*puVar11 = *puVar12;
                        puVar11 = puVar11 + 1;
                      } while (uVar10 != 0);
                    }
                  }
                  iVar21 = uVar8 + iVar21;
                  iVar7 = iVar7 + 1;
                  iVar19 = *(int *)(lVar18 + 0x28) + iVar19;
                } while (iVar7 < *(int *)(lVar18 + 0x3c));
                iVar7 = *(int *)(param_1 + 0x164);
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar7);
          }
          cVar6 = (**(code **)(*(long *)(param_1 + 0x220) + 8))(param_1,lVar13);
          if (cVar6 == '\0') {
            *(uint *)(lVar20 + 0x14) = uVar16;
            *(int *)(lVar20 + 0x18) = local_6c;
            return 0;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar5);
        iVar7 = *(int *)(lVar20 + 0x1c);
      }
      uVar16 = 0;
      *(undefined4 *)(lVar20 + 0x14) = 0;
      local_6c = local_6c + 1;
    } while (local_6c < iVar7);
    lVar13 = *(long *)(param_1 + 0x1f8);
  }
  iVar7 = *(int *)(param_1 + 0x164);
  *(int *)(lVar20 + 0x10) = *(int *)(lVar20 + 0x10) + 1;
  if (iVar7 < 2) {
    lVar20 = 0xc;
    if (*(int *)(param_1 + 0x160) - 1U <= *(uint *)(lVar13 + 0x10)) {
      lVar20 = 0x4c;
    }
    uVar9 = *(undefined4 *)(*(long *)(param_1 + 0x168) + lVar20);
  }
  else {
    uVar9 = 1;
  }
  *(undefined4 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(lVar13 + 0x1c) = uVar9;
  *(undefined4 *)(lVar13 + 0x14) = 0;
  return 1;
}


