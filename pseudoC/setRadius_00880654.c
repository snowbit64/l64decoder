// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRadius
// Entry Point: 00880654
// Size: 8 bytes
// Signature: undefined __thiscall setRadius(AnimalSteering * this, float param_1)


/* AnimalSteering::setRadius(float) */

void __thiscall AnimalSteering::setRadius(AnimalSteering *this,float param_1)

{
  *(float *)(this + 0x30) = param_1;
  return;
}


