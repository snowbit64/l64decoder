// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _book_unquantize
// Entry Point: 00e18b38
// Size: 932 bytes
// Signature: undefined _book_unquantize(void)


float * _book_unquantize(long *param_1,int param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  
  iVar5 = *(int *)(param_1 + 3);
  if (iVar5 - 1U < 2) {
    uVar6 = param_1[4];
    dVar22 = (double)(uVar6 & 0x1fffff);
    if ((uVar6 & 0x80000000) != 0) {
      dVar22 = -(double)(uVar6 & 0x1fffff);
    }
    dVar21 = ldexp(dVar22,((uint)uVar6 >> 0x15 & 0x3ff) - 0x314);
    uVar6 = param_1[5];
    dVar22 = (double)(uVar6 & 0x1fffff);
    if ((uVar6 & 0x80000000) != 0) {
      dVar22 = -(double)(uVar6 & 0x1fffff);
    }
    dVar22 = ldexp(dVar22,((uint)uVar6 >> 0x15 & 0x3ff) - 0x314);
    lVar20 = *param_1;
    pfVar3 = (float *)calloc(lVar20 * param_2,4);
    if (iVar5 == 1) {
      lVar7 = param_1[1];
      if (0 < lVar7) {
        dVar24 = pow((double)lVar7,(double)(1.0 / (float)lVar20));
        if (lVar20 < 1) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        lVar8 = (long)dVar24;
        if ((long)dVar24 < 2) {
          lVar8 = 1;
        }
        while( true ) {
          lVar11 = lVar8;
          lVar9 = 0;
          if (lVar11 != 0) {
            lVar9 = lVar7 / lVar11;
          }
          lVar8 = lVar11 + 1;
          lVar13 = 1;
          lVar12 = 1;
          lVar14 = lVar20;
          do {
            if (lVar9 < lVar12) goto LAB_00e18cf8;
            lVar4 = 0;
            if (lVar8 != 0) {
              lVar4 = 0x7fffffffffffffff / lVar8;
            }
            lVar18 = lVar13 * lVar8;
            lVar12 = lVar12 * lVar11;
            bVar1 = lVar13 <= lVar4;
            lVar13 = 0x7fffffffffffffff;
            if (bVar1) {
              lVar13 = lVar18;
            }
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          if ((lVar12 - lVar7 == 0 || lVar12 < lVar7) && (lVar7 < lVar13)) break;
          if (lVar12 - lVar7 != 0 && lVar7 <= lVar12) {
LAB_00e18cf8:
            lVar8 = lVar11 + -1;
          }
        }
        if ((0 < lVar7) && (0 < lVar20)) {
          dVar22 = (double)(float)dVar22;
          dVar21 = (double)(float)dVar21;
          lVar9 = 0;
          lVar8 = 0;
          iVar5 = (int)lVar11;
          lVar11 = (long)iVar5;
          do {
            if (param_3 == 0) {
              fVar23 = 0.0;
              lVar14 = param_1[7];
              iVar17 = 1;
              iVar2 = *(int *)((long)param_1 + 0x34);
              pfVar15 = (float *)((long)pfVar3 + lVar20 * 4 * lVar8);
              lVar13 = lVar20;
              do {
                lVar4 = (long)iVar17;
                dVar24 = (double)fVar23;
                iVar17 = iVar17 * iVar5;
                lVar12 = 0;
                if (lVar4 != 0) {
                  lVar12 = lVar9 / lVar4;
                }
                lVar4 = 0;
                if (lVar11 != 0) {
                  lVar4 = lVar12 / lVar11;
                }
                dVar25 = (double)NEON_fmadd((double)ABS((float)*(long *)(lVar14 + (lVar12 - lVar4 * 
                                                  lVar11) * 8)),dVar22,dVar21);
                if (iVar2 != 0) {
                  fVar23 = (float)(dVar25 + dVar24);
                }
                lVar13 = lVar13 + -1;
                *pfVar15 = (float)(dVar25 + dVar24);
                pfVar15 = pfVar15 + 1;
              } while (lVar13 != 0);
LAB_00e18d80:
              lVar8 = lVar8 + 1;
            }
            else if (*(char *)(param_1[2] + lVar9) != '\0') {
              fVar23 = 0.0;
              lVar14 = param_1[7];
              iVar17 = 1;
              iVar2 = *(int *)((long)param_1 + 0x34);
              pfVar15 = (float *)((long)pfVar3 + lVar20 * 4 * (long)*(int *)(param_3 + lVar8 * 4));
              lVar13 = lVar20;
              do {
                lVar4 = (long)iVar17;
                dVar24 = (double)fVar23;
                iVar17 = iVar17 * iVar5;
                lVar12 = 0;
                if (lVar4 != 0) {
                  lVar12 = lVar9 / lVar4;
                }
                lVar4 = 0;
                if (lVar11 != 0) {
                  lVar4 = lVar12 / lVar11;
                }
                dVar25 = (double)NEON_fmadd((double)ABS((float)*(long *)(lVar14 + (lVar12 - lVar4 * 
                                                  lVar11) * 8)),dVar22,dVar21);
                if (iVar2 != 0) {
                  fVar23 = (float)(dVar25 + dVar24);
                }
                lVar13 = lVar13 + -1;
                *pfVar15 = (float)(dVar25 + dVar24);
                pfVar15 = pfVar15 + 1;
              } while (lVar13 != 0);
              goto LAB_00e18d80;
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != lVar7);
        }
      }
    }
    else if (((iVar5 == 2) && (lVar7 = param_1[1], 0 < lVar7)) && (0 < lVar20)) {
      dVar22 = (double)(float)dVar22;
      dVar21 = (double)(float)dVar21;
      lVar8 = 0;
      if (param_3 == 0) {
        plVar10 = (long *)param_1[7];
        iVar5 = *(int *)((long)param_1 + 0x34);
        pfVar15 = pfVar3;
        do {
          fVar23 = 0.0;
          plVar16 = plVar10;
          pfVar19 = pfVar15;
          lVar9 = lVar20;
          do {
            dVar25 = (double)fVar23;
            dVar24 = (double)NEON_fmadd((double)ABS((float)*plVar16),dVar22,dVar21);
            if (iVar5 != 0) {
              fVar23 = (float)(dVar24 + dVar25);
            }
            lVar9 = lVar9 + -1;
            *pfVar19 = (float)(dVar24 + dVar25);
            plVar16 = plVar16 + 1;
            pfVar19 = pfVar19 + 1;
          } while (lVar9 != 0);
          lVar8 = lVar8 + 1;
          pfVar15 = pfVar15 + lVar20;
          plVar10 = plVar10 + lVar20;
        } while (lVar8 != lVar7);
      }
      else {
        lVar9 = 0;
        lVar11 = 0;
        lVar13 = param_1[2];
        do {
          if (*(char *)(lVar13 + lVar9) != '\0') {
            fVar23 = 0.0;
            iVar5 = *(int *)((long)param_1 + 0x34);
            pfVar15 = (float *)((long)pfVar3 + lVar20 * 4 * (long)*(int *)(param_3 + lVar11 * 4));
            plVar10 = (long *)(param_1[7] + lVar8 * 8);
            lVar14 = lVar20;
            do {
              dVar25 = (double)fVar23;
              dVar24 = (double)NEON_fmadd((double)ABS((float)*plVar10),dVar22,dVar21);
              if (iVar5 != 0) {
                fVar23 = (float)(dVar24 + dVar25);
              }
              lVar14 = lVar14 + -1;
              *pfVar15 = (float)(dVar24 + dVar25);
              pfVar15 = pfVar15 + 1;
              plVar10 = plVar10 + 1;
            } while (lVar14 != 0);
            lVar11 = lVar11 + 1;
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + lVar20;
        } while (lVar9 != lVar7);
      }
    }
  }
  else {
    pfVar3 = (float *)0x0;
  }
  return pfVar3;
}


