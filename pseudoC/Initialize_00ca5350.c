// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca5350
// Size: 124 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_EC<CryptoPP::ECP> * this, DL_GroupParameters_EC * param_1, ECPPoint * param_2)


/* CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::Initialize(CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   const&, CryptoPP::ECPPoint const&) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::Initialize
          (DL_PublicKey_EC<CryptoPP::ECP> *this,DL_GroupParameters_EC *param_1,ECPPoint *param_2)

{
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::operator=((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
               *)(this + 0x18),(DL_GroupParametersImpl *)param_1);
  if ((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
       *)(this + 0x18) !=
      (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
       *)param_1) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign<unsigned_int*>
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x110),
               *(uint **)(param_1 + 0xf8),*(uint **)(param_1 + 0x100));
  }
  Integer::operator=((Integer *)(this + 0x128),(Integer *)(param_1 + 0x110));
  Integer::operator=((Integer *)(this + 0x158),(Integer *)(param_1 + 0x140));
  *(undefined2 *)(this + 0x188) = *(undefined2 *)(param_1 + 0x170);
                    /* WARNING: Could not recover jumptable at 0x00ca53c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_2);
  return;
}


