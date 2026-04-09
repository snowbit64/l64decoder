// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CompressionDictionary
// Entry Point: 00bfece0
// Size: 60 bytes
// Signature: undefined __thiscall ~CompressionDictionary(CompressionDictionary * this)


/* CompressionDictionary::~CompressionDictionary() */

void __thiscall CompressionDictionary::~CompressionDictionary(CompressionDictionary *this)

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


