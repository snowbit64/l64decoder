// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NextPutMultiple
// Entry Point: 00cdbd64
// Size: 24 bytes
// Signature: undefined __thiscall NextPutMultiple(AuthenticatedDecryptionFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedDecryptionFilter::NextPutMultiple(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::NextPutMultiple
          (AuthenticatedDecryptionFilter *this,uchar *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cdbd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x158) + 0x38))(this + 0x158,param_1,param_2,0,1);
  return;
}


