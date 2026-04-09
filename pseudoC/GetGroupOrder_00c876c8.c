// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetGroupOrder
// Entry Point: 00c876c8
// Size: 192 bytes
// Signature: undefined GetGroupOrder(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetGroupOrder() const */

void CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetGroupOrder(void)

{
  long lVar1;
  long *in_x0;
  Integer *pIVar2;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)(**(code **)(*in_x0 + 0xa0))();
  (**(code **)(*in_x0 + 0xb8))(local_68);
                    /* try { // try from 00c87714 to 00c87723 has its CatchHandler @ 00c8778c */
  Integer::Times(pIVar2);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8775c to 00c8775f has its CatchHandler @ 00c87788 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


