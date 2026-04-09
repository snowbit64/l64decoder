// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestPoint
// Entry Point: 00ebd240
// Size: 176 bytes
// Signature: undefined __cdecl fm_clipTestPoint(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_clipTestPoint(double const*, double const*, double const*) */

uint FLOAT_MATH::fm_clipTestPoint(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  double dVar2;
  
  if (*param_1 <= *param_3) {
    if (*param_3 <= *param_2) {
      uVar1 = 0;
      dVar2 = param_3[1];
      if (param_1[1] <= dVar2) goto LAB_00ebd28c;
    }
    else {
      uVar1 = 2;
      dVar2 = param_3[1];
      if (param_1[1] <= dVar2) {
LAB_00ebd28c:
        if (param_2[1] < dVar2) {
          uVar1 = uVar1 | 8;
        }
        dVar2 = param_3[2];
        if (dVar2 < param_1[2]) goto LAB_00ebd2ac;
        goto LAB_00ebd2dc;
      }
    }
  }
  else {
    uVar1 = 1;
    dVar2 = param_3[1];
    if (param_1[1] <= dVar2) goto LAB_00ebd28c;
  }
  uVar1 = uVar1 | 4;
  dVar2 = param_3[2];
  if (dVar2 < param_1[2]) {
LAB_00ebd2ac:
    return uVar1 | 0x10;
  }
LAB_00ebd2dc:
  if (param_2[2] < dVar2) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}


