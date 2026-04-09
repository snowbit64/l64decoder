// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getDominantAxis
// Entry Point: 00eb594c
// Size: 56 bytes
// Signature: undefined __cdecl fm_getDominantAxis(float * param_1)


/* FLOAT_MATH::fm_getDominantAxis(float const*) */

undefined4 FLOAT_MATH::fm_getDominantAxis(float *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = ABS(param_1[1]);
  fVar4 = ABS(param_1[2]);
  fVar5 = ABS(*param_1);
  uVar2 = 4;
  if ((fVar4 <= fVar3 || fVar4 == fVar5) || fVar3 < fVar4 && fVar4 < fVar5) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if ((fVar3 <= fVar4 || fVar3 == fVar5) || fVar4 < fVar3 && fVar3 < fVar5) {
    uVar1 = uVar2;
  }
  return uVar1;
}


