// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00c8f4e8
// Size: 184 bytes
// Signature: undefined __thiscall Subtract(AbstractGroup<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::Subtract(CryptoPP::PolynomialMod2 const&,
   CryptoPP::PolynomialMod2 const&) const */

undefined8 __thiscall
CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::Subtract
          (AbstractGroup<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  PolynomialMod2 aPStack_58 [8];
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::PolynomialMod2(aPStack_58,param_1);
                    /* try { // try from 00c8f520 to 00c8f543 has its CatchHandler @ 00c8f5a4 */
  uVar2 = (**(code **)(*(long *)this + 0x28))(this,param_2);
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,aPStack_58,uVar2);
  if (uStack_48 <= local_50) {
    local_50 = uStack_48;
  }
  for (; local_50 != 0; local_50 = local_50 - 1) {
    *(undefined4 *)((long)local_40 + local_50 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8f570 to 00c8f573 has its CatchHandler @ 00c8f5a0 */
  UnalignedDeallocate(local_40);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


