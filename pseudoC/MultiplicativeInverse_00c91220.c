// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00c91220
// Size: 188 bytes
// Signature: undefined __thiscall MultiplicativeInverse(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::MultiplicativeInverse(CryptoPP::PolynomialMod2
   const&) const */

undefined8 __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::MultiplicativeInverse
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1)

{
  long lVar1;
  PolynomialMod2 *pPVar2;
  ulong uVar3;
  undefined8 uVar4;
  PolynomialMod2 aPStack_58 [8];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar2 = (PolynomialMod2 *)PolynomialMod2::One();
  uVar3 = PolynomialMod2::Equals(param_1,pPVar2);
  if ((uVar3 & 1) == 0) {
    pPVar2 = (PolynomialMod2 *)PolynomialMod2::Zero();
  }
  else {
    pPVar2 = (PolynomialMod2 *)PolynomialMod2::One();
  }
  PolynomialMod2::PolynomialMod2(aPStack_58,pPVar2);
                    /* try { // try from 00c91278 to 00c9127f has its CatchHandler @ 00c912e0 */
  uVar4 = PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x38),aPStack_58);
  if (uStack_48 <= local_50) {
    local_50 = uStack_48;
  }
  for (; local_50 != 0; local_50 = local_50 - 1) {
    *(undefined4 *)((long)local_40 + local_50 * 4 + -4) = 0;
  }
                    /* try { // try from 00c912ac to 00c912af has its CatchHandler @ 00c912dc */
  UnalignedDeallocate(local_40);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


