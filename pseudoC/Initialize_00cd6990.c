// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00cd6990
// Size: 116 bytes
// Signature: undefined __thiscall Initialize(Filter * this, NameValuePairs * param_1, int param_2)


/* CryptoPP::Filter::Initialize(CryptoPP::NameValuePairs const&, int) */

void __thiscall CryptoPP::Filter::Initialize(Filter *this,NameValuePairs *param_1,int param_2)

{
  long *plVar1;
  
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  (**(code **)(*(long *)this + 0x58))();
  if (param_2 != 0) {
    plVar1 = (long *)(**(code **)(*(long *)this + 0x160))(this);
                    /* WARNING: Could not recover jumptable at 0x00cd69f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(plVar1,param_1,param_2 + -1);
    return;
  }
  return;
}


