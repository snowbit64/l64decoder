// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRotation
// Entry Point: 006f3a30
// Size: 16 bytes
// Signature: undefined __thiscall setRotation(Overlay * this, float param_1, float param_2, float param_3)


/* Overlay::setRotation(float, float, float) */

void __thiscall Overlay::setRotation(Overlay *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x54) = param_1;
  *(float *)(this + 0x58) = param_2;
  *(float *)(this + 0x5c) = param_3;
  return;
}


