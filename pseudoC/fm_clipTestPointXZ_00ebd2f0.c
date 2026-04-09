// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestPointXZ
// Entry Point: 00ebd2f0
// Size: 96 bytes
// Signature: undefined __cdecl fm_clipTestPointXZ(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_clipTestPointXZ(double const*, double const*, double const*) */

uint FLOAT_MATH::fm_clipTestPointXZ(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  
  if (*param_1 <= *param_3) {
    uVar1 = 0;
    if (*param_2 < *param_3) {
      uVar1 = 2;
    }
    dVar3 = param_3[2];
    uVar2 = uVar1;
    if (dVar3 < param_1[2]) goto LAB_00ebd348;
  }
  else {
    uVar1 = 1;
    dVar3 = param_3[2];
    uVar2 = 1;
    if (dVar3 < param_1[2]) {
LAB_00ebd348:
      return uVar2 | 0x10;
    }
  }
  if (param_2[2] < dVar3) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}


