// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Comment
// Entry Point: 00bf32ec
// Size: 68 bytes
// Signature: undefined __thiscall ~Comment(Comment * this)


/* Preprocessor::Comment::~Comment() */

void __thiscall Preprocessor::Comment::~Comment(Comment *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


