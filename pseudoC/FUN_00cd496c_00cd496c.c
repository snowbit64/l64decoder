// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00cd496c
// Entry Point: 00cd496c
// Size: 368 bytes
// Signature: undefined FUN_00cd496c(void)


void FUN_00cd496c(undefined8 *param_1,long *param_2,long param_3)

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
    (**(code **)(*param_2 + 0xd0))(local_78,param_2,param_3 + 8);
                    /* try { // try from 00cd4a04 to 00cd4a0f has its CatchHandler @ 00cd4b08 */
    (**(code **)(*param_2 + 0xd0))(local_a8,param_2,param_3 + 0x38);
    *param_1 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cd4a24 to 00cd4a2f has its CatchHandler @ 00cd4af4 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 1),(Integer *)local_78);
                    /* try { // try from 00cd4a34 to 00cd4a3b has its CatchHandler @ 00cd4ae4 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 7),(Integer *)local_a8);
    *(undefined *)(param_1 + 0xd) = 0;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    local_a8[0] = &PTR__Integer_0100c890;
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd4a78 to 00cd4a7b has its CatchHandler @ 00cd4ae0 */
    CryptoPP::UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00cd4aac to 00cd4aaf has its CatchHandler @ 00cd4adc */
    CryptoPP::UnalignedDeallocate(local_58);
  }
  else {
    *param_1 = &PTR__ECPPoint_00fe9fd8;
    CryptoPP::Integer::Integer((Integer *)(param_1 + 1),(Integer *)(param_3 + 8));
                    /* try { // try from 00cd49c8 to 00cd49cf has its CatchHandler @ 00cd4b14 */
    CryptoPP::Integer::Integer((Integer *)(param_1 + 7),(Integer *)(param_3 + 0x38));
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_3 + 0x68);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


