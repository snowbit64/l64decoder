// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setProjectionOffset
// Entry Point: 00a4ff98
// Size: 20 bytes
// Signature: undefined __thiscall setProjectionOffset(Camera * this, float * param_1)


/* Camera::setProjectionOffset(float const*) */

void __thiscall Camera::setProjectionOffset(Camera *this,float *param_1)

{
  *(float *)(this + 0x160) = *param_1;
  *(float *)(this + 0x164) = param_1[1];
  return;
}


