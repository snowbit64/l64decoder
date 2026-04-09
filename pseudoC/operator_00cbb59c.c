// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cbb59c
// Size: 228 bytes
// Signature: undefined __thiscall operator=(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>> * this, DL_GroupParametersImpl * param_1)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint> > const&) */

DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
* __thiscall
CryptoPP::
DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
::operator=(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
            *this,DL_GroupParametersImpl *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(param_1 + 0x28);
  plVar3 = *(long **)(this + 0x28);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))();
  }
  *(long **)(this + 0x28) = plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x30),(PolynomialMod2 *)(param_1 + 0x30));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x50),(PolynomialMod2 *)(param_1 + 0x50));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x78),(PolynomialMod2 *)(param_1 + 0x78));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x98),(PolynomialMod2 *)(param_1 + 0x98));
  this[0xb8] = *(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
                 *)(param_1 + 0xb8);
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0xd0),(PolynomialMod2 *)(param_1 + 0xd0));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0xf0),(PolynomialMod2 *)(param_1 + 0xf0));
  uVar1 = *(undefined4 *)(param_1 + 0x118);
  this[0x110] = *(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
                  *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x118) = uVar1;
  Integer::operator=((Integer *)(this + 0x120),(Integer *)(param_1 + 0x120));
  if (this != (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::EC2N>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>,CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>>
               *)param_1) {
    std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::
    assign<CryptoPP::EC2NPoint*>
              ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
               (this + 0x150),*(EC2NPoint **)(param_1 + 0x150),*(EC2NPoint **)(param_1 + 0x158));
  }
  return this;
}


