// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFarClip
// Entry Point: 00a4ff88
// Size: 8 bytes
// Signature: undefined __thiscall setFarClip(Camera * this, float param_1)


/* Camera::setFarClip(float) */

void __thiscall Camera::setFarClip(Camera *this,float param_1)

{
  *(float *)(this + 0x15c) = param_1;
  return;
}


