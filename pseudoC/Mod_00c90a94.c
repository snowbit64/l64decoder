// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Mod
// Entry Point: 00c90a94
// Size: 184 bytes
// Signature: undefined __thiscall Mod(AbstractEuclideanDomain<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Mod(CryptoPP::PolynomialMod2 const&,
   CryptoPP::PolynomialMod2 const&) const */

AbstractEuclideanDomain<CryptoPP::PolynomialMod2> * __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Mod
          (AbstractEuclideanDomain<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2)

{
  long lVar1;
  PolynomialMod2 aPStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::PolynomialMod2(aPStack_68);
                    /* try { // try from 00c90ad8 to 00c90aef has its CatchHandler @ 00c90b50 */
  (**(code **)(*(long *)this + 0xc0))(this,this + 0x18,aPStack_68,param_1,param_2);
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  for (; local_60 != 0; local_60 = local_60 - 1) {
    *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
  }
                    /* try { // try from 00c90b18 to 00c90b1b has its CatchHandler @ 00c90b4c */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this + 0x18;
}


