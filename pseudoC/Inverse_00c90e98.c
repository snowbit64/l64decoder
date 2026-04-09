// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00c90e98
// Size: 140 bytes
// Signature: undefined __thiscall Inverse(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Inverse(CryptoPP::PolynomialMod2 const&)
   const */

undefined8 __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Inverse
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1)

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
                    /* try { // try from 00c90ec4 to 00c90ecb has its CatchHandler @ 00c90f28 */
  uVar2 = PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x38),aPStack_48);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00c90ef8 to 00c90efb has its CatchHandler @ 00c90f24 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


