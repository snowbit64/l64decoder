// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cc3c08
// Entry Point: 00cc3c08
// Size: 456 bytes
// Signature: undefined FUN_00cc3c08(void)


void FUN_00cc3c08(long param_1,long param_2)

{
  long lVar1;
  PolynomialMod2 aPStack_e0 [8];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  PolynomialMod2 aPStack_c0 [8];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined local_a0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_e0,(PolynomialMod2 *)(param_1 + 8));
                    /* try { // try from 00cc3c6c to 00cc3c77 has its CatchHandler @ 00cc3df0 */
  CryptoPP::PolynomialMod2::PolynomialMod2(aPStack_c0,(PolynomialMod2 *)(param_1 + 0x28));
  local_a0 = *(undefined *)(param_1 + 0x48);
                    /* try { // try from 00cc3c88 to 00cc3c93 has its CatchHandler @ 00cc3ddc */
  CryptoPP::Integer::Integer((Integer *)local_98,(Integer *)(param_1 + 0x50));
                    /* try { // try from 00cc3c98 to 00cc3cf7 has its CatchHandler @ 00cc3e04 */
  CryptoPP::PolynomialMod2::operator=
            ((PolynomialMod2 *)(param_1 + 8),(PolynomialMod2 *)(param_2 + 8));
  CryptoPP::PolynomialMod2::operator=
            ((PolynomialMod2 *)(param_1 + 0x28),(PolynomialMod2 *)(param_2 + 0x28));
  *(undefined *)(param_1 + 0x48) = *(undefined *)(param_2 + 0x48);
  CryptoPP::Integer::operator=((Integer *)(param_1 + 0x50),(Integer *)(param_2 + 0x50));
  CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(param_2 + 8),aPStack_e0);
  CryptoPP::PolynomialMod2::operator=((PolynomialMod2 *)(param_2 + 0x28),aPStack_c0);
  *(undefined *)(param_2 + 0x48) = local_a0;
  CryptoPP::Integer::operator=((Integer *)(param_2 + 0x50),(Integer *)local_98);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc3d30 to 00cc3d33 has its CatchHandler @ 00cc3dd8 */
  CryptoPP::UnalignedDeallocate(local_78);
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc3d6c to 00cc3d6f has its CatchHandler @ 00cc3dd4 */
  CryptoPP::UnalignedDeallocate(local_a8);
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc3d98 to 00cc3d9b has its CatchHandler @ 00cc3dd0 */
  CryptoPP::UnalignedDeallocate(local_c8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


