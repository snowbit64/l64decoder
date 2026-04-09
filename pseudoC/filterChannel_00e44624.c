// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterChannel
// Entry Point: 00e44624
// Size: 340 bytes
// Signature: undefined __cdecl filterChannel(float * param_1, uint param_2, float param_3, double param_4, uint param_5, uint param_6)


/* SoLoud::BiquadResonantFilterInstance::filterChannel(float*, unsigned int, float, double, unsigned
   int, unsigned int) */

ulong SoLoud::BiquadResonantFilterInstance::filterChannel
                (float *param_1,uint param_2,float param_3,double param_4,uint param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_register_00005004;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar11 = CONCAT44(in_register_00005004,param_3);
  if (param_1[8] != 0.0) {
    if (param_6 == 0) {
      (**(code **)(*(long *)param_1 + 8))(param_4,param_1);
      if ((*(byte *)(param_1 + 3) & 0xe) != 0) {
        calcBQRParams();
      }
      param_1[3] = 0.0;
    }
    pfVar1 = param_1 + (ulong)param_6 * 4 + 9;
    if (param_5 != 0) {
      pfVar2 = param_1 + (ulong)param_6 * 4 + 0xb;
      pfVar3 = param_1 + (ulong)param_6 * 4 + 0xc;
      lVar6 = 0;
      puVar7 = *(undefined4 **)(param_1 + 4);
      pfVar4 = param_1 + (ulong)param_6 * 4 + 10;
      fVar8 = *pfVar2;
      fVar10 = *pfVar3;
      do {
        pfVar5 = (float *)((ulong)param_2 + lVar6 * 4);
        lVar6 = lVar6 + 2;
        fVar12 = *pfVar5;
        uVar9 = NEON_fmadd(param_1[0x29],fVar12,param_1[0x2a] * fVar8);
        uVar9 = NEON_fmadd(param_1[0x2b],fVar10,uVar9);
        uVar9 = NEON_fmsub(param_1[0x2c],*pfVar1,uVar9);
        fVar10 = (float)NEON_fmsub(param_1[0x2d],*pfVar4,uVar9);
        *pfVar4 = fVar10;
        fVar13 = pfVar5[1];
        fVar10 = (float)NEON_fmadd(fVar10 - *pfVar5,*puVar7,*pfVar5);
        *pfVar5 = fVar10;
        fVar8 = param_1[0x29];
        fVar10 = param_1[0x2a];
        fVar14 = *pfVar2;
        *pfVar3 = fVar13;
        uVar9 = NEON_fmadd(fVar8,fVar13,fVar12 * fVar10);
        uVar9 = NEON_fmadd(param_1[0x2b],fVar14,uVar9);
        uVar9 = NEON_fmsub(param_1[0x2c],*pfVar4,uVar9);
        fVar10 = (float)NEON_fmsub(param_1[0x2d],*pfVar1,uVar9);
        *pfVar1 = fVar10;
        fVar10 = (float)NEON_fmadd(fVar10 - pfVar5[1],*puVar7,pfVar5[1]);
        pfVar5[1] = fVar10;
        fVar8 = *pfVar3;
        *pfVar3 = fVar12;
        *pfVar2 = fVar8;
        fVar10 = fVar12;
      } while ((uint)lVar6 < param_5);
    }
    uVar11 = (ulong)(uint)(*pfVar1 + 1e-26);
    *pfVar1 = *pfVar1 + 1e-26;
  }
  return uVar11;
}


