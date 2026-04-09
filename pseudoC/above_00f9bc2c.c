// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: above
// Entry Point: 00f9bc2c
// Size: 196 bytes
// Signature: undefined __cdecl above(btVector3 * param_1, int3 * param_2, btVector3 * param_3, float param_4)


/* above(btVector3*, int3 const&, btVector3 const&, float) */

bool above(btVector3 *param_1,int3 *param_2,btVector3 *param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar1 = (float *)(param_1 + (long)*(int *)(param_2 + 8) * 0x10);
  pfVar2 = (float *)(param_1 + (long)*(int *)param_2 * 0x10);
  pfVar3 = (float *)(param_1 + (long)*(int *)(param_2 + 8) * 0x10);
  fVar9 = pfVar1[1] - pfVar2[1];
  fVar10 = *pfVar1 - *pfVar2;
  fVar6 = *pfVar3 - *pfVar1;
  fVar4 = pfVar3[1] - pfVar1[1];
  fVar11 = pfVar1[2] - pfVar2[2];
  fVar8 = pfVar3[2] - pfVar1[2];
  fVar5 = (float)NEON_fnmsub(fVar4,fVar10,fVar6 * fVar9);
  fVar4 = (float)NEON_fnmsub(fVar8,fVar9,fVar4 * fVar11);
  fVar6 = (float)NEON_fnmsub(fVar6,fVar11,fVar8 * fVar10);
  uVar7 = NEON_fmadd(fVar4,fVar4,fVar5 * fVar5);
  fVar8 = (float)NEON_fmadd(fVar6,fVar6,uVar7);
  if (SQRT(fVar8) == 0.0) {
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar4 = 1.0;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar8);
    fVar4 = fVar8 * fVar4;
    fVar6 = fVar8 * fVar6;
    fVar8 = fVar8 * fVar5;
  }
  uVar7 = NEON_fmadd(*(float *)(param_3 + 4) - pfVar2[1],fVar6,(*(float *)param_3 - *pfVar2) * fVar4
                    );
  fVar4 = (float)NEON_fmadd(*(float *)(param_3 + 8) - pfVar2[2],fVar8,uVar7);
  return param_4 < fVar4;
}


