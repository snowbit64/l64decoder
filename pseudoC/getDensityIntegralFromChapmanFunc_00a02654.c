// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityIntegralFromChapmanFunc
// Entry Point: 00a02654
// Size: 816 bytes
// Signature: undefined __cdecl getDensityIntegralFromChapmanFunc(float param_1, float param_2, Vector3 * param_3, Vector3 * param_4, float * param_5)


/* LightScatteringUtil::getDensityIntegralFromChapmanFunc(float, float, Vector3 const&, Vector3
   const&, float*) */

void LightScatteringUtil::getDensityIntegralFromChapmanFunc
               (float param_1,float param_2,Vector3 *param_3,Vector3 *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  uVar7 = NEON_fmadd(*(undefined4 *)param_3,*(undefined4 *)param_4,
                     *(float *)(param_3 + 4) * *(float *)(param_4 + 4));
  fVar10 = param_2 + 6360000.0;
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_4 + 8),uVar7);
  fVar2 = expf(param_2 / -7994.0);
  fVar3 = expf(param_2 / -1200.0);
  if (0.0 <= fVar12) {
    if (((DAT_02111dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02111dd0), iVar1 != 0)) {
      DAT_02111dc8 = 1.253314;
      __cxa_guard_release(&DAT_02111dd0);
    }
    fVar4 = SQRT(fVar10 * 0.0001250938);
    fVar4 = (float)NEON_fmadd(fVar4,0x3f000000,fVar4);
    fVar10 = SQRT(fVar10 * 0.0008333334);
    fVar10 = (float)NEON_fmadd(fVar10,0x3f000000,fVar10);
    fVar5 = (float)NEON_fmadd(fVar4 * DAT_02111dc8 + -1.0,fVar12,0x3f800000);
    fVar10 = fVar10 * DAT_02111dc8;
    fVar12 = (float)NEON_fmadd(fVar10 + -1.0,fVar12,0x3f800000);
    *param_5 = fVar2 * 7994.0 * ((fVar4 * DAT_02111dc8) / fVar5);
    fVar2 = fVar3 * 1200.0 * (fVar10 / fVar12);
  }
  else {
    fVar4 = (float)NEON_fmsub(fVar12,fVar12,0x3f800000);
    fVar11 = (float)NEON_fmadd(fVar10,SQRT(fVar4),0xcac21780);
    fVar4 = expf(fVar11 / 7994.0);
    fVar5 = expf(fVar11 / 1200.0);
    if ((DAT_02111dd0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_02111dd0);
      if (iVar1 != 0) {
        DAT_02111dc8 = 1.253314;
        __cxa_guard_release(&DAT_02111dd0);
      }
    }
    fVar8 = SQRT((fVar11 + 6360000.0) * 0.0001250938);
    fVar8 = (float)NEON_fmadd(fVar8,0x3f000000,fVar8);
    fVar11 = SQRT((fVar11 + 6360000.0) * 0.0008333334);
    fVar8 = fVar8 * DAT_02111dc8;
    fVar11 = (float)NEON_fmadd(fVar11,0x3f000000,fVar11);
    fVar11 = fVar11 * DAT_02111dc8;
    if (((DAT_02111dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02111dd0), iVar1 != 0)) {
      DAT_02111dc8 = 1.253314;
      __cxa_guard_release(&DAT_02111dd0);
    }
    fVar6 = SQRT(fVar10 * 0.0001250938);
    fVar6 = (float)NEON_fmadd(fVar6,0x3f000000,fVar6);
    fVar10 = SQRT(fVar10 * 0.0008333334);
    fVar9 = (float)NEON_fmadd(fVar6 * DAT_02111dc8 + -1.0,-fVar12,0x3f800000);
    fVar10 = (float)NEON_fmadd(fVar10,0x3f000000,fVar10);
    fVar10 = fVar10 * DAT_02111dc8;
    fVar12 = (float)NEON_fmadd(fVar10 + -1.0,-fVar12,0x3f800000);
    *param_5 = fVar2 * 7994.0 * fVar4 * 7994.0 * (fVar8 + fVar8) * ((fVar6 * DAT_02111dc8) / fVar9);
    fVar2 = fVar3 * 1200.0 * fVar5 * 1200.0 * (fVar11 + fVar11) * (fVar10 / fVar12);
  }
  param_5[1] = fVar2;
  return;
}


