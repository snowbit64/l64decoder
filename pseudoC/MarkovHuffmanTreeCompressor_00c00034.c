// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MarkovHuffmanTreeCompressor
// Entry Point: 00c00034
// Size: 16 bytes
// Signature: undefined __thiscall ~MarkovHuffmanTreeCompressor(MarkovHuffmanTreeCompressor * this)


/* MarkovHuffmanTreeCompressor::~MarkovHuffmanTreeCompressor() */

void __thiscall
MarkovHuffmanTreeCompressor::~MarkovHuffmanTreeCompressor(MarkovHuffmanTreeCompressor *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


