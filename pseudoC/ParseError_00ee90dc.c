// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParseError
// Entry Point: 00ee90dc
// Size: 64 bytes
// Signature: undefined __thiscall ~ParseError(ParseError * this)


/* Luau::ParseError::~ParseError() */

void __thiscall Luau::ParseError::~ParseError(ParseError *this)

{
  *(undefined ***)this = &PTR__ParseError_010168f8;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  std::exception::~exception((exception *)this);
  return;
}


