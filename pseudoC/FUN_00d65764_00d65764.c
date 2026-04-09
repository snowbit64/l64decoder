// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65764
// Entry Point: 00d65764
// Size: 904 bytes
// Signature: undefined FUN_00d65764(void)


void FUN_00d65764(long param_1,long param_2)

{
  void **ppvVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined2 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  void *pvVar19;
  ulong uVar20;
  ulong uVar21;
  void *__s;
  long lVar22;
  long lVar23;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar12 = 0;
    lVar10 = *(long *)(param_1 + 0x1f8);
    lVar18 = *(long *)(param_1 + 0x68);
    uVar5 = *(int *)(param_1 + 0x160) - 1;
    do {
      lVar8 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar10 + lVar12 * 8 + 0x70),
                         *(int *)(lVar18 + 0xc) * *(int *)(lVar10 + 0x10),*(int *)(lVar18 + 0xc),1);
      if (*(uint *)(lVar10 + 0x10) < uVar5) {
        uVar7 = *(uint *)(lVar18 + 0xc);
      }
      else {
        uVar7 = *(uint *)(lVar18 + 0xc);
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = *(uint *)(lVar18 + 0x20) / uVar7;
        }
        uVar9 = *(uint *)(lVar18 + 0x20) - uVar9 * uVar7;
        if (uVar9 != 0) {
          uVar7 = uVar9;
        }
      }
      uVar9 = *(uint *)(lVar18 + 0x1c);
      uVar2 = *(uint *)(lVar18 + 8);
      lVar23 = (long)(int)uVar2;
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = uVar9 / uVar2;
      }
      uVar4 = uVar9 - uVar6 * uVar2;
      uVar6 = uVar2 - uVar4;
      if ((int)uVar4 < 1) {
        uVar6 = uVar4;
      }
      uVar17 = (ulong)uVar6;
      if (0 < (int)uVar7) {
        pcVar16 = *(code **)(*(long *)(param_1 + 0x218) + lVar12 * 8 + 8);
        if ((int)uVar6 < 1) {
          uVar17 = 0;
          do {
            (*pcVar16)(param_1,lVar18,*(undefined8 *)(param_2 + lVar12 * 8),
                       *(undefined8 *)(lVar8 + uVar17 * 8),*(int *)(lVar18 + 0x28) * (int)uVar17,0,
                       uVar9);
            uVar17 = uVar17 + 1;
          } while (uVar7 != uVar17);
        }
        else {
          uVar20 = 0;
          uVar21 = uVar17 & 0xfffffffe;
          do {
            lVar22 = *(long *)(lVar8 + uVar20 * 8);
            (*pcVar16)(param_1,lVar18,*(undefined8 *)(param_2 + lVar12 * 8),lVar22,
                       *(int *)(lVar18 + 0x28) * (int)uVar20,0,uVar9);
            pvVar19 = (void *)(lVar22 + (ulong)uVar9 * 0x80);
            memset(pvVar19,0,uVar17 << 7);
            uVar3 = *(undefined2 *)((long)pvVar19 + -0x80);
            if (uVar6 < 2) {
              uVar13 = 0;
LAB_00d65934:
              lVar22 = uVar17 - uVar13;
              puVar11 = (undefined2 *)((long)pvVar19 + uVar13 * 0x80);
              do {
                lVar22 = lVar22 + -1;
                *puVar11 = uVar3;
                puVar11 = puVar11 + 0x40;
              } while (lVar22 != 0);
            }
            else {
              puVar11 = (undefined2 *)(lVar22 + (ulong)uVar9 * 0x80 + 0x80);
              uVar13 = uVar21;
              do {
                puVar11[-0x40] = uVar3;
                uVar13 = uVar13 - 2;
                *puVar11 = uVar3;
                puVar11 = puVar11 + 0x80;
              } while (uVar13 != 0);
              uVar13 = uVar21;
              if (uVar21 != uVar17) goto LAB_00d65934;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar7);
        }
      }
      if ((*(uint *)(lVar10 + 0x10) == uVar5) && ((int)uVar7 < *(int *)(lVar18 + 0xc))) {
        uVar6 = uVar6 + uVar9;
        uVar17 = (ulong)uVar2;
        lVar22 = (long)(int)uVar7;
        if (uVar6 < uVar2) {
          do {
            memset(*(void **)(lVar8 + lVar22 * 8),0,(ulong)uVar6 << 7);
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)(lVar18 + 0xc));
        }
        else {
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = uVar6 / uVar2;
          }
          if (uVar7 < 2) {
            uVar7 = 1;
          }
          do {
            ppvVar1 = (void **)(lVar8 + lVar22 * 8);
            pvVar19 = ppvVar1[-1];
            __s = *ppvVar1;
            memset(__s,0,(ulong)uVar6 << 7);
            if (0 < (int)uVar2) {
              uVar9 = 0;
              do {
                uVar3 = *(undefined2 *)((long)pvVar19 + (lVar23 + -1) * 0x80);
                if (uVar2 < 2) {
                  uVar20 = 0;
LAB_00d65aa8:
                  lVar14 = uVar20 << 7;
                  lVar15 = uVar17 - uVar20;
                  do {
                    *(undefined2 *)((long)__s + lVar14) = uVar3;
                    lVar14 = lVar14 + 0x80;
                    lVar15 = lVar15 + -1;
                  } while (lVar15 != 0);
                }
                else {
                  lVar14 = 0;
                  do {
                    puVar11 = (undefined2 *)((long)__s + lVar14);
                    lVar14 = lVar14 + 0x100;
                    *puVar11 = uVar3;
                    puVar11[0x40] = uVar3;
                  } while ((uVar17 & 0xfffffffe) * 0x80 - lVar14 != 0);
                  uVar20 = uVar17 & 0xfffffffe;
                  if ((uVar17 & 0xfffffffe) != uVar17) goto LAB_00d65aa8;
                }
                pvVar19 = (void *)((long)pvVar19 + lVar23 * 0x80);
                uVar9 = uVar9 + 1;
                __s = (void *)((long)__s + lVar23 * 0x80);
              } while (uVar9 != uVar7);
            }
            lVar22 = lVar22 + 1;
          } while (lVar22 < *(int *)(lVar18 + 0xc));
        }
      }
      lVar18 = lVar18 + 0x60;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x5c));
  }
  FUN_00d65aec(param_1,param_2);
  return;
}


