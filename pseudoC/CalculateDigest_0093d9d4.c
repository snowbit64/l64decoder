// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CalculateDigest
// Entry Point: 0093d9d4
// Size: 68 bytes
// Signature: undefined __thiscall CalculateDigest(HashTransformation * this, uchar * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::HashTransformation::CalculateDigest(unsigned char*, unsigned char const*, unsigned
   long) */

void __thiscall
CryptoPP::HashTransformation::CalculateDigest
          (HashTransformation *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  (**(code **)(*(long *)this + 0x28))(this,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0093da14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x38))(this,param_1);
  return;
}


