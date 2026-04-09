// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d0741c
// Size: 16 bytes
// Signature: undefined __thiscall Restart(IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> * this)


/* non-virtual thunk to CryptoPP::IteratedHashBase<unsigned long,
   CryptoPP::MessageAuthenticationCode>::Restart() */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode>::Restart
          (IteratedHashBase<unsigned_long,CryptoPP::MessageAuthenticationCode> *this)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d07428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -8) + 0xb8))();
  return;
}


