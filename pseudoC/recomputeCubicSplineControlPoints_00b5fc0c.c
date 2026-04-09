// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recomputeCubicSplineControlPoints
// Entry Point: 00b5fc0c
// Size: 1416 bytes
// Signature: undefined __cdecl recomputeCubicSplineControlPoints(uint param_1, float * param_2, float * param_3, FORM param_4)


/* SplineUtil::recomputeCubicSplineControlPoints(unsigned int, float const*, float*, Spline::FORM)
    */

void SplineUtil::recomputeCubicSplineControlPoints
               (uint param_1,float *param_2,float *param_3,FORM param_4)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float *__s;
  float *pfVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar17 = (ulong)param_1;
  __s = (float *)operator_new__((ulong)(param_1 * param_1) << 2);
  uVar16 = uVar17 * 4;
  memset(__s,0,uVar16 * uVar17);
  pfVar4 = (float *)operator_new__(uVar16);
  uVar13 = (param_1 - 1) * param_1;
  fVar21 = 0.0;
  if (param_4 != 0) {
    fVar21 = 0.1666667;
  }
  fVar18 = 1.0;
  if (param_4 != 0) {
    fVar18 = 0.6666667;
  }
  __s[uVar13] = fVar21;
  *__s = fVar18;
  __s[uVar17] = fVar21;
  __s[uVar13 - 1] = fVar21;
  __s[param_1 * param_1 - 1] = fVar18;
  __s[param_1 - 1] = fVar21;
  if (param_1 != 2) {
    uVar14 = 1;
    uVar13 = 2;
    do {
      uVar2 = uVar14 + param_1;
      __s[uVar14] = 0.1666667;
      uVar3 = param_1 * 2 + uVar14;
      uVar13 = uVar13 + 1;
      uVar14 = uVar2 + 1;
      __s[uVar2] = 0.6666667;
      __s[uVar3] = 0.1666667;
    } while (param_1 != uVar13);
  }
  puVar5 = (uint *)operator_new__(uVar16);
  MathUtil::decomposeLU(param_1,__s,pfVar4,__s,puVar5);
  if (param_1 == 0) {
    MathUtil::solveLU(0,__s,puVar5,pfVar4,pfVar4);
LAB_00b5fe54:
    MathUtil::solveLU(param_1,__s,puVar5,pfVar4,pfVar4);
  }
  else {
    if (param_1 < 9) {
      lVar6 = 0;
    }
    else {
      uVar16 = 0xc;
      uVar8 = 8;
      if ((param_1 & 7) != 0) {
        uVar8 = uVar17 & 7;
      }
      puVar10 = (undefined8 *)(pfVar4 + 4);
      lVar6 = uVar17 - uVar8;
      lVar7 = lVar6;
      do {
        uVar8 = uVar16 & 0xfffffffc;
        iVar12 = (int)uVar16;
        uVar16 = uVar16 + 0x18;
        lVar7 = lVar7 + -8;
        pfVar9 = param_2 + uVar8;
        fVar21 = *pfVar9;
        fVar18 = pfVar9[3];
        fVar19 = pfVar9[6];
        fVar20 = pfVar9[9];
        pfVar9 = param_2 + ((ulong)(iVar12 - 0xc) & 0xfffffff8);
        fVar22 = *pfVar9;
        fVar23 = pfVar9[3];
        puVar10[-1] = CONCAT44(pfVar9[9],pfVar9[6]);
        puVar10[-2] = CONCAT44(fVar23,fVar22);
        puVar10[1] = CONCAT44(fVar20,fVar19);
        *puVar10 = CONCAT44(fVar18,fVar21);
        puVar10 = puVar10 + 4;
      } while (lVar7 != 0);
    }
    uVar16 = lVar6 * 3;
    lVar7 = uVar17 - lVar6;
    pfVar9 = pfVar4 + lVar6;
    do {
      uVar8 = uVar16 & 0xffffffff;
      uVar16 = uVar16 + 3;
      lVar7 = lVar7 + -1;
      *pfVar9 = param_2[uVar8];
      pfVar9 = pfVar9 + 1;
    } while (lVar7 != 0);
    MathUtil::solveLU(param_1,__s,puVar5,pfVar4,pfVar4);
    if (param_1 == 0) goto LAB_00b5fe54;
    if (param_1 == 1) {
      uVar8 = 0;
LAB_00b5fe20:
      uVar16 = uVar8 * 3;
      lVar7 = uVar17 - uVar8;
      pfVar9 = pfVar4 + uVar8;
      do {
        lVar7 = lVar7 + -1;
        param_3[uVar16 & 0xffffffff] = *pfVar9;
        uVar16 = uVar16 + 3;
        pfVar9 = pfVar9 + 1;
      } while (lVar7 != 0);
    }
    else {
      uVar8 = uVar17 & 0xfffffffe;
      pfVar9 = pfVar4 + 1;
      uVar13 = 3;
      uVar16 = uVar8;
      do {
        uVar16 = uVar16 - 2;
        pfVar1 = pfVar9 + -1;
        fVar21 = *pfVar9;
        pfVar9 = pfVar9 + 2;
        param_3[(ulong)(uVar13 - 3) & 0xfffffffe] = *pfVar1;
        param_3[uVar13] = fVar21;
        uVar13 = uVar13 + 6;
      } while (uVar16 != 0);
      if (uVar8 != uVar17) goto LAB_00b5fe20;
    }
    if (param_1 == 0) goto LAB_00b5fe54;
    if (param_1 < 9) {
      lVar7 = 0;
    }
    else {
      uVar8 = uVar17 - 1;
      lVar7 = 0;
      uVar16 = (uVar8 & 0xffffffff) + (uVar8 & 0xffffffff) * 2;
      if ((((int)uVar16 != -1) && ((uVar16 & 0xffffffff00000000) == 0)) && (uVar8 >> 0x20 == 0)) {
        uVar16 = 0xc;
        uVar8 = 8;
        if ((param_1 & 7) != 0) {
          uVar8 = uVar17 & 7;
        }
        puVar10 = (undefined8 *)(pfVar4 + 4);
        lVar7 = uVar17 - uVar8;
        lVar6 = lVar7;
        do {
          uVar8 = uVar16 & 0xfffffffc;
          uVar11 = (ulong)((int)uVar16 - 0xc) & 0xfffffff8;
          uVar16 = uVar16 + 0x18;
          lVar6 = lVar6 + -8;
          fVar21 = param_2[uVar8 + 1];
          fVar18 = param_2[uVar8 + 4];
          fVar19 = param_2[uVar8 + 7];
          fVar20 = param_2[uVar8 + 10];
          fVar22 = param_2[uVar11 + 1];
          fVar23 = param_2[uVar11 + 4];
          puVar10[-1] = CONCAT44(param_2[uVar11 + 10],param_2[uVar11 + 7]);
          puVar10[-2] = CONCAT44(fVar23,fVar22);
          puVar10[1] = CONCAT44(fVar20,fVar19);
          *puVar10 = CONCAT44(fVar18,fVar21);
          puVar10 = puVar10 + 4;
        } while (lVar6 != 0);
      }
    }
    lVar6 = uVar17 - lVar7;
    uVar16 = lVar7 * 3 + 1;
    pfVar9 = pfVar4 + lVar7;
    do {
      uVar8 = uVar16 & 0xffffffff;
      uVar16 = uVar16 + 3;
      lVar6 = lVar6 + -1;
      *pfVar9 = param_2[uVar8];
      pfVar9 = pfVar9 + 1;
    } while (lVar6 != 0);
    MathUtil::solveLU(param_1,__s,puVar5,pfVar4,pfVar4);
    if (param_1 != 0) {
      if (param_1 == 1) {
        uVar8 = 0;
LAB_00b5ff84:
        lVar7 = uVar17 - uVar8;
        uVar16 = uVar8 * 3 + 1;
        pfVar9 = pfVar4 + uVar8;
        do {
          lVar7 = lVar7 + -1;
          param_3[uVar16 & 0xffffffff] = *pfVar9;
          uVar16 = uVar16 + 3;
          pfVar9 = pfVar9 + 1;
        } while (lVar7 != 0);
      }
      else {
        uVar11 = uVar17 - 1;
        uVar8 = 0;
        uVar16 = (uVar11 & 0xffffffff) + (uVar11 & 0xffffffff) * 2;
        if ((((int)uVar16 == -1) || ((uVar16 & 0xffffffff00000000) != 0)) || (uVar11 >> 0x20 != 0))
        goto LAB_00b5ff84;
        uVar8 = uVar17 & 0xfffffffe;
        pfVar9 = pfVar4 + 1;
        uVar16 = 4;
        uVar11 = uVar8;
        do {
          iVar12 = (int)uVar16;
          uVar15 = uVar16 & 0xfffffffe;
          uVar16 = uVar16 + 6;
          pfVar1 = pfVar9 + -1;
          fVar21 = *pfVar9;
          pfVar9 = pfVar9 + 2;
          uVar11 = uVar11 - 2;
          param_3[(ulong)(iVar12 - 4) + 1] = *pfVar1;
          param_3[uVar15] = fVar21;
        } while (uVar11 != 0);
        if (uVar8 != uVar17) goto LAB_00b5ff84;
      }
      if (param_1 != 0) {
        if (param_1 < 9) {
          lVar7 = 0;
        }
        else {
          uVar8 = uVar17 - 1;
          lVar7 = 0;
          uVar16 = (uVar8 & 0xffffffff) + (uVar8 & 0xffffffff) * 2;
          if ((((uint)uVar16 < 0xfffffffe) && ((uVar16 & 0xffffffff00000000) == 0)) &&
             (uVar8 >> 0x20 == 0)) {
            uVar16 = 0xc;
            uVar8 = 8;
            if ((param_1 & 7) != 0) {
              uVar8 = uVar17 & 7;
            }
            puVar10 = (undefined8 *)(pfVar4 + 4);
            lVar7 = uVar17 - uVar8;
            lVar6 = lVar7;
            do {
              uVar8 = uVar16 & 0xfffffffc;
              uVar11 = (ulong)((int)uVar16 - 0xc) & 0xfffffff8;
              uVar16 = uVar16 + 0x18;
              lVar6 = lVar6 + -8;
              fVar21 = param_2[uVar8 + 2];
              fVar18 = param_2[uVar8 + 5];
              fVar19 = param_2[uVar8 + 8];
              fVar20 = param_2[uVar8 + 0xb];
              fVar22 = param_2[uVar11 + 2];
              fVar23 = param_2[uVar11 + 5];
              puVar10[-1] = CONCAT44(param_2[uVar11 + 0xb],param_2[uVar11 + 8]);
              puVar10[-2] = CONCAT44(fVar23,fVar22);
              puVar10[1] = CONCAT44(fVar20,fVar19);
              *puVar10 = CONCAT44(fVar18,fVar21);
              puVar10 = puVar10 + 4;
            } while (lVar6 != 0);
          }
        }
        lVar6 = uVar17 - lVar7;
        uVar16 = lVar7 * 3 + 2;
        pfVar9 = pfVar4 + lVar7;
        do {
          uVar8 = uVar16 & 0xffffffff;
          uVar16 = uVar16 + 3;
          lVar6 = lVar6 + -1;
          *pfVar9 = param_2[uVar8];
          pfVar9 = pfVar9 + 1;
        } while (lVar6 != 0);
        MathUtil::solveLU(param_1,__s,puVar5,pfVar4,pfVar4);
        if (param_1 != 0) {
          if (param_1 == 1) {
            uVar8 = 0;
          }
          else {
            uVar11 = uVar17 - 1;
            uVar8 = 0;
            uVar16 = (uVar11 & 0xffffffff) + (uVar11 & 0xffffffff) * 2;
            if ((((uint)uVar16 < 0xfffffffe) && ((uVar16 & 0xffffffff00000000) == 0)) &&
               (uVar11 >> 0x20 == 0)) {
              uVar8 = uVar17 & 0xfffffffe;
              pfVar9 = pfVar4 + 1;
              uVar13 = 5;
              uVar16 = uVar8;
              do {
                uVar16 = uVar16 - 2;
                pfVar1 = pfVar9 + -1;
                fVar21 = *pfVar9;
                pfVar9 = pfVar9 + 2;
                param_3[(ulong)(uVar13 - 3) & 0xfffffffe] = *pfVar1;
                param_3[uVar13] = fVar21;
                uVar13 = uVar13 + 6;
              } while (uVar16 != 0);
              if (uVar8 == uVar17) goto LAB_00b5fe84;
            }
          }
          lVar7 = uVar17 - uVar8;
          uVar16 = uVar8 * 3 + 2;
          pfVar9 = pfVar4 + uVar8;
          do {
            lVar7 = lVar7 + -1;
            param_3[uVar16 & 0xffffffff] = *pfVar9;
            uVar16 = uVar16 + 3;
            pfVar9 = pfVar9 + 1;
          } while (lVar7 != 0);
        }
        goto LAB_00b5fe84;
      }
    }
  }
  MathUtil::solveLU(param_1,__s,puVar5,pfVar4,pfVar4);
LAB_00b5fe84:
  operator_delete__(__s);
  operator_delete__(pfVar4);
  operator_delete__(puVar5);
  return;
}


