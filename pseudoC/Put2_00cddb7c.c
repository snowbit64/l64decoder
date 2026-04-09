// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00cddb7c
// Size: 44 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::Redirector::Put2(unsigned char const*, unsigned long, int, bool) */

void CryptoPP::Redirector::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  long *plVar1;
  uint in_w4;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cddba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))
              (plVar1,param_2,param_3,-(*(uint *)(param_1 + 0x20) & 1) & (uint)param_4,in_w4 & 1);
    return;
  }
  return;
}


