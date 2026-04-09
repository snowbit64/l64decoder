// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00cb5b5c
// Size: 196 bytes
// Signature: undefined __thiscall operator=(DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased> * this, DL_GroupParametersImpl * param_1)


/* CryptoPP::DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,
   CryptoPP::DL_GroupParameters_IntegerBased>::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,
   CryptoPP::DL_GroupParameters_IntegerBased> const&) */

DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
* __thiscall
CryptoPP::
DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
::operator=(DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
            *this,DL_GroupParametersImpl *param_1)

{
  MontgomeryRepresentation *this_00;
  long *plVar1;
  MontgomeryRepresentation *pMVar2;
  
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  Integer::operator=((Integer *)(this + 0x18),(Integer *)(param_1 + 0x18));
  pMVar2 = *(MontgomeryRepresentation **)(param_1 + 0x50);
  plVar1 = *(long **)(this + 0x50);
  if (pMVar2 == (MontgomeryRepresentation *)0x0) {
    *(undefined8 *)(this + 0x50) = 0;
  }
  else {
    this_00 = (MontgomeryRepresentation *)operator_new(0xf8);
                    /* try { // try from 00cb5ba4 to 00cb5bab has its CatchHandler @ 00cb5c20 */
    MontgomeryRepresentation::MontgomeryRepresentation(this_00,pMVar2);
    *(MontgomeryRepresentation **)(this + 0x50) = this_00;
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  Integer::operator=((Integer *)(this + 0x60),(Integer *)(param_1 + 0x60));
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  Integer::operator=((Integer *)(this + 0x98),(Integer *)(param_1 + 0x98));
  if (this != (DL_GroupParametersImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>,CryptoPP::DL_GroupParameters_IntegerBased>
               *)param_1) {
    std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::
    assign<CryptoPP::Integer*>
              ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)(this + 200),
               *(Integer **)(param_1 + 200),*(Integer **)(param_1 + 0xd0));
  }
  return this;
}


