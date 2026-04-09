// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: KeyAgreementCommon
// Entry Point: 00be9384
// Size: 156 bytes
// Signature: undefined __thiscall KeyAgreementCommon(KeyAgreementCommon * this)


/* KeyAgreementCommon::KeyAgreementCommon() */

void __thiscall KeyAgreementCommon::KeyAgreementCommon(KeyAgreementCommon *this)

{
  long lVar1;
  undefined **local_1d0;
  void *local_1c8;
  void *local_1c0;
  DL_GroupParameters_EC<CryptoPP::ECP> aDStack_1b0 [376];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  CryptoPP::ASN1::secp256r1();
                    /* try { // try from 00be93b0 to 00be93bb has its CatchHandler @ 00be9438 */
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
            (aDStack_1b0,(OID *)&local_1d0);
                    /* try { // try from 00be93c0 to 00be93c7 has its CatchHandler @ 00be9420 */
  CryptoPP::
  DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
  ::DH_Domain((DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
               *)(this + 8),(DL_GroupParameters_EC *)aDStack_1b0);
  CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC(aDStack_1b0);
  local_1d0 = &PTR__OID_00fecd98;
  if (local_1c8 != (void *)0x0) {
    local_1c0 = local_1c8;
    operator_delete(local_1c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


