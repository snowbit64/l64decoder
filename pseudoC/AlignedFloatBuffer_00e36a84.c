// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AlignedFloatBuffer
// Entry Point: 00e36a84
// Size: 16 bytes
// Signature: undefined __thiscall ~AlignedFloatBuffer(AlignedFloatBuffer * this)


/* SoLoud::AlignedFloatBuffer::~AlignedFloatBuffer() */

void __thiscall SoLoud::AlignedFloatBuffer::~AlignedFloatBuffer(AlignedFloatBuffer *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


