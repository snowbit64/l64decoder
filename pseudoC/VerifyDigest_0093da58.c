// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyDigest
// Entry Point: 0093da58
// Size: 68 bytes
// Signature: undefined __thiscall VerifyDigest(HashTransformation * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::HashTransformation::VerifyDigest(unsigned char const*, unsigned char const*, unsigned
   long) */

void __thiscall
CryptoPP::HashTransformation::VerifyDigest
          (HashTransformation *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  (**(code **)(*(long *)this + 0x28))(this,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0093da98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x70))(this,param_1);
  return;
}


