// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RandomNumberNotFound
// Entry Point: 00d04fe4
// Size: 72 bytes
// Signature: undefined __thiscall ~RandomNumberNotFound(RandomNumberNotFound * this)


/* CryptoPP::Integer::RandomNumberNotFound::~RandomNumberNotFound() */

void __thiscall
CryptoPP::Integer::RandomNumberNotFound::~RandomNumberNotFound(RandomNumberNotFound *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


