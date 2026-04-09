// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMargin
// Entry Point: 00ba86b0
// Size: 8 bytes
// Signature: undefined __thiscall setMargin(btConcaveShape * this, float param_1)


/* btConcaveShape::setMargin(float) */

void __thiscall btConcaveShape::setMargin(btConcaveShape *this,float param_1)

{
  *(float *)(this + 0x1c) = param_1;
  return;
}


