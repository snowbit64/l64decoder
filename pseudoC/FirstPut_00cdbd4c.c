// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FirstPut
// Entry Point: 00cdbd4c
// Size: 24 bytes
// Signature: undefined __thiscall FirstPut(AuthenticatedDecryptionFilter * this, uchar * param_1)


/* CryptoPP::AuthenticatedDecryptionFilter::FirstPut(unsigned char const*) */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::FirstPut
          (AuthenticatedDecryptionFilter *this,uchar *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cdbd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x90) + 0x38))(this + 0x90,param_1,*(undefined8 *)(this + 0x30),0,1)
  ;
  return;
}


