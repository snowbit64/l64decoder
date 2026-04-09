// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00ce92ac
// Size: 144 bytes
// Signature: undefined __cdecl Square(PolynomialMod2 * param_1)


/* CryptoPP::GF2NT233::Square(CryptoPP::PolynomialMod2 const&) const */

undefined8 CryptoPP::GF2NT233::Square(PolynomialMod2 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::Squared();
                    /* try { // try from 00ce92d8 to 00ce92e3 has its CatchHandler @ 00ce9340 */
  uVar2 = GF2NT::Reduced(param_1);
  if (uStack_38 <= local_40) {
    local_40 = uStack_38;
  }
  for (; local_40 != 0; local_40 = local_40 - 1) {
    *(undefined4 *)((long)local_30 + local_40 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce9310 to 00ce9313 has its CatchHandler @ 00ce933c */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


