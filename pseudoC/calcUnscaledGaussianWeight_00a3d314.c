// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcUnscaledGaussianWeight
// Entry Point: 00a3d314
// Size: 36 bytes
// Signature: undefined __thiscall calcUnscaledGaussianWeight(ScreenSpaceProcessor * this, int param_1, float param_2)


/* ScreenSpaceProcessor::calcUnscaledGaussianWeight(int, float) */

void __thiscall
ScreenSpaceProcessor::calcUnscaledGaussianWeight
          (ScreenSpaceProcessor *this,int param_1,float param_2)

{
  expf((float)-(param_1 * param_1) / (param_2 + param_2));
  return;
}


