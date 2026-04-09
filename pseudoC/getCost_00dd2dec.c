// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCost
// Entry Point: 00dd2dec
// Size: 96 bytes
// Signature: undefined __cdecl getCost(float * param_1, float * param_2, uint param_3, dtMeshTile * param_4, dtPoly * param_5, uint param_6, dtMeshTile * param_7, dtPoly * param_8, uint param_9, dtMeshTile * param_10, dtPoly * param_11)


/* dtQueryFilter::getCost(float const*, float const*, unsigned int, dtMeshTile const*, dtPoly
   const*, unsigned int, dtMeshTile const*, dtPoly const*, unsigned int, dtMeshTile const*, dtPoly
   const*) const */

float dtQueryFilter::getCost
                (float *param_1,float *param_2,uint param_3,dtMeshTile *param_4,dtPoly *param_5,
                uint param_6,dtMeshTile *param_7,dtPoly *param_8,uint param_9,dtMeshTile *param_10,
                dtPoly *param_11)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_stack_00000004;
  
  pfVar1 = (float *)(ulong)param_3;
  uVar2 = NEON_fmadd(*pfVar1 - *param_2,*pfVar1 - *param_2,
                     (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
  fVar3 = (float)NEON_fmadd(pfVar1[2] - param_2[2],pfVar1[2] - param_2[2],uVar2);
  fVar3 = (float)dtSqrt(fVar3);
  return fVar3 * param_1[((ulong)*(byte *)(CONCAT44(in_stack_00000004,param_9) + 0x1f) & 0x3f) + 2];
}


