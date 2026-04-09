// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignAndRestart
// Entry Point: 00cbcadc
// Size: 1708 bytes
// Signature: undefined __cdecl SignAndRestart(RandomNumberGenerator * param_1, PK_MessageAccumulator * param_2, uchar * param_3, bool param_4)


/* CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>::SignAndRestart(CryptoPP::RandomNumberGenerator&,
   CryptoPP::PK_MessageAccumulator&, unsigned char*, bool) const */

undefined8
CryptoPP::DL_SignerBase<CryptoPP::ECPPoint>::SignAndRestart
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
  undefined **local_1d0;
  undefined **local_1c8;
  void *local_1c0;
  void *local_1b8;
  void *local_1b0;
  void *local_1a8;
  undefined **local_198;
  ulong local_188;
  ulong uStack_180;
  void *local_178;
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
                    /* try { // try from 00cbcbf8 to 00cbcca3 has its CatchHandler @ 00cbd2a4 */
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
                    /* try { // try from 00cbccac to 00cbccc3 has its CatchHandler @ 00cbd26c */
  Integer::Integer((Integer *)local_a0,puVar10,uVar16,0,1);
                    /* try { // try from 00cbccd0 to 00cbccef has its CatchHandler @ 00cbd270 */
  uVar12 = (**(code **)(*(long *)param_2 + 0x30))();
  if ((uVar12 & 1) != 0) {
    (**(code **)(*(long *)param_2 + 0x28))(param_2,puVar10,uVar16);
  }
                    /* try { // try from 00cbccf0 to 00cbccf7 has its CatchHandler @ 00cbd264 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00cbcd04 to 00cbcd0b has its CatchHandler @ 00cbd25c */
  uVar12 = (**(code **)(*plVar5 + 0x38))(plVar5);
  if ((uVar12 & 1) == 0) {
                    /* try { // try from 00cbcdc8 to 00cbcdd3 has its CatchHandler @ 00cbd1f8 */
    Integer::Integer((Integer *)&local_1d0,1);
                    /* try { // try from 00cbcddc to 00cbcde3 has its CatchHandler @ 00cbd1e4 */
    pIVar14 = (Integer *)(**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cbcde8 to 00cbcdf3 has its CatchHandler @ 00cbd1d8 */
    Integer::Integer((Integer *)local_130,1);
                    /* try { // try from 00cbcdf4 to 00cbce03 has its CatchHandler @ 00cbd1b4 */
    Integer::Minus(pIVar14);
                    /* try { // try from 00cbce04 to 00cbce17 has its CatchHandler @ 00cbd198 */
    Integer::Randomize((Integer *)local_d0,(RandomNumberGenerator *)param_2,(Integer *)&local_1d0,
                       (Integer *)local_100);
    local_100[0] = &PTR__Integer_0100c890;
    uVar12 = local_f0;
    if (uStack_e8 <= local_f0) {
      uVar12 = uStack_e8;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_e0 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbce48 to 00cbce4b has its CatchHandler @ 00cbd190 */
    UnalignedDeallocate(local_e0);
    local_130[0] = &PTR__Integer_0100c890;
    uVar12 = local_120;
    if (uStack_118 <= local_120) {
      uVar12 = uStack_118;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)((long)local_110 + uVar12 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbce7c to 00cbce7f has its CatchHandler @ 00cbd18c */
    UnalignedDeallocate(local_110);
    local_1d0 = &PTR__Integer_0100c890;
    if (local_1b8 <= local_1c0) {
      local_1c0 = local_1b8;
    }
    for (; local_1c0 != (void *)0x0; local_1c0 = (void *)((long)local_1c0 - 1)) {
      *(undefined4 *)((long)local_1b0 + (long)local_1c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbceb0 to 00cbceb3 has its CatchHandler @ 00cbd188 */
    UnalignedDeallocate(local_1b0);
  }
  else {
                    /* try { // try from 00cbcd28 to 00cbcd2f has its CatchHandler @ 00cbd200 */
    uVar6 = (**(code **)(*plVar7 + 0xa0))(plVar7);
                    /* try { // try from 00cbcd3c to 00cbcd43 has its CatchHandler @ 00cbd1f0 */
    uVar13 = (**(code **)(*plVar8 + 0x20))(plVar8);
    plVar9 = (long *)__dynamic_cast(plVar5,&DL_ElgamalLikeSignatureAlgorithm<CryptoPP::ECPPoint>::
                                            typeinfo,&DeterministicSignatureAlgorithm::typeinfo,
                                    0xfffffffffffffffe);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00cbd180 to 00cbd183 has its CatchHandler @ 00cbd1d0 */
      __cxa_bad_cast();
    }
                    /* try { // try from 00cbcd70 to 00cbcd83 has its CatchHandler @ 00cbd1c8 */
    (**(code **)(*plVar9 + 0x10))(&local_1d0,plVar9,uVar13,uVar6,local_a0);
                    /* try { // try from 00cbcd84 to 00cbcd8f has its CatchHandler @ 00cbd1a8 */
    Integer::operator=((Integer *)local_d0,(Integer *)&local_1d0);
    local_1d0 = &PTR__Integer_0100c890;
    if (local_1b8 <= local_1c0) {
      local_1c0 = local_1b8;
    }
    for (; local_1c0 != (void *)0x0; local_1c0 = (void *)((long)local_1c0 - 1)) {
      *(undefined4 *)((long)local_1b0 + (long)local_1c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbcdc0 to 00cbcdc3 has its CatchHandler @ 00cbd194 */
    UnalignedDeallocate(local_1b0);
  }
                    /* try { // try from 00cbceb4 to 00cbcebb has its CatchHandler @ 00cbd254 */
  Integer::Integer((Integer *)local_100);
                    /* try { // try from 00cbcebc to 00cbcec3 has its CatchHandler @ 00cbd24c */
  Integer::Integer((Integer *)local_130);
                    /* try { // try from 00cbcecc to 00cbcedb has its CatchHandler @ 00cbd248 */
  (**(code **)(*plVar7 + 0x78))(&local_1d0,plVar7,local_d0);
                    /* try { // try from 00cbcee4 to 00cbcef3 has its CatchHandler @ 00cbd238 */
  (**(code **)(*plVar7 + 0xd8))(local_160,plVar7,&local_1d0);
                    /* try { // try from 00cbcef4 to 00cbceff has its CatchHandler @ 00cbd228 */
  Integer::operator=((Integer *)local_100,(Integer *)local_160);
  local_160[0] = &PTR__Integer_0100c890;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbcf30 to 00cbcf33 has its CatchHandler @ 00cbd224 */
  UnalignedDeallocate(local_140);
  local_198 = &PTR__Integer_0100c890;
  local_1d0 = &PTR__ECPPoint_00fe9fd8;
  if (uStack_180 <= local_188) {
    local_188 = uStack_180;
  }
  for (; local_188 != 0; local_188 = local_188 - 1) {
    *(undefined4 *)((long)local_178 + local_188 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbcf74 to 00cbcf77 has its CatchHandler @ 00cbd220 */
  UnalignedDeallocate(local_178);
  local_1c8 = &PTR__Integer_0100c890;
  if (local_1b0 <= local_1b8) {
    local_1b8 = local_1b0;
  }
  for (; local_1b8 != (void *)0x0; local_1b8 = (void *)((long)local_1b8 - 1)) {
    *(undefined4 *)((long)local_1a8 + (long)local_1b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbcfa8 to 00cbcfab has its CatchHandler @ 00cbd21c */
  UnalignedDeallocate(local_1a8);
                    /* try { // try from 00cbcfb4 to 00cbcfe3 has its CatchHandler @ 00cbd278 */
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
  (**(code **)(*plVar5 + 0x10))(plVar5,plVar7,uVar6,local_d0,local_a0,local_100,local_130);
                    /* try { // try from 00cbcfec to 00cbd047 has its CatchHandler @ 00cbd27c */
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
                    /* try { // try from 00cbd07c to 00cbd07f has its CatchHandler @ 00cbd218 */
  UnalignedDeallocate(local_110);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbd0b0 to 00cbd0b3 has its CatchHandler @ 00cbd214 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbd0e4 to 00cbd0e7 has its CatchHandler @ 00cbd210 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbd118 to 00cbd11b has its CatchHandler @ 00cbd20c */
  UnalignedDeallocate(local_80);
  for (; uVar16 != 0; uVar16 = uVar16 - 1) {
    puVar10[uVar16 - 1] = '\0';
  }
                    /* try { // try from 00cbd140 to 00cbd147 has its CatchHandler @ 00cbd208 */
  UnalignedDeallocate(puVar10);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


