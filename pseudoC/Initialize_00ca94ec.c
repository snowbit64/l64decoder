// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca94ec
// Size: 188 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_EC<CryptoPP::ECP> * this, RandomNumberGenerator * param_1, ECP * param_2, ECPPoint * param_3, Integer * param_4)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::ECP const&, CryptoPP::ECPPoint const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::Initialize
          (DL_PrivateKey_EC<CryptoPP::ECP> *this,RandomNumberGenerator *param_1,ECP *param_2,
          ECPPoint *param_3,Integer *param_4)

{
  long lVar1;
  Integer *pIVar2;
  long local_1d0 [47];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)Integer::Zero();
  DL_GroupParameters_EC<CryptoPP::ECP>::DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)local_1d0,param_2,param_3,param_4,pIVar2);
                    /* try { // try from 00ca955c to 00ca9567 has its CatchHandler @ 00ca95a8 */
  (**(code **)(*(long *)this + 0x48))
            (this,param_1,(long)local_1d0 + *(long *)(local_1d0[0] + -0x70));
  DL_GroupParameters_EC<CryptoPP::ECP>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::ECP> *)local_1d0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


