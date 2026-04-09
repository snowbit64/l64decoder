// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00be89e0
// Size: 44 bytes
// Signature: undefined __thiscall AlgorithmProvider(CipherModeBase * this)


/* non-virtual thunk to CryptoPP::CipherModeBase::AlgorithmProvider() const */

void __thiscall CryptoPP::CipherModeBase::AlgorithmProvider(CipherModeBase *this)

{
  undefined *in_x8;
  
  if (*(long *)(this + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00be89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(*(long *)(this + 8) + 8) + 0x20))();
    return;
  }
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x2b2b43;
  return;
}


