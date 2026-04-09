// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MihailescuProvablePrime
// Entry Point: 00d1488c
// Size: 2480 bytes
// Signature: undefined __thiscall MihailescuProvablePrime(CryptoPP * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::MihailescuProvablePrime(CryptoPP::RandomNumberGenerator&, unsigned int) */

void __thiscall
CryptoPP::MihailescuProvablePrime(CryptoPP *this,RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  Integer *pIVar11;
  Integer *pIVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint uVar13;
  undefined ***pppuVar14;
  undefined ***in_x8;
  long lVar15;
  long lVar16;
  byte unaff_w26;
  undefined **local_330 [2];
  ulong local_320;
  ulong uStack_318;
  void *local_310;
  undefined **local_280 [2];
  ulong local_270;
  ulong uStack_268;
  void *local_260;
  undefined **local_250 [2];
  ulong local_240;
  ulong uStack_238;
  void *local_230;
  undefined **local_220 [2];
  ulong local_210;
  ulong uStack_208;
  void *local_200;
  undefined **local_1f0 [2];
  ulong local_1e0;
  ulong uStack_1d8;
  void *local_1d0;
  undefined **local_1c0;
  ulong local_1b0;
  ulong uStack_1a8;
  void *local_1a0;
  undefined **local_190 [2];
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  undefined **local_160;
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
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)in_x8);
                    /* try { // try from 00d148d0 to 00d148d7 has its CatchHandler @ 00d152d0 */
  Integer::Power2((Integer *)(ulong)((int)param_1 - 1),extraout_x1);
                    /* try { // try from 00d148dc to 00d148e3 has its CatchHandler @ 00d152c8 */
  Integer::Power2((Integer *)((ulong)param_1 & 0xffffffff),extraout_x1_00);
                    /* try { // try from 00d148e4 to 00d148ef has its CatchHandler @ 00d152bc */
  Integer::Integer((Integer *)local_a0,1);
                    /* try { // try from 00d148f0 to 00d14903 has its CatchHandler @ 00d152a8 */
  Integer::Minus((Integer *)local_330);
  uVar7 = local_90;
  if (uStack_88 <= local_90) {
    uVar7 = uStack_88;
  }
  local_a0[0] = &PTR__Integer_0100c890;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1493c to 00d1493f has its CatchHandler @ 00d152a4 */
  UnalignedDeallocate(local_80);
  local_330[0] = &PTR__Integer_0100c890;
  uVar7 = local_320;
  if (uStack_318 <= local_320) {
    uVar7 = uStack_318;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)((long)local_310 + uVar7 * 4 + -4) = 0;
  }
                    /* try { // try from 00d14970 to 00d14973 has its CatchHandler @ 00d152a0 */
  UnalignedDeallocate(local_310);
                    /* try { // try from 00d14974 to 00d1497f has its CatchHandler @ 00d15298 */
  Integer::Integer((Integer *)local_a0,0x7fcf);
                    /* try { // try from 00d14980 to 00d1498f has its CatchHandler @ 00d1528c */
  Integer::Times((Integer *)local_a0);
                    /* try { // try from 00d14990 to 00d1499b has its CatchHandler @ 00d15278 */
  iVar5 = Integer::Compare((Integer *)local_220,(Integer *)local_330);
  local_330[0] = &PTR__Integer_0100c890;
  uVar7 = local_320;
  if (uStack_318 <= local_320) {
    uVar7 = uStack_318;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)((long)local_310 + uVar7 * 4 + -4) = 0;
  }
                    /* try { // try from 00d149d0 to 00d149d3 has its CatchHandler @ 00d15274 */
  UnalignedDeallocate(local_310);
  local_a0[0] = &PTR__Integer_0100c890;
  uVar7 = local_90;
  if (uStack_88 <= local_90) {
    uVar7 = uStack_88;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
  }
                    /* try { // try from 00d14a04 to 00d14a07 has its CatchHandler @ 00d15270 */
  UnalignedDeallocate(local_80);
  if (iVar5 < 1) {
                    /* try { // try from 00d15170 to 00d1519b has its CatchHandler @ 00d152d8 */
    pIVar11 = (Integer *)Integer::Zero();
    pIVar12 = (Integer *)Integer::One();
    Integer::Randomize((Integer *)in_x8,(RandomNumberGenerator *)this,(Integer *)local_1f0,
                       (Integer *)local_220,1,pIVar11,pIVar12);
    local_220[0] = &PTR__Integer_0100c890;
    if (uStack_208 <= local_210) {
      local_210 = uStack_208;
    }
    for (; local_210 != 0; local_210 = local_210 - 1) {
      *(undefined4 *)((long)local_200 + local_210 * 4 + -4) = 0;
    }
                    /* try { // try from 00d151cc to 00d151cf has its CatchHandler @ 00d15244 */
    UnalignedDeallocate(local_200);
    local_1f0[0] = &PTR__Integer_0100c890;
    if (uStack_1d8 <= local_1e0) {
      local_1e0 = uStack_1d8;
    }
    for (; local_1e0 != 0; local_1e0 = local_1e0 - 1) {
      *(undefined4 *)((long)local_1d0 + local_1e0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15200 to 00d15203 has its CatchHandler @ 00d15240 */
    UnalignedDeallocate(local_1d0);
  }
  else {
    uVar13 = (uint)(((ulong)param_1 & 0xffffffff) / 0x24);
                    /* try { // try from 00d14a28 to 00d14a33 has its CatchHandler @ 00d15268 */
    iVar5 = (**(code **)(*(long *)this + 0x48))(this,0);
                    /* try { // try from 00d14a50 to 00d14a5b has its CatchHandler @ 00d15260 */
    MihailescuProvablePrime
              (this,(RandomNumberGenerator *)(ulong)(((int)param_1 + 2U) / 3 + iVar5 + 1),uVar13);
                    /* try { // try from 00d14a5c to 00d14a6b has its CatchHandler @ 00d15258 */
    Integer::operator<<((Integer *)local_250,1);
    bVar2 = false;
    do {
                    /* try { // try from 00d14a88 to 00d14a93 has its CatchHandler @ 00d152f8 */
      Integer::Integer((Integer *)local_330,1);
                    /* try { // try from 00d14a94 to 00d14ab3 has its CatchHandler @ 00d152e8 */
      Integer::Randomize((Integer *)in_x8,(RandomNumberGenerator *)this,(Integer *)local_1f0,
                         (Integer *)local_220,0,(Integer *)local_330,(Integer *)local_280);
      uVar7 = local_320;
      if (uStack_318 <= local_320) {
        uVar7 = uStack_318;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)((long)local_310 + uVar7 * 4 + -4) = 0;
      }
      local_330[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d14ae0 to 00d14ae3 has its CatchHandler @ 00d15304 */
      UnalignedDeallocate(local_310);
                    /* try { // try from 00d14ae4 to 00d14af7 has its CatchHandler @ 00d15334 */
      uVar7 = Integer::BitCount();
      Integer::Integer((Integer *)local_100,uVar7 & 0xffffffff);
                    /* try { // try from 00d14af8 to 00d14b07 has its CatchHandler @ 00d1530c */
      Integer::Times((Integer *)local_100);
                    /* try { // try from 00d14b08 to 00d14b17 has its CatchHandler @ 00d152e0 */
      Integer::Plus((Integer *)in_x8);
                    /* try { // try from 00d14b18 to 00d14b43 has its CatchHandler @ 00d15314 */
      iVar5 = Integer::Compare((Integer *)local_220,(Integer *)local_a0);
      pppuVar14 = local_220;
      if (-1 < iVar5) {
        pppuVar14 = local_a0;
      }
      PrimeSieve::PrimeSieve
                ((PrimeSieve *)local_330,(Integer *)in_x8,(Integer *)pppuVar14,(Integer *)local_280,
                 0);
      local_a0[0] = &PTR__Integer_0100c890;
      uVar7 = local_90;
      if (uStack_88 <= local_90) {
        uVar7 = uStack_88;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14b74 to 00d14b77 has its CatchHandler @ 00d15300 */
      UnalignedDeallocate(local_80);
      local_d0[0] = &PTR__Integer_0100c890;
      uVar7 = local_c0;
      if (uStack_b8 <= local_c0) {
        uVar7 = uStack_b8;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)((long)local_b0 + uVar7 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14ba8 to 00d14bab has its CatchHandler @ 00d152fc */
      UnalignedDeallocate(local_b0);
      local_100[0] = &PTR__Integer_0100c890;
      uVar7 = local_f0;
      if (uStack_e8 <= local_f0) {
        uVar7 = uStack_e8;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)((long)local_e0 + uVar7 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14bdc to 00d14bdf has its CatchHandler @ 00d15308 */
      UnalignedDeallocate(local_e0);
      do {
        do {
                    /* try { // try from 00d14be0 to 00d14bff has its CatchHandler @ 00d153e8 */
          uVar7 = PrimeSieve::NextCandidate((PrimeSieve *)local_330,(Integer *)in_x8);
          if ((uVar7 & 1) == 0) goto LAB_00d14a7c;
          Integer::Integer((Integer *)local_a0,2);
                    /* try { // try from 00d14c00 to 00d14c0b has its CatchHandler @ 00d153e4 */
          uVar8 = IsStrongProbablePrime((CryptoPP *)in_x8,(Integer *)local_a0,(Integer *)pppuVar14);
          local_a0[0] = &PTR__Integer_0100c890;
          uVar3 = local_90;
          if (uStack_88 <= local_90) {
            uVar3 = uStack_88;
          }
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)((long)local_80 + uVar3 * 4 + -4) = 0;
          }
                    /* try { // try from 00d14c40 to 00d14c43 has its CatchHandler @ 00d153e0 */
          UnalignedDeallocate(local_80);
        } while ((uVar8 & 1) == 0);
                    /* try { // try from 00d14c48 to 00d14c53 has its CatchHandler @ 00d153e8 */
        Integer::Integer((Integer *)local_100,1);
                    /* try { // try from 00d14c54 to 00d14c63 has its CatchHandler @ 00d153a0 */
        Integer::Minus((Integer *)in_x8);
                    /* try { // try from 00d14c64 to 00d14c73 has its CatchHandler @ 00d15378 */
        Integer::DividedBy((Integer *)local_d0);
        local_d0[0] = &PTR__Integer_0100c890;
        uVar3 = local_c0;
        if (uStack_b8 <= local_c0) {
          uVar3 = uStack_b8;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_b0 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14ca4 to 00d14ca7 has its CatchHandler @ 00d15360 */
        UnalignedDeallocate(local_b0);
        local_100[0] = &PTR__Integer_0100c890;
        uVar3 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar3 = uStack_e8;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_e0 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14cd8 to 00d14cdb has its CatchHandler @ 00d15350 */
        UnalignedDeallocate(local_e0);
                    /* try { // try from 00d14cdc to 00d14ceb has its CatchHandler @ 00d153dc */
        Integer::Modulo((Integer *)local_a0);
                    /* try { // try from 00d14cec to 00d14cfb has its CatchHandler @ 00d15398 */
        Integer::Times((Integer *)local_130);
                    /* try { // try from 00d14cfc to 00d14d07 has its CatchHandler @ 00d1536c */
        Integer::Integer((Integer *)local_190,4);
                    /* try { // try from 00d14d08 to 00d14d17 has its CatchHandler @ 00d15358 */
        Integer::DividedBy((Integer *)local_a0);
                    /* try { // try from 00d14d18 to 00d14d27 has its CatchHandler @ 00d15348 */
        Integer::Times((Integer *)local_190);
                    /* try { // try from 00d14d28 to 00d14d37 has its CatchHandler @ 00d153b0 */
        Integer::Minus((Integer *)local_100);
                    /* try { // try from 00d14d38 to 00d14d3f has its CatchHandler @ 00d15388 */
        uVar8 = Integer::IsSquare();
        local_d0[0] = &PTR__Integer_0100c890;
        uVar3 = local_c0;
        if (uStack_b8 <= local_c0) {
          uVar3 = uStack_b8;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_b0 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14d74 to 00d14d77 has its CatchHandler @ 00d15368 */
        UnalignedDeallocate(local_b0);
        local_160 = &PTR__Integer_0100c890;
        uVar3 = local_150;
        if (uStack_148 <= local_150) {
          uVar3 = uStack_148;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_140 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14da8 to 00d14dab has its CatchHandler @ 00d15354 */
        UnalignedDeallocate(local_140);
        local_1c0 = &PTR__Integer_0100c890;
        uVar3 = local_1b0;
        if (uStack_1a8 <= local_1b0) {
          uVar3 = uStack_1a8;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_1a0 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14ddc to 00d14ddf has its CatchHandler @ 00d15344 */
        UnalignedDeallocate(local_1a0);
        local_190[0] = &PTR__Integer_0100c890;
        uVar3 = local_180;
        if (uStack_178 <= local_180) {
          uVar3 = uStack_178;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_170 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14e10 to 00d14e13 has its CatchHandler @ 00d153ac */
        UnalignedDeallocate(local_170);
        local_100[0] = &PTR__Integer_0100c890;
        uVar3 = local_f0;
        if (uStack_e8 <= local_f0) {
          uVar3 = uStack_e8;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_e0 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14e44 to 00d14e47 has its CatchHandler @ 00d15374 */
        UnalignedDeallocate(local_e0);
        local_130[0] = &PTR__Integer_0100c890;
        uVar3 = local_120;
        if (uStack_118 <= local_120) {
          uVar3 = uStack_118;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_110 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d14e78 to 00d14e7b has its CatchHandler @ 00d15364 */
        UnalignedDeallocate(local_110);
        if ((uVar8 & 1) == 0) {
                    /* try { // try from 00d14e80 to 00d14e87 has its CatchHandler @ 00d1533c */
          plVar9 = (long *)Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
                           ::Ref();
          lVar15 = 0;
          lVar16 = *plVar9;
          do {
                    /* try { // try from 00d14e94 to 00d14e9b has its CatchHandler @ 00d15424 */
            Integer::Integer((Integer *)local_100,(ulong)*(ushort *)(lVar16 + lVar15 * 2));
                    /* try { // try from 00d14e9c to 00d14eaf has its CatchHandler @ 00d15440 */
            pppuVar14 = in_x8;
            a_exp_b_mod_c((Integer *)local_100,(Integer *)local_a0,(Integer *)in_x8);
            local_100[0] = &PTR__Integer_0100c890;
            uVar3 = local_f0;
            if (uStack_e8 <= local_f0) {
              uVar3 = uStack_e8;
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined4 *)((long)local_e0 + uVar3 * 4 + -4) = 0;
            }
                    /* try { // try from 00d14ee0 to 00d14ee3 has its CatchHandler @ 00d15420 */
            UnalignedDeallocate(local_e0);
                    /* try { // try from 00d14ee4 to 00d14eef has its CatchHandler @ 00d15434 */
            Integer::Integer((Integer *)local_100,1);
                    /* try { // try from 00d14ef0 to 00d14efb has its CatchHandler @ 00d15410 */
            iVar5 = Integer::Compare((Integer *)local_d0,(Integer *)local_100);
            local_100[0] = &PTR__Integer_0100c890;
            uVar3 = local_f0;
            if (uStack_e8 <= local_f0) {
              uVar3 = uStack_e8;
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined4 *)((long)local_e0 + uVar3 * 4 + -4) = 0;
            }
                    /* try { // try from 00d14f30 to 00d14f33 has its CatchHandler @ 00d1542c */
            UnalignedDeallocate(local_e0);
            if (iVar5 != 0) {
                    /* try { // try from 00d14f38 to 00d14f4b has its CatchHandler @ 00d15404 */
              pppuVar14 = in_x8;
              a_exp_b_mod_c((Integer *)local_d0,(Integer *)local_250,(Integer *)in_x8);
                    /* try { // try from 00d14f4c to 00d14f57 has its CatchHandler @ 00d153f0 */
              Integer::Integer((Integer *)local_130,1);
                    /* try { // try from 00d14f58 to 00d14f63 has its CatchHandler @ 00d153f4 */
              iVar6 = Integer::Compare((Integer *)local_100,(Integer *)local_130);
              unaff_w26 = iVar6 == 0;
              local_130[0] = &PTR__Integer_0100c890;
              uVar3 = local_120;
              if (uStack_118 <= local_120) {
                uVar3 = uStack_118;
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined4 *)((long)local_110 + uVar3 * 4 + -4) = 0;
              }
                    /* try { // try from 00d14f9c to 00d14f9f has its CatchHandler @ 00d1540c */
              UnalignedDeallocate(local_110);
              local_100[0] = &PTR__Integer_0100c890;
              uVar3 = local_f0;
              if (uStack_e8 <= local_f0) {
                uVar3 = uStack_e8;
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                *(undefined4 *)((long)local_e0 + uVar3 * 4 + -4) = 0;
              }
                    /* try { // try from 00d14fd0 to 00d14fd3 has its CatchHandler @ 00d15408 */
              UnalignedDeallocate(local_e0);
            }
            local_d0[0] = &PTR__Integer_0100c890;
            uVar3 = local_c0;
            if (uStack_b8 <= local_c0) {
              uVar3 = uStack_b8;
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined4 *)((long)local_b0 + uVar3 * 4 + -4) = 0;
            }
                    /* try { // try from 00d15004 to 00d15007 has its CatchHandler @ 00d15430 */
            UnalignedDeallocate(local_b0);
            if (iVar5 != 0) goto LAB_00d1501c;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0x32);
        }
        unaff_w26 = 0;
LAB_00d1501c:
        local_a0[0] = &PTR__Integer_0100c890;
        uVar3 = local_90;
        if (uStack_88 <= local_90) {
          uVar3 = uStack_88;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_80 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1504c to 00d1504f has its CatchHandler @ 00d15340 */
        UnalignedDeallocate(local_80);
      } while ((unaff_w26 & 1) == 0);
      bVar2 = true;
LAB_00d14a7c:
      PrimeSieve::~PrimeSieve((PrimeSieve *)local_330);
    } while ((uVar7 & 1) == 0);
    local_280[0] = &PTR__Integer_0100c890;
    if (uStack_268 <= local_270) {
      local_270 = uStack_268;
    }
    for (; local_270 != 0; local_270 = local_270 - 1) {
      *(undefined4 *)((long)local_260 + local_270 * 4 + -4) = 0;
    }
                    /* try { // try from 00d15090 to 00d15093 has its CatchHandler @ 00d15254 */
    UnalignedDeallocate(local_260);
    local_250[0] = &PTR__Integer_0100c890;
    if (uStack_238 <= local_240) {
      local_240 = uStack_238;
    }
    for (; local_240 != 0; local_240 = local_240 - 1) {
      *(undefined4 *)((long)local_230 + local_240 * 4 + -4) = 0;
    }
                    /* try { // try from 00d150c4 to 00d150c7 has its CatchHandler @ 00d15250 */
    UnalignedDeallocate(local_230);
    local_220[0] = &PTR__Integer_0100c890;
    if (uStack_208 <= local_210) {
      local_210 = uStack_208;
    }
    for (; local_210 != 0; local_210 = local_210 - 1) {
      *(undefined4 *)((long)local_200 + local_210 * 4 + -4) = 0;
    }
                    /* try { // try from 00d150f8 to 00d150fb has its CatchHandler @ 00d1524c */
    UnalignedDeallocate(local_200);
    local_1f0[0] = &PTR__Integer_0100c890;
    if (uStack_1d8 <= local_1e0) {
      local_1e0 = uStack_1d8;
    }
    for (; local_1e0 != 0; local_1e0 = local_1e0 - 1) {
      *(undefined4 *)((long)local_1d0 + local_1e0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1512c to 00d1512f has its CatchHandler @ 00d15248 */
    UnalignedDeallocate(local_1d0);
    if (!bVar2) {
      ppuVar10 = in_x8[4];
      *in_x8 = &PTR__Integer_0100c890;
      ppuVar4 = in_x8[2];
      if (in_x8[3] <= in_x8[2]) {
        ppuVar4 = in_x8[3];
      }
      for (; ppuVar4 != (undefined **)0x0; ppuVar4 = (undefined **)((long)ppuVar4 - 1)) {
        *(undefined4 *)((long)ppuVar10 + (long)ppuVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d15168 to 00d1516b has its CatchHandler @ 00d1523c */
      UnalignedDeallocate(ppuVar10);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


