// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_computeMeshVolume
// Entry Point: 00ebfed0
// Size: 164 bytes
// Signature: undefined __cdecl fm_computeMeshVolume(double * param_1, uint param_2, uint * param_3)


/* FLOAT_MATH::fm_computeMeshVolume(double const*, unsigned int, unsigned int const*) */

undefined  [16] FLOAT_MATH::fm_computeMeshVolume(double *param_1,uint param_2,uint *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  undefined auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  
  dVar4 = 0.0;
  if (param_2 != 0) {
    do {
      param_2 = param_2 - 1;
      pdVar1 = param_1 + param_3[2] * 3;
      pdVar2 = param_1 + param_3[1] * 3;
      pdVar3 = param_1 + *param_3 * 3;
      uVar7 = NEON_fmadd(*pdVar3 * pdVar2[1],pdVar1[2],*pdVar2 * pdVar1[1] * pdVar3[2]);
      uVar7 = NEON_fmadd(*pdVar1 * pdVar3[1],pdVar2[2],uVar7);
      uVar7 = NEON_fmadd(pdVar1[1] * -*pdVar3,pdVar2[2],uVar7);
      uVar7 = NEON_fmadd(pdVar3[1] * -*pdVar2,pdVar1[2],uVar7);
      dVar6 = (double)NEON_fmadd(pdVar2[1] * -*pdVar1,pdVar3[2],uVar7);
      dVar4 = dVar4 + dVar6;
      param_3 = param_3 + 3;
    } while (param_2 != 0);
    dVar4 = dVar4 * 0.1666666716337204;
  }
  dVar6 = -dVar4;
  if (0.0 <= dVar4) {
    dVar6 = dVar4;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  return auVar5;
}


