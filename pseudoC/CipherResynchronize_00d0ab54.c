// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherResynchronize
// Entry Point: 00d0ab54
// Size: 60 bytes
// Signature: undefined __thiscall CipherResynchronize(CFB_ModePolicy * this, uchar * param_1, ulong param_2)


/* non-virtual thunk to CryptoPP::CFB_ModePolicy::CipherResynchronize(unsigned char const*, unsigned
   long) */

void __thiscall
CryptoPP::CFB_ModePolicy::CipherResynchronize(CFB_ModePolicy *this,uchar *param_1,ulong param_2)

{
  CopyOrZero(*(void **)(this + -8),*(ulong *)(this + -0x10),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d0ab8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x38) + 200))(this + -0x38);
  return;
}


