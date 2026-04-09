// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OpenPGPDecodeErr
// Entry Point: 00d0502c
// Size: 72 bytes
// Signature: undefined __thiscall ~OpenPGPDecodeErr(OpenPGPDecodeErr * this)


/* CryptoPP::Integer::OpenPGPDecodeErr::~OpenPGPDecodeErr() */

void __thiscall CryptoPP::Integer::OpenPGPDecodeErr::~OpenPGPDecodeErr(OpenPGPDecodeErr *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


