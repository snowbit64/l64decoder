// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateEphemeralKeyPair
// Entry Point: 00c7bc00
// Size: 84 bytes
// Signature: undefined __thiscall GenerateEphemeralKeyPair(AuthenticatedKeyAgreementDomain * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::AuthenticatedKeyAgreementDomain::GenerateEphemeralKeyPair(CryptoPP::RandomNumberGenerator&,
   unsigned char*, unsigned char*) const */

void __thiscall
CryptoPP::AuthenticatedKeyAgreementDomain::GenerateEphemeralKeyPair
          (AuthenticatedKeyAgreementDomain *this,RandomNumberGenerator *param_1,uchar *param_2,
          uchar *param_3)

{
  (**(code **)(*(long *)this + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00c7bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))(this,param_1,param_2,param_3);
  return;
}


