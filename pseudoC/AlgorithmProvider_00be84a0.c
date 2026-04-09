// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AlgorithmProvider
// Entry Point: 00be84a0
// Size: 52 bytes
// Signature: undefined __thiscall AlgorithmProvider(GCM_Base * this)


/* non-virtual thunk to CryptoPP::GCM_Base::AlgorithmProvider() const */

void __thiscall CryptoPP::GCM_Base::AlgorithmProvider(GCM_Base *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)(this + -0x10) + 0x150))();
                    /* WARNING: Could not recover jumptable at 0x00be84d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 8) + 0x20))();
  return;
}


