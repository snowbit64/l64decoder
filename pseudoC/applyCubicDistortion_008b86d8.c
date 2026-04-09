// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyCubicDistortion
// Entry Point: 008b86d8
// Size: 52 bytes
// Signature: undefined __thiscall applyCubicDistortion(Distortion * this, float * param_1)


/* Distortion::applyCubicDistortion(float&) */

void __thiscall Distortion::applyCubicDistortion(Distortion *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  fVar1 = (float)NEON_fmadd(fVar1,0x3fbe147b,fVar1 * fVar1 * fVar1 * -0.495);
  *param_1 = fVar1;
  return;
}


