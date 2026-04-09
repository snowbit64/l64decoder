// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ModExpPrecomputation
// Entry Point: 00cb6148
// Size: 68 bytes
// Signature: undefined __thiscall ~ModExpPrecomputation(ModExpPrecomputation * this)


/* CryptoPP::ModExpPrecomputation::~ModExpPrecomputation() */

void __thiscall CryptoPP::ModExpPrecomputation::~ModExpPrecomputation(ModExpPrecomputation *this)

{
  *(undefined ***)this = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


