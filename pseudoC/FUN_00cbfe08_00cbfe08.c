// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cbfe08
// Entry Point: 00cbfe08
// Size: 288 bytes
// Signature: undefined FUN_00cbfe08(void)


void FUN_00cbfe08(Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  CryptoPP::Integer::Integer((Integer *)local_a8,param_1);
                    /* try { // try from 00cbfe4c to 00cbfe57 has its CatchHandler @ 00cbff30 */
  CryptoPP::Integer::Integer((Integer *)local_78,param_1 + 0x30);
                    /* try { // try from 00cbfe58 to 00cbfe8b has its CatchHandler @ 00cbff44 */
  CryptoPP::Integer::operator=(param_1,param_2);
  CryptoPP::Integer::operator=(param_1 + 0x30,param_2 + 0x30);
  CryptoPP::Integer::operator=(param_2,(Integer *)local_a8);
  CryptoPP::Integer::operator=(param_2 + 0x30,(Integer *)local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbfec4 to 00cbfec7 has its CatchHandler @ 00cbff2c */
  CryptoPP::UnalignedDeallocate(local_58);
  local_a8[0] = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbfef8 to 00cbfefb has its CatchHandler @ 00cbff28 */
  CryptoPP::UnalignedDeallocate(local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


