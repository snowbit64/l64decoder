// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00c87d38
// Size: 284 bytes
// Signature: undefined __thiscall operator==(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>> * this, DL_GroupParameters_IntegerBasedImpl * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,
   CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer> > const&) const */

bool __thiscall
CryptoPP::
DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
::operator==(DL_GroupParameters_IntegerBasedImpl<CryptoPP::ModExpPrecomputation,CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>>
             *this,DL_GroupParameters_IntegerBasedImpl *param_1)

{
  int iVar1;
  Integer *pIVar2;
  Integer *pIVar3;
  long *plVar4;
  ulong uVar5;
  
  pIVar2 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  iVar1 = Integer::Compare(pIVar2,pIVar3);
  if (iVar1 != 0) {
    return false;
  }
  plVar4 = (long *)(**(code **)(*(long *)this + 0xc0))(this);
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  pIVar2 = (Integer *)(this + 0x60);
  if ((uVar5 & 1) == 0) {
    pIVar2 = *(Integer **)(this + 200);
  }
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0xc0))(param_1);
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  pIVar3 = (Integer *)(param_1 + 0x60);
  if ((uVar5 & 1) == 0) {
    pIVar3 = *(Integer **)(param_1 + 200);
  }
  iVar1 = Integer::Compare(pIVar2,pIVar3);
  if (iVar1 != 0) {
    return false;
  }
  pIVar2 = (Integer *)(**(code **)(*(long *)this + 0x50))(this);
  pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  iVar1 = Integer::Compare(pIVar2,pIVar3);
  return iVar1 == 0;
}


