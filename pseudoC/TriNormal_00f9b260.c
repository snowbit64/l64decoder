// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TriNormal
// Entry Point: 00f9b260
// Size: 144 bytes
// Signature: undefined __cdecl TriNormal(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* TriNormal(btVector3 const&, btVector3 const&, btVector3 const&) */

float TriNormal(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar9 = *(float *)param_2 - *(float *)param_1;
  fVar7 = *(float *)param_3 - *(float *)param_2;
  fVar1 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar4 = (float)NEON_fnmsub(fVar1,fVar9,fVar7 * fVar5);
  fVar1 = (float)NEON_fnmsub(fVar2,fVar5,fVar1 * fVar8);
  uVar3 = NEON_fnmsub(fVar7,fVar8,fVar2 * fVar9);
  uVar6 = NEON_fmadd(fVar1,fVar1,fVar4 * fVar4);
  fVar2 = (float)NEON_fmadd(uVar3,uVar3,uVar6);
  if (SQRT(fVar2) == 0.0) {
    return 1.0;
  }
  return (1.0 / SQRT(fVar2)) * fVar1;
}


