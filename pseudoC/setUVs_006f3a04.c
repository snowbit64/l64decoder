// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUVs
// Entry Point: 006f3a04
// Size: 36 bytes
// Signature: undefined __thiscall setUVs(Overlay * this, float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)


/* Overlay::setUVs(float, float, float, float, float, float, float, float) */

void __thiscall
Overlay::setUVs(Overlay *this,float param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8)

{
  *(float *)(this + 0x30) = param_1;
  *(float *)(this + 0x34) = param_2;
  *(float *)(this + 0x38) = param_3;
  *(float *)(this + 0x3c) = param_4;
  *(float *)(this + 0x40) = param_5;
  *(float *)(this + 0x44) = param_6;
  *(float *)(this + 0x48) = param_7;
  *(float *)(this + 0x4c) = param_8;
  return;
}


