// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageSeriesEnd
// Entry Point: 00cddc30
// Size: 44 bytes
// Signature: undefined __thiscall MessageSeriesEnd(Redirector * this, int param_1, bool param_2)


/* CryptoPP::Redirector::MessageSeriesEnd(int, bool) */

undefined8 __thiscall
CryptoPP::Redirector::MessageSeriesEnd(Redirector *this,int param_1,bool param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x18);
  if ((plVar1 != (long *)0x0) && (((byte)this[0x20] & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}


