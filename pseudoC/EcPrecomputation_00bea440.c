// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EcPrecomputation
// Entry Point: 00bea440
// Size: 88 bytes
// Signature: undefined __thiscall ~EcPrecomputation(EcPrecomputation<CryptoPP::ECP> * this)


/* CryptoPP::EcPrecomputation<CryptoPP::ECP>::~EcPrecomputation() */

void __thiscall
CryptoPP::EcPrecomputation<CryptoPP::ECP>::~EcPrecomputation(EcPrecomputation<CryptoPP::ECP> *this)

{
  *(undefined ***)this = &PTR__EcPrecomputation_00fecea0;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


