// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAreaOf2DQuadrangle
// Entry Point: 006f9a2c
// Size: 60 bytes
// Signature: undefined __thiscall getAreaOf2DQuadrangle(BillboardShape * this, float * param_1)


/* BillboardShape::getAreaOf2DQuadrangle(float const*) */

float __thiscall BillboardShape::getAreaOf2DQuadrangle(BillboardShape *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(param_1[1] - param_1[5],param_1[6] - param_1[2],
                            (param_1[3] - param_1[7]) * (*param_1 - param_1[4]));
  return ABS(fVar1) * 0.5;
}


