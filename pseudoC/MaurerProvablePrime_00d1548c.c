// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaurerProvablePrime
// Entry Point: 00d1548c
// Size: 2424 bytes
// Signature: undefined __thiscall MaurerProvablePrime(CryptoPP * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::MaurerProvablePrime(CryptoPP::RandomNumberGenerator&, unsigned int) */

void __thiscall
CryptoPP::MaurerProvablePrime(CryptoPP *this,RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort **ppuVar7;
  ulong uVar8;
  Integer *pIVar9;
  Integer *pIVar10;
  uint uVar11;
  uint uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  uint uVar13;
  Integer *in_x8;
  ushort *puVar14;
  ulong uVar15;
  double dVar16;
  undefined auVar17 [16];
  undefined **local_2a0 [2];
  ulong local_290;
  ulong uStack_288;
  void *local_280;
  undefined **local_270 [2];
  ulong local_260;
  ulong uStack_258;
  void *local_250;
  undefined **local_240 [2];
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  undefined **local_180 [2];
  ulong local_170;
  ulong uStack_168;
  void *local_160;
  undefined **local_150 [2];
  ulong local_140;
  ulong uStack_138;
  void *local_130;
  undefined **local_120 [2];
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  undefined **local_f0 [2];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined **local_c0 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  uVar13 = (uint)param_1;
  Integer::Integer(in_x8);
                    /* try { // try from 00d154d4 to 00d154db has its CatchHandler @ 00d15e4c */
  auVar17 = Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
            ::Ref();
  uVar8 = auVar17._8_8_;
  if (uVar13 < 0x1d) {
    uVar12 = 1 << (ulong)(uVar13 + 1 >> 1 & 0x1f);
LAB_00d15508:
    do {
                    /* try { // try from 00d15508 to 00d15513 has its CatchHandler @ 00d15eb4 */
      Integer::Power2((Integer *)(ulong)(uVar13 - 1),uVar8);
                    /* try { // try from 00d15514 to 00d1551f has its CatchHandler @ 00d15eac */
      Integer::Power2((Integer *)((ulong)param_1 & 0xffffffff),extraout_x1);
                    /* try { // try from 00d15520 to 00d1552b has its CatchHandler @ 00d15ea4 */
      Integer::Integer((Integer *)local_150,1);
                    /* try { // try from 00d1552c to 00d1553b has its CatchHandler @ 00d15ed8 */
      Integer::Minus((Integer *)local_120);
                    /* try { // try from 00d1553c to 00d15547 has its CatchHandler @ 00d15ec8 */
      Integer::Integer((Integer *)local_180,1);
                    /* try { // try from 00d15548 to 00d15553 has its CatchHandler @ 00d15eb8 */
      Integer::Integer((Integer *)local_1b0,2);
                    /* try { // try from 00d15554 to 00d15573 has its CatchHandler @ 00d15e7c */
      Integer::Randomize(in_x8,(RandomNumberGenerator *)this,(Integer *)local_c0,(Integer *)local_f0
                         ,0,(Integer *)local_180,(Integer *)local_1b0);
      uVar8 = local_1a0;
      if (uStack_198 <= local_1a0) {
        uVar8 = uStack_198;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_190 + uVar8 * 4 + -4) = 0;
      }
      local_1b0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d155a0 to 00d155a3 has its CatchHandler @ 00d15e94 */
      UnalignedDeallocate(local_190);
      local_180[0] = &PTR__Integer_0100c890;
      uVar8 = local_170;
      if (uStack_168 <= local_170) {
        uVar8 = uStack_168;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_160 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d155d4 to 00d155d7 has its CatchHandler @ 00d15e90 */
      UnalignedDeallocate(local_160);
      local_f0[0] = &PTR__Integer_0100c890;
      uVar8 = local_e0;
      if (uStack_d8 <= local_e0) {
        uVar8 = uStack_d8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_d0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15608 to 00d1560b has its CatchHandler @ 00d15e8c */
      UnalignedDeallocate(local_d0);
      local_150[0] = &PTR__Integer_0100c890;
      uVar8 = local_140;
      if (uStack_138 <= local_140) {
        uVar8 = uStack_138;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_130 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d1563c to 00d1563f has its CatchHandler @ 00d15ea0 */
      UnalignedDeallocate(local_130);
      local_120[0] = &PTR__Integer_0100c890;
      uVar8 = local_110;
      if (uStack_108 <= local_110) {
        uVar8 = uStack_108;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_100 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15670 to 00d15673 has its CatchHandler @ 00d15e9c */
      UnalignedDeallocate(local_100);
      local_c0[0] = &PTR__Integer_0100c890;
      uVar8 = local_b0;
      if (uStack_a8 <= local_b0) {
        uVar8 = uStack_a8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d156a4 to 00d156a7 has its CatchHandler @ 00d15e98 */
      UnalignedDeallocate(local_a0);
                    /* try { // try from 00d156a8 to 00d156af has its CatchHandler @ 00d15fc0 */
      ppuVar7 = (ushort **)
                Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                ::Ref();
      puVar14 = *ppuVar7;
      uVar3 = *puVar14;
      uVar11 = (uint)uVar3;
      if (uVar3 < uVar12) {
        uVar15 = 1;
        do {
                    /* try { // try from 00d156c4 to 00d156cb has its CatchHandler @ 00d15ff0 */
          iVar6 = Integer::Modulo(in_x8,uVar11);
          uVar8 = extraout_x1_00;
          if (iVar6 == 0) goto LAB_00d15508;
          uVar3 = puVar14[uVar15];
          uVar11 = (uint)uVar3;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar3 < uVar12);
      }
    } while ((uVar12 == uVar11) &&
            (iVar6 = Integer::Modulo(in_x8,uVar12), uVar8 = extraout_x1_01, iVar6 == 0
                    /* try { // try from 00d156e8 to 00d156f3 has its CatchHandler @ 00d15fc0 */));
  }
  else {
    lVar1 = *auVar17._0_8_;
    lVar2 = auVar17._0_8_[1];
    uVar12 = 0x14;
    if (uVar13 < 0x33) {
      uVar12 = uVar13 - 10 >> 1;
    }
    do {
                    /* try { // try from 00d1573c to 00d1574b has its CatchHandler @ 00d15fbc */
      uVar11 = 0xffffffff;
      uVar8 = (**(code **)(*(long *)this + 0x48))(this,0);
      dVar16 = exp2((double)(uVar8 & 0xffffffff) / 4294967295.0 + -1.0);
      dVar16 = dVar16 * (double)((ulong)param_1 & 0xffffffff);
    } while ((double)(ulong)(uVar13 - uVar12) <= dVar16);
                    /* try { // try from 00d1576c to 00d15773 has its CatchHandler @ 00d15e48 */
    Integer::Integer((Integer *)local_f0);
                    /* try { // try from 00d15774 to 00d1577b has its CatchHandler @ 00d15e40 */
    Integer::Integer((Integer *)local_120);
                    /* try { // try from 00d15780 to 00d1578b has its CatchHandler @ 00d15e38 */
    MaurerProvablePrime(this,(RandomNumberGenerator *)(ulong)(uint)(int)dVar16,uVar11);
                    /* try { // try from 00d15790 to 00d15797 has its CatchHandler @ 00d15e30 */
    Integer::Power2((Integer *)(ulong)(uVar13 - 2),extraout_x1_02);
                    /* try { // try from 00d15798 to 00d157a7 has its CatchHandler @ 00d15e24 */
    Integer::DividedBy((Integer *)local_c0);
    uVar8 = local_b0;
    if (uStack_a8 <= local_b0) {
      uVar8 = uStack_a8;
    }
    local_c0[0] = &PTR__Integer_0100c890;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d157e0 to 00d157e3 has its CatchHandler @ 00d15e20 */
    UnalignedDeallocate(local_a0);
                    /* try { // try from 00d157e4 to 00d157f3 has its CatchHandler @ 00d15e18 */
    Integer::operator<<((Integer *)local_180,1);
    uVar3 = *(ushort *)(lVar1 + (ulong)((int)((ulong)(lVar2 - lVar1) >> 1) - 1) * 2);
    uVar8 = (((ulong)param_1 & 0xffffffff) * ((ulong)param_1 & 0xffffffff)) / 10;
    uVar13 = (uint)uVar8;
    if (uVar3 <= uVar8) {
      uVar13 = (uint)uVar3;
    }
LAB_00d1581c:
    do {
      do {
                    /* try { // try from 00d1581c to 00d15857 has its CatchHandler @ 00d15ff8 */
        pIVar9 = (Integer *)Integer::Zero();
        pIVar10 = (Integer *)Integer::One();
        Integer::Randomize(in_x8,(RandomNumberGenerator *)this,(Integer *)local_180,
                           (Integer *)local_1b0,0,pIVar9,pIVar10);
        Integer::Times(in_x8);
                    /* try { // try from 00d15858 to 00d15863 has its CatchHandler @ 00d15fc8 */
        Integer::operator=(in_x8,(Integer *)local_c0);
        uVar8 = local_b0;
        if (uStack_a8 <= local_b0) {
          uVar8 = uStack_a8;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
        }
        local_c0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d15890 to 00d15893 has its CatchHandler @ 00d15fc4 */
        UnalignedDeallocate(local_a0);
                    /* try { // try from 00d15894 to 00d158af has its CatchHandler @ 00d15ff8 */
        Integer::operator<<=(in_x8,1);
        Integer::operator++(in_x8);
        ppuVar7 = (ushort **)
                  Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                  ::Ref();
        puVar14 = *ppuVar7;
        uVar3 = *puVar14;
        uVar12 = (uint)uVar3;
        if (uVar3 < uVar13) {
          uVar8 = 1;
          do {
                    /* try { // try from 00d158c4 to 00d158cb has its CatchHandler @ 00d15ffc */
            iVar6 = Integer::Modulo(in_x8,uVar12);
            if (iVar6 == 0) goto LAB_00d1581c;
            uVar12 = (uint)puVar14[uVar8];
            uVar8 = (ulong)((int)uVar8 + 1);
          } while (uVar12 < uVar13);
        }
      } while ((uVar12 == uVar13) &&
              (iVar6 = Integer::Modulo(in_x8,uVar13), iVar6 == 0
                    /* try { // try from 00d158e8 to 00d158f3 has its CatchHandler @ 00d15ff8 */));
                    /* try { // try from 00d158f8 to 00d15903 has its CatchHandler @ 00d15f54 */
      Integer::Integer((Integer *)local_c0,2);
                    /* try { // try from 00d15904 to 00d1590f has its CatchHandler @ 00d15f4c */
      Integer::Integer((Integer *)local_210,1);
                    /* try { // try from 00d15910 to 00d1591f has its CatchHandler @ 00d15fb4 */
      Integer::Minus(in_x8);
                    /* try { // try from 00d15920 to 00d1594b has its CatchHandler @ 00d15fd0 */
      pIVar9 = (Integer *)Integer::Zero();
      pIVar10 = (Integer *)Integer::One();
      Integer::Randomize((Integer *)local_f0,(RandomNumberGenerator *)this,(Integer *)local_c0,
                         (Integer *)local_1e0,0,pIVar9,pIVar10);
      local_1e0[0] = &PTR__Integer_0100c890;
      uVar8 = local_1d0;
      if (uStack_1c8 <= local_1d0) {
        uVar8 = uStack_1c8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1c0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d1597c to 00d1597f has its CatchHandler @ 00d15fb0 */
      UnalignedDeallocate(local_1c0);
      local_210[0] = &PTR__Integer_0100c890;
      uVar8 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar8 = uStack_1f8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d159b0 to 00d159b3 has its CatchHandler @ 00d15fac */
      UnalignedDeallocate(local_1f0);
      local_c0[0] = &PTR__Integer_0100c890;
      uVar8 = local_b0;
      if (uStack_a8 <= local_b0) {
        uVar8 = uStack_a8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d159e4 to 00d159e7 has its CatchHandler @ 00d15fa8 */
      UnalignedDeallocate(local_a0);
                    /* try { // try from 00d159e8 to 00d159f3 has its CatchHandler @ 00d15fa4 */
      Integer::Integer((Integer *)local_240,1);
                    /* try { // try from 00d159f4 to 00d15a03 has its CatchHandler @ 00d15f94 */
      Integer::Minus(in_x8);
                    /* try { // try from 00d15a04 to 00d15a13 has its CatchHandler @ 00d15f84 */
      Integer::DividedBy((Integer *)local_210);
                    /* try { // try from 00d15a14 to 00d15a27 has its CatchHandler @ 00d15f74 */
      pIVar9 = in_x8;
      a_exp_b_mod_c((Integer *)local_f0,(Integer *)local_1e0,in_x8);
                    /* try { // try from 00d15a28 to 00d15a33 has its CatchHandler @ 00d15f64 */
      Integer::operator=((Integer *)local_120,(Integer *)local_c0);
      local_c0[0] = &PTR__Integer_0100c890;
      uVar8 = local_b0;
      if (uStack_a8 <= local_b0) {
        uVar8 = uStack_a8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15a64 to 00d15a67 has its CatchHandler @ 00d15f60 */
      UnalignedDeallocate(local_a0);
      local_1e0[0] = &PTR__Integer_0100c890;
      uVar8 = local_1d0;
      if (uStack_1c8 <= local_1d0) {
        uVar8 = uStack_1c8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1c0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15a98 to 00d15a9b has its CatchHandler @ 00d15f5c */
      UnalignedDeallocate(local_1c0);
      local_210[0] = &PTR__Integer_0100c890;
      uVar8 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar8 = uStack_1f8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15acc to 00d15acf has its CatchHandler @ 00d15f58 */
      UnalignedDeallocate(local_1f0);
      local_240[0] = &PTR__Integer_0100c890;
      uVar8 = local_230;
      if (uStack_228 <= local_230) {
        uVar8 = uStack_228;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_220 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15b00 to 00d15b03 has its CatchHandler @ 00d15f38 */
      UnalignedDeallocate(local_220);
                    /* try { // try from 00d15b04 to 00d15b0f has its CatchHandler @ 00d15f34 */
      Integer::Integer((Integer *)local_210,1);
                    /* try { // try from 00d15b10 to 00d15b1f has its CatchHandler @ 00d15f2c */
      Integer::Minus((Integer *)local_120);
                    /* try { // try from 00d15b20 to 00d15b2f has its CatchHandler @ 00d15f14 */
      Integer::Gcd((Integer *)local_1e0,in_x8,pIVar9);
                    /* try { // try from 00d15b30 to 00d15b3b has its CatchHandler @ 00d15f04 */
      Integer::Integer((Integer *)local_240,1);
                    /* try { // try from 00d15b3c to 00d15b47 has its CatchHandler @ 00d15ef4 */
      iVar6 = Integer::Compare((Integer *)local_c0,(Integer *)local_240);
      if (iVar6 == 0) {
                    /* try { // try from 00d15b54 to 00d15b67 has its CatchHandler @ 00d15e54 */
        a_exp_b_mod_c((Integer *)local_120,(Integer *)local_150,in_x8);
                    /* try { // try from 00d15b68 to 00d15b73 has its CatchHandler @ 00d15e6c */
        Integer::Integer((Integer *)local_2a0,1);
                    /* try { // try from 00d15b74 to 00d15b7f has its CatchHandler @ 00d15e5c */
        iVar6 = Integer::Compare((Integer *)local_270,(Integer *)local_2a0);
        bVar5 = iVar6 == 0;
        local_2a0[0] = &PTR__Integer_0100c890;
        uVar8 = local_290;
        if (uStack_288 <= local_290) {
          uVar8 = uStack_288;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)((long)local_280 + uVar8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d15bb8 to 00d15bbb has its CatchHandler @ 00d15e58 */
        UnalignedDeallocate(local_280);
        local_270[0] = &PTR__Integer_0100c890;
        uVar8 = local_260;
        if (uStack_258 <= local_260) {
          uVar8 = uStack_258;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)((long)local_250 + uVar8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d15bec to 00d15bef has its CatchHandler @ 00d15e50 */
        UnalignedDeallocate(local_250);
      }
      else {
        bVar5 = false;
      }
      local_240[0] = &PTR__Integer_0100c890;
      uVar8 = local_230;
      if (uStack_228 <= local_230) {
        uVar8 = uStack_228;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_220 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15c20 to 00d15c23 has its CatchHandler @ 00d15f48 */
      UnalignedDeallocate(local_220);
      local_c0[0] = &PTR__Integer_0100c890;
      uVar8 = local_b0;
      if (uStack_a8 <= local_b0) {
        uVar8 = uStack_a8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_a0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15c54 to 00d15c57 has its CatchHandler @ 00d15f44 */
      UnalignedDeallocate(local_a0);
      local_1e0[0] = &PTR__Integer_0100c890;
      uVar8 = local_1d0;
      if (uStack_1c8 <= local_1d0) {
        uVar8 = uStack_1c8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1c0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15c88 to 00d15c8b has its CatchHandler @ 00d15f40 */
      UnalignedDeallocate(local_1c0);
      local_210[0] = &PTR__Integer_0100c890;
      uVar8 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar8 = uStack_1f8;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15cbc to 00d15cbf has its CatchHandler @ 00d15f3c */
      UnalignedDeallocate(local_1f0);
    } while (!bVar5);
    local_1b0[0] = &PTR__Integer_0100c890;
    if (uStack_198 <= local_1a0) {
      local_1a0 = uStack_198;
    }
    for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
      *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15cf4 to 00d15cf7 has its CatchHandler @ 00d15e14 */
    UnalignedDeallocate(local_190);
    local_180[0] = &PTR__Integer_0100c890;
    if (uStack_168 <= local_170) {
      local_170 = uStack_168;
    }
    for (; local_170 != 0; local_170 = local_170 - 1) {
      *(undefined4 *)((long)local_160 + local_170 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15d28 to 00d15d2b has its CatchHandler @ 00d15e10 */
    UnalignedDeallocate(local_160);
    local_150[0] = &PTR__Integer_0100c890;
    if (uStack_138 <= local_140) {
      local_140 = uStack_138;
    }
    for (; local_140 != 0; local_140 = local_140 - 1) {
      *(undefined4 *)((long)local_130 + local_140 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15d5c to 00d15d5f has its CatchHandler @ 00d15e0c */
    UnalignedDeallocate(local_130);
    local_120[0] = &PTR__Integer_0100c890;
    if (uStack_108 <= local_110) {
      local_110 = uStack_108;
    }
    for (; local_110 != 0; local_110 = local_110 - 1) {
      *(undefined4 *)((long)local_100 + local_110 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15d90 to 00d15d93 has its CatchHandler @ 00d15e08 */
    UnalignedDeallocate(local_100);
    local_f0[0] = &PTR__Integer_0100c890;
    if (uStack_d8 <= local_e0) {
      local_e0 = uStack_d8;
    }
    for (; local_e0 != 0; local_e0 = local_e0 - 1) {
      *(undefined4 *)((long)local_d0 + local_e0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15dc4 to 00d15dc7 has its CatchHandler @ 00d15e04 */
    UnalignedDeallocate(local_d0);
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


