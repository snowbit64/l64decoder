// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySmooth
// Entry Point: 008b8698
// Size: 64 bytes
// Signature: undefined __thiscall applySmooth(Distortion * this, float param_1, float * param_2)


/* Distortion::applySmooth(float, float&) */

void __thiscall Distortion::applySmooth(Distortion *this,float param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)NEON_fmin(param_1,0x3f7fbe77);
  fVar1 = (fVar1 + fVar1) / (1.0 - fVar1);
  fVar2 = (float)NEON_fmadd(fVar1,ABS(*param_2),0x3f800000);
  *param_2 = ((fVar1 + 1.0) * *param_2) / fVar2;
  return;
}


