// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00c915d0
// Size: 252 bytes
// Signature: undefined __cdecl Equal(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::Equal(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&) const */

uint CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::Equal
               (PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  PolynomialMod2 *pPVar4;
  PolynomialMod2 *pPVar5;
  PolynomialMod2 aPStack_58 [8];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::Xor(param_2);
                    /* try { // try from 00c91608 to 00c91613 has its CatchHandler @ 00c9170c */
  pPVar4 = (PolynomialMod2 *)PolynomialMod2::operator=(param_1 + 0x50,aPStack_58);
  uVar2 = local_50;
  if (uStack_48 <= local_50) {
    uVar2 = uStack_48;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_40 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91640 to 00c91643 has its CatchHandler @ 00c91708 */
  UnalignedDeallocate(local_40);
  PolynomialMod2::Modulo(pPVar4);
                    /* try { // try from 00c91654 to 00c9165f has its CatchHandler @ 00c916d0 */
  pPVar4 = (PolynomialMod2 *)PolynomialMod2::operator=(param_1 + 0x50,aPStack_58);
  if (uStack_48 <= local_50) {
    local_50 = uStack_48;
  }
  for (; local_50 != 0; local_50 = local_50 - 1) {
    *(undefined4 *)((long)local_40 + local_50 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9168c to 00c9168f has its CatchHandler @ 00c916cc */
  UnalignedDeallocate(local_40);
  pPVar5 = (PolynomialMod2 *)PolynomialMod2::Zero();
  uVar3 = PolynomialMod2::Equals(pPVar4,pPVar5);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


