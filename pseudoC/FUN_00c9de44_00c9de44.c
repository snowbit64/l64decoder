// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c9de44
// Entry Point: 00c9de44
// Size: 660 bytes
// Signature: undefined FUN_00c9de44(void)


void FUN_00c9de44(Integer *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  CryptoPP::Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00c9de84 to 00c9de9b has its CatchHandler @ 00c9e0e0 */
  uVar5 = CryptoPP::Integer::GetBit(param_1,0);
  if ((uVar5 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = CryptoPP::Integer::BitCount();
  }
                    /* try { // try from 00c9dea8 to 00c9deaf has its CatchHandler @ 00c9e0dc */
  uVar5 = CryptoPP::Integer::BitCount();
  uVar7 = (uint)(uVar5 >> 1) & 0x7fffffff;
  uVar6 = uVar2;
  do {
                    /* try { // try from 00c9dec4 to 00c9dee3 has its CatchHandler @ 00c9e13c */
    uVar3 = CryptoPP::DiscreteLogWorkFactor(uVar6);
    if (uVar7 <= uVar3) break;
    uVar5 = CryptoPP::Integer::GetBit(param_1,0);
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 00c9df7c to 00c9df8b has its CatchHandler @ 00c9e0f4 */
      CryptoPP::Integer::Plus((Integer *)local_98);
                    /* try { // try from 00c9df8c to 00c9df9b has its CatchHandler @ 00c9e0ec */
      CryptoPP::Integer::Modulo((Integer *)local_f8);
                    /* try { // try from 00c9df9c to 00c9dfa7 has its CatchHandler @ 00c9e0e8 */
      CryptoPP::Integer::operator=((Integer *)local_98,(Integer *)local_c8);
      local_c8[0] = &PTR__Integer_0100c890;
      uVar5 = local_b8;
      if (uStack_b0 <= local_b8) {
        uVar5 = uStack_b0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_a8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9dfd8 to 00c9dfdb has its CatchHandler @ 00c9e0e4 */
      CryptoPP::UnalignedDeallocate(local_a8);
      local_f8[0] = &PTR__Integer_0100c890;
      uVar5 = local_e8;
      if (uStack_e0 <= local_e8) {
        uVar5 = uStack_e0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_d8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9e00c to 00c9e00f has its CatchHandler @ 00c9e120 */
      CryptoPP::UnalignedDeallocate(local_d8);
    }
    else {
                    /* try { // try from 00c9dee8 to 00c9def7 has its CatchHandler @ 00c9e11c */
      CryptoPP::Integer::Times((Integer *)local_98);
                    /* try { // try from 00c9def8 to 00c9df07 has its CatchHandler @ 00c9e10c */
      CryptoPP::Integer::Modulo((Integer *)local_f8);
                    /* try { // try from 00c9df08 to 00c9df13 has its CatchHandler @ 00c9e0fc */
      CryptoPP::Integer::operator=((Integer *)local_98,(Integer *)local_c8);
      uVar5 = local_b8;
      if (uStack_b0 <= local_b8) {
        uVar5 = uStack_b0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_a8 + uVar5 * 4 + -4) = 0;
      }
      local_c8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c9df40 to 00c9df43 has its CatchHandler @ 00c9e0f8 */
      CryptoPP::UnalignedDeallocate(local_a8);
      local_f8[0] = &PTR__Integer_0100c890;
      uVar5 = local_e8;
      if (uStack_e0 <= local_e8) {
        uVar5 = uStack_e0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_d8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9df74 to 00c9df77 has its CatchHandler @ 00c9e0f0 */
      CryptoPP::UnalignedDeallocate(local_d8);
    }
                    /* try { // try from 00c9e010 to 00c9e01b has its CatchHandler @ 00c9e134 */
    CryptoPP::Integer::Integer((Integer *)local_c8,1);
                    /* try { // try from 00c9e01c to 00c9e027 has its CatchHandler @ 00c9e124 */
    iVar4 = CryptoPP::Integer::Compare((Integer *)local_98,(Integer *)local_c8);
    local_c8[0] = &PTR__Integer_0100c890;
    uVar5 = local_b8;
    if (uStack_b0 <= local_b8) {
      uVar5 = uStack_b0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_a8 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9e05c to 00c9e05f has its CatchHandler @ 00c9e138 */
    CryptoPP::UnalignedDeallocate(local_a8);
    uVar6 = uVar6 + uVar2;
  } while (iVar4 != 0);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9e098 to 00c9e09b has its CatchHandler @ 00c9e0d8 */
  CryptoPP::UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7 <= uVar3);
  }
  return;
}


