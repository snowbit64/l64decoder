// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValidKeyLength
// Entry Point: 00be8188
// Size: 52 bytes
// Signature: undefined __thiscall GetValidKeyLength(GCM_Base * this, ulong param_1)


/* CryptoPP::GCM_Base::GetValidKeyLength(unsigned long) const */

void __thiscall CryptoPP::GCM_Base::GetValidKeyLength(GCM_Base *this,ulong param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x150))();
                    /* WARNING: Could not recover jumptable at 0x00be81b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return;
}


