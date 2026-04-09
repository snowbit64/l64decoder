// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: closestPointLineSegment
// Entry Point: 0074252c
// Size: 120 bytes
// Signature: undefined __cdecl closestPointLineSegment(float * param_1, Vector2 * param_2, Vector2 * param_3)


/* closestPointLineSegment(float&, Vector2 const*, Vector2 const&) */

undefined4 closestPointLineSegment(float *param_1,Vector2 *param_2,Vector2 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *(float *)(param_2 + 0xc) - *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8) - *(float *)param_2;
  fVar1 = *(float *)param_3 - *(float *)param_2;
  fVar4 = (float)NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  if (fVar4 == 0.0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)NEON_fmadd(fVar1,fVar6,fVar5 * fVar3);
    fVar7 = fVar7 / fVar4;
    if ((fVar7 < 0.0 || fVar7 != 1.0) && (fVar7 < 0.0 || 1.0 <= fVar7)) {
      return 0x7f800000;
    }
    fVar1 = (float)NEON_fmsub(fVar6,fVar7,fVar1);
    fVar3 = (float)NEON_fmsub(fVar5,fVar7,fVar3);
  }
  *param_1 = fVar7;
  uVar2 = NEON_fmadd(fVar1,fVar1,fVar3 * fVar3);
  return uVar2;
}


