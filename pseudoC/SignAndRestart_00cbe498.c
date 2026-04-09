// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignAndRestart
// Entry Point: 00cbe498
// Size: 1692 bytes
// Signature: undefined __cdecl SignAndRestart(RandomNumberGenerator * param_1, PK_MessageAccumulator * param_2, uchar * param_3, bool param_4)


/* CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>::SignAndRestart(CryptoPP::RandomNumberGenerator&,
   CryptoPP::PK_MessageAccumulator&, unsigned char*, bool) const */

undefined8
CryptoPP::DL_SignerBase<CryptoPP::EC2NPoint>::SignAndRestart
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
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
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
                    /* try { // try from 00cbe5b4 to 00cbe65f has its CatchHandler @ 00cbec50 */
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
                    /* try { // try from 00cbe668 to 00cbe67f has its CatchHandler @ 00cbec18 */
  Integer::Integer((Integer *)local_a0,puVar10,uVar16,0,1);
                    /* try { // try from 00cbe68c to 00cbe6ab has its CatchHandler @ 00cbec1c */
  uVar12 = (**(code **)(*(long *)param_2 + 0x30))();
  if ((uVar12 & 1) != 0) {
    (**(code **)(*(long *)param_2 + 0x28))(param_2,puVar10,uVar16);
  }
                    /* try { // try from 00cbe6ac to 00cbe6b3 has its CatchHandler @ 00cbec10 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00cbe6c0 to 00cbe6c7 has its CatchHandler @ 00cbec08 */
  uVar12 = (**(code **)(*plVar5 + 0x38))(plVar5);
  if ((uVar12 & 1) == 0) {
                    /* try { // try from 00cbe784 to 00cbe78f has its CatchHandler @ 00cbeba4 */
    Integer::Integer((Integer *)local_1b0,1);
                    /* try { // try from 00cbe798 to 00cbe79f has its CatchHandler @ 00cbeb90 */
    pIVar14 = (Integer *)(**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cbe7a4 to 00cbe7af has its CatchHandler @ 00cbeb84 */
    Integer::Integer((Integer *)local_130,1);
                    /* try { // try from 00cbe7b0 to 00cbe7bf has its CatchHandler @ 00cbeb60 */
    Integer::Minus(pIVar14);
                    /* try { // try from 00cbe7c0 to 00cbe7d3 has its CatchHandler @ 00cbeb44 */
    Integer::Randomize((Integer *)local_d0,(RandomNumberGenerator *)param_2,(Integer *)local_1b0,
                       (Integer *)local_100);
    local_100[0] = &PTR__Integer_0100c890;
    uVar12 = local_f0;
    if (uStack_e8 <= local_f0) {
      uVar12 = uStack_e8;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_e0 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbe804 to 00cbe807 has its CatchHandler @ 00cbeb3c */
    UnalignedDeallocate(local_e0);
    local_130[0] = &PTR__Integer_0100c890;
    uVar12 = local_120;
    if (uStack_118 <= local_120) {
      uVar12 = uStack_118;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_110 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbe838 to 00cbe83b has its CatchHandler @ 00cbeb38 */
    UnalignedDeallocate(local_110);
    local_1b0[0] = &PTR__Integer_0100c890;
    uVar12 = local_1a0;
    if (uStack_198 <= local_1a0) {
      uVar12 = uStack_198;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_190 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbe86c to 00cbe86f has its CatchHandler @ 00cbeb34 */
    UnalignedDeallocate(local_190);
  }
  else {
                    /* try { // try from 00cbe6e4 to 00cbe6eb has its CatchHandler @ 00cbebac */
    uVar6 = (**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cbe6f8 to 00cbe6ff has its CatchHandler @ 00cbeb9c */
    uVar13 = (**(code **)(*plVar8 + 0x20))(plVar8);
    plVar9 = (long *)__dynamic_cast(plVar5,&DL_ElgamalLikeSignatureAlgorithm<CryptoPP::EC2NPoint>::
                                            typeinfo,&DeterministicSignatureAlgorithm::typeinfo,
                                    0xfffffffffffffffe);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00cbeb2c to 00cbeb2f has its CatchHandler @ 00cbeb7c */
      __cxa_bad_cast();
    }
                    /* try { // try from 00cbe72c to 00cbe73f has its CatchHandler @ 00cbeb74 */
    (**(code **)(*plVar9 + 0x10))(local_1b0,plVar9,uVar13,uVar6,local_a0);
                    /* try { // try from 00cbe740 to 00cbe74b has its CatchHandler @ 00cbeb54 */
    Integer::operator=((Integer *)local_d0,(Integer *)local_1b0);
    local_1b0[0] = &PTR__Integer_0100c890;
    uVar12 = local_1a0;
    if (uStack_198 <= local_1a0) {
      uVar12 = uStack_198;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_190 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbe77c to 00cbe77f has its CatchHandler @ 00cbeb40 */
    UnalignedDeallocate(local_190);
  }
                    /* try { // try from 00cbe870 to 00cbe877 has its CatchHandler @ 00cbec00 */
  Integer::Integer((Integer *)local_100);
                    /* try { // try from 00cbe878 to 00cbe87f has its CatchHandler @ 00cbebf8 */
  Integer::Integer((Integer *)local_130);
                    /* try { // try from 00cbe888 to 00cbe897 has its CatchHandler @ 00cbebf4 */
  (**(code **)(*plVar7 + 0x78))(local_1b0,plVar7,local_d0);
                    /* try { // try from 00cbe8a0 to 00cbe8af has its CatchHandler @ 00cbebe4 */
  (**(code **)(*plVar7 + 0xd8))(local_160,plVar7,local_1b0);
                    /* try { // try from 00cbe8b0 to 00cbe8bb has its CatchHandler @ 00cbebd4 */
  Integer::operator=((Integer *)local_100,(Integer *)local_160);
  local_160[0] = &PTR__Integer_0100c890;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbe8ec to 00cbe8ef has its CatchHandler @ 00cbebd0 */
  UnalignedDeallocate(local_140);
  if (uStack_178 <= local_180) {
    local_180 = uStack_178;
  }
  local_1b0[0] = &PTR__EC2NPoint_010026a8;
  for (; local_180 != 0; local_180 = local_180 - 1) {
    *(undefined4 *)((long)local_170 + local_180 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbe928 to 00cbe92b has its CatchHandler @ 00cbebcc */
  UnalignedDeallocate(local_170);
  if (uStack_198 <= local_1a0) {
    local_1a0 = uStack_198;
  }
  for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
    *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbe954 to 00cbe957 has its CatchHandler @ 00cbebc8 */
  UnalignedDeallocate(local_190);
                    /* try { // try from 00cbe960 to 00cbe98f has its CatchHandler @ 00cbec24 */
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
  (**(code **)(*plVar5 + 0x10))(plVar5,plVar7,uVar6,local_d0,local_a0,local_100,local_130);
                    /* try { // try from 00cbe998 to 00cbe9f3 has its CatchHandler @ 00cbec28 */
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
                    /* try { // try from 00cbea28 to 00cbea2b has its CatchHandler @ 00cbebc4 */
  UnalignedDeallocate(local_110);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbea5c to 00cbea5f has its CatchHandler @ 00cbebc0 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbea90 to 00cbea93 has its CatchHandler @ 00cbebbc */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbeac4 to 00cbeac7 has its CatchHandler @ 00cbebb8 */
  UnalignedDeallocate(local_80);
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    puVar10[uVar16 - 1] = '\0';
  }
                    /* try { // try from 00cbeaec to 00cbeaf3 has its CatchHandler @ 00cbebb4 */
  UnalignedDeallocate(puVar10);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


