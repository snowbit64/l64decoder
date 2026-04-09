// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cde09c
// Size: 108 bytes
// Signature: undefined __thiscall Put2(OutputProxy * this, uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::OutputProxy::Put2(unsigned char const*, unsigned long, int, bool) */

void __thiscall
CryptoPP::OutputProxy::Put2(OutputProxy *this,uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x18) + 0x160))();
  iVar1 = 0;
  if (this[0x20] != (OutputProxy)0x0) {
    iVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00cde104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_2,iVar1,param_4);
  return;
}


