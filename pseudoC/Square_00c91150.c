// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00c91150
// Size: 144 bytes
// Signature: undefined __cdecl Square(PolynomialMod2 * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Square(CryptoPP::PolynomialMod2 const&)
   const */

undefined8 CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Square(PolynomialMod2 *param_1)

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
  PolynomialMod2::Squared();
                    /* try { // try from 00c91180 to 00c91187 has its CatchHandler @ 00c911e4 */
  uVar2 = PolynomialMod2::operator=(param_1 + 0x38,aPStack_48);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00c911b4 to 00c911b7 has its CatchHandler @ 00c911e0 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


