// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_areaPolygon2d
// Entry Point: 00eb7fe8
// Size: 308 bytes
// Signature: undefined __cdecl fm_areaPolygon2d(uint param_1, float * param_2, uint param_3)


/* FLOAT_MATH::fm_areaPolygon2d(unsigned int, float const*, unsigned int) */

float FLOAT_MATH::fm_areaPolygon2d(uint param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = 0.0;
  iVar5 = param_1 - 1;
  if ((int)param_1 < 1) {
    return 0.0;
  }
  uVar4 = (ulong)param_1;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar8 = -param_3;
    if (-1 < (int)param_3) {
      uVar8 = param_3;
    }
    uVar9 = (uVar4 - 1 & 0xffffffff) * (ulong)uVar8;
    if (((-1 < (int)param_3 || (int)uVar9 == 0) && ((uVar9 & 0xffffffff00000000) == 0)) &&
       (uVar4 - 1 >> 0x20 == 0 || param_3 == 0)) {
      uVar6 = uVar4 & 0xfffffffe;
      fVar10 = 0.0;
      uVar8 = 0;
      uVar9 = uVar6;
      iVar7 = -1;
      do {
        uVar3 = iVar5 * param_3;
        iVar5 = iVar7 + 2;
        pfVar1 = (float *)((long)param_2 + (ulong)(param_3 + uVar8));
        puVar2 = (undefined4 *)((long)param_2 + (ulong)uVar3);
        fVar11 = *(float *)((long)param_2 + (ulong)uVar8);
        fVar12 = ((float *)((long)param_2 + (ulong)uVar8))[1];
        uVar9 = uVar9 - 2;
        uVar8 = uVar8 + param_3 * 2;
        fVar13 = (float)NEON_fmadd(*puVar2,fVar12,(float)puVar2[1] * -fVar11);
        fVar11 = (float)NEON_fmadd(fVar11,pfVar1[1],fVar12 * -*pfVar1);
        fVar10 = fVar10 + fVar13 + fVar11;
        iVar7 = iVar5;
      } while (uVar9 != 0);
      if (uVar6 == uVar4) goto LAB_00eb8110;
    }
  }
  uVar8 = param_3 * (int)uVar6;
  do {
    uVar9 = (ulong)uVar8;
    uVar8 = uVar8 + param_3;
    puVar2 = (undefined4 *)((long)param_2 + (ulong)(iVar5 * param_3));
    iVar5 = (int)uVar6;
    uVar6 = uVar6 + 1;
    fVar11 = (float)NEON_fmadd(*puVar2,((float *)((long)param_2 + uVar9))[1],
                               (float)puVar2[1] * -*(float *)((long)param_2 + uVar9));
    fVar10 = fVar10 + fVar11;
  } while (uVar4 != uVar6);
LAB_00eb8110:
  return fVar10 * 0.5;
}


