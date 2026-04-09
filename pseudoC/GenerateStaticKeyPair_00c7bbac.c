// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateStaticKeyPair
// Entry Point: 00c7bbac
// Size: 84 bytes
// Signature: undefined __thiscall GenerateStaticKeyPair(AuthenticatedKeyAgreementDomain * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::AuthenticatedKeyAgreementDomain::GenerateStaticKeyPair(CryptoPP::RandomNumberGenerator&,
   unsigned char*, unsigned char*) const */

void __thiscall
CryptoPP::AuthenticatedKeyAgreementDomain::GenerateStaticKeyPair
          (AuthenticatedKeyAgreementDomain *this,RandomNumberGenerator *param_1,uchar *param_2,
          uchar *param_3)

{
  (**(code **)(*(long *)this + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00c7bbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this,param_1,param_2,param_3);
  return;
}


