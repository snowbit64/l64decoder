// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MarkovHuffmanTree
// Entry Point: 00bff088
// Size: 60 bytes
// Signature: undefined __thiscall ~MarkovHuffmanTree(MarkovHuffmanTree * this)


/* MarkovHuffmanTree::~MarkovHuffmanTree() */

void __thiscall MarkovHuffmanTree::~MarkovHuffmanTree(MarkovHuffmanTree *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


