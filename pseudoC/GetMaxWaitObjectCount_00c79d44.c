// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxWaitObjectCount
// Entry Point: 00c79d44
// Size: 48 bytes
// Signature: undefined __thiscall GetMaxWaitObjectCount(BufferedTransformation * this)


/* non-virtual thunk to CryptoPP::BufferedTransformation::GetMaxWaitObjectCount() const */

void __thiscall
CryptoPP::BufferedTransformation::GetMaxWaitObjectCount(BufferedTransformation *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x168))();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c79d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))();
    return;
  }
  return;
}


