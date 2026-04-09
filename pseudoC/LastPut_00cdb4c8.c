// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastPut
// Entry Point: 00cdb4c8
// Size: 60 bytes
// Signature: undefined __thiscall LastPut(AuthenticatedEncryptionFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedEncryptionFilter::LastPut(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedEncryptionFilter::LastPut
          (AuthenticatedEncryptionFilter *this,uchar *param_1,ulong param_2)

{
  StreamTransformationFilter::LastPut((StreamTransformationFilter *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00cdb500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0xd8) + 0x38))(this + 0xd8,0,0,0xffffffff,1);
  return;
}


