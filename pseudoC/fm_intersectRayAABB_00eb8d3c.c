// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectRayAABB
// Entry Point: 00eb8d3c
// Size: 780 bytes
// Signature: undefined __cdecl fm_intersectRayAABB(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)


/* FLOAT_MATH::fm_intersectRayAABB(float const*, float const*, float const*, float const*, float*)
    */

void FLOAT_MATH::fm_intersectRayAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 local_28;
  float local_20;
  long local_18;
  
  lVar3 = tpidr_el0;
  uVar10 = NEON_fmov(0xbf800000,4);
  local_18 = *(long *)(lVar3 + 0x28);
  local_28 = uVar10;
  if (*param_1 <= *param_3) {
    fVar6 = -1.0;
    if (*param_3 <= *param_2) {
      fVar7 = 1.401298e-45;
      fVar8 = param_3[1];
      fVar9 = param_1[1];
      if (fVar9 <= fVar8) goto LAB_00eb8dfc;
    }
    else {
      *param_5 = *param_2;
      fVar8 = *param_4;
      if (fVar8 != 0.0) {
        fVar6 = *param_2;
        goto LAB_00eb8da0;
      }
      fVar7 = 0.0;
      fVar8 = param_3[1];
      fVar9 = param_1[1];
      if (fVar9 <= fVar8) goto LAB_00eb8dfc;
    }
LAB_00eb8dcc:
    pfVar5 = param_1 + 1;
    param_5[1] = fVar9;
    fVar8 = param_4[1];
    if (param_4[1] == 0.0) {
      fVar9 = -1.0;
      fVar7 = 0.0;
    }
    else {
LAB_00eb8e1c:
      fVar7 = 0.0;
      fVar9 = (*pfVar5 - param_3[1]) / fVar8;
      local_28 = CONCAT44(fVar9,(undefined4)local_28);
    }
  }
  else {
    *param_5 = *param_1;
    fVar8 = *param_4;
    if (fVar8 == 0.0) {
      fVar7 = 0.0;
      fVar6 = -1.0;
      fVar8 = param_3[1];
      fVar9 = param_1[1];
      if (fVar9 <= fVar8) goto LAB_00eb8dfc;
      goto LAB_00eb8dcc;
    }
    fVar6 = *param_1;
LAB_00eb8da0:
    fVar7 = 0.0;
    fVar6 = (fVar6 - *param_3) / fVar8;
    local_28 = CONCAT44((int)((ulong)uVar10 >> 0x20),fVar6);
    fVar8 = param_3[1];
    fVar9 = param_1[1];
    if (fVar8 < fVar9) goto LAB_00eb8dcc;
LAB_00eb8dfc:
    pfVar5 = param_2 + 1;
    fVar9 = -1.0;
    if (*pfVar5 < fVar8) {
      param_5[1] = *pfVar5;
      fVar7 = param_4[1];
      fVar8 = fVar7;
      if (fVar7 == 0.0) goto LAB_00eb8e38;
      goto LAB_00eb8e1c;
    }
  }
LAB_00eb8e38:
  pfVar5 = param_1 + 2;
  if (*pfVar5 <= param_3[2]) {
    fVar8 = param_2[2];
    if (fVar8 < param_3[2]) {
      param_5[2] = fVar8;
      fVar8 = param_4[2];
      pfVar4 = param_2 + 2;
      goto joined_r0x00eb8e90;
    }
    fVar8 = -1.0;
    if (fVar7 != 0.0) {
      uVar10 = 1;
      *param_5 = *param_3;
      param_5[1] = param_3[1];
      param_5[2] = param_3[2];
      goto LAB_00eb9028;
    }
  }
  else {
    param_5[2] = *pfVar5;
    fVar8 = param_4[2];
    pfVar4 = pfVar5;
joined_r0x00eb8e90:
    if (fVar8 == 0.0) {
      fVar8 = -1.0;
    }
    else {
      fVar8 = (*pfVar4 - param_3[2]) / fVar8;
      local_20 = fVar8;
    }
  }
  fVar7 = *(float *)((ulong)&local_28 | (ulong)(fVar6 < fVar9) << 2);
  uVar1 = 2;
  if (fVar8 <= fVar7) {
    uVar1 = (ulong)(fVar6 < fVar9);
  }
  iVar2 = *(int *)((long)&local_28 + uVar1 * 4);
  if (-1 < iVar2) {
    if (uVar1 == 0) {
LAB_00eb8f48:
      fVar6 = (float)NEON_fmadd(iVar2,param_4[1],param_3[1]);
      param_5[1] = fVar6;
      if ((param_1[1] + -1e-05 <= fVar6) && (fVar6 <= param_2[1] + 1e-05)) {
LAB_00eb8f90:
        if (fVar8 <= fVar7) {
          fVar6 = (float)NEON_fmadd(iVar2,param_4[2],param_3[2]);
          param_5[2] = fVar6;
          if ((fVar6 < *pfVar5 + -1e-05) || (param_2[2] + 1e-05 < fVar6)) goto LAB_00eb9024;
        }
        uVar10 = 1;
        goto LAB_00eb9028;
      }
    }
    else {
      fVar6 = (float)NEON_fmadd(iVar2,*param_4,*param_3);
      *param_5 = fVar6;
      if ((*param_1 + -1e-05 <= fVar6) && (fVar6 <= *param_2 + 1e-05)) {
        if (uVar1 != 1) goto LAB_00eb8f48;
        goto LAB_00eb8f90;
      }
    }
  }
LAB_00eb9024:
  uVar10 = 0;
LAB_00eb9028:
  if (*(long *)(lVar3 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


