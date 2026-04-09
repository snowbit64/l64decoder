// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PropagateInitialize
// Entry Point: 00cd6a04
// Size: 68 bytes
// Signature: undefined __thiscall PropagateInitialize(Filter * this, NameValuePairs * param_1, int param_2)


/* CryptoPP::Filter::PropagateInitialize(CryptoPP::NameValuePairs const&, int) */

void __thiscall
CryptoPP::Filter::PropagateInitialize(Filter *this,NameValuePairs *param_1,int param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00cd6a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,param_1,param_2 + -1);
    return;
  }
  return;
}


