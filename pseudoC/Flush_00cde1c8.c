// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Flush
// Entry Point: 00cde1c8
// Size: 108 bytes
// Signature: undefined __thiscall Flush(OutputProxy * this, bool param_1, int param_2, bool param_3)


/* CryptoPP::OutputProxy::Flush(bool, int, bool) */

undefined8 __thiscall
CryptoPP::OutputProxy::Flush(OutputProxy *this,bool param_1,int param_2,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (this[0x20] != (OutputProxy)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))
                               (*(long **)(this + 0x18),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00cde21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


