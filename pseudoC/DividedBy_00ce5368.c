// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DividedBy
// Entry Point: 00ce5368
// Size: 152 bytes
// Signature: undefined __cdecl DividedBy(PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::DividedBy(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::PolynomialMod2::DividedBy(PolynomialMod2 *param_1)

{
  long lVar1;
  ulong uVar2;
  PolynomialMod2 *in_x1;
  PolynomialMod2 *in_x8;
  PolynomialMod2 aPStack_48 [8];
  ulong local_40;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  local_40 = 0x3fffffffffffffff;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
                    /* try { // try from 00ce53a4 to 00ce53af has its CatchHandler @ 00ce5404 */
  Divide(aPStack_48,in_x8,param_1,in_x1);
  uVar2 = local_40;
  if (local_38 <= local_40) {
    uVar2 = local_38;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_30 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce53d8 to 00ce53db has its CatchHandler @ 00ce5400 */
  UnalignedDeallocate(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


