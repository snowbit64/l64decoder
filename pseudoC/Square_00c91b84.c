// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00c91b84
// Size: 232 bytes
// Signature: undefined __cdecl Square(PolynomialMod2 * param_1)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::Square(CryptoPP::PolynomialMod2 const&) const */

undefined8
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::Square
          (PolynomialMod2 *param_1)

{
  long lVar1;
  ulong uVar2;
  PolynomialMod2 *pPVar3;
  undefined8 uVar4;
  PolynomialMod2 aPStack_58 [8];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::Squared();
                    /* try { // try from 00c91bb8 to 00c91bc3 has its CatchHandler @ 00c91cac */
  pPVar3 = (PolynomialMod2 *)PolynomialMod2::operator=(param_1 + 0x50,aPStack_58);
  uVar2 = local_50;
  if (uStack_48 <= local_50) {
    uVar2 = uStack_48;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_40 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91bf0 to 00c91bf3 has its CatchHandler @ 00c91ca8 */
  UnalignedDeallocate(local_40);
  PolynomialMod2::Modulo(pPVar3);
                    /* try { // try from 00c91c04 to 00c91c0f has its CatchHandler @ 00c91c70 */
  uVar4 = PolynomialMod2::operator=(param_1 + 0x50,aPStack_58);
  if (uStack_48 <= local_50) {
    local_50 = uStack_48;
  }
  for (; local_50 != 0; local_50 = local_50 - 1) {
    *(undefined4 *)((long)local_40 + local_50 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91c3c to 00c91c3f has its CatchHandler @ 00c91c6c */
  UnalignedDeallocate(local_40);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


