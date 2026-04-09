// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_pointInsidePolygon2d
// Entry Point: 00ec0128
// Size: 184 bytes
// Signature: undefined __cdecl fm_pointInsidePolygon2d(uint param_1, double * param_2, uint param_3, double * param_4, uint param_5, uint param_6)


/* FLOAT_MATH::fm_pointInsidePolygon2d(unsigned int, double const*, unsigned int, double const*,
   unsigned int, unsigned int) */

bool FLOAT_MATH::fm_pointInsidePolygon2d
               (uint param_1,double *param_2,uint param_3,double *param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    dVar6 = param_4[param_6];
    uVar3 = 0;
    iVar2 = 0;
    iVar4 = param_1 - 1;
    uVar5 = 0;
    do {
      dVar7 = *(double *)((long)param_2 + (ulong)param_6 * 8 + (ulong)uVar3);
      dVar8 = *(double *)((long)param_2 + (ulong)param_5 * 8 + (ulong)uVar3);
      dVar9 = *(double *)((long)param_2 + (ulong)param_6 * 8 + (ulong)(iVar4 * param_3));
      if (((dVar6 <= dVar9) || (dVar6 <= dVar7)) &&
         (dVar7 = (double)NEON_fmadd((dVar6 - dVar7) / (dVar9 - dVar7),
                                     *(double *)
                                      ((long)param_2 + (ulong)param_5 * 8 + (ulong)(iVar4 * param_3)
                                      ) - dVar8,dVar8), dVar7 < param_4[param_5])) {
        iVar2 = 1 - iVar2;
      }
      uVar1 = uVar5 + 1;
      iVar4 = (int)uVar5;
      uVar3 = uVar3 + param_3;
      uVar5 = uVar1;
    } while (param_1 != uVar1);
  }
  return iVar2 != 0;
}


