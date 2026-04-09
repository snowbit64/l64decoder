// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inverseTransform
// Entry Point: 00eb3598
// Size: 1972 bytes
// Signature: undefined __cdecl fm_inverseTransform(float * param_1, float * param_2)


/* WARNING: Removing unreachable block (ram,0x00eb3b7c) */
/* WARNING: Removing unreachable block (ram,0x00eb3758) */
/* WARNING: Removing unreachable block (ram,0x00eb398c) */
/* FLOAT_MATH::fm_inverseTransform(float const*, float*) */

void FLOAT_MATH::fm_inverseTransform(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_78;
  undefined8 local_74;
  float local_6c;
  float local_68;
  float fStack_64;
  ulong local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar4 = tpidr_el0;
  uVar6 = 0;
  local_38 = *(long *)(lVar4 + 0x28);
  pfVar7 = param_1 + 9;
  pfVar8 = param_1 + 8;
  pfVar1 = param_1 + 0xc;
  pfVar2 = param_1 + 0xd;
  pfVar3 = param_1 + 0xe;
  fVar16 = (float)NEON_fmadd(param_1[6],*pfVar8,param_1[10] * -param_1[4]);
  uVar14 = NEON_fmadd(param_1[5],param_1[10],*pfVar7 * -param_1[6]);
  uVar13 = NEON_fmadd(param_1[4],*pfVar7,*pfVar8 * -param_1[5]);
  uVar14 = NEON_fmadd(*param_1,uVar14,param_1[1] * fVar16);
  fVar16 = (float)NEON_fmadd(param_1[2],uVar13,uVar14);
  fVar16 = 1.0 / fVar16;
  lVar5 = 0;
  do {
    local_50 = 1.0;
    if (lVar5 == 0) {
      fVar15 = param_1[5];
      pfVar10 = pfVar2;
      pfVar11 = pfVar7;
LAB_00eb3690:
      fVar17 = param_1[6];
      local_74._4_4_ = param_1[7];
      fVar19 = param_1[10];
      local_60._0_4_ = param_1[0xb];
      fVar18 = *pfVar11;
      lVar12 = 10;
      fVar21 = param_1[0xe];
      fVar20 = *pfVar10;
LAB_00eb36b4:
      (&local_78)[lVar12] = param_1[0xf];
      pfVar10 = &local_50;
    }
    else {
      fVar15 = param_1[4];
      pfVar10 = pfVar1;
      pfVar11 = pfVar8;
      if (lVar5 == 0x10) goto LAB_00eb3690;
      fVar17 = param_1[5];
      if (lVar5 == 0x20) {
        local_74._4_4_ = param_1[7];
        fVar18 = param_1[8];
        local_60._0_4_ = param_1[0xb];
        fVar20 = param_1[0xc];
        fVar19 = param_1[9];
        lVar12 = 10;
        fVar21 = param_1[0xd];
        goto LAB_00eb36b4;
      }
      local_74._4_4_ = param_1[6];
      if (lVar5 != 0x30) {
        fVar18 = param_1[8];
        fVar19 = param_1[9];
        local_60._0_4_ = param_1[10];
        fVar21 = param_1[0xd];
        fVar20 = param_1[0xc];
        lVar12 = 0xb;
        local_50 = param_1[0xe];
        goto LAB_00eb36b4;
      }
      fVar18 = param_1[8];
      fVar19 = param_1[9];
      local_60._0_4_ = param_1[10];
      fVar20 = param_1[0xc];
      fVar21 = param_1[0xd];
      pfVar10 = pfVar3;
    }
    local_50 = 1.0;
    fVar22 = (float)NEON_fmadd((float)local_60,fVar20,*pfVar10 * -fVar18);
    uVar13 = NEON_fmadd(fVar19,*pfVar10,fVar21 * -(float)local_60);
    uVar14 = NEON_fmadd(fVar18,fVar21,fVar20 * -fVar19);
    uVar13 = NEON_fmadd(fVar15,uVar13,fVar17 * fVar22);
    fVar15 = (float)NEON_fmadd(local_74._4_4_,uVar14,uVar13);
    *(float *)((long)param_2 + lVar5) = fVar16 * fVar15 * (float)(1 - (uVar6 & 2));
    local_60._0_4_ = 0.0;
    if (lVar5 == 0) {
      local_78 = param_1[1];
LAB_00eb3764:
      local_74._0_4_ = param_1[2];
      local_74._4_4_ = param_1[3];
      if (lVar5 == 0) {
LAB_00eb3860:
        local_68 = *pfVar7;
LAB_00eb3868:
        fStack_64 = param_1[10];
        uVar9 = 2;
LAB_00eb3878:
        (&local_78)[uVar9 | 4] = param_1[0xb];
      }
      else {
LAB_00eb377c:
        local_68 = *pfVar8;
        if (lVar5 == 0x10) goto LAB_00eb3868;
        fStack_64 = *pfVar7;
        if (lVar5 == 0x20) {
          uVar9 = 2;
          goto LAB_00eb3878;
        }
        local_60._0_4_ = param_1[10];
        if (lVar5 != 0x30) {
          uVar9 = 3;
          goto LAB_00eb3878;
        }
      }
      if (lVar5 == 0) {
        fVar15 = *pfVar2;
LAB_00eb38bc:
        uVar9 = 2;
        local_58 = CONCAT44(*pfVar3,fVar15);
      }
      else {
        fVar15 = *pfVar1;
        if (lVar5 == 0x10) goto LAB_00eb38bc;
        local_58 = CONCAT44(*pfVar2,fVar15);
        if (lVar5 == 0x20) {
          uVar9 = 2;
        }
        else {
          local_50 = *pfVar3;
          if (lVar5 == 0x30) goto LAB_00eb38d8;
          uVar9 = 3;
        }
      }
      (&local_78)[uVar9 | 8] = param_1[0xf];
    }
    else {
      local_78 = *param_1;
      if (lVar5 == 0x10) goto LAB_00eb3764;
      local_74._0_4_ = param_1[1];
      if (lVar5 == 0x20) {
        local_74._4_4_ = param_1[3];
        goto LAB_00eb377c;
      }
      local_74._4_4_ = param_1[2];
      if (lVar5 != 0x30) {
        if (lVar5 != 0) goto LAB_00eb377c;
        goto LAB_00eb3860;
      }
      local_60._0_4_ = param_1[10];
      local_58 = *(undefined8 *)(param_1 + 0xc);
      local_50 = param_1[0xe];
      local_68 = (float)*(undefined8 *)(param_1 + 8);
      fStack_64 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
    }
LAB_00eb38d8:
    fVar15 = local_50;
    local_50 = 1.0;
    fVar17 = (float)NEON_fmadd((float)local_60,(float)local_58,fVar15 * -local_68);
    uVar14 = NEON_fmadd(fStack_64,fVar15,local_58._4_4_ * -(float)local_60);
    uVar13 = NEON_fmadd(local_68,local_58._4_4_,(float)local_58 * -fStack_64);
    uVar14 = NEON_fmadd(local_78,uVar14,(float)local_74 * fVar17);
    fVar15 = (float)NEON_fmadd(local_74._4_4_,uVar13,uVar14);
    *(float *)((long)param_2 + lVar5 + 4) = fVar16 * fVar15 * (float)((uVar6 | 0xfffffffd) + 2);
    local_60._0_4_ = 0.0;
    if (lVar5 == 0) {
      local_78 = param_1[1];
LAB_00eb3998:
      local_74._0_4_ = param_1[2];
      local_74._4_4_ = param_1[3];
      if (lVar5 == 0) {
LAB_00eb3a64:
        local_68 = param_1[5];
LAB_00eb3a6c:
        fStack_64 = param_1[6];
        lVar12 = 6;
      }
      else {
LAB_00eb39b0:
        local_68 = param_1[4];
        if (lVar5 == 0x10) goto LAB_00eb3a6c;
        fStack_64 = param_1[5];
        if (lVar5 == 0x20) {
          lVar12 = 6;
        }
        else {
          local_60._0_4_ = param_1[6];
          if (lVar5 == 0x30) goto LAB_00eb3a80;
          lVar12 = 7;
        }
      }
      (&local_78)[lVar12] = param_1[7];
    }
    else {
      local_78 = *param_1;
      if (lVar5 == 0x10) goto LAB_00eb3998;
      local_74._0_4_ = param_1[1];
      if (lVar5 == 0x20) {
        local_74._4_4_ = param_1[3];
        goto LAB_00eb39b0;
      }
      local_74._4_4_ = param_1[2];
      if (lVar5 != 0x30) {
        if (lVar5 != 0) goto LAB_00eb39b0;
        goto LAB_00eb3a64;
      }
      local_60._0_4_ = param_1[6];
      local_68 = (float)*(undefined8 *)(param_1 + 4);
      fStack_64 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    }
LAB_00eb3a80:
    fVar15 = (float)local_60;
    if (lVar5 == 0) {
      local_58._0_4_ = *pfVar2;
LAB_00eb3abc:
      local_58._4_4_ = *pfVar3;
      lVar12 = 10;
LAB_00eb3ac8:
      (&local_78)[lVar12] = param_1[0xf];
    }
    else {
      local_58._0_4_ = *pfVar1;
      if (lVar5 == 0x10) goto LAB_00eb3abc;
      local_58._4_4_ = *pfVar2;
      if (lVar5 == 0x20) {
        lVar12 = 10;
        goto LAB_00eb3ac8;
      }
      local_50 = *pfVar3;
      if (lVar5 != 0x30) {
        lVar12 = 0xb;
        goto LAB_00eb3ac8;
      }
    }
    fVar17 = local_50;
    local_50 = 1.0;
    fVar18 = -(float)local_60;
    local_3c = 0x3f800000;
    local_60 = 0;
    local_4c = 0;
    uStack_44 = 0;
    fVar15 = (float)NEON_fmadd(fVar15,(float)local_58,fVar17 * -local_68);
    uVar14 = NEON_fmadd(fStack_64,fVar17,local_58._4_4_ * fVar18);
    uVar13 = NEON_fmadd(local_68,local_58._4_4_,(float)local_58 * -fStack_64);
    uVar14 = NEON_fmadd(local_78,uVar14,(float)local_74 * fVar15);
    local_6c = 0.0;
    fVar15 = (float)NEON_fmadd(local_74._4_4_,uVar13,uVar14);
    *(float *)((long)param_2 + lVar5 + 8) = fVar16 * fVar15 * (float)(1 - (uVar6 & 2));
    if (lVar5 == 0) {
      local_78 = param_1[1];
LAB_00eb3b88:
      local_74 = *(undefined8 *)(param_1 + 2);
      if (lVar5 == 0) {
LAB_00eb3c2c:
        local_68 = param_1[5];
LAB_00eb3c34:
        fStack_64 = param_1[6];
        lVar12 = 6;
      }
      else {
LAB_00eb3ba0:
        local_68 = param_1[4];
        if (lVar5 == 0x10) goto LAB_00eb3c34;
        fStack_64 = param_1[5];
        if (lVar5 == 0x20) {
          lVar12 = 6;
        }
        else {
          local_60 = (ulong)(uint)param_1[6];
          if (lVar5 == 0x30) goto LAB_00eb3c48;
          lVar12 = 7;
        }
      }
      (&local_78)[lVar12] = param_1[7];
    }
    else {
      local_78 = *param_1;
      if (lVar5 == 0x10) goto LAB_00eb3b88;
      if (lVar5 == 0x20) {
        local_74 = CONCAT44(param_1[3],param_1[1]);
        goto LAB_00eb3ba0;
      }
      local_74 = CONCAT44(param_1[2],param_1[1]);
      if (lVar5 != 0x30) {
        local_6c = param_1[3];
        if (lVar5 != 0) goto LAB_00eb3ba0;
        goto LAB_00eb3c2c;
      }
      local_68 = (float)*(undefined8 *)(param_1 + 4);
      fStack_64 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
      local_60 = (ulong)(uint)param_1[6];
    }
LAB_00eb3c48:
    if (lVar5 == 0) {
      local_58._0_4_ = *pfVar7;
LAB_00eb3c7c:
      local_58._4_4_ = param_1[10];
      uVar9 = 2;
LAB_00eb3c88:
      (&local_78)[uVar9 | 8] = param_1[0xb];
    }
    else {
      local_58._0_4_ = *pfVar8;
      if (lVar5 == 0x10) goto LAB_00eb3c7c;
      local_58._4_4_ = *pfVar7;
      if (lVar5 == 0x20) {
        uVar9 = 2;
        goto LAB_00eb3c88;
      }
      local_50 = param_1[10];
      if (lVar5 != 0x30) {
        uVar9 = 3;
        goto LAB_00eb3c88;
      }
    }
    uVar9 = uVar6 | 0xfffffffd;
    uVar6 = uVar6 + 2;
    fVar15 = (float)NEON_fmadd((float)local_60,(float)local_58,local_50 * -local_68);
    uVar14 = NEON_fmadd(fStack_64,local_50,local_58._4_4_ * -(float)local_60);
    uVar13 = NEON_fmadd(local_68,local_58._4_4_,(float)local_58 * -fStack_64);
    uVar14 = NEON_fmadd(local_78,uVar14,(float)local_74 * fVar15);
    fVar15 = (float)NEON_fmadd(local_74._4_4_,uVar13,uVar14);
    lVar12 = lVar5 + 0x10;
    *(float *)((long)param_2 + lVar5 + 0xc) = fVar16 * fVar15 * (float)(uVar9 + 2);
    lVar5 = lVar12;
    if (lVar12 == 0x40) {
      if (*(long *)(lVar4 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


