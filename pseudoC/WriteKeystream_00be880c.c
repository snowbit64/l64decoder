// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteKeystream
// Entry Point: 00be880c
// Size: 32 bytes
// Signature: undefined __thiscall WriteKeystream(CTR_ModePolicy * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::CTR_ModePolicy::WriteKeystream(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::CTR_ModePolicy::WriteKeystream(CTR_ModePolicy *this,uchar *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00be8828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x38) + 0xe0))(this + -0x38,4,param_1,0,param_2);
  return;
}


