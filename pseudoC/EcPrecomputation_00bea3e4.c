// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EcPrecomputation
// Entry Point: 00bea3e4
// Size: 92 bytes
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
                    /* WARNING: Could not recover jumptable at 0x00bea430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


