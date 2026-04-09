// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_areaPolygon2d
// Entry Point: 00ebfff4
// Size: 308 bytes
// Signature: undefined __cdecl fm_areaPolygon2d(uint param_1, double * param_2, uint param_3)


/* FLOAT_MATH::fm_areaPolygon2d(unsigned int, double const*, unsigned int) */

undefined  [16] FLOAT_MATH::fm_areaPolygon2d(uint param_1,double *param_2,uint param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  double dVar10;
  undefined auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar10 = 0.0;
  iVar5 = param_1 - 1;
  if ((int)param_1 < 1) goto LAB_00ec0124;
  uVar4 = (ulong)param_1;
  uVar6 = 0;
  if (iVar5 == 0) {
LAB_00ec00d8:
    uVar8 = param_3 * (int)uVar6;
    do {
      uVar9 = (ulong)uVar8;
      uVar8 = uVar8 + param_3;
      puVar2 = (undefined8 *)((long)param_2 + (ulong)(iVar5 * param_3));
      iVar5 = (int)uVar6;
      uVar6 = uVar6 + 1;
      dVar12 = (double)NEON_fmadd(*puVar2,((double *)((long)param_2 + uVar9))[1],
                                  (double)puVar2[1] * -*(double *)((long)param_2 + uVar9));
      dVar10 = dVar10 + dVar12;
    } while (uVar4 != uVar6);
  }
  else {
    uVar8 = -param_3;
    if ((int)param_3 >= 0) {
      uVar8 = param_3;
    }
    uVar9 = (uVar4 - 1 & 0xffffffff) * (ulong)uVar8;
    if ((((int)param_3 < 0 && (int)uVar9 != 0) || ((uVar9 & 0xffffffff00000000) != 0)) ||
       (uVar4 - 1 >> 0x20 != 0 && param_3 != 0)) goto LAB_00ec00d8;
    uVar6 = uVar4 & 0xfffffffe;
    dVar10 = 0.0;
    uVar8 = 0;
    uVar9 = uVar6;
    iVar7 = -1;
    do {
      uVar3 = iVar5 * param_3;
      iVar5 = iVar7 + 2;
      pdVar1 = (double *)((long)param_2 + (ulong)(param_3 + uVar8));
      puVar2 = (undefined8 *)((long)param_2 + (ulong)uVar3);
      dVar12 = *(double *)((long)param_2 + (ulong)uVar8);
      dVar13 = ((double *)((long)param_2 + (ulong)uVar8))[1];
      uVar9 = uVar9 - 2;
      uVar8 = uVar8 + param_3 * 2;
      dVar14 = (double)NEON_fmadd(*puVar2,dVar13,(double)puVar2[1] * -dVar12);
      dVar12 = (double)NEON_fmadd(dVar12,pdVar1[1],dVar13 * -*pdVar1);
      dVar10 = dVar10 + dVar14 + dVar12;
      iVar7 = iVar5;
    } while (uVar9 != 0);
    if (uVar6 != uVar4) goto LAB_00ec00d8;
  }
  dVar10 = dVar10 * 0.5;
LAB_00ec0124:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar10;
  return auVar11;
}


