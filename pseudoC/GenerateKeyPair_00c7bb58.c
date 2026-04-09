// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateKeyPair
// Entry Point: 00c7bb58
// Size: 84 bytes
// Signature: undefined __thiscall GenerateKeyPair(SimpleKeyAgreementDomain * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::SimpleKeyAgreementDomain::GenerateKeyPair(CryptoPP::RandomNumberGenerator&, unsigned
   char*, unsigned char*) const */

void __thiscall
CryptoPP::SimpleKeyAgreementDomain::GenerateKeyPair
          (SimpleKeyAgreementDomain *this,RandomNumberGenerator *param_1,uchar *param_2,
          uchar *param_3)

{
  (**(code **)(*(long *)this + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00c7bba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this,param_1,param_2,param_3);
  return;
}


