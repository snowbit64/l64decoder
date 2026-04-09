// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetWaitObjects
// Entry Point: 00cddbd0
// Size: 36 bytes
// Signature: undefined __cdecl GetWaitObjects(WaitObjectContainer * param_1, CallStack * param_2)


/* CryptoPP::Redirector::GetWaitObjects(CryptoPP::WaitObjectContainer&, CryptoPP::CallStack const&)
    */

void CryptoPP::Redirector::GetWaitObjects(WaitObjectContainer *param_1,CallStack *param_2)

{
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) && (((byte)param_1[0x20] >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
    return;
  }
  return;
}


