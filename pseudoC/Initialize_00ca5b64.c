// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca5b64
// Size: 108 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_EC<CryptoPP::EC2N> * this, EC2N * param_1, EC2NPoint * param_2, Integer * param_3, EC2NPoint * param_4)


/* CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::Initialize(CryptoPP::EC2N const&, CryptoPP::EC2NPoint
   const&, CryptoPP::Integer const&, CryptoPP::EC2NPoint const&) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::EC2N>::Initialize
          (DL_PublicKey_EC<CryptoPP::EC2N> *this,EC2N *param_1,EC2NPoint *param_2,Integer *param_3,
          EC2NPoint *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)Integer::Zero();
  DL_GroupParameters_EC<CryptoPP::EC2N>::Initialize
            ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x18),param_1,param_2,param_3,pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00ca5bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_4);
  return;
}


