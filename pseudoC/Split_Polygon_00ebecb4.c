// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Split_Polygon
// Entry Point: 00ebecb4
// Size: 748 bytes
// Signature: undefined __thiscall Split_Polygon(polygon<double> * this, polygon * param_1, plane * param_2, polygon * param_3, polygon * param_4)


/* FLOAT_MATH::polygon<double>::Split_Polygon(FLOAT_MATH::polygon<double>*,
   FLOAT_MATH::plane<double>*, FLOAT_MATH::polygon<double>&, FLOAT_MATH::polygon<double>&) */

void __thiscall
FLOAT_MATH::polygon<double>::Split_Polygon
          (polygon<double> *this,polygon *param_1,plane *param_2,polygon *param_3,polygon *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  double *pdVar6;
  double dVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double in_d16;
  double in_d17;
  double in_d18;
  double in_d19;
  double in_d20;
  double in_d21;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double local_3048 [768];
  double local_1848 [768];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = *(uint *)param_1;
  uVar5 = (ulong)uVar9;
  if ((int)uVar9 < 1) {
    uVar9 = 0;
    *(undefined4 *)param_3 = 0;
  }
  else {
    iVar3 = uVar9 + (uVar9 & (int)uVar9 >> 0x1f) + -1;
    uVar10 = 0;
    uVar13 = *(undefined8 *)param_2;
    dVar11 = *(double *)(param_2 + 8);
    uVar9 = 0;
    pdVar6 = (double *)(param_1 + 0x10);
    uVar17 = NEON_fmadd(*(double *)(param_1 + (long)iVar3 * 0x18 + 8),uVar13,
                        *(double *)(param_1 + (long)iVar3 * 0x18 + 0x10) * dVar11);
    uVar15 = *(undefined8 *)(param_2 + 0x10);
    dVar16 = *(double *)(param_2 + 0x18);
    dVar18 = (double)NEON_fmadd(*(double *)(param_1 + (long)iVar3 * 0x18 + 0x18),uVar15,uVar17);
    dVar7 = *(double *)(param_1 + (long)iVar3 * 0x18 + 8);
    dVar21 = *(double *)(param_1 + (long)iVar3 * 0x18 + 0x18);
    dVar18 = dVar16 + dVar18;
    dVar19 = *(double *)(param_1 + (long)iVar3 * 0x18 + 0x10);
    do {
      while( true ) {
        dVar20 = *pdVar6;
        dVar14 = pdVar6[1];
        dVar12 = pdVar6[-1];
        uVar17 = NEON_fmadd(dVar12,uVar13,dVar11 * dVar20);
        dVar22 = (double)NEON_fmadd(dVar14,uVar15,uVar17);
        dVar22 = dVar16 + dVar22;
        if (dVar22 <= 0.0) break;
        if (dVar18 < 0.0) {
          uVar17 = NEON_fmadd(dVar7,uVar13,dVar19 * dVar11);
          dVar18 = (double)NEON_fmadd(dVar21,uVar15,uVar17);
          if (((0.0 < dVar22) || (0.0 < dVar16 + dVar18)) &&
             ((dVar22 < 0.0 || (dVar16 + dVar18 < 0.0)))) {
            uVar17 = NEON_fmadd(dVar7 - dVar12,uVar13,(dVar19 - dVar20) * dVar11);
            dVar18 = (double)NEON_fmadd(dVar21 - dVar14,uVar15,uVar17);
            dVar18 = -(dVar16 + (dVar22 - dVar16)) / dVar18;
            in_d18 = (double)NEON_fmadd(dVar7 - dVar12,dVar18,dVar12);
            in_d20 = (double)NEON_fmadd(dVar19 - dVar20,dVar18,dVar20);
            in_d21 = (double)NEON_fmadd(dVar21 - dVar14,dVar18,dVar14);
          }
          lVar1 = (long)(int)uVar9;
          uVar9 = uVar9 + 1;
          lVar2 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          local_3048[lVar1 * 3] = in_d18;
          local_3048[lVar1 * 3 + 1] = in_d20;
          local_3048[lVar1 * 3 + 2] = in_d21;
          dVar21 = local_3048[lVar1 * 3];
          dVar7 = local_3048[lVar1 * 3 + 2];
          local_1848[lVar2 * 3 + 1] = local_3048[lVar1 * 3 + 1];
          local_1848[lVar2 * 3] = dVar21;
          local_1848[lVar2 * 3 + 2] = dVar7;
        }
        pdVar8 = local_1848 + (long)(int)uVar10 * 3;
        uVar10 = uVar10 + 1;
LAB_00ebedac:
        *pdVar8 = dVar12;
        pdVar8[1] = dVar20;
        pdVar8[2] = dVar14;
        pdVar6 = pdVar6 + 3;
        uVar5 = uVar5 - 1;
        dVar7 = dVar12;
        dVar21 = dVar14;
        dVar18 = dVar22;
        dVar19 = dVar20;
        if (uVar5 == 0) goto LAB_00ebef20;
      }
      if (dVar22 < 0.0) {
        if (0.0 < dVar18) {
          uVar17 = NEON_fmadd(dVar12,uVar13,dVar20 * dVar11);
          uVar23 = NEON_fmadd(dVar7,uVar13,dVar19 * dVar11);
          dVar18 = (double)NEON_fmadd(dVar14,uVar15,uVar17);
          dVar24 = (double)NEON_fmadd(dVar21,uVar15,uVar23);
          dVar18 = dVar16 + dVar18;
          if (((0.0 < dVar18) || (0.0 < dVar16 + dVar24)) &&
             ((dVar18 < 0.0 || (dVar16 + dVar24 < 0.0)))) {
            uVar17 = NEON_fmadd(dVar7 - dVar12,uVar13,(dVar19 - dVar20) * dVar11);
            dVar24 = (double)NEON_fmadd(dVar21 - dVar14,uVar15,uVar17);
            dVar24 = -(dVar16 + (dVar18 - dVar16)) / dVar24;
            in_d16 = (double)NEON_fmadd(dVar7 - dVar12,dVar24,dVar12);
            in_d17 = (double)NEON_fmadd(dVar19 - dVar20,dVar24,dVar20);
            in_d19 = (double)NEON_fmadd(dVar21 - dVar14,dVar24,dVar14);
          }
          lVar1 = (long)(int)uVar9;
          uVar9 = uVar9 + 1;
          lVar2 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          local_3048[lVar1 * 3] = in_d16;
          local_3048[lVar1 * 3 + 1] = in_d17;
          local_3048[lVar1 * 3 + 2] = in_d19;
          dVar21 = local_3048[lVar1 * 3];
          dVar7 = local_3048[lVar1 * 3 + 2];
          local_1848[lVar2 * 3 + 1] = local_3048[lVar1 * 3 + 1];
          local_1848[lVar2 * 3] = dVar21;
          local_1848[lVar2 * 3 + 2] = dVar7;
        }
        pdVar8 = local_3048 + (long)(int)uVar9 * 3;
        uVar9 = uVar9 + 1;
        goto LAB_00ebedac;
      }
      lVar1 = (long)(int)uVar9;
      uVar9 = uVar9 + 1;
      lVar2 = (long)(int)uVar10;
      uVar10 = uVar10 + 1;
      local_3048[lVar1 * 3] = dVar12;
      local_3048[lVar1 * 3 + 1] = dVar20;
      local_3048[lVar1 * 3 + 2] = dVar14;
      dVar21 = local_3048[lVar1 * 3];
      dVar7 = local_3048[lVar1 * 3 + 2];
      local_1848[lVar2 * 3 + 1] = local_3048[lVar1 * 3 + 1];
      local_1848[lVar2 * 3] = dVar21;
      local_1848[lVar2 * 3 + 2] = dVar7;
      pdVar6 = pdVar6 + 3;
      uVar5 = uVar5 - 1;
      dVar7 = dVar12;
      dVar21 = dVar14;
      dVar18 = dVar22;
      dVar19 = dVar20;
    } while (uVar5 != 0);
LAB_00ebef20:
    if (0 < (int)uVar10) {
      this = (polygon<double> *)memcpy(param_3 + 8,local_1848,(ulong)uVar10 * 0x18);
    }
    *(uint *)param_3 = uVar10;
    if (0 < (int)uVar9) {
      this = (polygon<double> *)memcpy(param_4 + 8,local_3048,(ulong)uVar9 * 0x18);
    }
  }
  *(uint *)param_4 = uVar9;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


