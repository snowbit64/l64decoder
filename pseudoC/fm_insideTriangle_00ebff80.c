// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideTriangle
// Entry Point: 00ebff80
// Size: 116 bytes
// Signature: undefined __cdecl fm_insideTriangle(double param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double param_7, double param_8)


/* FLOAT_MATH::fm_insideTriangle(double, double, double, double, double, double, double, double) */

bool FLOAT_MATH::fm_insideTriangle
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7,double param_8)

{
  bool bVar1;
  double dVar2;
  
  bVar1 = false;
  dVar2 = (double)NEON_fmadd(param_5 - param_3,param_8 - param_4,
                             (param_7 - param_3) * -(param_6 - param_4));
  if ((0.0 <= dVar2) &&
     (dVar2 = (double)NEON_fmadd(param_1 - param_5,param_8 - param_6,
                                 (param_7 - param_5) * -(param_2 - param_6)), 0.0 <= dVar2)) {
    dVar2 = (double)NEON_fmadd(param_3 - param_1,param_8 - param_2,
                               (param_7 - param_1) * -(param_4 - param_2));
    bVar1 = 0.0 <= dVar2;
  }
  return bVar1;
}


