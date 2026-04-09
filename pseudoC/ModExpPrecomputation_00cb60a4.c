// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ModExpPrecomputation
// Entry Point: 00cb60a4
// Size: 44 bytes
// Signature: undefined __thiscall ~ModExpPrecomputation(ModExpPrecomputation * this)


/* CryptoPP::ModExpPrecomputation::~ModExpPrecomputation() */

void __thiscall CryptoPP::ModExpPrecomputation::~ModExpPrecomputation(ModExpPrecomputation *this)

{
  *(undefined ***)this = &PTR__ModExpPrecomputation_01002598;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cb60c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


