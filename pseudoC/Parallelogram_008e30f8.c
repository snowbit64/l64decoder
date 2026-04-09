// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parallelogram
// Entry Point: 008e30f8
// Size: 108 bytes
// Signature: undefined __thiscall Parallelogram(Parallelogram * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* TyreTrackGeometry::Parallelogram::Parallelogram(float, float, float, float, float, float) */

void __thiscall
TyreTrackGeometry::Parallelogram::Parallelogram
          (Parallelogram *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)NEON_fmadd(param_3,param_6,-param_5 * param_4);
  fVar2 = param_3;
  fVar3 = param_4;
  if (fVar4 < 0.0) {
    fVar2 = param_5;
    fVar3 = param_6;
    param_5 = param_3;
    param_6 = param_4;
  }
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  fVar1 = (float)NEON_fmadd(param_5,param_5,param_6 * param_6);
  fVar4 = SQRT(fVar4);
  fVar1 = SQRT(fVar1);
  *(float *)(this + 8) = fVar2 / fVar4;
  *(float *)(this + 0xc) = fVar3 / fVar4;
  *(float *)(this + 0x10) = fVar4;
  *(float *)(this + 0x14) = param_5 / fVar1;
  *(float *)(this + 0x18) = param_6 / fVar1;
  *(float *)(this + 0x1c) = fVar1;
  return;
}


