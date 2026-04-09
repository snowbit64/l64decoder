// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroundHeight
// Entry Point: 0088069c
// Size: 8 bytes
// Signature: undefined __thiscall setGroundHeight(AnimalSteering * this, float param_1)


/* AnimalSteering::setGroundHeight(float) */

void __thiscall AnimalSteering::setGroundHeight(AnimalSteering *this,float param_1)

{
  *(float *)(this + 0x74) = param_1;
  return;
}


