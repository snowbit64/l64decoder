// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyCubicDistortion
// Entry Point: 008b85bc
// Size: 40 bytes
// Signature: undefined __thiscall applyCubicDistortion(Distortion * this, float param_1, float * param_2)


/* Distortion::applyCubicDistortion(float, float&) */

void __thiscall Distortion::applyCubicDistortion(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  fVar1 = (float)NEON_fmadd(param_1 * 3.0,fVar1,fVar1 * fVar1 * -fVar1 * param_1);
  *param_2 = fVar1;
  return;
}


