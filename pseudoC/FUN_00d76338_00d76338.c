// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d76338
// Entry Point: 00d76338
// Size: 732 bytes
// Signature: undefined FUN_00d76338(void)


undefined8 FUN_00d76338(long param_1,long param_2)

{
  void **ppvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  void **ppvVar18;
  code *pcVar19;
  int iVar20;
  int local_78;
  
  lVar11 = *(long *)(param_1 + 0x230);
  uVar9 = *(uint *)(param_1 + 400);
  local_78 = *(int *)(lVar11 + 0x2c);
  iVar7 = *(int *)(lVar11 + 0x30);
  if (local_78 < iVar7) {
    ppvVar1 = (void **)(lVar11 + 0x38);
    uVar16 = *(uint *)(lVar11 + 0x28);
    uVar4 = *(int *)(param_1 + 0x1c8) - 1;
    do {
      if (uVar16 <= uVar4) {
        do {
          if (*(int *)(param_1 + 0x218) != 0) {
            memset(*ppvVar1,0,(long)*(int *)(param_1 + 0x1d0) << 7);
          }
          cVar5 = (**(code **)(*(long *)(param_1 + 0x250) + 8))(param_1,ppvVar1);
          if (cVar5 == '\0') {
            *(uint *)(lVar11 + 0x28) = uVar16;
            *(int *)(lVar11 + 0x2c) = local_78;
            return 0;
          }
          iVar7 = *(int *)(param_1 + 0x1a0);
          if (0 < iVar7) {
            lVar12 = 0;
            iVar20 = 0;
            do {
              lVar14 = *(long *)(param_1 + lVar12 * 8 + 0x1a8);
              if (*(char *)(lVar14 + 0x34) == '\0') {
                iVar20 = *(int *)(lVar14 + 0x40) + iVar20;
              }
              else {
                iVar17 = *(int *)(lVar14 + 0x3c);
                lVar15 = 0x38;
                if (uVar4 <= uVar16) {
                  lVar15 = 0x48;
                }
                if (0 < iVar17) {
                  uVar3 = *(uint *)(lVar14 + lVar15);
                  if ((int)uVar3 < 1) {
                    iVar20 = iVar20 + *(int *)(lVar14 + 0x38) * iVar17;
                  }
                  else {
                    iVar7 = 0;
                    iVar8 = *(int *)(lVar14 + 0x28);
                    iVar2 = *(int *)(lVar14 + 0x44);
                    pcVar19 = *(code **)(*(long *)(param_1 + 600) + (long)*(int *)(lVar14 + 4) * 8 +
                                        8);
                    lVar15 = *(long *)(param_2 + (long)*(int *)(lVar14 + 4) * 8) +
                             (long)(iVar8 * local_78) * 8;
                    do {
                      if ((*(uint *)(param_1 + 0xa0) < uVar9 - 1) ||
                         (iVar7 + local_78 < *(int *)(lVar14 + 0x4c))) {
                        uVar13 = (ulong)uVar3;
                        ppvVar18 = ppvVar1 + iVar20;
                        iVar17 = iVar2 * uVar16;
                        do {
                          (*pcVar19)(param_1,lVar14,*ppvVar18,lVar15,iVar17);
                          uVar13 = uVar13 - 1;
                          iVar17 = *(int *)(lVar14 + 0x24) + iVar17;
                          ppvVar18 = ppvVar18 + 1;
                        } while (uVar13 != 0);
                        iVar8 = *(int *)(lVar14 + 0x28);
                        iVar17 = *(int *)(lVar14 + 0x3c);
                      }
                      lVar15 = lVar15 + (long)iVar8 * 8;
                      iVar7 = iVar7 + 1;
                      iVar20 = *(int *)(lVar14 + 0x38) + iVar20;
                    } while (iVar7 < iVar17);
                    iVar7 = *(int *)(param_1 + 0x1a0);
                  }
                }
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar7);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 <= uVar4);
        iVar7 = *(int *)(lVar11 + 0x30);
      }
      uVar16 = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0;
      local_78 = local_78 + 1;
    } while (local_78 < iVar7);
    uVar9 = *(uint *)(param_1 + 400);
  }
  uVar16 = *(int *)(param_1 + 0xa0) + 1;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  *(uint *)(param_1 + 0xa0) = uVar16;
  if (uVar16 < uVar9) {
    lVar11 = *(long *)(param_1 + 0x230);
    if (*(int *)(param_1 + 0x1a0) < 2) {
      lVar12 = 0xc;
      if (uVar9 - 1 <= uVar16) {
        lVar12 = 0x4c;
      }
      uVar10 = *(undefined4 *)(*(long *)(param_1 + 0x1a8) + lVar12);
    }
    else {
      uVar10 = 1;
    }
    *(undefined4 *)(lVar11 + 0x30) = uVar10;
    uVar6 = 3;
    *(undefined8 *)(lVar11 + 0x28) = 0;
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1);
    uVar6 = 4;
  }
  return uVar6;
}


