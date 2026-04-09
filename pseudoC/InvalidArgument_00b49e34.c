// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidArgument
// Entry Point: 00b49e34
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidArgument(InvalidArgument * this)


/* CryptoPP::InvalidArgument::~InvalidArgument() */

void __thiscall CryptoPP::InvalidArgument::~InvalidArgument(InvalidArgument *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


