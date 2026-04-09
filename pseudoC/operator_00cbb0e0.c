// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cbb0e0
// Size: 284 bytes
// Signature: undefined __thiscall operator=(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>> * this, DL_GroupParametersImpl * param_1)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,
   CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> > const&) */

DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
* __thiscall
CryptoPP::
DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
::operator=(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
            *this,DL_GroupParametersImpl *param_1)

{
  undefined4 uVar1;
  ECP *pEVar2;
  long *plVar3;
  ECP *pEVar4;
  
  pEVar4 = *(ECP **)(param_1 + 0x18);
  plVar3 = *(long **)(this + 0x18);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  if (pEVar4 == (ECP *)0x0) {
    *(undefined8 *)(this + 0x18) = 0;
  }
  else {
    pEVar2 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00cbb11c to 00cbb127 has its CatchHandler @ 00cbb200 */
    ECP::ECP(pEVar2,pEVar4,false);
    *(ECP **)(this + 0x18) = pEVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  pEVar4 = *(ECP **)(param_1 + 0x20);
  plVar3 = *(long **)(this + 0x20);
  if (pEVar4 == (ECP *)0x0) {
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    pEVar2 = (ECP *)operator_new(0xe8);
                    /* try { // try from 00cbb158 to 00cbb163 has its CatchHandler @ 00cbb1fc */
    ECP::ECP(pEVar2,pEVar4,false);
    *(ECP **)(this + 0x20) = pEVar2;
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  Integer::operator=((Integer *)(this + 0x38),(Integer *)(param_1 + 0x38));
  Integer::operator=((Integer *)(this + 0x68),(Integer *)(param_1 + 0x68));
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  this[0x98] = *(DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
                 *)(param_1 + 0x98);
  *(undefined4 *)(this + 0xa0) = uVar1;
  Integer::operator=((Integer *)(this + 0xa8),(Integer *)(param_1 + 0xa8));
  if (this != (DL_GroupParametersImpl<CryptoPP::EcPrecomputation<CryptoPP::ECP>,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>,CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>>
               *)param_1) {
    std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::
    assign<CryptoPP::ECPPoint*>
              ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
               (this + 0xd8),*(ECPPoint **)(param_1 + 0xd8),*(ECPPoint **)(param_1 + 0xe0));
  }
  return this;
}


