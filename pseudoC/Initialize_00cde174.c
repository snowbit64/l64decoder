// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00cde174
// Size: 84 bytes
// Signature: undefined __thiscall Initialize(OutputProxy * this, NameValuePairs * param_1, int param_2)


/* CryptoPP::OutputProxy::Initialize(CryptoPP::NameValuePairs const&, int) */

void __thiscall
CryptoPP::OutputProxy::Initialize(OutputProxy *this,NameValuePairs *param_1,int param_2)

{
  long *plVar1;
  
  if (this[0x20] != (OutputProxy)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))
                               (*(long **)(this + 0x18),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00cde1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,param_1,param_2);
    return;
  }
  return;
}


