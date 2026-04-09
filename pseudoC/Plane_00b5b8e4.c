// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Plane
// Entry Point: 00b5b8e4
// Size: 20 bytes
// Signature: undefined __thiscall Plane(Plane * this, float param_1, float param_2, float param_3, float param_4)


/* Plane::Plane(float, float, float, float) */

void __thiscall Plane::Plane(Plane *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}


