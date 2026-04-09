// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getDominantAxis
// Entry Point: 00ebd9d8
// Size: 56 bytes
// Signature: undefined __cdecl fm_getDominantAxis(double * param_1)


/* FLOAT_MATH::fm_getDominantAxis(double const*) */

undefined4 FLOAT_MATH::fm_getDominantAxis(double *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = ABS(param_1[1]);
  dVar4 = ABS(param_1[2]);
  dVar5 = ABS(*param_1);
  uVar2 = 4;
  if ((dVar4 <= dVar3 || dVar4 == dVar5) || dVar3 < dVar4 && dVar4 < dVar5) {
    uVar2 = 1;
  }
  uVar1 = 2;
  if ((dVar3 <= dVar4 || dVar3 == dVar5) || dVar4 < dVar3 && dVar3 < dVar5) {
    uVar1 = uVar2;
  }
  return uVar1;
}


