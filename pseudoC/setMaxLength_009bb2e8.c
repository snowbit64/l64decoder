// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxLength
// Entry Point: 009bb2e8
// Size: 28 bytes
// Signature: undefined __thiscall setMaxLength(Bt2Rope * this, float param_1)


/* Bt2Rope::setMaxLength(float) */

void __thiscall Bt2Rope::setMaxLength(Bt2Rope *this,float param_1)

{
  if (*(float *)(this + 0x1c) != param_1) {
    *(float *)(this + 0x1c) = param_1;
    *(undefined4 *)(this + 0x38) = 1;
  }
  return;
}


