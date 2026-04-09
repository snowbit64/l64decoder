// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringSource
// Entry Point: 00cb9178
// Size: 72 bytes
// Signature: undefined __thiscall ~StringSource(StringSource * this)


/* CryptoPP::StringSource::~StringSource() */

void __thiscall CryptoPP::StringSource::~StringSource(StringSource *this)

{
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


