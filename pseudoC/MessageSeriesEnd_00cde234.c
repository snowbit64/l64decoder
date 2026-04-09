// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageSeriesEnd
// Entry Point: 00cde234
// Size: 88 bytes
// Signature: undefined __thiscall MessageSeriesEnd(OutputProxy * this, int param_1, bool param_2)


/* CryptoPP::OutputProxy::MessageSeriesEnd(int, bool) */

undefined8 __thiscall
CryptoPP::OutputProxy::MessageSeriesEnd(OutputProxy *this,int param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (this[0x20] != (OutputProxy)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))();
                    /* WARNING: Could not recover jumptable at 0x00cde278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}


