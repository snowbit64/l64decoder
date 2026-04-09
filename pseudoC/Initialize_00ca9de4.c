// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca9de4
// Size: 124 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_EC<CryptoPP::EC2N> * this, DL_GroupParameters_EC * param_1, Integer * param_2)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::Initialize(CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::Initialize
          (DL_PrivateKey_EC<CryptoPP::EC2N> *this,DL_GroupParameters_EC *param_1,Integer *param_2)

{
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::operator=((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
               *)(this + 0x60),(DL_GroupParametersImpl *)param_1);
  if ((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
       *)(this + 0x60) !=
      (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
       *)param_1) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign<unsigned_int*>
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x1d0),
               *(uint **)(param_1 + 0x170),*(uint **)(param_1 + 0x178));
  }
  Integer::operator=((Integer *)(this + 0x1e8),(Integer *)(param_1 + 0x188));
  Integer::operator=((Integer *)(this + 0x218),(Integer *)(param_1 + 0x1b8));
  *(undefined2 *)(this + 0x248) = *(undefined2 *)(param_1 + 0x1e8);
                    /* WARNING: Could not recover jumptable at 0x00ca9e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_2);
  return;
}


