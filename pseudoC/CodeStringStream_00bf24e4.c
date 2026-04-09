// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CodeStringStream
// Entry Point: 00bf24e4
// Size: 48 bytes
// Signature: undefined __thiscall ~CodeStringStream(CodeStringStream * this)


/* CodeStringStream::~CodeStringStream() */

void __thiscall CodeStringStream::~CodeStringStream(CodeStringStream *this)

{
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  StringStream::~StringStream((StringStream *)this);
  return;
}


