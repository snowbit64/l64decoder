// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreatePutSpace
// Entry Point: 00cddb48
// Size: 28 bytes
// Signature: undefined __thiscall CreatePutSpace(Redirector * this, ulong * param_1)


/* CryptoPP::Redirector::CreatePutSpace(unsigned long&) */

void __thiscall CryptoPP::Redirector::CreatePutSpace(Redirector *this,ulong *param_1)

{
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cddb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 0x28))();
    return;
  }
  *param_1 = 0;
  return;
}


