// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePutSpace
// Entry Point: 00cde064
// Size: 56 bytes
// Signature: undefined __thiscall CreatePutSpace(OutputProxy * this, ulong * param_1)


/* CryptoPP::OutputProxy::CreatePutSpace(unsigned long&) */

void __thiscall CryptoPP::OutputProxy::CreatePutSpace(OutputProxy *this,ulong *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00cde098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return;
}


