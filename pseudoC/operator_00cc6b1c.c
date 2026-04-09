// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cc6b1c
// Size: 176 bytes
// Signature: undefined __thiscall operator=(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, DL_PublicKeyImpl * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   > const&) */

DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::operator=
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          DL_PublicKeyImpl *param_1)

{
  undefined4 uVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
  ::operator=((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
               *)(this + 0x18),(DL_GroupParametersImpl *)(param_1 + 0x18));
  if (this != (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)param_1) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign<unsigned_int*>
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x188),
               *(uint **)(param_1 + 0x188),*(uint **)(param_1 + 400));
  }
  Integer::operator=((Integer *)(this + 0x1a0),(Integer *)(param_1 + 0x1a0));
  Integer::operator=((Integer *)(this + 0x1d0),(Integer *)(param_1 + 0x1d0));
  *(undefined2 *)(this + 0x200) = *(undefined2 *)(param_1 + 0x200);
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x218),(PolynomialMod2 *)(param_1 + 0x218));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x238),(PolynomialMod2 *)(param_1 + 0x238));
  uVar1 = *(undefined4 *)(param_1 + 0x260);
  this[600] = *(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)(param_1 + 600);
  *(undefined4 *)(this + 0x260) = uVar1;
  Integer::operator=((Integer *)(this + 0x268),(Integer *)(param_1 + 0x268));
  if (this != (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *)param_1) {
    std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
    assign<CryptoPP::EC2NPoint*>
              ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
               (this + 0x298),*(EC2NPoint **)(param_1 + 0x298),*(EC2NPoint **)(param_1 + 0x2a0));
  }
  return this;
}


