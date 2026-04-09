// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_transformAABB
// Entry Point: 00ec1bb4
// Size: 568 bytes
// Signature: undefined __cdecl fm_transformAABB(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5)


/* FLOAT_MATH::fm_transformAABB(double const*, double const*, double const*, double*, double*) */

void FLOAT_MATH::fm_transformAABB
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double local_c0 [6];
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  dVar4 = *param_1;
  dVar6 = param_1[1];
  local_c0[0] = *param_2;
  local_c0[4] = param_2[1];
  dVar3 = param_1[2];
  local_68 = param_2[2];
  local_78 = dVar4;
  dStack_70 = dVar6;
  local_c0[1] = dVar6;
  local_c0[2] = dVar3;
  local_c0[3] = local_c0[0];
  local_c0[5] = dVar3;
  dStack_90 = dVar4;
  local_88 = local_c0[4];
  dStack_80 = dVar3;
  dStack_60 = local_c0[0];
  local_58 = dVar6;
  dStack_50 = local_68;
  local_48 = local_c0[0];
  dStack_40 = local_c0[4];
  local_38 = local_68;
  dStack_30 = dVar4;
  local_28 = local_c0[4];
  dStack_20 = local_68;
  if (param_3 != (double *)0x0) {
    uVar7 = NEON_fmadd(*param_3,dVar4,param_3[4] * dVar6);
    uVar8 = NEON_fmadd(param_3[1],dVar4,dVar6 * param_3[5]);
    uVar5 = NEON_fmadd(param_3[2],dVar4,dVar6 * param_3[6]);
    dVar4 = (double)NEON_fmadd(param_3[8],dVar3,uVar7);
    dVar6 = (double)NEON_fmadd(param_3[9],dVar3,uVar8);
    dVar3 = (double)NEON_fmadd(param_3[10],dVar3,uVar5);
    dVar4 = dVar4 + param_3[0xc];
    dVar6 = param_3[0xd] + dVar6;
    dVar3 = param_3[0xe] + dVar3;
  }
  lVar2 = 0;
  *param_5 = dVar4;
  *param_4 = dVar4;
  param_5[1] = dVar6;
  param_4[1] = dVar6;
  param_5[2] = dVar3;
  param_4[2] = dVar3;
  do {
    if (param_3 == (double *)0x0) {
      dVar3 = *(double *)((long)local_c0 + lVar2 + 0x10);
      dVar4 = *(double *)((long)local_c0 + lVar2);
      dVar6 = *param_4;
      *(double *)((long)local_c0 + lVar2 + 0x10) = dVar3;
      if (dVar4 < dVar6) goto LAB_00ec1d1c;
    }
    else {
      uVar8 = *(undefined8 *)((long)local_c0 + lVar2);
      dVar3 = *(double *)((long)local_c0 + lVar2 + 8);
      uVar5 = NEON_fmadd(param_3[2],uVar8,dVar3 * param_3[6]);
      uVar7 = NEON_fmadd(*param_3,uVar8,param_3[4] * dVar3);
      uVar10 = *(undefined8 *)((long)local_c0 + lVar2 + 0x10);
      uVar8 = NEON_fmadd(param_3[1],uVar8,dVar3 * param_3[5]);
      dVar3 = (double)NEON_fmadd(param_3[10],uVar10,uVar5);
      dVar4 = (double)NEON_fmadd(param_3[8],uVar10,uVar7);
      dVar6 = (double)NEON_fmadd(param_3[9],uVar10,uVar8);
      dVar9 = param_3[0xd];
      dVar3 = param_3[0xe] + dVar3;
      *(double *)((long)local_c0 + lVar2) = dVar4 + param_3[0xc];
      *(double *)((long)local_c0 + lVar2 + 8) = dVar9 + dVar6;
      dVar4 = *(double *)((long)local_c0 + lVar2);
      dVar6 = *param_4;
      *(double *)((long)local_c0 + lVar2 + 0x10) = dVar3;
      if (dVar4 < dVar6) {
LAB_00ec1d1c:
        *param_4 = dVar4;
      }
    }
    dVar6 = *(double *)((long)local_c0 + lVar2 + 8);
    if (dVar6 < param_4[1]) {
      param_4[1] = dVar6;
      if (dVar3 < param_4[2]) goto LAB_00ec1d74;
LAB_00ec1d3c:
      if (dVar4 <= *param_5) goto LAB_00ec1d48;
LAB_00ec1d84:
      *param_5 = dVar4;
      if (param_5[1] < dVar6) goto LAB_00ec1d94;
LAB_00ec1d54:
      dVar4 = param_5[2];
    }
    else {
      if (param_4[2] <= dVar3) goto LAB_00ec1d3c;
LAB_00ec1d74:
      param_4[2] = dVar3;
      if (*param_5 < dVar4) goto LAB_00ec1d84;
LAB_00ec1d48:
      if (dVar6 <= param_5[1]) goto LAB_00ec1d54;
LAB_00ec1d94:
      param_5[1] = dVar6;
      dVar4 = param_5[2];
    }
    if (dVar4 < dVar3) {
      param_5[2] = dVar3;
    }
    lVar2 = lVar2 + 0x18;
    if (lVar2 == 0xa8) {
      if (*(long *)(lVar1 + 0x28) == local_18) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


