// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_matrixToQuat
// Entry Point: 00ebb230
// Size: 416 bytes
// Signature: undefined __cdecl fm_matrixToQuat(double * param_1, double * param_2)


/* FLOAT_MATH::fm_matrixToQuat(double const*, double*) */

void FLOAT_MATH::fm_matrixToQuat(double *param_1,double *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_40 [5];
  long local_18;
  
  lVar4 = tpidr_el0;
  local_18 = *(long *)(lVar4 + 0x28);
  dVar6 = *param_1;
  dVar7 = param_1[5];
  dVar8 = dVar6 + dVar7 + param_1[10];
  if (dVar8 <= 0.0) {
    lVar1 = 0x28;
    if (dVar7 <= dVar6) {
      lVar1 = 0;
    }
    uVar5 = 2;
    if (param_1[10] <= *(double *)((long)param_1 + lVar1)) {
      uVar5 = (uint)(dVar6 < dVar7);
    }
    iVar2 = *(int *)(&DAT_005235f0 + (ulong)uVar5 * 4);
    iVar3 = *(int *)(&DAT_005235f0 + (long)iVar2 * 4);
    dVar9 = param_1[iVar2 * 4 + iVar3];
    dVar10 = param_1[iVar3 * 4 + iVar2];
    dVar8 = param_1[(int)(uVar5 * 4 + iVar2)];
    dVar11 = param_1[(int)(uVar5 * 4 + iVar3)];
    dVar7 = SQRT((param_1[uVar5 | uVar5 << 2] - (param_1[iVar2 * 5] + param_1[iVar3 * 5])) + 1.0);
    local_40[uVar5] = dVar7 * 0.5;
    dVar12 = param_1[(int)(uVar5 | iVar3 << 2)];
    dVar6 = 0.5 / dVar7;
    if (dVar7 == 0.0) {
      dVar6 = dVar7;
    }
    local_40[3] = (dVar9 - dVar10) * dVar6;
    local_40[iVar2] = dVar6 * (dVar8 + param_1[(int)(uVar5 | iVar2 << 2)]);
    local_40[iVar3] = dVar6 * (dVar11 + dVar12);
    param_2[1] = local_40[1];
    *param_2 = local_40[0];
    param_2[3] = local_40[3];
  }
  else {
    dVar6 = SQRT(dVar8 + 1.0);
    dVar7 = 0.5 / dVar6;
    param_2[3] = dVar6 * 0.5;
    *param_2 = dVar7 * (param_1[6] - param_1[9]);
    param_2[1] = dVar7 * (param_1[8] - param_1[2]);
    local_40[2] = dVar7 * (param_1[1] - param_1[4]);
  }
  param_2[2] = local_40[2];
  if (*(long *)(lVar4 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


