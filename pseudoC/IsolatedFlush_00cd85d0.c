// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedFlush
// Entry Point: 00cd85d0
// Size: 36 bytes
// Signature: undefined __thiscall IsolatedFlush(ProxyFilter * this, bool param_1, bool param_2)


/* CryptoPP::ProxyFilter::IsolatedFlush(bool, bool) */

void __thiscall CryptoPP::ProxyFilter::IsolatedFlush(ProxyFilter *this,bool param_1,bool param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x90);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cd85ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,param_1,0xffffffff,param_2);
    return;
  }
  return;
}


