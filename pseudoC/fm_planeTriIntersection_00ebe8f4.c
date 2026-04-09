// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeTriIntersection
// Entry Point: 00ebe8f4
// Size: 960 bytes
// Signature: undefined __cdecl fm_planeTriIntersection(double * param_1, double * param_2, uint param_3, double param_4, double * param_5, uint * param_6, double * param_7, uint * param_8)


/* FLOAT_MATH::fm_planeTriIntersection(double const*, double const*, unsigned int, double, double*,
   unsigned int&, double*, unsigned int&) */

void FLOAT_MATH::fm_planeTriIntersection
               (double *param_1,double *param_2,uint param_3,double param_4,double *param_5,
               uint *param_6,double *param_7,uint *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double local_4890;
  double dStack_4888;
  double local_4880;
  double dStack_4878;
  undefined8 local_4870 [769];
  undefined8 local_3068 [769];
  undefined4 local_1860 [2];
  double local_1858;
  double local_1850;
  double local_1848;
  undefined8 local_1840;
  double local_1838;
  undefined8 local_1830;
  undefined8 local_1828;
  double local_1820;
  undefined8 local_1818;
  long local_58;
  
  lVar12 = tpidr_el0;
  uVar17 = (ulong)param_3;
  local_58 = *(long *)(lVar12 + 0x28);
  puVar4 = (undefined8 *)((long)param_2 + uVar17);
  uVar18 = (ulong)(param_3 << 1);
  dVar29 = -param_4;
  puVar5 = (undefined8 *)((long)param_2 + uVar18);
  *param_6 = 0;
  *param_8 = 0;
  dVar21 = *param_2;
  dVar24 = *param_1;
  dVar23 = param_1[1];
  uVar27 = NEON_fmadd(dVar21,dVar24,param_2[1] * dVar23);
  dVar25 = param_1[2];
  dVar26 = param_1[3];
  dVar28 = (double)NEON_fmadd(param_2[2],dVar25,uVar27);
  uVar27 = NEON_fmadd(*puVar4,dVar24,dVar23 * (double)puVar4[1]);
  dVar28 = dVar28 + dVar26;
  dVar30 = (double)NEON_fmadd(puVar4[2],dVar25,uVar27);
  bVar13 = dVar29 <= dVar28;
  uVar27 = NEON_fmadd(*puVar5,dVar24,dVar23 * (double)puVar5[1]);
  dVar30 = dVar26 + dVar30;
  bVar1 = dVar28 <= param_4;
  uVar19 = 2;
  uVar16 = uVar19;
  if (0.0 < dVar28) {
    uVar16 = 1;
  }
  bVar14 = dVar29 <= dVar30;
  dVar28 = (double)NEON_fmadd(puVar5[2],dVar25,uVar27);
  dVar28 = dVar26 + dVar28;
  bVar2 = dVar30 <= param_4;
  if (0.0 < dVar30) {
    uVar19 = 1;
  }
  bVar15 = dVar29 <= dVar28;
  bVar3 = dVar28 <= param_4;
  uVar20 = 2;
  if (0.0 < dVar28) {
    uVar20 = 1;
  }
  uVar9 = uVar20;
  if (bVar15 && bVar3) {
    uVar9 = 0;
  }
  if (((bVar13 && bVar1) || (bVar14 && bVar2)) || (bVar15 && bVar3)) {
    uVar10 = uVar19;
    if (bVar14 && bVar2) {
      uVar10 = 0;
    }
    uVar11 = uVar16;
    if (bVar13 && bVar1) {
      uVar11 = 0;
    }
    if ((uVar10 | uVar11 | uVar9) == 0) {
      uVar19 = *param_6;
      uVar16 = 1;
LAB_00ebec18:
      pdVar6 = (double *)((long)param_5 + (ulong)(uVar19 * param_3));
      puVar7 = (undefined8 *)((long)param_5 + (ulong)(param_3 + uVar19 * param_3));
      *pdVar6 = dVar21;
      pdVar6[1] = param_2[1];
      pdVar6[2] = param_2[2];
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar8 = (undefined8 *)((long)param_5 + (ulong)((uVar19 + 2) * param_3));
      puVar7[2] = puVar4[2];
      *puVar8 = *puVar5;
      puVar8[1] = puVar5[1];
      puVar8[2] = puVar5[2];
      *param_6 = uVar19 + 3;
      goto LAB_00ebec80;
    }
    uVar10 = uVar19;
    if (bVar14 && bVar2) {
      uVar10 = uVar9;
    }
    if (bVar13 && bVar1) {
      uVar16 = uVar10;
    }
    if (bVar14 && bVar2) {
      uVar19 = uVar16;
    }
    if (bVar15 && bVar3) {
      uVar20 = uVar16;
    }
    if (uVar16 == uVar19) goto LAB_00ebea68;
  }
  else if (uVar16 == uVar19) {
LAB_00ebea68:
    if (uVar16 == uVar20) {
      if (uVar16 != 1) {
        *param_7 = dVar21;
        param_7[1] = param_2[1];
        param_7[2] = param_2[2];
        puVar7 = (undefined8 *)((long)param_7 + uVar17);
        *puVar7 = *(undefined8 *)((long)param_2 + uVar17);
        puVar7[1] = puVar4[1];
        puVar8 = (undefined8 *)((long)param_7 + uVar18);
        puVar7[2] = puVar4[2];
        *puVar8 = *(undefined8 *)((long)param_2 + uVar18);
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        *param_8 = 3;
        goto LAB_00ebec80;
      }
      uVar19 = *param_6;
      goto LAB_00ebec18;
    }
  }
  local_1860[0] = 3;
  local_3068[0]._0_4_ = 0;
  local_4870[0]._0_4_ = 0;
  local_4890 = dVar24;
  dStack_4888 = dVar23;
  local_4880 = dVar25;
  dStack_4878 = dVar26;
  local_1858 = dVar21;
  local_1850 = param_2[1];
  local_1848 = param_2[2];
  local_1840 = *puVar4;
  local_1838 = (double)puVar4[1];
  local_1830 = puVar4[2];
  local_1828 = *puVar5;
  local_1820 = (double)puVar5[1];
  local_1818 = puVar5[2];
  polygon<double>::Split_Polygon
            ((polygon<double> *)local_1860,(polygon *)local_1860,(plane *)&local_4890,
             (polygon *)local_3068,(polygon *)local_4870);
  uVar17 = (ulong)(uint)local_3068[0];
  uVar19 = *param_6;
  if (0 < (int)(uint)local_3068[0]) {
    uVar16 = uVar19 * param_3;
    puVar4 = local_3068;
    do {
      uVar27 = puVar4[1];
      puVar5 = (undefined8 *)((long)param_5 + (ulong)uVar16);
      uVar22 = puVar4[3];
      uVar19 = uVar19 + 1;
      uVar17 = uVar17 - 1;
      uVar16 = uVar16 + param_3;
      puVar5[1] = puVar4[2];
      *puVar5 = uVar27;
      puVar5[2] = uVar22;
      puVar4 = puVar4 + 3;
    } while (uVar17 != 0);
    *param_6 = uVar19;
  }
  uVar17 = (ulong)(uint)local_4870[0];
  uVar20 = *param_8;
  if (0 < (int)(uint)local_4870[0]) {
    uVar16 = uVar20 * param_3;
    puVar4 = local_4870;
    do {
      uVar27 = puVar4[1];
      puVar5 = (undefined8 *)((long)param_7 + (ulong)uVar16);
      uVar22 = puVar4[3];
      uVar20 = uVar20 + 1;
      uVar17 = uVar17 - 1;
      uVar16 = uVar16 + param_3;
      puVar5[1] = puVar4[2];
      *puVar5 = uVar27;
      puVar5[2] = uVar22;
      puVar4 = puVar4 + 3;
    } while (uVar17 != 0);
    *param_8 = uVar20;
    uVar19 = *param_6;
  }
  if (uVar19 < 3) {
    *param_6 = 0;
    uVar19 = 0;
    uVar20 = *param_8;
  }
  if (uVar20 < 3) {
    *param_8 = 0;
    uVar20 = 0;
    uVar19 = *param_6;
  }
  uVar16 = 2;
  if (uVar20 == 0 || uVar19 != 0) {
    uVar16 = 3;
  }
  if (uVar19 != 0 && uVar20 == 0) {
    uVar16 = 1;
  }
LAB_00ebec80:
  if (*(long *)(lVar12 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}


