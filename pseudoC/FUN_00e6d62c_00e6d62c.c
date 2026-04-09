// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e6d62c
// Entry Point: 00e6d62c
// Size: 1152 bytes
// Signature: undefined FUN_00e6d62c(void)


void FUN_00e6d62c(int **param_1,short *param_2,uint param_3,ulong param_4,uint param_5,
                 short *param_6,uint *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  short *psVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar9;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int aiStack_60 [2];
  long local_58;
  ulong uVar10;
  
  lVar4 = tpidr_el0;
  uVar5 = (uint)param_4;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((uVar5 == 2) && (param_5 == 1)) && (param_8 == 0)) {
    uVar5 = *param_7;
    uVar12 = (ulong)uVar5;
    uVar9 = param_7[1];
    uVar10 = (ulong)uVar9;
    if (0 < (int)param_3) {
      uVar13 = (ulong)param_3;
      sVar3 = *param_6;
      piVar15 = *param_1;
      psVar6 = param_2 + 1;
      piVar7 = param_1[1];
      do {
        lVar11 = (long)*piVar15 + (long)(int)uVar12;
        lVar14 = (long)*piVar7 + (long)(int)uVar10;
        iVar1 = (int)lVar11 + 0x800 >> 0xc;
        iVar2 = (int)lVar14 + 0x800 >> 0xc;
        if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
          iVar1 = -0x8000;
        }
        if (0x7ffe < iVar1) {
          iVar1 = 0x7fff;
        }
        if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
          iVar2 = -0x8000;
        }
        uVar12 = (ulong)(lVar11 * sVar3) >> 0xf;
        uVar5 = (uint)uVar12;
        uVar10 = (ulong)(lVar14 * sVar3) >> 0xf;
        uVar9 = (uint)uVar10;
        if (0x7ffe < iVar2) {
          iVar2 = 0x7fff;
        }
        uVar13 = uVar13 - 1;
        psVar6[-1] = (short)iVar1;
        *psVar6 = (short)iVar2;
        piVar15 = piVar15 + 1;
        psVar6 = psVar6 + 2;
        piVar7 = piVar7 + 1;
      } while (uVar13 != 0);
    }
    *param_7 = uVar5;
    param_7[1] = uVar9;
  }
  else {
    piVar15 = (int *)((long)aiStack_60 -
                     ((-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2) + 0xf &
                     0xfffffffffffffff0));
    lVar11 = (long)*param_6;
    if ((int)param_5 < 2) {
      uVar12 = 0;
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      uVar10 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
      do {
        uVar9 = param_7[uVar12];
        uVar13 = (ulong)uVar9;
        piVar15 = param_1[uVar12];
        if (param_8 == 0) {
          uVar8 = (ulong)param_3;
          psVar6 = param_2;
          if (0 < (int)param_3) {
            do {
              lVar14 = (long)*piVar15 + (long)(int)uVar13;
              iVar1 = (int)lVar14 + 0x800 >> 0xc;
              if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                iVar1 = -0x8000;
              }
              uVar13 = (ulong)(lVar14 * lVar11) >> 0xf;
              uVar9 = (uint)uVar13;
              if (0x7ffe < iVar1) {
                iVar1 = 0x7fff;
              }
              uVar8 = uVar8 - 1;
              *psVar6 = (short)iVar1;
              psVar6 = (short *)((long)psVar6 + uVar10);
              piVar15 = piVar15 + 1;
            } while (uVar8 != 0);
          }
        }
        else {
          uVar8 = (ulong)param_3;
          psVar6 = param_2;
          if (0 < (int)param_3) {
            do {
              lVar14 = (long)*piVar15 + (long)(int)uVar13;
              iVar1 = (int)lVar14 + 0x800 >> 0xc;
              if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                iVar1 = -0x8000;
              }
              uVar13 = (ulong)(lVar14 * lVar11) >> 0xf;
              uVar9 = (uint)uVar13;
              if (0x7ffe < iVar1) {
                iVar1 = 0x7fff;
              }
              iVar1 = (int)*psVar6 + (int)(short)iVar1;
              if (0x7ffe < iVar1) {
                iVar1 = 0x7fff;
              }
              if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                iVar1 = -0x8000;
              }
              uVar8 = uVar8 - 1;
              *psVar6 = (short)iVar1;
              psVar6 = (short *)((long)psVar6 + uVar10);
              piVar15 = piVar15 + 1;
            } while (uVar8 != 0);
          }
        }
        param_7[uVar12] = uVar9;
        uVar12 = uVar12 + 1;
        param_2 = param_2 + 1;
      } while (uVar12 != uVar5);
    }
    else {
      uVar9 = 0;
      if (param_5 != 0) {
        uVar9 = (int)param_3 / (int)param_5;
      }
      uVar12 = (ulong)uVar9;
      if (param_8 == 0) {
        if ((int)uVar9 < 1) {
          if (0 < (int)param_3) {
            uVar12 = 0;
            if ((int)uVar5 < 2) {
              uVar5 = 1;
            }
            do {
              uVar13 = (ulong)param_7[uVar12];
              piVar7 = param_1[uVar12];
              uVar10 = (ulong)param_3;
              piVar17 = piVar15;
              do {
                uVar10 = uVar10 - 1;
                lVar14 = (long)*piVar7 + (long)(int)uVar13;
                *piVar17 = (int)lVar14;
                uVar13 = (ulong)(lVar14 * lVar11) >> 0xf;
                piVar7 = piVar7 + 1;
                piVar17 = piVar17 + 1;
              } while (uVar10 != 0);
              param_7[uVar12] = (uint)uVar13;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar5);
          }
        }
        else {
          uVar13 = (ulong)param_5;
          param_4 = param_4 & 0xffffffff;
          uVar10 = 0;
          lVar14 = (long)(int)uVar5;
          if ((int)uVar5 < 2) {
            uVar5 = 1;
          }
          uVar16 = uVar12 & 0xfffffffe;
          uVar8 = -(param_4 >> 0x1f) & 0xfffffffe00000000 | param_4 << 1;
          do {
            uVar18 = param_7[uVar10];
            uVar19 = (ulong)uVar18;
            if (0 < (int)param_3) {
              piVar7 = param_1[uVar10];
              uVar21 = (ulong)param_3;
              piVar17 = piVar15;
              do {
                uVar21 = uVar21 - 1;
                lVar20 = (long)*piVar7 + (long)(int)uVar19;
                *piVar17 = (int)lVar20;
                uVar19 = (ulong)(lVar20 * lVar11) >> 0xf;
                uVar18 = (uint)uVar19;
                piVar7 = piVar7 + 1;
                piVar17 = piVar17 + 1;
              } while (uVar21 != 0);
            }
            param_7[uVar10] = uVar18;
            uVar19 = uVar16;
            psVar6 = param_2;
            piVar7 = piVar15;
            if (uVar9 < 2) {
              uVar19 = 0;
LAB_00e6da0c:
              lVar20 = uVar8 * uVar19;
              lVar22 = uVar12 - uVar19;
              piVar7 = piVar15 + uVar13 * uVar19;
              do {
                iVar1 = *piVar7;
                piVar7 = piVar7 + uVar13;
                iVar1 = iVar1 + 0x800 >> 0xc;
                if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                  iVar1 = -0x8000;
                }
                if (0x7ffe < iVar1) {
                  iVar1 = 0x7fff;
                }
                lVar22 = lVar22 + -1;
                *(short *)((long)param_2 + lVar20) = (short)iVar1;
                lVar20 = lVar20 + uVar8;
              } while (lVar22 != 0);
            }
            else {
              do {
                iVar1 = *piVar7 + 0x800 >> 0xc;
                iVar2 = piVar7[uVar13] + 0x800 >> 0xc;
                if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                  iVar1 = -0x8000;
                }
                if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
                  iVar2 = -0x8000;
                }
                if (0x7ffe < iVar1) {
                  iVar1 = 0x7fff;
                }
                if (0x7ffe < iVar2) {
                  iVar2 = 0x7fff;
                }
                uVar19 = uVar19 - 2;
                *psVar6 = (short)iVar1;
                psVar6[lVar14] = (short)iVar2;
                psVar6 = (short *)((long)psVar6 +
                                  (-(param_4 >> 0x1f) & 0xfffffffc00000000 | param_4 << 2));
                piVar7 = piVar7 + uVar13 * 2;
              } while (uVar19 != 0);
              uVar19 = uVar16;
              if (uVar16 != uVar12) goto LAB_00e6da0c;
            }
            uVar10 = uVar10 + 1;
            param_2 = param_2 + 1;
          } while (uVar10 != uVar5);
        }
      }
      else {
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        uVar10 = 0;
        do {
          uVar18 = param_7[uVar10];
          uVar13 = (ulong)uVar18;
          if (0 < (int)param_3) {
            piVar7 = param_1[uVar10];
            uVar8 = (ulong)param_3;
            piVar17 = piVar15;
            do {
              uVar8 = uVar8 - 1;
              lVar14 = (long)*piVar7 + (long)(int)uVar13;
              *piVar17 = (int)lVar14;
              uVar13 = (ulong)(lVar14 * lVar11) >> 0xf;
              uVar18 = (uint)uVar13;
              piVar7 = piVar7 + 1;
              piVar17 = piVar17 + 1;
            } while (uVar8 != 0);
          }
          param_7[uVar10] = uVar18;
          uVar13 = uVar12;
          psVar6 = param_2;
          piVar7 = piVar15;
          if (0 < (int)uVar9) {
            do {
              iVar1 = *piVar7 + 0x800 >> 0xc;
              if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                iVar1 = -0x8000;
              }
              if (0x7ffe < iVar1) {
                iVar1 = 0x7fff;
              }
              iVar1 = (int)*psVar6 + (int)(short)iVar1;
              if (0x7ffe < iVar1) {
                iVar1 = 0x7fff;
              }
              if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
                iVar1 = -0x8000;
              }
              uVar13 = uVar13 - 1;
              *psVar6 = (short)iVar1;
              psVar6 = (short *)((long)psVar6 +
                                (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 |
                                (param_4 & 0xffffffff) << 1));
              piVar7 = piVar7 + param_5;
            } while (uVar13 != 0);
          }
          uVar10 = uVar10 + 1;
          param_2 = param_2 + 1;
        } while (uVar10 != uVar5);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


