// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherResynchronize
// Entry Point: 00d0a9c4
// Size: 60 bytes
// Signature: undefined __thiscall CipherResynchronize(CFB_ModePolicy * this, uchar * param_1, ulong param_2)


/* CryptoPP::CFB_ModePolicy::CipherResynchronize(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::CFB_ModePolicy::CipherResynchronize(CFB_ModePolicy *this,uchar *param_1,ulong param_2)

{
  CopyOrZero(*(void **)(this + 0x30),*(ulong *)(this + 0x28),param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d0a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 200))(this);
  return;
}


