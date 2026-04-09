// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00d08968
// Size: 16 bytes
// Signature: undefined __thiscall Restart(IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> * this)


/* non-virtual thunk to CryptoPP::IteratedHashBase<unsigned int,
   CryptoPP::MessageAuthenticationCode>::Restart() */

void __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::Restart
          (IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> *this)

{
  *(undefined8 *)(this + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d08974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -8) + 0xb8))();
  return;
}


