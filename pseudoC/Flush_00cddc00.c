// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Flush
// Entry Point: 00cddc00
// Size: 48 bytes
// Signature: undefined __thiscall Flush(Redirector * this, bool param_1, int param_2, bool param_3)


/* CryptoPP::Redirector::Flush(bool, int, bool) */

undefined8 __thiscall
CryptoPP::Redirector::Flush(Redirector *this,bool param_1,int param_2,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x18);
  if ((plVar1 != (long *)0x0) && (((byte)this[0x20] & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00cddc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}


