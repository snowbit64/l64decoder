// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00c918f8
// Size: 148 bytes
// Signature: undefined __cdecl Subtract(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::Subtract(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&) const */

undefined8
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::Subtract
          (PolynomialMod2 *param_1,PolynomialMod2 *param_2)

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
  PolynomialMod2::Xor(param_2);
                    /* try { // try from 00c9192c to 00c91933 has its CatchHandler @ 00c91990 */
  uVar2 = PolynomialMod2::operator=(param_1 + 0x50,aPStack_48);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91960 to 00c91963 has its CatchHandler @ 00c9198c */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


