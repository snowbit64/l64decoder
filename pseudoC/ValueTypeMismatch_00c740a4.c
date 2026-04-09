// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ValueTypeMismatch
// Entry Point: 00c740a4
// Size: 72 bytes
// Signature: undefined __thiscall ~ValueTypeMismatch(ValueTypeMismatch * this)


/* CryptoPP::NameValuePairs::ValueTypeMismatch::~ValueTypeMismatch() */

void __thiscall
CryptoPP::NameValuePairs::ValueTypeMismatch::~ValueTypeMismatch(ValueTypeMismatch *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


