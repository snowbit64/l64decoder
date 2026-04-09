// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNearClip
// Entry Point: 00a4ff80
// Size: 8 bytes
// Signature: undefined __thiscall setNearClip(Camera * this, float param_1)


/* Camera::setNearClip(float) */

void __thiscall Camera::setNearClip(Camera *this,float param_1)

{
  *(float *)(this + 0x158) = param_1;
  return;
}


