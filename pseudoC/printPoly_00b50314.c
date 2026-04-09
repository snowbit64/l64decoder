// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printPoly
// Entry Point: 00b50314
// Size: 128 bytes
// Signature: undefined __cdecl printPoly(Vector4 * param_1, uint param_2, uint param_3)


/* ClippingUtil::printPoly(Vector4 const*, unsigned int, unsigned int) */

Vector4 * ClippingUtil::printPoly(Vector4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  
  if (param_2 != 0) {
    uVar2 = (ulong)param_2;
    printf("Poly #%u {\n",(ulong)param_3);
    pfVar3 = (float *)(param_1 + 8);
    do {
      printf("    %f,%f,%f,%f\n",(double)pfVar3[-2],(double)pfVar3[-1],(double)*pfVar3,
             (double)pfVar3[1]);
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 4;
    } while (uVar2 != 0);
    uVar1 = puts("}");
    return (Vector4 *)(ulong)uVar1;
  }
  return param_1;
}


