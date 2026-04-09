// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveCubic
// Entry Point: 00b5aa94
// Size: 628 bytes
// Signature: undefined __cdecl solveCubic(double * param_1, double * param_2)


/* MathUtil::solveCubic(double*, double*) */

void MathUtil::solveCubic(double *param_1,double *param_2)

{
  bool bVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_1[3];
  dVar7 = param_1[2] / dVar5;
  dVar8 = (double)NEON_fmadd(dVar7 * dVar7,0xbfd5555555555555,param_1[1] / dVar5);
  dVar8 = dVar8 * 0.3333333333333333;
  dVar4 = (double)NEON_fmadd(dVar7 * 0.07407407407407407,dVar7 * dVar7,
                             (param_1[1] / dVar5) * -(dVar7 * 0.3333333333333333));
  dVar5 = (*param_1 / dVar5 + dVar4) * 0.5;
  dVar4 = dVar8 * dVar8 * dVar8;
  dVar6 = (double)NEON_fmadd(dVar5,dVar5,dVar4);
  if (1e-09 <= ABS(dVar6)) {
    if (0.0 <= dVar6) {
      dVar4 = SQRT(dVar6) - dVar5;
      if (dVar4 <= 0.0) {
        dVar8 = 0.0;
        if (dVar4 < 0.0) {
          dVar8 = pow(-dVar4,0.3333333333333333);
          dVar8 = -dVar8;
        }
      }
      else {
        dVar8 = pow(dVar4,0.3333333333333333);
      }
      dVar5 = dVar5 + SQRT(dVar6);
      if (dVar5 <= 0.0) {
        dVar4 = 0.0;
        if (dVar5 < 0.0) {
          dVar4 = pow(-dVar5,0.3333333333333333);
          dVar4 = -dVar4;
        }
      }
      else {
        dVar4 = pow(dVar5,0.3333333333333333);
      }
      dVar8 = dVar8 - dVar4;
      bVar1 = true;
      lVar2 = 1;
      *param_2 = dVar8;
    }
    else {
      dVar4 = acos(-dVar5 / SQRT(-dVar4));
      dVar4 = dVar4 * 0.3333333333333333;
      dVar6 = SQRT(-dVar8) + SQRT(-dVar8);
      dVar8 = cos(dVar4);
      dVar8 = dVar6 * dVar8;
      dVar6 = -dVar6;
      *param_2 = dVar8;
      dVar5 = cos(dVar4 + 1.047197551196598);
      param_2[1] = dVar5 * dVar6;
      dVar4 = cos(dVar4 + -1.047197551196598);
      bVar1 = false;
      lVar2 = 3;
      param_2[2] = dVar4 * dVar6;
    }
  }
  else if (1e-09 <= ABS(dVar5)) {
    if (0.0 <= dVar5) {
      dVar4 = 0.0;
      if (0.0 < dVar5) {
        dVar4 = pow(dVar5,0.3333333333333333);
        dVar4 = -dVar4;
      }
    }
    else {
      dVar4 = pow(-dVar5,0.3333333333333333);
    }
    dVar8 = dVar4 + dVar4;
    bVar1 = false;
    lVar2 = 2;
    *param_2 = dVar8;
    param_2[1] = -dVar4;
  }
  else {
    dVar8 = 0.0;
    bVar1 = true;
    lVar2 = 1;
    *param_2 = 0.0;
  }
  *param_2 = dVar8 - dVar7 * 0.3333333333333333;
  if (!bVar1) {
    lVar2 = lVar2 + -1;
    pdVar3 = param_2 + 1;
    do {
      lVar2 = lVar2 + -1;
      *pdVar3 = *pdVar3 - dVar7 * 0.3333333333333333;
      pdVar3 = pdVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}


