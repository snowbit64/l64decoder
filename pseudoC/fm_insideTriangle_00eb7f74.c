// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideTriangle
// Entry Point: 00eb7f74
// Size: 116 bytes
// Signature: undefined __cdecl fm_insideTriangle(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)


/* FLOAT_MATH::fm_insideTriangle(float, float, float, float, float, float, float, float) */

bool FLOAT_MATH::fm_insideTriangle
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = false;
  fVar2 = (float)NEON_fmadd(param_5 - param_3,param_8 - param_4,
                            (param_7 - param_3) * -(param_6 - param_4));
  if ((0.0 <= fVar2) &&
     (fVar2 = (float)NEON_fmadd(param_1 - param_5,param_8 - param_6,
                                (param_7 - param_5) * -(param_2 - param_6)), 0.0 <= fVar2)) {
    fVar2 = (float)NEON_fmadd(param_3 - param_1,param_8 - param_2,
                              (param_7 - param_1) * -(param_4 - param_2));
    bVar1 = 0.0 <= fVar2;
  }
  return bVar1;
}


