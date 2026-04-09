// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCofactor
// Entry Point: 00cb2350
// Size: 188 bytes
// Signature: undefined GetCofactor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::GetCofactor() const */

void CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>::GetCofactor(void)

{
  long lVar1;
  long *in_x0;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*in_x0 + 0xb0))(local_68);
                    /* try { // try from 00cb2390 to 00cb23a7 has its CatchHandler @ 00cb2410 */
  (**(code **)(*in_x0 + 0xa0))();
  Integer::DividedBy((Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb23e0 to 00cb23e3 has its CatchHandler @ 00cb240c */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


