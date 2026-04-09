// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetWaitObjects
// Entry Point: 00cddd60
// Size: 36 bytes
// Signature: undefined __thiscall GetWaitObjects(Redirector * this, WaitObjectContainer * param_1, CallStack * param_2)


/* non-virtual thunk to CryptoPP::Redirector::GetWaitObjects(CryptoPP::WaitObjectContainer&,
   CryptoPP::CallStack const&) */

void __thiscall
CryptoPP::Redirector::GetWaitObjects
          (Redirector *this,WaitObjectContainer *param_1,CallStack *param_2)

{
  if ((*(long **)(this + 0x10) != (long *)0x0) && (((byte)this[0x18] >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 0x50))();
    return;
  }
  return;
}


