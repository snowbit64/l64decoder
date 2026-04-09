// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00d048ec
// Size: 168 bytes
// Signature: undefined __thiscall MultiplicativeInverse(ModularArithmetic * this, Integer * param_1)


/* CryptoPP::ModularArithmetic::MultiplicativeInverse(CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::ModularArithmetic::MultiplicativeInverse(ModularArithmetic *this,Integer *param_1)

{
  long lVar1;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Integer::InverseMod(param_1,(Integer *)(this + 0x18));
                    /* try { // try from 00d04924 to 00d0492f has its CatchHandler @ 00d04998 */
  Integer::operator=((Integer *)(this + 0x78),(Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04968 to 00d0496b has its CatchHandler @ 00d04994 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (Integer *)(this + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


