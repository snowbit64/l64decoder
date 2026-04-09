// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set
// Entry Point: 00b60194
// Size: 20 bytes
// Signature: undefined __thiscall set(Vector4 * this, float param_1, float param_2, float param_3, float param_4)


/* Vector4::set(float, float, float, float) */

void __thiscall Vector4::set(Vector4 *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(float *)(this + 8) = param_3;
  *(float *)(this + 0xc) = param_4;
  return;
}


