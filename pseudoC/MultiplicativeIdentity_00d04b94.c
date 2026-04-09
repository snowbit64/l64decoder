// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeIdentity
// Entry Point: 00d04b94
// Size: 428 bytes
// Signature: undefined MultiplicativeIdentity(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::MontgomeryRepresentation::MultiplicativeIdentity() const */

Integer * CryptoPP::MontgomeryRepresentation::MultiplicativeIdentity(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_x0;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **local_a8;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_a0 [8];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar8 = *(ulong *)(in_x0 + 0x30);
  uVar4 = uVar8 * 0x20 + 0x20;
  uVar7 = uVar4 >> 5;
  Integer::Integer((Integer *)&local_a8,0,uVar7);
  if (uVar4 < 0x120) {
    uVar4 = (ulong)(uint)(&DAT_005443f4)[uVar7];
  }
  else if (uVar4 < 0x220) {
    uVar4 = 0x10;
  }
  else if (uVar4 < 0x420) {
    uVar4 = 0x20;
  }
  else if (uVar4 < 0x820) {
    uVar4 = 0x40;
  }
  else {
    uVar6 = 0;
    uVar4 = 0x40;
    do {
      uVar2 = uVar6 + (uint)uVar4 >> 1;
      uVar1 = uVar2;
      if (uVar7 - 1 >> ((ulong)uVar2 & 0x3f) != 0) {
        uVar1 = (uint)uVar4;
        uVar6 = uVar2;
      }
      uVar4 = (ulong)uVar1;
    } while (1 < uVar1 - uVar6);
    uVar4 = 1L << (uVar4 & 0x3f);
  }
                    /* try { // try from 00d04c64 to 00d04c67 has its CatchHandler @ 00d04d5c */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            (aSStack_a0,uVar4);
  lVar5 = (uVar8 & 0x7ffffffffffffff) * 4;
  *(uint *)((long)local_88 + lVar5) = *(uint *)((long)local_88 + lVar5) | 1;
                    /* try { // try from 00d04c84 to 00d04c8f has its CatchHandler @ 00d04d58 */
  Integer::Modulo((Integer *)&local_a8);
                    /* try { // try from 00d04c94 to 00d04c9f has its CatchHandler @ 00d04d48 */
  Integer::operator=((Integer *)(in_x0 + 0x78),(Integer *)local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04cd8 to 00d04cdb has its CatchHandler @ 00d04d44 */
  UnalignedDeallocate(local_58);
  local_a8 = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04d0c to 00d04d0f has its CatchHandler @ 00d04d40 */
  UnalignedDeallocate(local_88);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return (Integer *)(in_x0 + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


