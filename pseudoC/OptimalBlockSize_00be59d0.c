// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimalBlockSize
// Entry Point: 00be59d0
// Size: 36 bytes
// Signature: undefined __thiscall OptimalBlockSize(HMAC_Base * this)


/* non-virtual thunk to CryptoPP::HMAC_Base::OptimalBlockSize() const */

void __thiscall CryptoPP::HMAC_Base::OptimalBlockSize(HMAC_Base *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x00be59f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))();
  return;
}


