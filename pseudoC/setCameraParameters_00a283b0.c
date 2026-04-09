// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCameraParameters
// Entry Point: 00a283b0
// Size: 24 bytes
// Signature: undefined __thiscall setCameraParameters(LightListRasterizer * this, float param_1, float param_2, float param_3)


/* LightListRasterizer::setCameraParameters(float, float, float) */

void __thiscall
LightListRasterizer::setCameraParameters
          (LightListRasterizer *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x18) = param_1;
  *(float *)(this + 0x1c) = param_2;
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  *(float *)(this + 0x20) = param_1;
  return;
}


