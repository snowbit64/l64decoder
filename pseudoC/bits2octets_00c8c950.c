// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bits2octets
// Entry Point: 00c8c950
// Size: 324 bytes
// Signature: undefined __cdecl bits2octets(SecBlock * param_1, Integer * param_2)


/* CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,
   CryptoPP::SHA512>::bits2octets(CryptoPP::SecBlock<unsigned char,
   CryptoPP::AllocatorWithCleanup<unsigned char, false> > const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_Algorithm_DSA_RFC6979<CryptoPP::Integer,CryptoPP::SHA512>::bits2octets
               (SecBlock *param_1,Integer *param_2)

{
  undefined ***pppuVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  int local_80;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = Integer::BitCount();
  Integer::Integer((Integer *)local_78,*(uchar **)(param_2 + 0x18),*(ulong *)(param_2 + 0x10),0,1);
  uVar2 = *(long *)(param_2 + 0x10) * 8 - (uVar4 & 0xffffffff);
  if ((uVar4 & 0xffffffff) <= (ulong)(*(long *)(param_2 + 0x10) * 8) && uVar2 != 0) {
                    /* try { // try from 00c8c9b4 to 00c8c9bb has its CatchHandler @ 00c8ca94 */
    Integer::operator>>=((Integer *)local_78,uVar2);
  }
                    /* try { // try from 00c8c9bc to 00c8c9cb has its CatchHandler @ 00c8caa4 */
  Integer::Minus((Integer *)local_78);
                    /* try { // try from 00c8c9d0 to 00c8c9f7 has its CatchHandler @ 00c8caac */
  Integer::ByteCount();
  pppuVar1 = local_78;
  if (local_80 != 1) {
    pppuVar1 = local_a8;
  }
  int2octets((Integer *)param_1,(ulong)pppuVar1);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  local_a8[0] = &PTR__Integer_0100c890;
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8ca30 to 00c8ca33 has its CatchHandler @ 00c8caa0 */
  UnalignedDeallocate(local_88);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8ca64 to 00c8ca67 has its CatchHandler @ 00c8ca9c */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


