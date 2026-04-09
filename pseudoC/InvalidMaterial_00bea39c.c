// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidMaterial
// Entry Point: 00bea39c
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidMaterial(InvalidMaterial * this)


/* CryptoPP::CryptoMaterial::InvalidMaterial::~InvalidMaterial() */

void __thiscall CryptoPP::CryptoMaterial::InvalidMaterial::~InvalidMaterial(InvalidMaterial *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


