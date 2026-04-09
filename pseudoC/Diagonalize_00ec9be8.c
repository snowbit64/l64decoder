// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Diagonalize
// Entry Point: 00ec9be8
// Size: 1004 bytes
// Signature: undefined __cdecl Diagonalize(double * param_1, double * param_2, double * param_3)


/* VHACD::Diagonalize(double const (&) [3][3], double (&) [3][3], double (&) [3][3]) */

void VHACD::Diagonalize(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double local_60 [4];
  double local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  dVar5 = 0.0;
  dVar7 = 0.0;
  dVar8 = 0.0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar4 = 0x18;
  dVar6 = 1.0;
  do {
    dVar9 = dVar7 * dVar7;
    dVar12 = dVar5 * dVar5;
    dVar13 = dVar6 * dVar6;
    dVar23 = dVar8 * dVar7 - dVar5 * dVar6;
    dVar15 = dVar8 * dVar7 + dVar5 * dVar6;
    dVar16 = dVar8 * dVar5 - dVar7 * dVar6;
    dVar17 = dVar8 * dVar5 + dVar7 * dVar6;
    dVar18 = dVar7 * dVar5 + dVar8 * dVar6;
    dVar21 = dVar7 * dVar5 - dVar8 * dVar6;
    dVar23 = dVar23 + dVar23;
    dVar10 = (-(dVar8 * dVar8) - dVar9) + dVar12 + dVar13;
    dVar15 = dVar15 + dVar15;
    dVar14 = ((dVar8 * dVar8 - dVar9) - dVar12) + dVar13;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar18 = dVar18 + dVar18;
    dVar13 = ((dVar9 - dVar8 * dVar8) - dVar12) + dVar13;
    dVar21 = dVar21 + dVar21;
    *param_2 = dVar14;
    param_2[1] = dVar23;
    param_2[2] = dVar17;
    param_2[3] = dVar15;
    param_2[5] = dVar21;
    param_2[6] = dVar16;
    param_2[7] = dVar18;
    param_2[8] = dVar10;
    param_2[4] = dVar13;
    dVar19 = param_1[4];
    dVar22 = param_1[5];
    dVar27 = *param_1;
    dVar24 = param_1[1];
    dVar28 = param_1[2];
    uVar11 = NEON_fmadd(dVar14,dVar24,dVar15 * dVar19);
    uVar25 = NEON_fmadd(dVar14,dVar27,dVar15 * dVar24);
    dVar9 = (double)NEON_fmadd(dVar16,dVar22,uVar11);
    uVar11 = NEON_fmadd(dVar14,dVar28,dVar15 * dVar22);
    dVar29 = param_1[8];
    uVar26 = NEON_fmadd(dVar16,dVar28,uVar25);
    uVar11 = NEON_fmadd(dVar16,dVar29,uVar11);
    uVar25 = NEON_fmadd(uVar26,dVar14,dVar15 * dVar9);
    dVar12 = (double)NEON_fmadd(uVar11,dVar16,uVar25);
    *param_3 = dVar12;
    uVar25 = NEON_fmadd(dVar23,dVar24,dVar13 * dVar19);
    uVar20 = NEON_fmadd(dVar17,dVar24,dVar21 * dVar19);
    dVar12 = (double)NEON_fmadd(dVar18,dVar22,uVar25);
    uVar25 = NEON_fmadd(uVar26,param_2[1],dVar9 * param_2[4]);
    local_40[2] = (double)NEON_fmadd(uVar11,param_2[7],uVar25);
    param_3[1] = local_40[2];
    uVar25 = NEON_fmadd(uVar26,param_2[2],dVar9 * param_2[5]);
    local_40[1] = (double)NEON_fmadd(uVar11,param_2[8],uVar25);
    uVar25 = NEON_fmadd(dVar23,dVar27,dVar13 * dVar24);
    uVar11 = NEON_fmadd(dVar23,dVar28,dVar13 * dVar22);
    param_3[2] = local_40[1];
    uVar25 = NEON_fmadd(dVar18,dVar28,uVar25);
    uVar11 = NEON_fmadd(dVar18,dVar29,uVar11);
    uVar26 = NEON_fmadd(uVar25,*param_2,dVar12 * param_2[3]);
    dVar9 = (double)NEON_fmadd(uVar11,param_2[6],uVar26);
    param_3[3] = dVar9;
    uVar26 = NEON_fmadd(uVar25,param_2[1],dVar12 * param_2[4]);
    dVar9 = (double)NEON_fmadd(uVar11,param_2[7],uVar26);
    param_3[4] = dVar9;
    uVar25 = NEON_fmadd(uVar25,param_2[2],dVar12 * param_2[5]);
    local_40[0] = (double)NEON_fmadd(uVar11,param_2[8],uVar25);
    dVar12 = (double)NEON_fmadd(dVar10,dVar22,uVar20);
    uVar25 = NEON_fmadd(dVar17,dVar27,dVar21 * dVar24);
    uVar11 = NEON_fmadd(dVar17,dVar28,dVar21 * dVar22);
    param_3[5] = local_40[0];
    uVar26 = NEON_fmadd(dVar10,dVar28,uVar25);
    uVar25 = NEON_fmadd(dVar10,dVar29,uVar11);
    uVar11 = NEON_fmadd(uVar26,*param_2,dVar12 * param_2[3]);
    dVar17 = ABS(local_40[2]);
    dVar9 = (double)NEON_fmadd(uVar25,param_2[6],uVar11);
    param_3[6] = dVar9;
    uVar11 = NEON_fmadd(uVar26,param_2[1],dVar12 * param_2[4]);
    dVar10 = ABS(local_40[1]);
    dVar9 = (double)NEON_fmadd(uVar25,param_2[7],uVar11);
    dVar21 = ABS(local_40[0]);
    uVar3 = 2;
    if (dVar17 < dVar10) {
      uVar3 = 1;
    }
    param_3[7] = dVar9;
    uVar1 = 0;
    if ((dVar21 <= dVar17 || dVar21 == dVar10) || dVar17 < dVar21 && dVar21 < dVar10) {
      uVar1 = uVar3;
    }
    uVar11 = NEON_fmadd(uVar26,param_2[2],dVar12 * param_2[5]);
    dVar9 = local_40[uVar1];
    dVar10 = (double)NEON_fmadd(uVar25,param_2[8],uVar11);
    param_3[8] = dVar10;
    if (dVar9 == 0.0) break;
    dVar10 = (param_3[((ulong)(uVar1 + (uVar1 * 0xab + 0x156 >> 9) * -3 + 2) & 0xff) * 4] -
             param_3[((ulong)(uVar1 + (uVar1 * 0xab + 0xab >> 9) * -3 + 1) & 0xff) * 4]) /
             (dVar9 + dVar9);
    dVar9 = 1.0;
    if (dVar10 <= 0.0) {
      dVar9 = -1.0;
    }
    dVar10 = dVar10 * dVar9;
    dVar17 = (double)NEON_fmadd(dVar10,dVar10,0x3ff0000000000000);
    dVar17 = SQRT(dVar17);
    if (1000000.0 <= dVar10) {
      dVar17 = dVar10;
    }
    dVar10 = dVar9 / (dVar10 + dVar17);
    dVar10 = (double)NEON_fmadd(dVar10,dVar10,0x3ff0000000000000);
    if (1.0 / SQRT(dVar10) == 1.0) break;
    local_60[0] = 0.0;
    local_60[1] = 0.0;
    local_60[2] = 0.0;
    dVar9 = SQRT((1.0 - 1.0 / SQRT(dVar10)) * 0.5) * -dVar9;
    local_60[uVar1] = dVar9;
    local_60[3] = (double)NEON_fmsub(dVar9,dVar9,0x3ff0000000000000);
    local_60[3] = SQRT(local_60[3]);
    if (local_60[3] == 1.0) break;
    iVar4 = iVar4 + -1;
    uVar11 = NEON_fmadd(dVar6,local_60[0],dVar8 * local_60[3]);
    dVar8 = (double)NEON_fmadd(dVar7,local_60[2],uVar11);
    dVar9 = (double)NEON_fnmadd(-dVar5,local_60[1],-dVar8);
    dVar8 = (double)NEON_fmsub(dVar5,local_60[1],dVar8);
    uVar11 = NEON_fmadd(dVar6,local_60[1],local_60[2] * dVar9);
    uVar11 = NEON_fmadd(dVar7,local_60[3],uVar11);
    uVar25 = NEON_fmadd(dVar6,local_60[2],local_60[1] * dVar8);
    dVar7 = (double)NEON_fmadd(dVar5,local_60[0],uVar11);
    uVar11 = NEON_fmadd(dVar6,local_60[3],local_60[0] * dVar9);
    uVar25 = NEON_fmsub(dVar7,local_60[0],uVar25);
    uVar11 = NEON_fmsub(dVar7,local_60[1],uVar11);
    dVar5 = (double)NEON_fmadd(dVar5,local_60[3],uVar25);
    uVar25 = NEON_fmadd(dVar8,dVar8,dVar7 * dVar7);
    dVar6 = (double)NEON_fmsub(dVar5,local_60[2],uVar11);
    uVar11 = NEON_fmadd(dVar5,dVar5,uVar25);
    dVar9 = (double)NEON_fmadd(dVar6,dVar6,uVar11);
    dVar9 = SQRT(dVar9);
    dVar8 = dVar8 / dVar9;
    dVar7 = dVar7 / dVar9;
    dVar5 = dVar5 / dVar9;
    dVar6 = dVar6 / dVar9;
  } while (iVar4 != 0);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


