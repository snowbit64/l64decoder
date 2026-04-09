// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherResynchronize
// Entry Point: 00d0aefc
// Size: 12 bytes
// Signature: undefined __thiscall CipherResynchronize(OFB_ModePolicy * this, uchar * param_1, uchar * param_2, ulong param_3)


/* non-virtual thunk to CryptoPP::OFB_ModePolicy::CipherResynchronize(unsigned char*, unsigned char
   const*, unsigned long) */

void __thiscall
CryptoPP::OFB_ModePolicy::CipherResynchronize
          (OFB_ModePolicy *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  CopyOrZero(*(void **)(this + -8),*(ulong *)(this + -0x10),param_2,param_3);
  return;
}


