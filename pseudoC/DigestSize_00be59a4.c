// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DigestSize
// Entry Point: 00be59a4
// Size: 36 bytes
// Signature: undefined __thiscall DigestSize(HMAC_Base * this)


/* non-virtual thunk to CryptoPP::HMAC_Base::DigestSize() const */

void __thiscall CryptoPP::HMAC_Base::DigestSize(HMAC_Base *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x00be59c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))();
  return;
}


