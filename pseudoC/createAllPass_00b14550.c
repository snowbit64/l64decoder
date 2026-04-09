// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAllPass
// Entry Point: 00b14550
// Size: 136 bytes
// Signature: undefined __thiscall createAllPass(IIRFilter * this, float param_1, float param_2, float param_3)


/* IIRFilter::createAllPass(float, float, float) */

void __thiscall IIRFilter::createAllPass(IIRFilter *this,float param_1,float param_2,float param_3)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = tanf((param_2 * 3.141593) / param_1);
  fVar1 = 1.0 / fVar1;
  in_x8[2] = 1.0;
  fVar3 = fVar1 * fVar1;
  fVar2 = (float)NEON_fmadd(1.0 / param_3,fVar1,0x3f800000);
  fVar2 = 1.0 / (fVar2 + fVar3);
  fVar1 = fVar2 * (fVar3 + (1.0 - fVar1 / param_3));
  fVar2 = (1.0 - fVar3) * (fVar2 + fVar2);
  *in_x8 = fVar1;
  in_x8[1] = fVar2;
  in_x8[3] = fVar2;
  in_x8[4] = fVar1;
  return;
}


