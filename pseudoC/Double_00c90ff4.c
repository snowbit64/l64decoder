// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Double
// Entry Point: 00c90ff4
// Size: 148 bytes
// Signature: undefined __cdecl Double(PolynomialMod2 * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Double(CryptoPP::PolynomialMod2 const&)
   const */

undefined8 CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Double(PolynomialMod2 *param_1)

{
  long lVar1;
  PolynomialMod2 *pPVar2;
  undefined8 uVar3;
  PolynomialMod2 aPStack_48 [8];
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pPVar2 = (PolynomialMod2 *)PolynomialMod2::Zero();
  PolynomialMod2::PolynomialMod2(aPStack_48,pPVar2);
                    /* try { // try from 00c91028 to 00c9102f has its CatchHandler @ 00c9108c */
  uVar3 = PolynomialMod2::operator=(param_1 + 0x38,aPStack_48);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9105c to 00c9105f has its CatchHandler @ 00c91088 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


