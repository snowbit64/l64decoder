// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cd4b28
// Entry Point: 00cd4b28
// Size: 368 bytes
// Signature: undefined FUN_00cd4b28(void)


void FUN_00cd4b28(undefined8 *param_1,long *param_2,long param_3)

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
  if (*(char *)(param_3 + 0x68) == '\0') {
    (**(code **)(*param_2 + 0xd8))(local_78,param_2,param_3 + 8);
                    /* try { // try from 00cd4bc0 to 00cd4bcb has its CatchHandler @ 00cd4cc4 */
    (**(code **)(*param_2 + 0xd8))(local_a8,param_2,param_3 + 0x38);
    *param_1 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cd4be0 to 00cd4beb has its CatchHandler @ 00cd4cb0 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 1),(Integer *)local_78);
                    /* try { // try from 00cd4bf0 to 00cd4bf7 has its CatchHandler @ 00cd4ca0 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 7),(Integer *)local_a8);
    *(undefined *)(param_1 + 0xd) = 0;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    local_a8[0] = &PTR__Integer_0100c890;
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd4c34 to 00cd4c37 has its CatchHandler @ 00cd4c9c */
    CryptoPP::UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd4c68 to 00cd4c6b has its CatchHandler @ 00cd4c98 */
    CryptoPP::UnalignedDeallocate(local_58);
  }
  else {
    *param_1 = &PTR__ECPPoint_00fe9fd8;
    CryptoPP::Integer::Integer((Integer *)(param_1 + 1),(Integer *)(param_3 + 8));
                    /* try { // try from 00cd4b84 to 00cd4b8b has its CatchHandler @ 00cd4cd0 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 7),(Integer *)(param_3 + 0x38));
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_3 + 0x68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


