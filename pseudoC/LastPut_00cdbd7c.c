// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastPut
// Entry Point: 00cdbd7c
// Size: 104 bytes
// Signature: undefined __thiscall LastPut(AuthenticatedDecryptionFilter * this, uchar * param_1, ulong param_2)


/* CryptoPP::AuthenticatedDecryptionFilter::LastPut(unsigned char const*, unsigned long) */

void __thiscall
CryptoPP::AuthenticatedDecryptionFilter::LastPut
          (AuthenticatedDecryptionFilter *this,uchar *param_1,ulong param_2)

{
  (**(code **)(*(long *)(this + 0x158) + 0x38))(this + 0x158,0,0,0xffffffff,1);
                    /* WARNING: Could not recover jumptable at 0x00cdbde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + 0x90) + 0x38))(this + 0x90,param_1,param_2,0xffffffff,1);
  return;
}


