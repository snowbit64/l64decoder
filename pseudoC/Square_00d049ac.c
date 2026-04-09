// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00d049ac
// Size: 236 bytes
// Signature: undefined __thiscall Square(ModularArithmetic * this, Integer * param_1)


/* CryptoPP::ModularArithmetic::Square(CryptoPP::Integer const&) const */

Integer * __thiscall CryptoPP::ModularArithmetic::Square(ModularArithmetic *this,Integer *param_1)

{
  long lVar1;
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
  Integer::Times(param_1);
                    /* try { // try from 00d049e0 to 00d049eb has its CatchHandler @ 00d04ab0 */
  Integer::Modulo((Integer *)local_98);
                    /* try { // try from 00d049f0 to 00d049fb has its CatchHandler @ 00d04aa0 */
  Integer::operator=((Integer *)(this + 0x78),(Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04a34 to 00d04a37 has its CatchHandler @ 00d04a9c */
  UnalignedDeallocate(local_48);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04a68 to 00d04a6b has its CatchHandler @ 00d04a98 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Integer *)(this + 0x78);
}


