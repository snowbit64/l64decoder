// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ModularArithmetic
// Entry Point: 00d04694
// Size: 36 bytes
// Signature: undefined __thiscall ~ModularArithmetic(ModularArithmetic * this)


/* CryptoPP::ModularArithmetic::~ModularArithmetic() */

void __thiscall CryptoPP::ModularArithmetic::~ModularArithmetic(ModularArithmetic *this)

{
  ~ModularArithmetic(this);
  operator_delete(this);
  return;
}


