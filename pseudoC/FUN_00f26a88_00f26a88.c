// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f26a88
// Entry Point: 00f26a88
// Size: 1124 bytes
// Signature: undefined FUN_00f26a88(void)


void FUN_00f26a88(long param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 *puVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  double __y;
  double local_70;
  double local_68;
  double local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pdVar8 = param_3;
  if (*(int *)((long)param_3 + 0xc) == 3) {
LAB_00f26afc:
    if (*(int *)((long)param_4 + 0xc) != 3) {
      if ((*(int *)((long)param_4 + 0xc) != 5) ||
         (iVar3 = FUN_00f11180((long)*param_4 + 0x18,&local_60), iVar3 == 0)) goto LAB_00f26b64;
      local_70 = local_60;
      param_4 = &local_70;
    }
    if (param_5 - 8U < 7) {
      dVar11 = *pdVar8;
      __y = *param_4;
      switch(param_5) {
      case 8:
        dVar11 = dVar11 + __y;
        break;
      case 9:
        dVar11 = dVar11 - __y;
        break;
      case 10:
        dVar11 = dVar11 * __y;
        break;
      case 0xb:
        dVar11 = dVar11 / __y;
        break;
      case 0xc:
        dVar11 = (double)NEON_fmsub((long)(dVar11 / __y),__y,dVar11);
        break;
      case 0xd:
        dVar11 = pow(dVar11,__y);
        break;
      case 0xe:
        dVar11 = -dVar11;
      }
      fVar10 = 4.203895e-45;
      *param_2 = dVar11;
      goto LAB_00f26ea4;
    }
  }
  else {
    if ((*(int *)((long)param_3 + 0xc) == 5) &&
       (iVar3 = FUN_00f11180((long)*param_3 + 0x18,&local_60), iVar3 != 0)) {
      pdVar8 = &local_68;
      local_68 = local_60;
      goto LAB_00f26afc;
    }
LAB_00f26b64:
    iVar3 = *(int *)((long)param_3 + 0xc);
    iVar1 = *(int *)((long)param_4 + 0xc);
    pdVar8 = param_3;
    if (iVar3 != 4) {
      pdVar8 = (double *)0x0;
    }
    pdVar5 = param_4;
    if (iVar1 != 4) {
      pdVar5 = (double *)0x0;
    }
    if ((pdVar8 == (double *)0x0) || (pdVar5 == (double *)0x0)) {
      if (pdVar8 == (double *)0x0) {
        if (pdVar5 != (double *)0x0) {
          pdVar8 = param_3;
          if (iVar3 != 3) {
            if ((iVar3 != 5) || (iVar3 = FUN_00f11180((long)*param_3 + 0x18,&local_60), iVar3 == 0))
            goto switchD_00f26ba4_caseD_c;
            pdVar8 = &local_68;
            local_68 = local_60;
          }
          fVar10 = (float)*pdVar8;
          if (param_5 == 0xb) {
            *(float *)param_2 = fVar10 / *(float *)pdVar5;
            *(float *)((long)param_2 + 4) = fVar10 / *(float *)((long)pdVar5 + 4);
            goto LAB_00f26e94;
          }
          if (param_5 == 10) {
            *(float *)param_2 = *(float *)pdVar5 * fVar10;
            *(float *)((long)param_2 + 4) = *(float *)((long)pdVar5 + 4) * fVar10;
            fVar13 = *(float *)(pdVar5 + 1);
            goto LAB_00f26cb4;
          }
        }
switchD_00f26ba4_caseD_c:
        puVar4 = (undefined8 *)FUN_00f197f8(param_1,param_3,param_5);
        if ((*(int *)((long)puVar4 + 0xc) == 0) &&
           (puVar4 = (undefined8 *)FUN_00f197f8(param_1,param_4,param_5),
           *(int *)((long)puVar4 + 0xc) == 0)) {
          FUN_00f09c74(param_1,param_3,param_4,param_5);
          goto LAB_00f26ee8;
        }
        puVar6 = *(undefined8 **)(param_1 + 8);
        uVar12 = *puVar4;
        lVar9 = *(long *)(param_1 + 0x30);
        puVar6[1] = puVar4[1];
        *puVar6 = uVar12;
        lVar7 = *(long *)(param_1 + 8);
        dVar11 = *param_3;
        *(double *)(lVar7 + 0x18) = param_3[1];
        *(double *)(lVar7 + 0x10) = dVar11;
        lVar7 = *(long *)(param_1 + 8);
        dVar11 = *param_4;
        *(double *)(lVar7 + 0x28) = param_4[1];
        *(double *)(lVar7 + 0x20) = dVar11;
        lVar7 = *(long *)(param_1 + 8);
        if (*(long *)(param_1 + 0x28) - lVar7 < 0x31) {
          FUN_00f0ab24(param_1,3);
          lVar7 = *(long *)(param_1 + 8);
        }
        *(long *)(param_1 + 8) = lVar7 + 0x30;
        FUN_00f0ac4c(param_1,lVar7,1);
        lVar7 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar7 + -0x10;
        uVar12 = *(undefined8 *)(lVar7 + -0x10);
        puVar4 = (undefined8 *)((long)param_2 + (*(long *)(param_1 + 0x30) - lVar9));
        puVar4[1] = *(undefined8 *)(lVar7 + -8);
        *puVar4 = uVar12;
        goto LAB_00f26ea8;
      }
      pdVar5 = param_4;
      if (iVar1 != 3) {
        if ((iVar1 != 5) || (iVar3 = FUN_00f11180((long)*param_4 + 0x18,&local_60), iVar3 == 0))
        goto switchD_00f26ba4_caseD_c;
        local_70 = local_60;
        pdVar5 = &local_70;
      }
      fVar10 = (float)*pdVar5;
      if (param_5 == 0xb) {
        *(float *)param_2 = *(float *)pdVar8 / fVar10;
        *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) / fVar10;
        fVar13 = *(float *)(pdVar8 + 1) / fVar10;
        goto LAB_00f26e9c;
      }
      if (param_5 != 10) goto switchD_00f26ba4_caseD_c;
      *(float *)param_2 = *(float *)pdVar8 * fVar10;
      *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) * fVar10;
      fVar13 = *(float *)(pdVar8 + 1);
LAB_00f26cb4:
      fVar13 = fVar13 * fVar10;
    }
    else {
      switch(param_5) {
      case 8:
        *(float *)param_2 = *(float *)pdVar8 + *(float *)pdVar5;
        *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) + *(float *)((long)pdVar5 + 4);
        fVar13 = *(float *)(pdVar8 + 1) + *(float *)(pdVar5 + 1);
        break;
      case 9:
        *(float *)param_2 = *(float *)pdVar8 - *(float *)pdVar5;
        *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) - *(float *)((long)pdVar5 + 4);
        fVar13 = *(float *)(pdVar8 + 1) - *(float *)(pdVar5 + 1);
        break;
      case 10:
        *(float *)param_2 = *(float *)pdVar8 * *(float *)pdVar5;
        *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) * *(float *)((long)pdVar5 + 4);
        fVar13 = *(float *)(pdVar8 + 1) * *(float *)(pdVar5 + 1);
        break;
      case 0xb:
        *(float *)param_2 = *(float *)pdVar8 / *(float *)pdVar5;
        *(float *)((long)param_2 + 4) = *(float *)((long)pdVar8 + 4) / *(float *)((long)pdVar5 + 4);
        fVar10 = *(float *)(pdVar8 + 1);
LAB_00f26e94:
        fVar13 = fVar10 / *(float *)(pdVar5 + 1);
        break;
      default:
        goto switchD_00f26ba4_caseD_c;
      case 0xe:
        *(float *)param_2 = -*(float *)pdVar8;
        *(float *)((long)param_2 + 4) = -*(float *)((long)pdVar8 + 4);
        fVar13 = -*(float *)(pdVar8 + 1);
      }
    }
LAB_00f26e9c:
    fVar10 = 5.605194e-45;
    *(float *)(param_2 + 1) = fVar13;
LAB_00f26ea4:
    *(float *)((long)param_2 + 0xc) = fVar10;
  }
LAB_00f26ea8:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_00f26ee8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


