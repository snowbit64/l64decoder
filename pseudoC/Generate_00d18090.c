// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Generate
// Entry Point: 00d18090
// Size: 4296 bytes
// Signature: undefined __thiscall Generate(PrimeAndGenerator * this, int param_1, RandomNumberGenerator * param_2, uint param_3, uint param_4)


/* CryptoPP::PrimeAndGenerator::Generate(int, CryptoPP::RandomNumberGenerator&, unsigned int,
   unsigned int) */

void __thiscall
CryptoPP::PrimeAndGenerator::Generate
          (PrimeAndGenerator *this,int param_1,RandomNumberGenerator *param_2,uint param_3,
          uint param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  Integer *pIVar5;
  ulong uVar6;
  ulong uVar7;
  Integer *pIVar8;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
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
  if (param_4 + 1 == param_3) {
    Integer::Power2((Integer *)(ulong)(param_3 - 1),(ulong)(uint)param_1);
                    /* try { // try from 00d180e8 to 00d180ef has its CatchHandler @ 00d19218 */
    Integer::Power2((Integer *)(ulong)param_3,extraout_x1);
                    /* try { // try from 00d180f0 to 00d180fb has its CatchHandler @ 00d1920c */
    Integer::Integer((Integer *)local_a0,1);
                    /* try { // try from 00d180fc to 00d1810f has its CatchHandler @ 00d191f8 */
    Integer::Minus((Integer *)local_1b0);
    uVar4 = local_90;
    if (uStack_88 <= local_90) {
      uVar4 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_80 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18148 to 00d1814b has its CatchHandler @ 00d191f4 */
    UnalignedDeallocate(local_80);
    local_1b0[0] = &PTR__Integer_0100c890;
    uVar4 = local_1a0;
    if (uStack_198 <= local_1a0) {
      uVar4 = uStack_198;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_190 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1817c to 00d1817f has its CatchHandler @ 00d191f0 */
    UnalignedDeallocate(local_190);
    pIVar8 = (Integer *)(this + 0x30);
LAB_00d181a8:
    do {
                    /* try { // try from 00d181a8 to 00d181b3 has its CatchHandler @ 00d1948c */
      Integer::Integer((Integer *)local_1b0,(long)(param_1 * 5 + 6));
                    /* try { // try from 00d181b4 to 00d181bf has its CatchHandler @ 00d19490 */
      Integer::Integer((Integer *)local_a0,0xc);
                    /* try { // try from 00d181c0 to 00d181df has its CatchHandler @ 00d1947c */
      Integer::Randomize((Integer *)this,param_2,(Integer *)local_d0,(Integer *)local_100,0,
                         (Integer *)local_1b0,(Integer *)local_a0);
      uVar4 = local_90;
      if (uStack_88 <= local_90) {
        uVar4 = uStack_88;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_80 + uVar4 * 4 + -4) = 0;
      }
      local_a0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d1820c to 00d1820f has its CatchHandler @ 00d19478 */
      UnalignedDeallocate(local_80);
      local_1b0[0] = &PTR__Integer_0100c890;
      uVar4 = local_1a0;
      if (uStack_198 <= local_1a0) {
        uVar4 = uStack_198;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_190 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d18240 to 00d18243 has its CatchHandler @ 00d19474 */
      UnalignedDeallocate(local_190);
                    /* try { // try from 00d18244 to 00d1825b has its CatchHandler @ 00d194a0 */
      iVar3 = Integer::BitCount();
      Integer::Integer((Integer *)local_1e0,(ulong)(uint)(iVar3 * 0xc));
                    /* try { // try from 00d1825c to 00d1826b has its CatchHandler @ 00d19464 */
      Integer::Plus((Integer *)this);
                    /* try { // try from 00d1826c to 00d18277 has its CatchHandler @ 00d19450 */
      iVar3 = Integer::Compare((Integer *)local_100,(Integer *)local_a0);
                    /* try { // try from 00d1827c to 00d18287 has its CatchHandler @ 00d19454 */
      Integer::Integer((Integer *)local_210,0xc);
      pppuVar9 = local_100;
      if (-1 < iVar3) {
        pppuVar9 = local_a0;
      }
                    /* try { // try from 00d18294 to 00d182a7 has its CatchHandler @ 00d1943c */
      pppuVar10 = local_210;
      PrimeSieve::PrimeSieve
                ((PrimeSieve *)local_1b0,(Integer *)this,(Integer *)pppuVar9,(Integer *)pppuVar10,
                 param_1);
      local_210[0] = &PTR__Integer_0100c890;
      uVar4 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar4 = uStack_1f8;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d182d8 to 00d182db has its CatchHandler @ 00d1944c */
      UnalignedDeallocate(local_1f0);
      local_a0[0] = &PTR__Integer_0100c890;
      uVar4 = local_90;
      if (uStack_88 <= local_90) {
        uVar4 = uStack_88;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_80 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d1830c to 00d1830f has its CatchHandler @ 00d19434 */
      UnalignedDeallocate(local_80);
      local_1e0[0] = &PTR__Integer_0100c890;
      uVar4 = local_1d0;
      if (uStack_1c8 <= local_1d0) {
        uVar4 = uStack_1c8;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d18340 to 00d18343 has its CatchHandler @ 00d19438 */
      UnalignedDeallocate(local_1c0);
      do {
        do {
                    /* try { // try from 00d18344 to 00d1834f has its CatchHandler @ 00d19514 */
          uVar4 = PrimeSieve::NextCandidate((PrimeSieve *)local_1b0,(Integer *)this);
          if ((uVar4 & 1) == 0) {
            PrimeSieve::~PrimeSieve((PrimeSieve *)local_1b0);
            goto LAB_00d181a8;
          }
                    /* try { // try from 00d18358 to 00d18363 has its CatchHandler @ 00d194e0 */
          Integer::Integer((Integer *)local_240,(long)param_1);
                    /* try { // try from 00d18364 to 00d18373 has its CatchHandler @ 00d194d8 */
          Integer::Minus((Integer *)this);
                    /* try { // try from 00d18374 to 00d1837f has its CatchHandler @ 00d194cc */
          Integer::Integer((Integer *)local_a0,(Integer *)local_210);
                    /* try { // try from 00d18380 to 00d18397 has its CatchHandler @ 00d194f4 */
          pIVar5 = (Integer *)Integer::operator>>=((Integer *)local_a0,1);
          Integer::Integer((Integer *)local_1e0,pIVar5);
          local_a0[0] = &PTR__Integer_0100c890;
          uVar7 = local_90;
          if (uStack_88 <= local_90) {
            uVar7 = uStack_88;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
          }
                    /* try { // try from 00d183c8 to 00d183cb has its CatchHandler @ 00d194e8 */
          UnalignedDeallocate(local_80);
                    /* try { // try from 00d183cc to 00d183d7 has its CatchHandler @ 00d194c0 */
          Integer::operator=(pIVar8,(Integer *)local_1e0);
          local_1e0[0] = &PTR__Integer_0100c890;
          uVar7 = local_1d0;
          if (uStack_1c8 <= local_1d0) {
            uVar7 = uStack_1c8;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)((long)local_1c0 + uVar7 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18408 to 00d1840b has its CatchHandler @ 00d194f0 */
          UnalignedDeallocate(local_1c0);
          local_210[0] = &PTR__Integer_0100c890;
          uVar7 = local_200;
          if (uStack_1f8 <= local_200) {
            uVar7 = uStack_1f8;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)((long)local_1f0 + uVar7 * 4 + -4) = 0;
          }
                    /* try { // try from 00d1843c to 00d1843f has its CatchHandler @ 00d194d4 */
          UnalignedDeallocate(local_1f0);
          local_240[0] = &PTR__Integer_0100c890;
          uVar7 = local_230;
          if (uStack_228 <= local_230) {
            uVar7 = uStack_228;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)((long)local_220 + uVar7 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18470 to 00d18473 has its CatchHandler @ 00d194ec */
          UnalignedDeallocate(local_220);
                    /* try { // try from 00d18474 to 00d1847f has its CatchHandler @ 00d19514 */
          Integer::Integer((Integer *)local_a0,2);
                    /* try { // try from 00d18480 to 00d1848b has its CatchHandler @ 00d194b0 */
          uVar6 = IsStrongProbablePrime((CryptoPP *)pIVar8,(Integer *)local_a0,(Integer *)pppuVar9);
          local_a0[0] = &PTR__Integer_0100c890;
          uVar7 = local_90;
          if (uStack_88 <= local_90) {
            uVar7 = uStack_88;
          }
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
          }
                    /* try { // try from 00d184c0 to 00d184c3 has its CatchHandler @ 00d194e4 */
          UnalignedDeallocate(local_80);
        } while ((uVar6 & 1) == 0);
                    /* try { // try from 00d184c8 to 00d184d3 has its CatchHandler @ 00d19514 */
        Integer::Integer((Integer *)local_a0,2);
                    /* try { // try from 00d184d4 to 00d184df has its CatchHandler @ 00d194a8 */
        uVar6 = IsStrongProbablePrime((CryptoPP *)this,(Integer *)local_a0,(Integer *)pppuVar9);
        local_a0[0] = &PTR__Integer_0100c890;
        uVar7 = local_90;
        if (uStack_88 <= local_90) {
          uVar7 = uStack_88;
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)((long)local_80 + uVar7 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18514 to 00d18517 has its CatchHandler @ 00d194ac */
        UnalignedDeallocate(local_80);
      } while ((((uVar6 & 1) == 0) ||
               (uVar7 = IsPrime(pIVar8), (uVar7 & 1) == 0
                    /* try { // try from 00d1851c to 00d1852f has its CatchHandler @ 00d19514 */))
              || (uVar7 = IsPrime((Integer *)this), (uVar7 & 1) == 0));
      PrimeSieve::~PrimeSieve((PrimeSieve *)local_1b0);
    } while ((uVar4 & 1) == 0);
    if (param_1 == 1) {
                    /* try { // try from 00d18548 to 00d18553 has its CatchHandler @ 00d1916c */
      Integer::Integer((Integer *)local_1b0,2);
      pIVar8 = (Integer *)(this + 0x60);
                    /* try { // try from 00d18558 to 00d18563 has its CatchHandler @ 00d19168 */
      Integer::operator=(pIVar8,(Integer *)local_1b0);
      local_1b0[0] = &PTR__Integer_0100c890;
      if (uStack_198 <= local_1a0) {
        local_1a0 = uStack_198;
      }
      for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
        *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
      }
                    /* try { // try from 00d18594 to 00d18597 has its CatchHandler @ 00d19164 */
      UnalignedDeallocate(local_190);
                    /* try { // try from 00d18598 to 00d185b3 has its CatchHandler @ 00d193c8 */
      while (iVar3 = Jacobi(pIVar8,(Integer *)this), iVar3 != 1) {
        Integer::operator++(pIVar8);
      }
    }
    else {
                    /* try { // try from 00d18ed8 to 00d18ee3 has its CatchHandler @ 00d19160 */
      Integer::Integer((Integer *)local_1b0,3);
      pIVar5 = (Integer *)(this + 0x60);
                    /* try { // try from 00d18ee8 to 00d18ef3 has its CatchHandler @ 00d1915c */
      Integer::operator=(pIVar5,(Integer *)local_1b0);
      local_1b0[0] = &PTR__Integer_0100c890;
      uVar4 = local_1a0;
      if (uStack_198 <= local_1a0) {
        uVar4 = uStack_198;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_190 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d18f24 to 00d18f27 has its CatchHandler @ 00d19158 */
      UnalignedDeallocate(local_190);
      while( true ) {
                    /* try { // try from 00d18f2c to 00d18f3b has its CatchHandler @ 00d192ac */
        Integer::Times(pIVar5);
                    /* try { // try from 00d18f3c to 00d18f47 has its CatchHandler @ 00d1929c */
        Integer::Integer((Integer *)local_1e0,4);
                    /* try { // try from 00d18f48 to 00d18f57 has its CatchHandler @ 00d1928c */
        Integer::Minus((Integer *)local_a0);
                    /* try { // try from 00d18f58 to 00d18f63 has its CatchHandler @ 00d1927c */
        iVar3 = Jacobi((Integer *)local_1b0,(Integer *)this);
        if (iVar3 == -1) {
                    /* try { // try from 00d18f74 to 00d18f87 has its CatchHandler @ 00d19248 */
          Lucas((CryptoPP *)pIVar8,pIVar5,(Integer *)this,(Integer *)pppuVar10);
                    /* try { // try from 00d18f88 to 00d18f93 has its CatchHandler @ 00d19238 */
          Integer::Integer((Integer *)local_240,2);
                    /* try { // try from 00d18f94 to 00d18f9f has its CatchHandler @ 00d19220 */
          iVar3 = Integer::Compare((Integer *)local_210,(Integer *)local_240);
          bVar2 = iVar3 == 0;
          uVar4 = local_230;
          if (uStack_228 <= local_230) {
            uVar4 = uStack_228;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
          }
          local_240[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d18fd4 to 00d18fd7 has its CatchHandler @ 00d19234 */
          UnalignedDeallocate(local_220);
          local_210[0] = &PTR__Integer_0100c890;
          uVar4 = local_200;
          if (uStack_1f8 <= local_200) {
            uVar4 = uStack_1f8;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
          }
                    /* try { // try from 00d19008 to 00d1900b has its CatchHandler @ 00d19230 */
          UnalignedDeallocate(local_1f0);
        }
        else {
          bVar2 = false;
        }
        local_1b0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1a0;
        if (uStack_198 <= local_1a0) {
          uVar4 = uStack_198;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_190 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1903c to 00d1903f has its CatchHandler @ 00d192b8 */
        UnalignedDeallocate(local_190);
        local_1e0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1d0;
        if (uStack_1c8 <= local_1d0) {
          uVar4 = uStack_1c8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d19070 to 00d19073 has its CatchHandler @ 00d192b4 */
        UnalignedDeallocate(local_1c0);
        local_a0[0] = &PTR__Integer_0100c890;
        uVar4 = local_90;
        if (uStack_88 <= local_90) {
          uVar4 = uStack_88;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_80 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d190a4 to 00d190a7 has its CatchHandler @ 00d192b0 */
        UnalignedDeallocate(local_80);
        if (bVar2) break;
                    /* try { // try from 00d190ac to 00d190b3 has its CatchHandler @ 00d19278 */
        Integer::operator++(pIVar5);
      }
    }
    local_100[0] = &PTR__Integer_0100c890;
    if (uStack_e8 <= local_f0) {
      local_f0 = uStack_e8;
    }
    for (; local_f0 != 0; local_f0 = local_f0 - 1) {
      *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d190e8 to 00d190eb has its CatchHandler @ 00d19174 */
    UnalignedDeallocate(local_e0);
    local_d0[0] = &PTR__Integer_0100c890;
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1911c to 00d1911f has its CatchHandler @ 00d19170 */
    UnalignedDeallocate(local_b0);
  }
  else {
    Integer::Power2((Integer *)(ulong)(param_4 - 1),(ulong)(uint)param_1);
                    /* try { // try from 00d185cc to 00d185d3 has its CatchHandler @ 00d191e8 */
    Integer::Power2((Integer *)(ulong)param_4,extraout_x1_00);
                    /* try { // try from 00d185d4 to 00d185df has its CatchHandler @ 00d191dc */
    Integer::Integer((Integer *)local_100,1);
                    /* try { // try from 00d185e0 to 00d185ef has its CatchHandler @ 00d191c8 */
    Integer::Minus((Integer *)local_d0);
    uVar4 = local_f0;
    if (uStack_e8 <= local_f0) {
      uVar4 = uStack_e8;
    }
    local_100[0] = &PTR__Integer_0100c890;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_e0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18628 to 00d1862b has its CatchHandler @ 00d191c4 */
    UnalignedDeallocate(local_e0);
    local_d0[0] = &PTR__Integer_0100c890;
    uVar4 = local_c0;
    if (uStack_b8 <= local_c0) {
      uVar4 = uStack_b8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_b0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1865c to 00d1865f has its CatchHandler @ 00d191c0 */
    UnalignedDeallocate(local_b0);
                    /* try { // try from 00d18664 to 00d1866b has its CatchHandler @ 00d191b8 */
    Integer::Power2((Integer *)(ulong)(param_3 - 1),extraout_x1_01);
                    /* try { // try from 00d18670 to 00d18677 has its CatchHandler @ 00d191b0 */
    Integer::Power2((Integer *)(ulong)param_3,extraout_x1_02);
                    /* try { // try from 00d18678 to 00d18683 has its CatchHandler @ 00d191a4 */
    Integer::Integer((Integer *)local_210,1);
                    /* try { // try from 00d18684 to 00d18693 has its CatchHandler @ 00d19190 */
    Integer::Minus((Integer *)local_1e0);
    local_210[0] = &PTR__Integer_0100c890;
    uVar4 = local_200;
    if (uStack_1f8 <= local_200) {
      uVar4 = uStack_1f8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d186c4 to 00d186c7 has its CatchHandler @ 00d1918c */
    UnalignedDeallocate(local_1f0);
    local_1e0[0] = &PTR__Integer_0100c890;
    uVar4 = local_1d0;
    if (uStack_1c8 <= local_1d0) {
      uVar4 = uStack_1c8;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00d186f8 to 00d186fb has its CatchHandler @ 00d19188 */
    UnalignedDeallocate(local_1c0);
    do {
                    /* try { // try from 00d1870c to 00d18737 has its CatchHandler @ 00d19410 */
      pIVar8 = (Integer *)Integer::Zero();
      pIVar5 = (Integer *)Integer::One();
      Integer::Randomize((Integer *)(this + 0x30),param_2,(Integer *)local_1b0,(Integer *)local_a0,1
                         ,pIVar8,pIVar5);
                    /* try { // try from 00d18738 to 00d18743 has its CatchHandler @ 00d193e8 */
      Integer::Integer((Integer *)local_210,(long)param_1);
                    /* try { // try from 00d18744 to 00d18753 has its CatchHandler @ 00d193e0 */
      Integer::Modulo((Integer *)local_210);
                    /* try { // try from 00d18754 to 00d18773 has its CatchHandler @ 00d193d4 */
      uVar7 = Integer::Randomize((Integer *)this,param_2,(Integer *)local_d0,(Integer *)local_100,1,
                                 (Integer *)local_1e0,(Integer *)(this + 0x30));
      uVar4 = local_1d0;
      if (uStack_1c8 <= local_1d0) {
        uVar4 = uStack_1c8;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
      }
      local_1e0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d187a4 to 00d187a7 has its CatchHandler @ 00d193d0 */
      UnalignedDeallocate(local_1c0);
      local_210[0] = &PTR__Integer_0100c890;
      uVar4 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar4 = uStack_1f8;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00d187d8 to 00d187db has its CatchHandler @ 00d193cc */
      UnalignedDeallocate(local_1f0);
    } while ((uVar7 & 1) == 0);
    if (param_1 == 1) {
      do {
                    /* try { // try from 00d187f0 to 00d187fb has its CatchHandler @ 00d193c4 */
        Integer::Integer((Integer *)local_210,2);
                    /* try { // try from 00d187fc to 00d18807 has its CatchHandler @ 00d193bc */
        Integer::Integer((Integer *)local_270,2);
                    /* try { // try from 00d18808 to 00d18817 has its CatchHandler @ 00d193b4 */
        Integer::Minus((Integer *)this);
                    /* try { // try from 00d18818 to 00d18843 has its CatchHandler @ 00d193f0 */
        pIVar8 = (Integer *)Integer::Zero();
        pIVar5 = (Integer *)Integer::One();
        Integer::Integer((Integer *)local_1e0,param_2,(Integer *)local_210,(Integer *)local_240,0,
                         pIVar8,pIVar5);
        uVar4 = local_230;
        if (uStack_228 <= local_230) {
          uVar4 = uStack_228;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
        }
        local_240[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d18870 to 00d18873 has its CatchHandler @ 00d193b0 */
        UnalignedDeallocate(local_220);
        local_270[0] = &PTR__Integer_0100c890;
        uVar4 = local_260;
        if (uStack_258 <= local_260) {
          uVar4 = uStack_258;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_250 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d188a4 to 00d188a7 has its CatchHandler @ 00d193ac */
        UnalignedDeallocate(local_250);
        local_210[0] = &PTR__Integer_0100c890;
        uVar4 = local_200;
        if (uStack_1f8 <= local_200) {
          uVar4 = uStack_1f8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d188d8 to 00d188db has its CatchHandler @ 00d193a8 */
        UnalignedDeallocate(local_1f0);
                    /* try { // try from 00d188dc to 00d188e7 has its CatchHandler @ 00d193a0 */
        Integer::Integer((Integer *)local_2a0,1);
                    /* try { // try from 00d188e8 to 00d188f7 has its CatchHandler @ 00d19398 */
        Integer::Minus((Integer *)this);
                    /* try { // try from 00d188f8 to 00d18907 has its CatchHandler @ 00d19378 */
        Integer::DividedBy((Integer *)local_270);
                    /* try { // try from 00d18908 to 00d1891b has its CatchHandler @ 00d19368 */
        a_exp_b_mod_c((Integer *)local_1e0,(Integer *)local_240,(Integer *)this);
                    /* try { // try from 00d1891c to 00d18927 has its CatchHandler @ 00d19358 */
        Integer::operator=((Integer *)(this + 0x60),(Integer *)local_210);
        local_210[0] = &PTR__Integer_0100c890;
        uVar4 = local_200;
        if (uStack_1f8 <= local_200) {
          uVar4 = uStack_1f8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18958 to 00d1895b has its CatchHandler @ 00d19354 */
        UnalignedDeallocate(local_1f0);
        local_240[0] = &PTR__Integer_0100c890;
        uVar4 = local_230;
        if (uStack_228 <= local_230) {
          uVar4 = uStack_228;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1898c to 00d1898f has its CatchHandler @ 00d19350 */
        UnalignedDeallocate(local_220);
        local_270[0] = &PTR__Integer_0100c890;
        uVar4 = local_260;
        if (uStack_258 <= local_260) {
          uVar4 = uStack_258;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_250 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d189c0 to 00d189c3 has its CatchHandler @ 00d1934c */
        UnalignedDeallocate(local_250);
        local_2a0[0] = &PTR__Integer_0100c890;
        uVar4 = local_290;
        if (uStack_288 <= local_290) {
          uVar4 = uStack_288;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_280 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d189f4 to 00d189f7 has its CatchHandler @ 00d19348 */
        UnalignedDeallocate(local_280);
        local_1e0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1d0;
        if (uStack_1c8 <= local_1d0) {
          uVar4 = uStack_1c8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18a28 to 00d18a2b has its CatchHandler @ 00d19344 */
        UnalignedDeallocate(local_1c0);
                    /* try { // try from 00d18a2c to 00d18a37 has its CatchHandler @ 00d19340 */
        Integer::Integer((Integer *)local_1e0,1);
                    /* try { // try from 00d18a38 to 00d18a43 has its CatchHandler @ 00d19338 */
        iVar3 = Integer::Compare((Integer *)(this + 0x60),(Integer *)local_1e0);
        local_1e0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1d0;
        if (uStack_1c8 <= local_1d0) {
          uVar4 = uStack_1c8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18a78 to 00d18a7b has its CatchHandler @ 00d19334 */
        UnalignedDeallocate(local_1c0);
      } while (iVar3 < 1);
    }
    else {
      do {
                    /* try { // try from 00d18a90 to 00d18a9b has its CatchHandler @ 00d19330 */
        Integer::Integer((Integer *)local_210,3);
                    /* try { // try from 00d18a9c to 00d18aa7 has its CatchHandler @ 00d19328 */
        Integer::Integer((Integer *)local_270,1);
                    /* try { // try from 00d18aa8 to 00d18ab7 has its CatchHandler @ 00d19320 */
        Integer::Minus((Integer *)this);
                    /* try { // try from 00d18ab8 to 00d18ae3 has its CatchHandler @ 00d193ec */
        pIVar8 = (Integer *)Integer::Zero();
        pIVar5 = (Integer *)Integer::One();
        pppuVar9 = local_240;
        Integer::Integer((Integer *)local_1e0,param_2,(Integer *)local_210,(Integer *)pppuVar9,0,
                         pIVar8,pIVar5);
        uVar4 = local_230;
        if (uStack_228 <= local_230) {
          uVar4 = uStack_228;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
        }
        local_240[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d18b10 to 00d18b13 has its CatchHandler @ 00d1931c */
        UnalignedDeallocate(local_220);
        local_270[0] = &PTR__Integer_0100c890;
        uVar4 = local_260;
        if (uStack_258 <= local_260) {
          uVar4 = uStack_258;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_250 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18b44 to 00d18b47 has its CatchHandler @ 00d19318 */
        UnalignedDeallocate(local_250);
        local_210[0] = &PTR__Integer_0100c890;
        uVar4 = local_200;
        if (uStack_1f8 <= local_200) {
          uVar4 = uStack_1f8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18b78 to 00d18b7b has its CatchHandler @ 00d19314 */
        UnalignedDeallocate(local_1f0);
                    /* try { // try from 00d18b7c to 00d18b8b has its CatchHandler @ 00d1930c */
        Integer::Times((Integer *)local_1e0);
                    /* try { // try from 00d18b8c to 00d18b97 has its CatchHandler @ 00d19300 */
        Integer::Integer((Integer *)local_270,4);
                    /* try { // try from 00d18b98 to 00d18ba7 has its CatchHandler @ 00d192ec */
        Integer::Minus((Integer *)local_240);
                    /* try { // try from 00d18ba8 to 00d18bb3 has its CatchHandler @ 00d192dc */
        iVar3 = Jacobi((Integer *)local_210,(Integer *)this);
        local_210[0] = &PTR__Integer_0100c890;
        uVar4 = local_200;
        if (uStack_1f8 <= local_200) {
          uVar4 = uStack_1f8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18be8 to 00d18beb has its CatchHandler @ 00d192d8 */
        UnalignedDeallocate(local_1f0);
        local_270[0] = &PTR__Integer_0100c890;
        uVar4 = local_260;
        if (uStack_258 <= local_260) {
          uVar4 = uStack_258;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_250 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18c1c to 00d18c1f has its CatchHandler @ 00d192d4 */
        UnalignedDeallocate(local_250);
        local_240[0] = &PTR__Integer_0100c890;
        uVar4 = local_230;
        if (uStack_228 <= local_230) {
          uVar4 = uStack_228;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18c50 to 00d18c53 has its CatchHandler @ 00d192d0 */
        UnalignedDeallocate(local_220);
        if (iVar3 != 1) {
                    /* try { // try from 00d18c5c to 00d18c67 has its CatchHandler @ 00d1925c */
          Integer::Integer((Integer *)local_2a0,1);
                    /* try { // try from 00d18c68 to 00d18c77 has its CatchHandler @ 00d19270 */
          Integer::Plus((Integer *)this);
                    /* try { // try from 00d18c78 to 00d18c87 has its CatchHandler @ 00d19258 */
          Integer::DividedBy((Integer *)local_270);
                    /* try { // try from 00d18c88 to 00d18c9b has its CatchHandler @ 00d1926c */
          Lucas((CryptoPP *)local_240,(Integer *)local_1e0,(Integer *)this,(Integer *)pppuVar9);
                    /* try { // try from 00d18c9c to 00d18ca7 has its CatchHandler @ 00d19254 */
          Integer::operator=((Integer *)(this + 0x60),(Integer *)local_210);
          local_210[0] = &PTR__Integer_0100c890;
          uVar4 = local_200;
          if (uStack_1f8 <= local_200) {
            uVar4 = uStack_1f8;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_1f0 + uVar4 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18cd8 to 00d18cdb has its CatchHandler @ 00d19268 */
          UnalignedDeallocate(local_1f0);
          local_240[0] = &PTR__Integer_0100c890;
          uVar4 = local_230;
          if (uStack_228 <= local_230) {
            uVar4 = uStack_228;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_220 + uVar4 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18d0c to 00d18d0f has its CatchHandler @ 00d19250 */
          UnalignedDeallocate(local_220);
          local_270[0] = &PTR__Integer_0100c890;
          uVar4 = local_260;
          if (uStack_258 <= local_260) {
            uVar4 = uStack_258;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_250 + uVar4 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18d40 to 00d18d43 has its CatchHandler @ 00d19264 */
          UnalignedDeallocate(local_250);
          local_2a0[0] = &PTR__Integer_0100c890;
          uVar4 = local_290;
          if (uStack_288 <= local_290) {
            uVar4 = uStack_288;
          }
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)((long)local_280 + uVar4 * 4 + -4) = 0;
          }
                    /* try { // try from 00d18d74 to 00d18d77 has its CatchHandler @ 00d1924c */
          UnalignedDeallocate(local_280);
        }
        local_1e0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1d0;
        if (uStack_1c8 <= local_1d0) {
          uVar4 = uStack_1c8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18da8 to 00d18dab has its CatchHandler @ 00d192cc */
        UnalignedDeallocate(local_1c0);
                    /* try { // try from 00d18dac to 00d18db7 has its CatchHandler @ 00d192c8 */
        Integer::Integer((Integer *)local_1e0,2);
                    /* try { // try from 00d18db8 to 00d18dc3 has its CatchHandler @ 00d192c0 */
        iVar3 = Integer::Compare((Integer *)(this + 0x60),(Integer *)local_1e0);
        local_1e0[0] = &PTR__Integer_0100c890;
        uVar4 = local_1d0;
        if (uStack_1c8 <= local_1d0) {
          uVar4 = uStack_1c8;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_1c0 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d18df8 to 00d18dfb has its CatchHandler @ 00d192bc */
        UnalignedDeallocate(local_1c0);
      } while (iVar3 < 1);
    }
    local_100[0] = &PTR__Integer_0100c890;
    if (uStack_e8 <= local_f0) {
      local_f0 = uStack_e8;
    }
    for (; local_f0 != 0; local_f0 = local_f0 - 1) {
      *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18e34 to 00d18e37 has its CatchHandler @ 00d19184 */
    UnalignedDeallocate(local_e0);
    local_d0[0] = &PTR__Integer_0100c890;
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18e68 to 00d18e6b has its CatchHandler @ 00d19180 */
    UnalignedDeallocate(local_b0);
    local_a0[0] = &PTR__Integer_0100c890;
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18e9c to 00d18e9f has its CatchHandler @ 00d1917c */
    UnalignedDeallocate(local_80);
    local_1b0[0] = &PTR__Integer_0100c890;
    if (uStack_198 <= local_1a0) {
      local_1a0 = uStack_198;
    }
    for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
      *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d18ed0 to 00d18ed3 has its CatchHandler @ 00d19178 */
    UnalignedDeallocate(local_190);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


