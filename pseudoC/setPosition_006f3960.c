// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPosition
// Entry Point: 006f3960
// Size: 20 bytes
// Signature: undefined __thiscall setPosition(Overlay * this, float param_1, float param_2, float param_3, float param_4)


/* Overlay::setPosition(float, float, float, float) */

void __thiscall
Overlay::setPosition(Overlay *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x2c) = param_2;
  *(float *)(this + 0x20) = param_3;
  *(float *)(this + 0x24) = param_4;
  return;
}


