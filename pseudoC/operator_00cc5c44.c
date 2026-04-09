// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cc5c44
// Size: 176 bytes
// Signature: undefined __thiscall operator=(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, DL_PublicKeyImpl * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   > const&) */

DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::operator=
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          DL_PublicKeyImpl *param_1)

{
  undefined4 uVar1;
  
  DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
  ::operator=((DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
               *)(this + 0x18),(DL_GroupParametersImpl *)(param_1 + 0x18));
  if (this != (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)param_1) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign<unsigned_int*>
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x110),
               *(uint **)(param_1 + 0x110),*(uint **)(param_1 + 0x118));
  }
  Integer::operator=((Integer *)(this + 0x128),(Integer *)(param_1 + 0x128));
  Integer::operator=((Integer *)(this + 0x158),(Integer *)(param_1 + 0x158));
  *(undefined2 *)(this + 0x188) = *(undefined2 *)(param_1 + 0x188);
  Integer::operator=((Integer *)(this + 0x1a0),(Integer *)(param_1 + 0x1a0));
  Integer::operator=((Integer *)(this + 0x1d0),(Integer *)(param_1 + 0x1d0));
  uVar1 = *(undefined4 *)(param_1 + 0x208);
  this[0x200] = *(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)
                 (param_1 + 0x200);
  *(undefined4 *)(this + 0x208) = uVar1;
  Integer::operator=((Integer *)(this + 0x210),(Integer *)(param_1 + 0x210));
  if (this != (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *)param_1) {
    std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
    assign<CryptoPP::ECPPoint*>
              ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
               (this + 0x240),*(ECPPoint **)(param_1 + 0x240),*(ECPPoint **)(param_1 + 0x248));
  }
  return this;
}


