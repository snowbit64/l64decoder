// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inverseTransform
// Entry Point: 00ebb5c0
// Size: 1976 bytes
// Signature: undefined __cdecl fm_inverseTransform(double * param_1, double * param_2)


/* WARNING: Removing unreachable block (ram,0x00ebbba8) */
/* WARNING: Removing unreachable block (ram,0x00ebb784) */
/* WARNING: Removing unreachable block (ram,0x00ebb9b8) */
/* FLOAT_MATH::fm_inverseTransform(double const*, double*) */

void FLOAT_MATH::fm_inverseTransform(double *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_b8 [4];
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  uVar6 = 0;
  local_38 = *(long *)(lVar4 + 0x28);
  pdVar1 = param_1 + 0xc;
  pdVar2 = param_1 + 0xd;
  pdVar3 = param_1 + 0xe;
  pdVar7 = param_1 + 9;
  pdVar8 = param_1 + 8;
  dVar15 = (double)NEON_fmadd(param_1[6],*pdVar8,param_1[10] * -param_1[4]);
  uVar14 = NEON_fmadd(param_1[5],param_1[10],*pdVar7 * -param_1[6]);
  uVar13 = NEON_fmadd(param_1[4],*pdVar7,*pdVar8 * -param_1[5]);
  uVar14 = NEON_fmadd(*param_1,uVar14,param_1[1] * dVar15);
  dVar15 = (double)NEON_fmadd(param_1[2],uVar13,uVar14);
  dVar15 = 1.0 / dVar15;
  lVar5 = 0;
  do {
    local_68 = 1.0;
    if (lVar5 == 0) {
      dVar16 = param_1[5];
      pdVar10 = pdVar2;
      pdVar11 = pdVar7;
LAB_00ebb6bc:
      dVar17 = param_1[6];
      local_b8[2] = param_1[7];
      dVar19 = param_1[10];
      local_88 = param_1[0xb];
      dVar18 = *pdVar11;
      lVar12 = 10;
      dVar20 = *pdVar10;
      dVar21 = param_1[0xe];
LAB_00ebb6e0:
      local_b8[lVar12] = param_1[0xf];
      pdVar10 = &local_68;
    }
    else {
      dVar16 = param_1[4];
      pdVar10 = pdVar1;
      pdVar11 = pdVar8;
      if (lVar5 == 0x20) goto LAB_00ebb6bc;
      dVar17 = param_1[5];
      if (lVar5 == 0x40) {
        local_b8[2] = param_1[7];
        dVar18 = param_1[8];
        lVar12 = 10;
        local_88 = param_1[0xb];
        dVar20 = param_1[0xc];
        dVar19 = param_1[9];
        dVar21 = param_1[0xd];
        goto LAB_00ebb6e0;
      }
      local_b8[2] = param_1[6];
      if (lVar5 != 0x60) {
        dVar19 = param_1[9];
        local_88 = param_1[10];
        lVar12 = 0xb;
        dVar21 = param_1[0xd];
        dVar18 = param_1[8];
        dVar20 = param_1[0xc];
        local_68 = param_1[0xe];
        goto LAB_00ebb6e0;
      }
      dVar18 = param_1[8];
      dVar19 = param_1[9];
      dVar20 = param_1[0xc];
      dVar21 = param_1[0xd];
      local_88 = param_1[10];
      pdVar10 = pdVar3;
    }
    dVar22 = local_88;
    local_68 = 1.0;
    dVar23 = -local_88;
    local_88 = 0.0;
    dVar22 = (double)NEON_fmadd(dVar22,dVar20,*pdVar10 * -dVar18);
    uVar13 = NEON_fmadd(dVar19,*pdVar10,dVar21 * dVar23);
    uVar14 = NEON_fmadd(dVar18,dVar21,dVar20 * -dVar19);
    uVar13 = NEON_fmadd(dVar16,uVar13,dVar17 * dVar22);
    dVar16 = (double)NEON_fmadd(local_b8[2],uVar14,uVar13);
    *(double *)((long)param_2 + lVar5) = dVar15 * dVar16 * (double)(1 - (uVar6 & 2));
    if (lVar5 == 0) {
      local_b8[0] = param_1[1];
LAB_00ebb790:
      local_b8[1] = param_1[2];
      local_b8[2] = param_1[3];
      if (lVar5 == 0) {
LAB_00ebb88c:
        local_98 = *pdVar7;
LAB_00ebb894:
        dStack_90 = param_1[10];
        uVar9 = 2;
LAB_00ebb8a4:
        local_b8[uVar9 | 4] = param_1[0xb];
      }
      else {
LAB_00ebb7a8:
        local_98 = *pdVar8;
        if (lVar5 == 0x20) goto LAB_00ebb894;
        dStack_90 = *pdVar7;
        if (lVar5 == 0x40) {
          uVar9 = 2;
          goto LAB_00ebb8a4;
        }
        local_88 = param_1[10];
        if (lVar5 != 0x60) {
          uVar9 = 3;
          goto LAB_00ebb8a4;
        }
      }
      if (lVar5 == 0) {
        local_78 = *pdVar2;
LAB_00ebb8e8:
        dStack_70 = *pdVar3;
        uVar9 = 2;
      }
      else {
        local_78 = *pdVar1;
        if (lVar5 == 0x20) goto LAB_00ebb8e8;
        dStack_70 = *pdVar2;
        if (lVar5 == 0x40) {
          uVar9 = 2;
        }
        else {
          local_68 = *pdVar3;
          if (lVar5 == 0x60) goto LAB_00ebb904;
          uVar9 = 3;
        }
      }
      local_b8[uVar9 | 8] = param_1[0xf];
    }
    else {
      local_b8[0] = *param_1;
      if (lVar5 == 0x20) goto LAB_00ebb790;
      local_b8[1] = param_1[1];
      if (lVar5 == 0x40) {
        local_b8[2] = param_1[3];
        goto LAB_00ebb7a8;
      }
      local_b8[2] = param_1[2];
      if (lVar5 != 0x60) {
        if (lVar5 != 0) goto LAB_00ebb7a8;
        goto LAB_00ebb88c;
      }
      dStack_90 = param_1[9];
      local_98 = param_1[8];
      local_88 = param_1[10];
      dStack_70 = param_1[0xd];
      local_78 = param_1[0xc];
      local_68 = param_1[0xe];
    }
LAB_00ebb904:
    dVar17 = local_68;
    dVar16 = local_88;
    local_68 = 1.0;
    dVar18 = -local_88;
    local_88 = 0.0;
    dVar16 = (double)NEON_fmadd(dVar16,local_78,dVar17 * -local_98);
    uVar14 = NEON_fmadd(dStack_90,dVar17,dStack_70 * dVar18);
    uVar13 = NEON_fmadd(local_98,dStack_70,local_78 * -dStack_90);
    uVar14 = NEON_fmadd(local_b8[0],uVar14,local_b8[1] * dVar16);
    dVar16 = (double)NEON_fmadd(local_b8[2],uVar13,uVar14);
    *(double *)((long)param_2 + lVar5 + 8) = dVar15 * dVar16 * (double)((uVar6 | 0xfffffffd) + 2);
    if (lVar5 == 0) {
      local_b8[0] = param_1[1];
LAB_00ebb9c4:
      local_b8[1] = param_1[2];
      local_b8[2] = param_1[3];
      if (lVar5 == 0) {
LAB_00ebba90:
        local_98 = param_1[5];
LAB_00ebba98:
        dStack_90 = param_1[6];
        lVar12 = 6;
      }
      else {
LAB_00ebb9dc:
        local_98 = param_1[4];
        if (lVar5 == 0x20) goto LAB_00ebba98;
        dStack_90 = param_1[5];
        if (lVar5 == 0x40) {
          lVar12 = 6;
        }
        else {
          local_88 = param_1[6];
          if (lVar5 == 0x60) goto LAB_00ebbaac;
          lVar12 = 7;
        }
      }
      local_b8[lVar12] = param_1[7];
    }
    else {
      local_b8[0] = *param_1;
      if (lVar5 == 0x20) goto LAB_00ebb9c4;
      local_b8[1] = param_1[1];
      if (lVar5 == 0x40) {
        local_b8[2] = param_1[3];
        goto LAB_00ebb9dc;
      }
      local_b8[2] = param_1[2];
      if (lVar5 != 0x60) {
        if (lVar5 != 0) goto LAB_00ebb9dc;
        goto LAB_00ebba90;
      }
      dStack_90 = param_1[5];
      local_98 = param_1[4];
      local_88 = param_1[6];
    }
LAB_00ebbaac:
    dVar16 = local_88;
    if (lVar5 == 0) {
      local_78 = *pdVar2;
LAB_00ebbae8:
      dStack_70 = *pdVar3;
      lVar12 = 10;
LAB_00ebbaf4:
      local_b8[lVar12] = param_1[0xf];
    }
    else {
      local_78 = *pdVar1;
      if (lVar5 == 0x20) goto LAB_00ebbae8;
      dStack_70 = *pdVar2;
      if (lVar5 == 0x40) {
        lVar12 = 10;
        goto LAB_00ebbaf4;
      }
      local_68 = *pdVar3;
      if (lVar5 != 0x60) {
        lVar12 = 0xb;
        goto LAB_00ebbaf4;
      }
    }
    dVar17 = local_68;
    local_68 = 1.0;
    local_40 = 0x3ff0000000000000;
    dVar18 = -local_88;
    uStack_80 = 0;
    local_88 = 0.0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    dVar16 = (double)NEON_fmadd(dVar16,local_78,dVar17 * -local_98);
    uVar14 = NEON_fmadd(dStack_90,dVar17,dStack_70 * dVar18);
    uVar13 = NEON_fmadd(local_98,dStack_70,local_78 * -dStack_90);
    uVar14 = NEON_fmadd(local_b8[0],uVar14,local_b8[1] * dVar16);
    local_b8[3] = 0.0;
    dVar16 = (double)NEON_fmadd(local_b8[2],uVar13,uVar14);
    *(double *)((long)param_2 + lVar5 + 0x10) = dVar15 * dVar16 * (double)(1 - (uVar6 & 2));
    if (lVar5 == 0) {
      local_b8[0] = param_1[1];
LAB_00ebbbb4:
      local_b8[1] = param_1[2];
      local_b8[2] = param_1[3];
      if (lVar5 == 0) {
LAB_00ebbc58:
        local_98 = param_1[5];
LAB_00ebbc60:
        dStack_90 = param_1[6];
        lVar12 = 6;
      }
      else {
LAB_00ebbbcc:
        local_98 = param_1[4];
        if (lVar5 == 0x20) goto LAB_00ebbc60;
        dStack_90 = param_1[5];
        if (lVar5 == 0x40) {
          lVar12 = 6;
        }
        else {
          local_88 = param_1[6];
          if (lVar5 == 0x60) goto LAB_00ebbc74;
          lVar12 = 7;
        }
      }
      local_b8[lVar12] = param_1[7];
    }
    else {
      local_b8[0] = *param_1;
      if (lVar5 == 0x20) goto LAB_00ebbbb4;
      local_b8[1] = param_1[1];
      if (lVar5 == 0x40) {
        local_b8[2] = param_1[3];
        goto LAB_00ebbbcc;
      }
      local_b8[2] = param_1[2];
      if (lVar5 != 0x60) {
        local_b8[3] = param_1[3];
        if (lVar5 != 0) goto LAB_00ebbbcc;
        goto LAB_00ebbc58;
      }
      dStack_90 = param_1[5];
      local_98 = param_1[4];
      local_88 = param_1[6];
    }
LAB_00ebbc74:
    if (lVar5 == 0) {
      local_78 = *pdVar7;
LAB_00ebbca8:
      dStack_70 = param_1[10];
      uVar9 = 2;
LAB_00ebbcb4:
      local_b8[uVar9 | 8] = param_1[0xb];
    }
    else {
      local_78 = *pdVar8;
      if (lVar5 == 0x20) goto LAB_00ebbca8;
      dStack_70 = *pdVar7;
      if (lVar5 == 0x40) {
        uVar9 = 2;
        goto LAB_00ebbcb4;
      }
      local_68 = param_1[10];
      if (lVar5 != 0x60) {
        uVar9 = 3;
        goto LAB_00ebbcb4;
      }
    }
    uVar9 = uVar6 | 0xfffffffd;
    uVar6 = uVar6 + 2;
    dVar16 = (double)NEON_fmadd(local_88,local_78,local_68 * -local_98);
    uVar14 = NEON_fmadd(dStack_90,local_68,dStack_70 * -local_88);
    uVar13 = NEON_fmadd(local_98,dStack_70,local_78 * -dStack_90);
    uVar14 = NEON_fmadd(local_b8[0],uVar14,local_b8[1] * dVar16);
    dVar16 = (double)NEON_fmadd(local_b8[2],uVar13,uVar14);
    lVar12 = lVar5 + 0x20;
    *(double *)((long)param_2 + lVar5 + 0x18) = dVar15 * dVar16 * (double)(uVar9 + 2);
    lVar5 = lVar12;
    if (lVar12 == 0x80) {
      if (*(long *)(lVar4 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


