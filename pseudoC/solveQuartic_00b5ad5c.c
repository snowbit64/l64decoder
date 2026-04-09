// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveQuartic
// Entry Point: 00b5ad5c
// Size: 700 bytes
// Signature: undefined __cdecl solveQuartic(double * param_1, double * param_2)


/* MathUtil::solveQuartic(double*, double*) */

void MathUtil::solveQuartic(double *param_1,double *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  double *pdVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double local_68;
  double local_60;
  double local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  dVar9 = param_1[4];
  dVar10 = param_1[3] / dVar9;
  dVar11 = param_1[2] / dVar9;
  dVar12 = dVar10 * dVar10;
  dVar16 = dVar10 * 0.25;
  uVar14 = NEON_fmadd(dVar12 * -0.01171875,dVar12,dVar11 * dVar12 * 0.0625);
  dVar15 = (double)NEON_fmsub(dVar16,param_1[1] / dVar9,uVar14);
  dVar15 = *param_1 / dVar9 + dVar15;
  dVar10 = (double)NEON_fmadd(dVar12 * 0.125,dVar10,dVar10 * -0.5 * dVar11);
  dVar11 = (double)NEON_fmadd(dVar12,0xbfd8000000000000,dVar11);
  dVar10 = param_1[1] / dVar9 + dVar10;
  if (1e-09 <= ABS(dVar15)) {
    local_58 = dVar11 * -0.5;
    uStack_50 = 0x3ff0000000000000;
    local_68 = (double)NEON_fmadd(dVar15 * 0.5,dVar11,dVar10 * dVar10 * -0.125);
    local_60 = -dVar15;
    solveCubic(&local_68,param_2);
    dVar9 = *param_2;
    dVar12 = (double)NEON_fnmsub(dVar9,dVar9,dVar15);
    if ((dVar12 <= 0.0) ||
       (dVar11 = (double)NEON_fnmsub(dVar9,0x4000000000000000,dVar11), dVar11 <= 0.0)) {
      uVar3 = 0;
      goto LAB_00b5af54;
    }
    dVar11 = SQRT(dVar11);
    local_60 = -dVar11;
    if (0.0 <= dVar10) {
      local_60 = dVar11;
    }
    dVar15 = local_60 * 0.5;
    local_68 = dVar9 - SQRT(dVar12);
    dVar13 = (double)NEON_fnmsub(dVar15,dVar15,local_68);
    if (1e-09 <= ABS(dVar13)) {
      if (dVar13 <= 0.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
        *param_2 = SQRT(dVar13) - dVar15;
        param_2[1] = -SQRT(dVar13) - dVar15;
      }
    }
    else {
      uVar4 = 1;
      *param_2 = -dVar15;
    }
    pdVar7 = param_2 + uVar4;
    if (0.0 <= dVar10) {
      dVar11 = -dVar11;
    }
    dVar11 = dVar11 * 0.5;
    dVar9 = (double)NEON_fnmsub(dVar11,dVar11,dVar9 + SQRT(dVar12));
    if (1e-09 <= ABS(dVar9)) {
      if (dVar9 <= 0.0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
        *pdVar7 = SQRT(dVar9) - dVar11;
        pdVar7[1] = -SQRT(dVar9) - dVar11;
      }
    }
    else {
      iVar2 = 1;
      *pdVar7 = -dVar11;
    }
    uVar3 = (ulong)(iVar2 + uVar4);
    if (iVar2 + uVar4 == 0) goto LAB_00b5af54;
  }
  else {
    uStack_50 = 0x3ff0000000000000;
    local_58 = 0.0;
    local_68 = dVar10;
    local_60 = dVar11;
    iVar2 = solveCubic(&local_68,param_2);
    uVar3 = (ulong)(iVar2 + 1U);
    param_2[iVar2] = 0.0;
    if ((int)(iVar2 + 1U) < 1) goto LAB_00b5af54;
  }
  if ((uint)uVar3 < 4) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar3 & 0xfffffffc;
    pdVar7 = param_2 + 2;
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 - 4;
      pdVar7[-1] = pdVar7[-1] - dVar16;
      pdVar7[-2] = pdVar7[-2] - dVar16;
      pdVar7[1] = pdVar7[1] - dVar16;
      *pdVar7 = *pdVar7 - dVar16;
      pdVar7 = pdVar7 + 4;
    } while (uVar8 != 0);
    if (uVar6 == uVar3) goto LAB_00b5af54;
  }
  lVar5 = uVar3 - uVar6;
  pdVar7 = param_2 + uVar6;
  do {
    lVar5 = lVar5 + -1;
    *pdVar7 = *pdVar7 - dVar16;
    pdVar7 = pdVar7 + 1;
  } while (lVar5 != 0);
LAB_00b5af54:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


