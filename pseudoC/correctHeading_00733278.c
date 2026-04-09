// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: correctHeading
// Entry Point: 00733278
// Size: 128 bytes
// Signature: undefined __cdecl correctHeading(Vector2 * param_1, Vector2 * param_2, Vector2 * param_3, bool param_4)


/* correctHeading(Vector2 const&, Vector2 const&, Vector2 const&, bool) */

float correctHeading(Vector2 *param_1,Vector2 *param_2,Vector2 *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = *(float *)param_3;
  fVar1 = *(float *)(param_3 + 4);
  fVar3 = (float)NEON_fmadd(fVar4,*(float *)param_1 - *(float *)param_2,
                            (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * fVar1);
  uVar5 = 0xbe800000;
  if (!param_4) {
    uVar5 = 0x3e800000;
  }
  fVar2 = (float)NEON_fmadd((*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) - fVar1 * fVar3,
                            uVar5,fVar1);
  fVar1 = (float)NEON_fmadd((*(float *)param_1 - *(float *)param_2) - fVar4 * fVar3,uVar5,fVar4);
  fVar4 = (float)NEON_fmadd(fVar1,fVar1,fVar2 * fVar2);
  fVar3 = 1.0;
  if (1e-06 < fVar4) {
    fVar3 = 1.0 / SQRT(fVar4);
  }
  return fVar1 * fVar3;
}


