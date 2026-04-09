// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetGroupOrder
// Entry Point: 00caf91c
// Size: 116 bytes
// Signature: undefined GetGroupOrder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_IntegerBased::GetGroupOrder() const */

void CryptoPP::DL_GroupParameters_IntegerBased::GetGroupOrder(void)

{
  int iVar1;
  long *in_x0;
  Integer *pIVar2;
  
  iVar1 = (**(code **)(*in_x0 + 0xb0))();
  pIVar2 = (Integer *)(**(code **)(*in_x0 + 0xa0))();
  Integer::One();
  if (iVar1 == 1) {
    Integer::Minus(pIVar2);
    return;
  }
  Integer::Plus(pIVar2);
  return;
}


