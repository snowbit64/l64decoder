// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyTruncatedDigest
// Entry Point: 0093daf0
// Size: 84 bytes
// Signature: undefined __thiscall VerifyTruncatedDigest(HashTransformation * this, uchar * param_1, ulong param_2, uchar * param_3, ulong param_4)


/* CryptoPP::HashTransformation::VerifyTruncatedDigest(unsigned char const*, unsigned long, unsigned
   char const*, unsigned long) */

void __thiscall
CryptoPP::HashTransformation::VerifyTruncatedDigest
          (HashTransformation *this,uchar *param_1,ulong param_2,uchar *param_3,ulong param_4)

{
  (**(code **)(*(long *)this + 0x28))(this,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0093db40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))(this,param_1,param_2);
  return;
}


