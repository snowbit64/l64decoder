// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Restart
// Entry Point: 00ceddf8
// Size: 68 bytes
// Signature: undefined __thiscall Restart(HMAC_Base * this)


/* non-virtual thunk to CryptoPP::HMAC_Base::Restart() */

void __thiscall CryptoPP::HMAC_Base::Restart(HMAC_Base *this)

{
  long *plVar1;
  
  if (this[0x28] != (HMAC_Base)0x0) {
    plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0xa8))(this + -8);
    (**(code **)(*plVar1 + 0x40))();
    this[0x28] = (HMAC_Base)0x0;
  }
  return;
}


