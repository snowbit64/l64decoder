// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator%
// Entry Point: 00ce66d8
// Size: 152 bytes
// Signature: undefined __thiscall operator%(CryptoPP * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2
   const&) */

void __thiscall CryptoPP::operator%(CryptoPP *this,PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  long lVar1;
  ulong uVar2;
  PolynomialMod2 *in_x8;
  PolynomialMod2 aPStack_48 [8];
  ulong local_40;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = 0x3fffffffffffffff;
                    /* try { // try from 00ce6714 to 00ce671f has its CatchHandler @ 00ce6774 */
  PolynomialMod2::Divide(in_x8,aPStack_48,(PolynomialMod2 *)this,param_1);
  uVar2 = local_40;
  if (local_38 <= local_40) {
    uVar2 = local_38;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_30 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6748 to 00ce674b has its CatchHandler @ 00ce6770 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


