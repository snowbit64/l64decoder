// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetGroupOrder
// Entry Point: 00cafb20
// Size: 120 bytes
// Signature: undefined __thiscall GetGroupOrder(DL_GroupParameters_IntegerBased * this)


/* non-virtual thunk to CryptoPP::DL_GroupParameters_IntegerBased::GetGroupOrder() const */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::GetGroupOrder(DL_GroupParameters_IntegerBased *this)

{
  int iVar1;
  Integer *pIVar2;
  long *plVar3;
  
  plVar3 = (long *)(this + -8);
  iVar1 = (**(code **)(*plVar3 + 0xb0))(plVar3);
  pIVar2 = (Integer *)(**(code **)(*plVar3 + 0xa0))(plVar3);
  Integer::One();
  if (iVar1 == 1) {
    Integer::Minus(pIVar2);
    return;
  }
  Integer::Plus(pIVar2);
  return;
}


