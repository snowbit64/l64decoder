// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaxElementByteLength
// Entry Point: 00c9e4bc
// Size: 232 bytes
// Signature: undefined MaxElementByteLength(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ModularArithmetic::MaxElementByteLength() const */

undefined4 CryptoPP::ModularArithmetic::MaxElementByteLength(void)

{
  long lVar1;
  undefined4 uVar2;
  long in_x0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00c9e4ec to 00c9e4fb has its CatchHandler @ 00c9e5bc */
  Integer::Minus((Integer *)(in_x0 + 0x18));
                    /* try { // try from 00c9e4fc to 00c9e503 has its CatchHandler @ 00c9e5ac */
  uVar2 = Integer::ByteCount();
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68 = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9e540 to 00c9e543 has its CatchHandler @ 00c9e5a8 */
  UnalignedDeallocate(local_48);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9e574 to 00c9e577 has its CatchHandler @ 00c9e5a4 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


