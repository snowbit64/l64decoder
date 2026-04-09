// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dLineClosestApproach
// Entry Point: 00f96c54
// Size: 156 bytes
// Signature: undefined __cdecl dLineClosestApproach(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, float * param_5, float * param_6)


/* dLineClosestApproach(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   float*, float*) */

void dLineClosestApproach
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
               float *param_5,float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_2 + 4),
                     *(float *)param_4 * *(float *)param_2);
  uVar4 = NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_2 + 8),uVar4);
  fVar6 = (float)NEON_fmsub(uVar4,uVar4,0x3f800000);
  if (0.0001 < fVar6) {
    uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 4),
                       *(float *)(param_3 + 4) - *(float *)(param_1 + 4),
                       *(float *)param_2 * (*(float *)param_3 - *(float *)param_1));
    uVar3 = NEON_fmadd(*(undefined4 *)(param_4 + 4),
                       *(float *)(param_3 + 4) - *(float *)(param_1 + 4),
                       *(float *)param_4 * (*(float *)param_3 - *(float *)param_1));
    uVar1 = NEON_fmadd(*(undefined4 *)(param_2 + 8),
                       *(float *)(param_3 + 8) - *(float *)(param_1 + 8),uVar1);
    uVar3 = NEON_fmadd(*(undefined4 *)(param_4 + 8),
                       *(float *)(param_3 + 8) - *(float *)(param_1 + 8),uVar3);
    fVar5 = (float)NEON_fmsub(uVar3,uVar4,uVar1);
    fVar2 = (float)NEON_fnmsub(uVar4,uVar1,uVar3);
    *param_5 = (1.0 / fVar6) * fVar5;
    *param_6 = (1.0 / fVar6) * fVar2;
    return;
  }
  *param_5 = 0.0;
  *param_6 = 0.0;
  return;
}


