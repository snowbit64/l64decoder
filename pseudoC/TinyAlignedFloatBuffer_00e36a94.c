// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TinyAlignedFloatBuffer
// Entry Point: 00e36a94
// Size: 16 bytes
// Signature: undefined __thiscall TinyAlignedFloatBuffer(TinyAlignedFloatBuffer * this)


/* SoLoud::TinyAlignedFloatBuffer::TinyAlignedFloatBuffer() */

void __thiscall SoLoud::TinyAlignedFloatBuffer::TinyAlignedFloatBuffer(TinyAlignedFloatBuffer *this)

{
  *(ulong *)this = (ulong)(this + 0x27) & 0xffffffffffffffe0;
  return;
}


