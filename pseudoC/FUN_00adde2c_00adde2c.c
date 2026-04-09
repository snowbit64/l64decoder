// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adde2c
// Entry Point: 00adde2c
// Size: 1164 bytes
// Signature: undefined FUN_00adde2c(void)


undefined8 FUN_00adde2c(long param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  void **ppvVar28;
  void *pvVar29;
  uint *puVar30;
  ulong uVar31;
  long *plVar32;
  
  lVar25 = 0;
  do {
    lVar20 = param_1 + lVar25;
    free(*(void **)(lVar20 + 0x60));
    lVar25 = lVar25 + 0x10;
    *(undefined8 *)(lVar20 + 0x60) = 0;
    *(undefined8 *)(lVar20 + 0x58) = 0xffffffff;
  } while (lVar25 != 0x400);
  uVar14 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (uVar14 != 0) {
    uVar16 = 0;
    lVar25 = *(long *)(param_1 + 0x48);
    do {
      lVar20 = 0;
      iVar8 = *(int *)(lVar25 + uVar16 * 0x248 + 0x18);
      piVar23 = (int *)(param_1 + 0x58);
      do {
        if (*piVar23 == iVar8) goto LAB_00addea0;
        lVar20 = lVar20 + 1;
        piVar23 = piVar23 + 4;
      } while (lVar20 != 0x40);
      lVar20 = 0;
      piVar23 = (int *)(param_1 + 0x58);
      while (*piVar23 != -1) {
        lVar20 = lVar20 + 1;
        piVar23 = piVar23 + 4;
        if (lVar20 == 0x40) {
          return 6;
        }
      }
      *piVar23 = iVar8;
LAB_00addea0:
      lVar20 = param_1 + lVar20 * 0x10;
      uVar16 = uVar16 + 1;
      *(int *)(lVar20 + 0x5c) = *(int *)(lVar20 + 0x5c) + 1;
    } while (uVar16 != uVar14);
  }
  lVar25 = 0;
  uVar14 = 0;
  do {
    if (*(int *)(param_1 + 0x58 + lVar25) != -1) {
      uVar14 = uVar14 + 1;
      *(uint *)(param_1 + 0x50) = uVar14;
    }
    lVar25 = lVar25 + 0x10;
  } while (lVar25 != 0x400);
  if (uVar14 != 0) {
    qsort((void *)(param_1 + 0x58),(ulong)uVar14,0x10,FUN_00ae0310);
    uVar14 = *(uint *)(param_1 + 0x50);
    if (uVar14 != 0) {
      uVar15 = *(uint *)(param_1 + 0x40);
      uVar16 = 0;
      do {
        lVar25 = param_1 + uVar16 * 0x10;
        pvVar12 = calloc((ulong)*(uint *)(lVar25 + 0x5c),8);
        *(void **)(lVar25 + 0x60) = pvVar12;
        if (uVar15 != 0) {
          lVar20 = 0;
          uVar11 = 0;
          iVar8 = *(int *)(lVar25 + 0x58);
          do {
            lVar6 = *(long *)(param_1 + 0x48) + lVar20;
            if (*(int *)(lVar6 + 0x18) == iVar8) {
              *(long *)((long)*(void **)(lVar25 + 0x60) + (ulong)uVar11 * 8) = lVar6;
              uVar11 = uVar11 + 1;
            }
            lVar20 = lVar20 + 0x248;
          } while ((ulong)uVar15 * 0x248 - lVar20 != 0);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar14);
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar16 = 0;
    do {
      lVar25 = *(long *)(param_1 + 0x18);
      lVar20 = lVar25 + uVar16 * 0x88;
      puVar30 = (uint *)(lVar20 + 0x40);
      ppvVar2 = (void **)(lVar20 + 0x48);
      if (*puVar30 == 0) {
        pvVar12 = *ppvVar2;
      }
      else {
        uVar26 = 0;
        pvVar12 = *ppvVar2;
        lVar20 = 8;
        do {
          free(*(void **)((long)pvVar12 + lVar20));
          pvVar12 = *ppvVar2;
          uVar26 = uVar26 + 1;
          uVar14 = *puVar30;
          *(undefined8 *)((long)pvVar12 + lVar20) = 0;
          lVar20 = lVar20 + 0x10;
        } while (uVar26 < uVar14);
      }
      free(pvVar12);
      uVar14 = *(uint *)(param_1 + 0x50);
      *ppvVar2 = (void *)0x0;
      *puVar30 = 0;
      if (uVar14 == 0) {
        *ppvVar2 = (void *)0x0;
        *puVar30 = 0;
      }
      else {
        lVar25 = lVar25 + uVar16 * 0x88;
        uVar15 = 0;
        uVar26 = 0;
        plVar3 = (long *)(lVar25 + 0x58);
        puVar4 = (uint *)(lVar25 + 0x50);
        do {
          lVar25 = param_1 + uVar26 * 0x10;
          uVar11 = *(uint *)(lVar25 + 0x5c);
          if (uVar11 != 0) {
            uVar18 = 0;
            do {
              uVar24 = 0;
              uVar9 = **(uint **)(*(long *)(lVar25 + 0x60) + uVar18 * 8);
              uVar13 = (ulong)*puVar4;
              while (uVar24 <= uVar13 && uVar13 - uVar24 != 0) {
                uVar31 = uVar24 + (uVar13 - uVar24 >> 1);
                uVar10 = *(uint *)(*plVar3 + uVar31 * 4);
                if (uVar10 < uVar9) {
                  uVar24 = uVar31 + 1;
                  uVar31 = uVar13;
                }
                uVar13 = uVar31;
                if (uVar10 == uVar9) {
                  uVar15 = uVar15 + 1;
                  *puVar30 = uVar15;
                  goto LAB_00ade0a8;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar11);
          }
LAB_00ade0a8:
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar14);
        *ppvVar2 = (void *)0x0;
        if (uVar15 != 0) {
          pvVar12 = calloc((ulong)uVar15,0x10);
          *ppvVar2 = pvVar12;
          if (pvVar12 == (void *)0x0) {
            return 3;
          }
        }
        uVar15 = 0;
        uVar26 = 0;
        *puVar30 = 0;
        do {
          lVar25 = param_1 + uVar26 * 0x10;
          puVar27 = (uint *)(lVar25 + 0x5c);
          uVar11 = *puVar27;
          uVar18 = (ulong)uVar11;
          if (uVar11 != 0) {
            uVar24 = 0;
            uVar13 = 0;
            plVar32 = (long *)(lVar25 + 0x60);
            lVar25 = *plVar3;
            uVar31 = (ulong)*puVar4;
            do {
              uVar11 = **(uint **)(*plVar32 + uVar24 * 8);
              uVar7 = 0;
              uVar21 = uVar31;
              do {
                uVar22 = uVar21;
                uVar19 = uVar7;
                if (uVar22 < uVar19 || uVar22 - uVar19 == 0) break;
                uVar21 = uVar19 + (uVar22 - uVar19 >> 1);
                uVar9 = *(uint *)(lVar25 + uVar21 * 4);
                uVar7 = uVar19;
                if (uVar9 < uVar11) {
                  uVar7 = uVar21 + 1;
                  uVar21 = uVar22;
                }
              } while (uVar9 != uVar11);
              uVar24 = uVar24 + 1;
              uVar11 = (uint)uVar13;
              if (uVar19 < uVar22) {
                uVar11 = uVar11 + 1;
              }
              uVar13 = (ulong)uVar11;
            } while (uVar24 != uVar18);
            if (uVar11 != 0) {
              uVar11 = uVar15 + 1;
              pvVar29 = *ppvVar2;
              *puVar30 = uVar11;
              puVar1 = (undefined4 *)((long)pvVar29 + (ulong)uVar15 * 0x10);
              *puVar1 = *(undefined4 *)(param_1 + uVar26 * 0x10 + 0x58);
              pvVar12 = calloc(uVar13,8);
              ppvVar28 = (void **)(puVar1 + 2);
              *ppvVar28 = pvVar12;
              if (pvVar12 == (void *)0x0) {
                return 3;
              }
              uVar24 = 0;
              puVar5 = (uint *)((long)pvVar29 + (ulong)uVar15 * 0x10 + 4);
              do {
                uVar13 = 0;
                puVar17 = *(uint **)(*plVar32 + uVar24 * 8);
                uVar15 = *puVar17;
                uVar21 = uVar31;
                do {
                  if (uVar21 < uVar13 || uVar21 - uVar13 == 0) goto LAB_00ade274;
                  uVar7 = uVar13 + (uVar21 - uVar13 >> 1);
                  uVar9 = *(uint *)(lVar25 + uVar7 * 4);
                  if (uVar9 < uVar15) {
                    uVar13 = uVar7 + 1;
                    uVar7 = uVar21;
                  }
                  uVar21 = uVar7;
                } while (uVar9 != uVar15);
                uVar15 = *puVar5;
                *(uint **)((long)*ppvVar28 + (ulong)uVar15 * 8) = puVar17;
                *puVar5 = uVar15 + 1;
                uVar18 = (ulong)*puVar27;
LAB_00ade274:
                uVar24 = uVar24 + 1;
                uVar15 = uVar11;
                if (uVar18 <= uVar24) break;
                lVar25 = *plVar3;
              } while( true );
            }
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 != uVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_1 + 0x14));
  }
  return 0;
}


