// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignAndRestart
// Entry Point: 00cb4864
// Size: 1640 bytes
// Signature: undefined __cdecl SignAndRestart(RandomNumberGenerator * param_1, PK_MessageAccumulator * param_2, uchar * param_3, bool param_4)


/* CryptoPP::DL_SignerBase<CryptoPP::Integer>::SignAndRestart(CryptoPP::RandomNumberGenerator&,
   CryptoPP::PK_MessageAccumulator&, unsigned char*, bool) const */

undefined8
CryptoPP::DL_SignerBase<CryptoPP::Integer>::SignAndRestart
          (RandomNumberGenerator *param_1,PK_MessageAccumulator *param_2,uchar *param_3,bool param_4
          )

{
  uchar uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uchar *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  Integer *pIVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined auVar18 [16];
  undefined **local_190 [2];
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  undefined **local_160 [2];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  undefined **local_130 [2];
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  undefined **local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)(**(code **)(*(long *)(param_1 + 8) + 0x30))();
  uVar6 = NullRNG();
  (**(code **)(*plVar5 + 0x28))(plVar5,uVar6,0);
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x88))(param_1);
  plVar17 = (long *)(param_1 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar17 + 0x18))(plVar17);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))();
  plVar8 = (long *)(**(code **)(*plVar17 + 0x18))(plVar17);
  plVar9 = (long *)(**(code **)(*plVar17 + 0x18))(plVar17);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
  (**(code **)(*plVar9 + 0xa0))();
  uVar3 = Integer::BitCount();
  uVar16 = (ulong)uVar3 + 7 >> 3;
  if (uVar3 == 0) {
    puVar10 = (uchar *)0x0;
  }
  else {
    puVar10 = (uchar *)UnalignedAllocate(uVar16);
  }
                    /* try { // try from 00cb4980 to 00cb4a2b has its CatchHandler @ 00cb4fd4 */
  plVar9 = (long *)(**(code **)(*(long *)param_1 + 0x90))(param_1);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  uVar11 = (**(code **)(*(long *)param_3 + 0xa0))(param_3);
  auVar18 = (**(code **)(*(long *)param_1 + 0x98))();
  uVar1 = param_3[0xe8];
  plVar17 = (long *)(**(code **)(*plVar17 + 0x18))(plVar17);
  plVar17 = (long *)(**(code **)(*plVar17 + 0x10))();
  (**(code **)(*plVar17 + 0xa0))();
  uVar4 = Integer::BitCount();
  (**(code **)(*plVar9 + 0x38))
            (plVar9,param_2,uVar13,uVar6,uVar11,auVar18._0_8_,auVar18._8_8_,uVar1 != '\0',puVar10,
             uVar4);
  param_3[0xe8] = '\x01';
                    /* try { // try from 00cb4a34 to 00cb4a4b has its CatchHandler @ 00cb4f9c */
  Integer::Integer((Integer *)local_a0,puVar10,uVar16,0,1);
                    /* try { // try from 00cb4a58 to 00cb4a77 has its CatchHandler @ 00cb4fa0 */
  uVar12 = (**(code **)(*(long *)param_2 + 0x30))();
  if ((uVar12 & 1) != 0) {
    (**(code **)(*(long *)param_2 + 0x28))(param_2,puVar10,uVar16);
  }
                    /* try { // try from 00cb4a78 to 00cb4a7f has its CatchHandler @ 00cb4f94 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00cb4a8c to 00cb4a93 has its CatchHandler @ 00cb4f8c */
  uVar12 = (**(code **)(*plVar5 + 0x38))(plVar5);
  if ((uVar12 & 1) == 0) {
                    /* try { // try from 00cb4b50 to 00cb4b5b has its CatchHandler @ 00cb4f2c */
    Integer::Integer((Integer *)local_100,1);
                    /* try { // try from 00cb4b64 to 00cb4b6b has its CatchHandler @ 00cb4f1c */
    pIVar14 = (Integer *)(**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cb4b70 to 00cb4b7b has its CatchHandler @ 00cb4f14 */
    Integer::Integer((Integer *)local_160,1);
                    /* try { // try from 00cb4b7c to 00cb4b8b has its CatchHandler @ 00cb4ef8 */
    Integer::Minus(pIVar14);
                    /* try { // try from 00cb4b8c to 00cb4b9f has its CatchHandler @ 00cb4edc */
    Integer::Randomize((Integer *)local_d0,(RandomNumberGenerator *)param_2,(Integer *)local_100,
                       (Integer *)local_130);
    local_130[0] = &PTR__Integer_0100c890;
    uVar12 = local_120;
    if (uStack_118 <= local_120) {
      uVar12 = uStack_118;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_110 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cb4bd0 to 00cb4bd3 has its CatchHandler @ 00cb4ed4 */
    UnalignedDeallocate(local_110);
    local_160[0] = &PTR__Integer_0100c890;
    uVar12 = local_150;
    if (uStack_148 <= local_150) {
      uVar12 = uStack_148;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_140 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cb4c04 to 00cb4c07 has its CatchHandler @ 00cb4ed0 */
    UnalignedDeallocate(local_140);
    local_100[0] = &PTR__Integer_0100c890;
    uVar12 = local_f0;
    if (uStack_e8 <= local_f0) {
      uVar12 = uStack_e8;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_e0 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cb4c38 to 00cb4c3b has its CatchHandler @ 00cb4ecc */
    UnalignedDeallocate(local_e0);
  }
  else {
                    /* try { // try from 00cb4ab0 to 00cb4ab7 has its CatchHandler @ 00cb4f34 */
    uVar6 = (**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cb4ac4 to 00cb4acb has its CatchHandler @ 00cb4f24 */
    uVar13 = (**(code **)(*plVar8 + 0x20))(plVar8);
    plVar9 = (long *)__dynamic_cast(plVar5,&DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer>::
                                            typeinfo,&DeterministicSignatureAlgorithm::typeinfo,
                                    0xfffffffffffffffe);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00cb4ec4 to 00cb4ec7 has its CatchHandler @ 00cb4f0c */
      __cxa_bad_cast();
    }
                    /* try { // try from 00cb4af8 to 00cb4b0b has its CatchHandler @ 00cb4f04 */
    (**(code **)(*plVar9 + 0x10))(local_100,plVar9,uVar13,uVar6,local_a0);
                    /* try { // try from 00cb4b0c to 00cb4b17 has its CatchHandler @ 00cb4ef0 */
    Integer::operator=((Integer *)local_d0,(Integer *)local_100);
    local_100[0] = &PTR__Integer_0100c890;
    uVar12 = local_f0;
    if (uStack_e8 <= local_f0) {
      uVar12 = uStack_e8;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_e0 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cb4b48 to 00cb4b4b has its CatchHandler @ 00cb4ed8 */
    UnalignedDeallocate(local_e0);
  }
                    /* try { // try from 00cb4c3c to 00cb4c43 has its CatchHandler @ 00cb4f84 */
  Integer::Integer((Integer *)local_100);
                    /* try { // try from 00cb4c44 to 00cb4c4b has its CatchHandler @ 00cb4f7c */
  Integer::Integer((Integer *)local_130);
                    /* try { // try from 00cb4c54 to 00cb4c63 has its CatchHandler @ 00cb4f78 */
  (**(code **)(*plVar7 + 0x78))(local_190,plVar7,local_d0);
                    /* try { // try from 00cb4c6c to 00cb4c7b has its CatchHandler @ 00cb4f68 */
  (**(code **)(*plVar7 + 0xd8))(local_160,plVar7,local_190);
                    /* try { // try from 00cb4c7c to 00cb4c87 has its CatchHandler @ 00cb4f58 */
  Integer::operator=((Integer *)local_100,(Integer *)local_160);
  local_160[0] = &PTR__Integer_0100c890;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4cb8 to 00cb4cbb has its CatchHandler @ 00cb4f54 */
  UnalignedDeallocate(local_140);
  local_190[0] = &PTR__Integer_0100c890;
  if (uStack_178 <= local_180) {
    local_180 = uStack_178;
  }
  for (; local_180 != 0; local_180 = local_180 - 1) {
    *(undefined4 *)((long)local_170 + local_180 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4cec to 00cb4cef has its CatchHandler @ 00cb4f50 */
  UnalignedDeallocate(local_170);
                    /* try { // try from 00cb4cf8 to 00cb4d27 has its CatchHandler @ 00cb4fa8 */
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
  (**(code **)(*plVar5 + 0x10))(plVar5,plVar7,uVar6,local_d0,local_a0,local_100,local_130);
                    /* try { // try from 00cb4d30 to 00cb4d8b has its CatchHandler @ 00cb4fac */
  uVar12 = (**(code **)(*plVar5 + 0x28))(plVar5,plVar7);
  Integer::Encode((Integer *)local_100,(uchar *)(ulong)param_4,uVar12,0);
  uVar15 = (**(code **)(*plVar5 + 0x30))(plVar5,plVar7);
  Integer::Encode((Integer *)local_130,(uchar *)(ulong)param_4 + uVar12,uVar15,0);
  uVar6 = (**(code **)(*(long *)param_1 + 0x10))();
  local_130[0] = &PTR__Integer_0100c890;
  if (uStack_118 <= local_120) {
    local_120 = uStack_118;
  }
  for (; local_120 != 0; local_120 = local_120 - 1) {
    *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4dc0 to 00cb4dc3 has its CatchHandler @ 00cb4f4c */
  UnalignedDeallocate(local_110);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4df4 to 00cb4df7 has its CatchHandler @ 00cb4f48 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4e28 to 00cb4e2b has its CatchHandler @ 00cb4f44 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb4e5c to 00cb4e5f has its CatchHandler @ 00cb4f40 */
  UnalignedDeallocate(local_80);
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    puVar10[uVar16 - 1] = '\0';
  }
                    /* try { // try from 00cb4e84 to 00cb4e8b has its CatchHandler @ 00cb4f3c */
  UnalignedDeallocate(puVar10);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


