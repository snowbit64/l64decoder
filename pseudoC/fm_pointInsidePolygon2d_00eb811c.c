// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_pointInsidePolygon2d
// Entry Point: 00eb811c
// Size: 184 bytes
// Signature: undefined __cdecl fm_pointInsidePolygon2d(uint param_1, float * param_2, uint param_3, float * param_4, uint param_5, uint param_6)


/* FLOAT_MATH::fm_pointInsidePolygon2d(unsigned int, float const*, unsigned int, float const*,
   unsigned int, unsigned int) */

bool FLOAT_MATH::fm_pointInsidePolygon2d
               (uint param_1,float *param_2,uint param_3,float *param_4,uint param_5,uint param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    fVar6 = param_4[param_6];
    uVar3 = 0;
    iVar2 = 0;
    iVar4 = param_1 - 1;
    uVar5 = 0;
    do {
      fVar7 = *(float *)((long)param_2 + (ulong)param_6 * 4 + (ulong)uVar3);
      fVar8 = *(float *)((long)param_2 + (ulong)param_5 * 4 + (ulong)uVar3);
      fVar9 = *(float *)((long)param_2 + (ulong)param_6 * 4 + (ulong)(iVar4 * param_3));
      if (((fVar6 <= fVar9) || (fVar6 <= fVar7)) &&
         (fVar7 = (float)NEON_fmadd((fVar6 - fVar7) / (fVar9 - fVar7),
                                    *(float *)((long)param_2 +
                                              (ulong)param_5 * 4 + (ulong)(iVar4 * param_3)) - fVar8
                                    ,fVar8), fVar7 < param_4[param_5])) {
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


