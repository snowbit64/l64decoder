// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionMinAcceleration
// Entry Point: 00926624
// Size: 8 bytes
// Signature: undefined __thiscall setCollisionMinAcceleration(DestructionShape * this, float param_1)


/* DestructionShape::setCollisionMinAcceleration(float) */

void __thiscall DestructionShape::setCollisionMinAcceleration(DestructionShape *this,float param_1)

{
  *(float *)(this + 0x3c0) = param_1;
  return;
}


