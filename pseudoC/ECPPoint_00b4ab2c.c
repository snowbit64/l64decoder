// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ECPPoint
// Entry Point: 00b4ab2c
// Size: 36 bytes
// Signature: undefined __thiscall ~ECPPoint(ECPPoint * this)


/* CryptoPP::ECPPoint::~ECPPoint() */

void __thiscall CryptoPP::ECPPoint::~ECPPoint(ECPPoint *this)

{
  ~ECPPoint(this);
  operator_delete(this);
  return;
}


