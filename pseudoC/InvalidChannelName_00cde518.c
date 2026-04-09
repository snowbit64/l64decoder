// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InvalidChannelName
// Entry Point: 00cde518
// Size: 72 bytes
// Signature: undefined __thiscall ~InvalidChannelName(InvalidChannelName * this)


/* CryptoPP::BufferedTransformation::InvalidChannelName::~InvalidChannelName() */

void __thiscall
CryptoPP::BufferedTransformation::InvalidChannelName::~InvalidChannelName(InvalidChannelName *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


