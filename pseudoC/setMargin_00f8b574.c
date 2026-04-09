// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMargin
// Entry Point: 00f8b574
// Size: 8 bytes
// Signature: undefined __thiscall setMargin(btSoftClusterCollisionShape * this, float param_1)


/* btSoftClusterCollisionShape::setMargin(float) */

void __thiscall
btSoftClusterCollisionShape::setMargin(btSoftClusterCollisionShape *this,float param_1)

{
  *(float *)(this + 0x3c) = param_1;
  return;
}


