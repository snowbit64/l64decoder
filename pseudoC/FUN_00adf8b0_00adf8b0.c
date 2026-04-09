// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00adf8b0
// Entry Point: 00adf8b0
// Size: 1400 bytes
// Signature: undefined FUN_00adf8b0(void)


void FUN_00adf8b0(long param_1,long param_2,long param_3,long param_4,uint *param_5,long param_6,
                 uint *param_7)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int *__base;
  uint *__base_00;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  int *piVar21;
  uint uVar22;
  long lVar23;
  size_t sVar24;
  uint *puVar25;
  size_t local_90;
  uint local_88;
  size_t local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar11 = (ulong)*(uint *)(param_1 + 0x4c);
  if (*(uint *)(param_1 + 0x4c) != 0) {
    piVar21 = *(int **)(param_1 + 0x50);
    do {
      if (*piVar21 == *(int *)(param_3 + 8)) {
        local_70 = 0;
        uVar11 = FUN_00ae0250(param_1,piVar21,&local_70,0,0);
        if ((int)uVar11 != 0) goto LAB_00adfdf4;
        if (local_70 == 0) {
          __base = (int *)0x0;
        }
        else {
          __base = (int *)calloc(local_70,4);
          if (__base == (int *)0x0) {
            uVar11 = 3;
            goto LAB_00adfdf4;
          }
        }
        local_70 = 0;
        uVar11 = FUN_00ae0250(param_1,piVar21,&local_70,__base,0);
        sVar24 = local_70;
        if ((int)uVar11 != 0) goto LAB_00adfdf4;
        if (local_70 != 0) {
          qsort(__base,local_70,4,FUN_00ade530);
          lVar23 = 0;
          piVar21 = __base;
          do {
            if (__base[lVar23] != *piVar21) {
              lVar23 = lVar23 + 1;
              __base[lVar23] = *piVar21;
            }
            sVar24 = sVar24 - 1;
            piVar21 = piVar21 + 1;
          } while (sVar24 != 0);
          if (lVar23 == -1) {
            __base_00 = (uint *)0x0;
LAB_00adfc28:
            free(__base);
LAB_00adfc30:
            bVar8 = false;
            uVar11 = 0;
            puVar25 = __base_00;
LAB_00adfc40:
            local_90 = 0;
            bVar7 = false;
            local_88 = 0;
            *(undefined8 *)(param_3 + 0x58) = 0;
            if (param_6 == 0) goto LAB_00adfd50;
LAB_00adfc58:
            if (!bVar8) goto LAB_00adfd50;
            sVar24 = 0;
            puVar1 = param_7 + param_6;
            puVar9 = param_7;
            puVar14 = __base_00;
            do {
              if (*puVar14 < *puVar9) {
                puVar14 = puVar14 + 1;
              }
              else {
                if (*puVar14 <= *puVar9) {
                  sVar24 = sVar24 + 1;
                  puVar14 = puVar14 + 1;
                }
                puVar9 = puVar9 + 1;
              }
            } while ((puVar14 != puVar25) && (puVar9 != puVar1));
            *(undefined8 *)(param_3 + 0x68) = 0;
            if (sVar24 == 0) {
LAB_00adfd04:
              bVar20 = 0;
              uVar22 = 0;
            }
            else {
              puVar9 = (uint *)calloc(sVar24,4);
              *(uint **)(param_3 + 0x68) = puVar9;
              puVar14 = __base_00;
              if (puVar9 != (uint *)0x0) {
                do {
                  uVar22 = *puVar14;
                  uVar3 = *param_7;
                  puVar10 = puVar9;
                  if (uVar3 <= uVar22) {
                    if (uVar3 <= uVar22 && uVar22 != uVar3) {
                      param_7 = param_7 + 1;
                    }
                    else {
                      puVar14 = puVar14 + 1;
                      param_7 = param_7 + 1;
                      puVar10 = puVar9 + 1;
                      *puVar9 = uVar22;
                    }
                  }
                  else {
                    puVar14 = puVar14 + 1;
                  }
                } while ((puVar14 != puVar25) && (puVar9 = puVar10, param_7 != puVar1));
                goto LAB_00adfd04;
              }
              uVar22 = 3;
              bVar20 = 1;
            }
          }
          else {
            lVar12 = 0;
            uVar11 = 0;
            lVar16 = 0;
            do {
              lVar13 = lVar12 * 0x28;
              lVar12 = lVar12 + -1;
              piVar21 = (int *)(*(long *)(param_1 + 0x50) + lVar13);
              do {
                piVar17 = piVar21;
                lVar12 = lVar12 + 1;
                piVar21 = piVar17 + 10;
              } while (*piVar17 != __base[lVar16]);
              bVar8 = lVar16 != lVar23;
              uVar22 = piVar17[6] + (int)uVar11;
              uVar11 = (ulong)uVar22;
              lVar16 = lVar16 + 1;
            } while (bVar8);
            if (uVar22 == 0) {
              __base_00 = (uint *)0x0;
            }
            else {
              __base_00 = (uint *)calloc(uVar11,4);
              if (__base_00 == (uint *)0x0) {
                free(__base);
                uVar11 = 3;
                goto LAB_00adfdf4;
              }
            }
            if (lVar23 == -1) goto LAB_00adfc28;
            lVar13 = *(long *)(param_1 + 0x50);
            lVar12 = 0;
            uVar11 = 0;
            lVar16 = 0;
            do {
              lVar5 = lVar12 * 0x28;
              lVar12 = lVar12 + -1;
              puVar25 = (uint *)(lVar13 + -0x10 + lVar5);
              do {
                puVar14 = puVar25;
                puVar25 = puVar14 + 10;
                lVar12 = lVar12 + 1;
              } while (puVar14[4] != __base[lVar16]);
              memcpy(__base_00 + uVar11,*(void **)(puVar14 + 0xc),(ulong)*puVar25 << 2);
              bVar8 = lVar16 != lVar23;
              uVar22 = *puVar25 + (int)uVar11;
              uVar11 = (ulong)uVar22;
              lVar16 = lVar16 + 1;
            } while (bVar8);
            free(__base);
            if (uVar22 == 0) goto LAB_00adfc30;
            qsort(__base_00,uVar11,4,FUN_00ade530);
            lVar23 = 0;
            lVar12 = 0;
            do {
              if (__base_00[lVar12] != *(uint *)((long)__base_00 + lVar23)) {
                lVar12 = lVar12 + 1;
                __base_00[lVar12] = *(uint *)((long)__base_00 + lVar23);
              }
              lVar23 = lVar23 + 4;
            } while (uVar11 * 4 - lVar23 != 0);
            uVar22 = (int)lVar12 + 1;
            bVar8 = uVar22 != 0;
            uVar11 = (ulong)uVar22;
            puVar25 = __base_00 + uVar11;
            if ((param_4 == 0) || (uVar11 == 0)) goto LAB_00adfc40;
            local_90 = 0;
            puVar1 = param_5 + param_4;
            puVar9 = param_5;
            puVar14 = __base_00;
            do {
              if (*puVar14 < *puVar9) {
                puVar14 = puVar14 + 1;
              }
              else {
                if (*puVar14 <= *puVar9) {
                  local_90 = local_90 + 1;
                  puVar14 = puVar14 + 1;
                }
                puVar9 = puVar9 + 1;
              }
            } while ((puVar14 != puVar25) && (puVar9 != puVar1));
            *(uint **)(param_3 + 0x58) = (uint *)0x0;
            if (local_90 == 0) {
              bVar7 = false;
              local_88 = 0;
            }
            else {
              puVar9 = (uint *)calloc(local_90,4);
              *(uint **)(param_3 + 0x58) = puVar9;
              puVar14 = __base_00;
              if (puVar9 == (uint *)0x0) {
                bVar7 = true;
                local_88 = 3;
              }
              else {
                do {
                  uVar22 = *puVar14;
                  uVar3 = *param_5;
                  puVar10 = puVar9;
                  if (uVar3 <= uVar22) {
                    if (uVar3 <= uVar22 && uVar22 != uVar3) {
                      param_5 = param_5 + 1;
                    }
                    else {
                      puVar14 = puVar14 + 1;
                      param_5 = param_5 + 1;
                      puVar10 = puVar9 + 1;
                      *puVar9 = uVar22;
                    }
                  }
                  else {
                    puVar14 = puVar14 + 1;
                  }
                } while ((puVar14 != puVar25) && (puVar9 = puVar10, param_5 != puVar1));
                bVar7 = false;
                local_88 = 0;
              }
            }
            bVar8 = true;
            if (param_6 != 0) goto LAB_00adfc58;
LAB_00adfd50:
            sVar24 = 0;
            bVar20 = 0;
            uVar22 = 0;
            *(undefined8 *)(param_3 + 0x68) = 0;
          }
          uVar3 = *(uint *)(param_2 + 0x40);
          if (uVar3 != 0) {
            uVar15 = 0;
            lVar23 = *(long *)(param_2 + 0x48);
            do {
              uVar18 = 0;
              uVar4 = *(uint *)(lVar23 + uVar15 * 0x248);
              uVar19 = uVar11;
              do {
                if (uVar19 < uVar18 || uVar19 - uVar18 == 0) goto LAB_00adfd80;
                uVar2 = uVar18 + (uVar19 - uVar18 >> 1);
                puVar25 = __base_00 + uVar2;
                if (*puVar25 < uVar4) {
                  uVar18 = uVar2 + 1;
                  uVar2 = uVar19;
                }
                uVar19 = uVar2;
              } while (*puVar25 != uVar4);
              *(undefined4 *)(lVar23 + uVar15 * 0x248 + 0x228) = 1;
LAB_00adfd80:
              uVar15 = uVar15 + 1;
            } while (uVar15 != uVar3);
          }
          free(__base_00);
          if (!bVar7) {
            local_88 = uVar22;
          }
          uVar11 = (ulong)local_88;
          if (!(bool)(bVar7 | bVar20)) {
            uVar11 = 0;
            *(int *)(param_3 + 0x60) = (int)sVar24;
            *(undefined4 *)(param_3 + 0x50) = (undefined4)local_90;
          }
          goto LAB_00adfdf4;
        }
        local_70 = 0;
        __base_00 = (uint *)0x0;
        goto LAB_00adfc28;
      }
      uVar11 = uVar11 - 1;
      piVar21 = piVar21 + 10;
    } while (uVar11 != 0);
  }
  uVar11 = 0xc;
LAB_00adfdf4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


