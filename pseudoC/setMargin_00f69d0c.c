// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMargin
// Entry Point: 00f69d0c
// Size: 8 bytes
// Signature: undefined __thiscall setMargin(btSphereShape * this, float param_1)


/* btSphereShape::setMargin(float) */

void __thiscall btSphereShape::setMargin(btSphereShape *this,float param_1)

{
  *(float *)(this + 0x3c) = param_1;
  return;
}


