// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxWaitObjectCount
// Entry Point: 00cddd38
// Size: 40 bytes
// Signature: undefined __thiscall GetMaxWaitObjectCount(Redirector * this)


/* non-virtual thunk to CryptoPP::Redirector::GetMaxWaitObjectCount() const */

undefined8 __thiscall CryptoPP::Redirector::GetMaxWaitObjectCount(Redirector *this)

{
  undefined8 uVar1;
  
  if ((*(long **)(this + 0x10) != (long *)0x0) && (((byte)this[0x18] >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x10) + 0x48))();
    return uVar1;
  }
  return 0;
}


