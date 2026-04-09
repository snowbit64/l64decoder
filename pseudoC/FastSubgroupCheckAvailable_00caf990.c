// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FastSubgroupCheckAvailable
// Entry Point: 00caf990
// Size: 236 bytes
// Signature: undefined FastSubgroupCheckAvailable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_IntegerBased::FastSubgroupCheckAvailable() const */

void CryptoPP::DL_GroupParameters_IntegerBased::FastSubgroupCheckAvailable(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)(in_x0 + 8) + 0xb8))(local_68);
                    /* try { // try from 00caf9c0 to 00caf9cb has its CatchHandler @ 00cafa94 */
  Integer::Integer((Integer *)local_98,2);
                    /* try { // try from 00caf9cc to 00caf9d7 has its CatchHandler @ 00cafa84 */
  iVar2 = Integer::Compare((Integer *)local_68,(Integer *)local_98);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00cafa14 to 00cafa17 has its CatchHandler @ 00cafa80 */
  UnalignedDeallocate(local_78);
  local_68[0] = &PTR__Integer_0100c890;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cafa48 to 00cafa4b has its CatchHandler @ 00cafa7c */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 == 0);
  }
  return;
}


