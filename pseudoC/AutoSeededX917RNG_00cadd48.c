// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AutoSeededX917RNG
// Entry Point: 00cadd48
// Size: 44 bytes
// Signature: undefined __thiscall ~AutoSeededX917RNG(AutoSeededX917RNG<CryptoPP::Rijndael> * this)


/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::~AutoSeededX917RNG() */

void __thiscall
CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::~AutoSeededX917RNG
          (AutoSeededX917RNG<CryptoPP::Rijndael> *this)

{
  *(undefined ***)this = &PTR__AutoSeededX917RNG_00ff57a8;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cadd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


