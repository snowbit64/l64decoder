// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtPointInPolygon
// Entry Point: 00dcdbe8
// Size: 164 bytes
// Signature: undefined __cdecl dtPointInPolygon(float * param_1, float * param_2, int param_3)


/* dtPointInPolygon(float const*, float const*, int) */

uint dtPointInPolygon(float *param_1,float *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = param_3 + -1;
  if (0 < param_3) {
    uVar2 = 0;
    fVar6 = param_1[2];
    pfVar5 = param_2 + 2;
    uVar4 = 0;
    do {
      fVar7 = *pfVar5;
      fVar8 = (param_2 + iVar3 * 3)[2];
      if ((fVar7 <= fVar6 == fVar6 < fVar8) &&
         (*param_1 <
          pfVar5[-2] + ((fVar6 - fVar7) * (param_2[iVar3 * 3] - pfVar5[-2])) / (fVar8 - fVar7))) {
        uVar2 = uVar2 ^ 1;
      }
      uVar1 = uVar4 + 1;
      iVar3 = (int)uVar4;
      pfVar5 = pfVar5 + 3;
      uVar4 = uVar1;
    } while ((uint)param_3 != uVar1);
    return uVar2;
  }
  return 0;
}


