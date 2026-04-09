// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~OS_RNG_Err
// Entry Point: 00d1a928
// Size: 72 bytes
// Signature: undefined __thiscall ~OS_RNG_Err(OS_RNG_Err * this)


/* CryptoPP::OS_RNG_Err::~OS_RNG_Err() */

void __thiscall CryptoPP::OS_RNG_Err::~OS_RNG_Err(OS_RNG_Err *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


