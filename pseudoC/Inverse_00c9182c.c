// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00c9182c
// Size: 140 bytes
// Signature: undefined __thiscall Inverse(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, PolynomialMod2 * param_1)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::Inverse(CryptoPP::PolynomialMod2 const&) const */

undefined8 __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::Inverse
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          PolynomialMod2 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  PolynomialMod2 aPStack_48 [8];
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::PolynomialMod2(aPStack_48,param_1);
                    /* try { // try from 00c91858 to 00c9185f has its CatchHandler @ 00c918bc */
  uVar2 = PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x50),aPStack_48);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9188c to 00c9188f has its CatchHandler @ 00c918b8 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


