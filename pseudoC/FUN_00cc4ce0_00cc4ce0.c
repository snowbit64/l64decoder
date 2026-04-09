// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cc4ce0
// Entry Point: 00cc4ce0
// Size: 472 bytes
// Signature: undefined FUN_00cc4ce0(void)


void FUN_00cc4ce0(long param_1,long param_2)

{
  long lVar1;
  undefined **local_108 [2];
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined **local_d8 [2];
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  undefined local_a8;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  CryptoPP::Integer::Integer((Integer *)local_108,(Integer *)(param_1 + 8));
                    /* try { // try from 00cc4d44 to 00cc4d4f has its CatchHandler @ 00cc4ed8 */
  CryptoPP::Integer::Integer((Integer *)local_d8,(Integer *)(param_1 + 0x38));
  local_a8 = *(undefined *)(param_1 + 0x68);
                    /* try { // try from 00cc4d60 to 00cc4d6b has its CatchHandler @ 00cc4ec4 */
  CryptoPP::Integer::Integer((Integer *)local_a0,(Integer *)(param_1 + 0x70));
                    /* try { // try from 00cc4d70 to 00cc4dcf has its CatchHandler @ 00cc4eec */
  CryptoPP::Integer::operator=((Integer *)(param_1 + 8),(Integer *)(param_2 + 8));
  CryptoPP::Integer::operator=((Integer *)(param_1 + 0x38),(Integer *)(param_2 + 0x38));
  *(undefined *)(param_1 + 0x68) = *(undefined *)(param_2 + 0x68);
  CryptoPP::Integer::operator=((Integer *)(param_1 + 0x70),(Integer *)(param_2 + 0x70));
  CryptoPP::Integer::operator=((Integer *)(param_2 + 8),(Integer *)local_108);
  CryptoPP::Integer::operator=((Integer *)(param_2 + 0x38),(Integer *)local_d8);
  *(undefined *)(param_2 + 0x68) = local_a8;
  CryptoPP::Integer::operator=((Integer *)(param_2 + 0x70),(Integer *)local_a0);
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  local_a0[0] = &PTR__Integer_0100c890;
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc4e08 to 00cc4e0b has its CatchHandler @ 00cc4ec0 */
  CryptoPP::UnalignedDeallocate(local_80);
  local_d8[0] = &PTR__Integer_0100c890;
  if (uStack_c0 <= local_c8) {
    local_c8 = uStack_c0;
  }
  for (; local_c8 != 0; local_c8 = local_c8 - 1) {
    *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc4e4c to 00cc4e4f has its CatchHandler @ 00cc4ebc */
  CryptoPP::UnalignedDeallocate(local_b8);
  local_108[0] = &PTR__Integer_0100c890;
  if (uStack_f0 <= local_f8) {
    local_f8 = uStack_f0;
  }
  for (; local_f8 != 0; local_f8 = local_f8 - 1) {
    *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc4e80 to 00cc4e83 has its CatchHandler @ 00cc4eb8 */
  CryptoPP::UnalignedDeallocate(local_e8);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


