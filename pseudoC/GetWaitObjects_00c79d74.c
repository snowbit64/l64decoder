// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetWaitObjects
// Entry Point: 00c79d74
// Size: 76 bytes
// Signature: undefined __thiscall GetWaitObjects(BufferedTransformation * this, WaitObjectContainer * param_1, CallStack * param_2)


/* CryptoPP::BufferedTransformation::GetWaitObjects(CryptoPP::WaitObjectContainer&,
   CryptoPP::CallStack const&) */

void __thiscall
CryptoPP::BufferedTransformation::GetWaitObjects
          (BufferedTransformation *this,WaitObjectContainer *param_1,CallStack *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x160))();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c79db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1,param_2);
    return;
  }
  return;
}


