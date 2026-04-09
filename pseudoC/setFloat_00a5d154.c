// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFloat
// Entry Point: 00a5d154
// Size: 16 bytes
// Signature: undefined __thiscall setFloat(UserAttribute * this, float param_1)


/* UserAttribute::setFloat(float) */

void __thiscall UserAttribute::setFloat(UserAttribute *this,float param_1)

{
  *(float *)this = param_1;
  *(undefined4 *)(this + 8) = 2;
  return;
}


