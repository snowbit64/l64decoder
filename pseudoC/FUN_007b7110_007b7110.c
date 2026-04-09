// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7110
// Entry Point: 007b7110
// Size: 100 bytes
// Signature: undefined FUN_007b7110(void)


void FUN_007b7110(long param_1,double *param_2)

{
  ParticleSystem *this;
  float fVar1;
  
  fVar1 = 1.0;
  switch(*(float *)(param_2 + 1)) {
  case 1.401298e-45:
    fVar1 = (float)(int)*(float *)param_2;
    break;
  case 2.802597e-45:
    fVar1 = (float)NEON_ucvtf(*(float *)param_2);
    break;
  case 5.605194e-45:
    fVar1 = *(float *)param_2;
    break;
  case 7.006492e-45:
    fVar1 = (float)*param_2;
  }
  this = (ParticleSystem *)0x0;
  if (param_1 != 0) {
    this = (ParticleSystem *)(param_1 + -0x10);
  }
  ParticleSystem::resetEmitStopTimer(this,fVar1);
  return;
}


