// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca9ee4
// Size: 188 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_EC<CryptoPP::EC2N> * this, RandomNumberGenerator * param_1, EC2N * param_2, EC2NPoint * param_3, Integer * param_4)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::EC2N const&, CryptoPP::EC2NPoint const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::Initialize
          (DL_PrivateKey_EC<CryptoPP::EC2N> *this,RandomNumberGenerator *param_1,EC2N *param_2,
          EC2NPoint *param_3,Integer *param_4)

{
  long lVar1;
  Integer *pIVar2;
  long local_248 [62];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)Integer::Zero();
  DL_GroupParameters_EC<CryptoPP::EC2N>::DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)local_248,param_2,param_3,param_4,pIVar2);
                    /* try { // try from 00ca9f54 to 00ca9f5f has its CatchHandler @ 00ca9fa0 */
  (**(code **)(*(long *)this + 0x48))
            (this,param_1,(long)local_248 + *(long *)(local_248[0] + -0x70));
  DL_GroupParameters_EC<CryptoPP::EC2N>::~DL_GroupParameters_EC
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)local_248);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


