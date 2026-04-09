// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsValidKeyLength
// Entry Point: 00be81bc
// Size: 52 bytes
// Signature: undefined __thiscall IsValidKeyLength(GCM_Base * this, ulong param_1)


/* CryptoPP::GCM_Base::IsValidKeyLength(unsigned long) const */

void __thiscall CryptoPP::GCM_Base::IsValidKeyLength(GCM_Base *this,ulong param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x150))();
                    /* WARNING: Could not recover jumptable at 0x00be81ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  return;
}


