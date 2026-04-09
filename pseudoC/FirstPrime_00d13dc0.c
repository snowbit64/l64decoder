// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FirstPrime
// Entry Point: 00d13dc0
// Size: 1748 bytes
// Signature: undefined __cdecl FirstPrime(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4, PrimeSelector * param_5)


/* CryptoPP::FirstPrime(CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::PrimeSelector const*) */

byte CryptoPP::FirstPrime
               (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
               PrimeSelector *param_5)

{
  ulong uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  Integer *pIVar9;
  ulong uVar10;
  ushort **ppuVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
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
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  Integer::Gcd(param_3,param_4,param_3);
                    /* try { // try from 00d13e10 to 00d13e87 has its CatchHandler @ 00d145a8 */
  pIVar9 = (Integer *)Integer::One();
  iVar7 = Integer::Compare((Integer *)local_d0,pIVar9);
  if (iVar7 == 0) {
                    /* try { // try from 00d13e90 to 00d13e97 has its CatchHandler @ 00d14560 */
    ppuVar11 = (ushort **)
               Singleton<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,CryptoPP::NewPrimeTable,0>
               ::Ref();
    puVar2 = *ppuVar11;
    puVar3 = ppuVar11[1];
    uVar12 = (ulong)((long)puVar3 - (long)puVar2) >> 1;
    uVar4 = (int)uVar12 - 1;
                    /* try { // try from 00d13eb0 to 00d13eb7 has its CatchHandler @ 00d14544 */
    Integer::Integer((Integer *)local_210,(ulong)puVar2[uVar4]);
                    /* try { // try from 00d13eb8 to 00d13ec3 has its CatchHandler @ 00d14534 */
    iVar7 = Integer::Compare(param_1,(Integer *)local_210);
    local_210[0] = &PTR__Integer_0100c890;
    uVar10 = local_200;
    if (uStack_1f8 <= local_200) {
      uVar10 = uStack_1f8;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)((long)local_1f0 + uVar10 * 4 + -4) = 0;
    }
                    /* try { // try from 00d13ef8 to 00d13efb has its CatchHandler @ 00d14530 */
    UnalignedDeallocate(local_1f0);
    if (iVar7 < 1) {
                    /* try { // try from 00d13f04 to 00d13f27 has its CatchHandler @ 00d1452c */
      Integer::operator--(param_1);
      puVar13 = puVar2;
      if ((*(int *)(param_1 + 0x28) != 1) &&
         (uVar10 = Integer::operator!(param_1), (uVar10 & 1) == 0)) {
                    /* try { // try from 00d13f30 to 00d13f37 has its CatchHandler @ 00d14494 */
        uVar8 = Integer::ConvertToLong();
        uVar10 = (long)puVar3 - (long)puVar2 & 0x1fffffffe;
        if (uVar10 != 0) {
          uVar10 = uVar10 >> 1;
          do {
            puVar3 = (ushort *)((long)puVar13 + (uVar10 & 0xfffffffffffffffe));
            uVar1 = uVar10 + ~(uVar10 >> 1);
            uVar10 = uVar10 >> 1;
            if (*puVar3 <= uVar8) {
              puVar13 = puVar3 + 1;
              uVar10 = uVar1;
            }
          } while (uVar10 != 0);
        }
      }
      if (puVar13 < puVar2 + (uVar12 & 0xffffffff)) {
        do {
                    /* try { // try from 00d13f84 to 00d13f8b has its CatchHandler @ 00d145a4 */
          Integer::Integer((Integer *)local_a0,(ulong)*puVar13);
                    /* try { // try from 00d13f8c to 00d13f9b has its CatchHandler @ 00d14580 */
          Integer::Modulo((Integer *)local_a0);
                    /* try { // try from 00d13f9c to 00d13fa7 has its CatchHandler @ 00d1458c */
          iVar7 = Integer::Compare((Integer *)local_210,param_3);
          bVar6 = iVar7 == 0;
          if ((iVar7 == 0) && (param_5 != (PrimeSelector *)0x0)) {
                    /* try { // try from 00d13fbc to 00d13fc3 has its CatchHandler @ 00d1455c */
            Integer::Integer((Integer *)local_100,(ulong)*puVar13);
                    /* try { // try from 00d13fcc to 00d13fd7 has its CatchHandler @ 00d1454c */
            bVar6 = (***(code ***)param_5)(param_5,local_100);
            uVar10 = local_f0;
            if (uStack_e8 <= local_f0) {
              uVar10 = uStack_e8;
            }
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)((long)local_e0 + uVar10 * 4 + -4) = 0;
            }
            local_100[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d14008 to 00d1400b has its CatchHandler @ 00d14548 */
            UnalignedDeallocate(local_e0);
          }
          local_210[0] = &PTR__Integer_0100c890;
          uVar10 = local_200;
          if (uStack_1f8 <= local_200) {
            uVar10 = uStack_1f8;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)((long)local_1f0 + uVar10 * 4 + -4) = 0;
          }
                    /* try { // try from 00d1403c to 00d1403f has its CatchHandler @ 00d1457c */
          UnalignedDeallocate(local_1f0);
          local_a0[0] = &PTR__Integer_0100c890;
          uVar10 = local_90;
          if (uStack_88 <= local_90) {
            uVar10 = uStack_88;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)((long)local_80 + uVar10 * 4 + -4) = 0;
          }
                    /* try { // try from 00d14070 to 00d14073 has its CatchHandler @ 00d14588 */
          UnalignedDeallocate(local_80);
          if ((bVar6 & 1) != 0) {
                    /* try { // try from 00d1442c to 00d14433 has its CatchHandler @ 00d144a0 */
            Integer::Integer((Integer *)local_210,(ulong)*puVar13);
                    /* try { // try from 00d14434 to 00d1443f has its CatchHandler @ 00d1449c */
            Integer::operator=(param_1,(Integer *)local_210);
            local_210[0] = &PTR__Integer_0100c890;
            if (uStack_1f8 <= local_200) {
              local_200 = uStack_1f8;
            }
            for (; local_200 != 0; local_200 = local_200 - 1) {
              *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
            }
                    /* try { // try from 00d14470 to 00d14473 has its CatchHandler @ 00d14498 */
            UnalignedDeallocate(local_1f0);
                    /* try { // try from 00d14474 to 00d1447f has its CatchHandler @ 00d1452c */
            iVar7 = Integer::Compare(param_1,param_2);
            bVar6 = iVar7 < 1;
            goto LAB_00d1430c;
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 < puVar2 + (uVar12 & 0xffffffff));
      }
                    /* try { // try from 00d14090 to 00d14097 has its CatchHandler @ 00d144b0 */
      Integer::Integer((Integer *)local_210,(ulong)puVar2[uVar4] + 1);
                    /* try { // try from 00d14098 to 00d140a3 has its CatchHandler @ 00d144ac */
      Integer::operator=(param_1,(Integer *)local_210);
      local_210[0] = &PTR__Integer_0100c890;
      uVar10 = local_200;
      if (uStack_1f8 <= local_200) {
        uVar10 = uStack_1f8;
      }
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)((long)local_1f0 + uVar10 * 4 + -4) = 0;
      }
                    /* try { // try from 00d140d8 to 00d140db has its CatchHandler @ 00d144a8 */
      UnalignedDeallocate(local_1f0);
    }
                    /* try { // try from 00d140dc to 00d140e7 has its CatchHandler @ 00d14560 */
    uVar10 = Integer::GetBit(param_4,0);
    if ((uVar10 & 1) != 0) {
                    /* try { // try from 00d140ec to 00d140f7 has its CatchHandler @ 00d14528 */
      Integer::Integer((Integer *)local_a0,1);
                    /* try { // try from 00d140f8 to 00d14103 has its CatchHandler @ 00d14520 */
      Integer::Integer((Integer *)local_100,2);
                    /* try { // try from 00d14104 to 00d1410f has its CatchHandler @ 00d14514 */
      Integer::Integer((Integer *)local_130,1);
                    /* try { // try from 00d14110 to 00d1412b has its CatchHandler @ 00d14500 */
      CRT(param_3,param_4,(Integer *)local_a0,(Integer *)local_100,(Integer *)local_130);
                    /* try { // try from 00d1412c to 00d1413b has its CatchHandler @ 00d144f0 */
      Integer::operator<<(param_4,1);
                    /* try { // try from 00d1413c to 00d14153 has its CatchHandler @ 00d144e0 */
      bVar6 = FirstPrime(param_1,param_2,(Integer *)local_210,(Integer *)local_160,param_5);
      local_160[0] = &PTR__Integer_0100c890;
      if (uStack_148 <= local_150) {
        local_150 = uStack_148;
      }
      for (; local_150 != 0; local_150 = local_150 - 1) {
        *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14188 to 00d1418b has its CatchHandler @ 00d144dc */
      UnalignedDeallocate(local_140);
      local_210[0] = &PTR__Integer_0100c890;
      if (uStack_1f8 <= local_200) {
        local_200 = uStack_1f8;
      }
      for (; local_200 != 0; local_200 = local_200 - 1) {
        *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
      }
                    /* try { // try from 00d141bc to 00d141bf has its CatchHandler @ 00d144d8 */
      UnalignedDeallocate(local_1f0);
      local_130[0] = &PTR__Integer_0100c890;
      if (uStack_118 <= local_120) {
        local_120 = uStack_118;
      }
      for (; local_120 != 0; local_120 = local_120 - 1) {
        *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
      }
                    /* try { // try from 00d141f0 to 00d141f3 has its CatchHandler @ 00d144d4 */
      UnalignedDeallocate(local_110);
      local_100[0] = &PTR__Integer_0100c890;
      if (uStack_e8 <= local_f0) {
        local_f0 = uStack_e8;
      }
      for (; local_f0 != 0; local_f0 = local_f0 - 1) {
        *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14224 to 00d14227 has its CatchHandler @ 00d144d0 */
      UnalignedDeallocate(local_e0);
      local_a0[0] = &PTR__Integer_0100c890;
      if (uStack_88 <= local_90) {
        local_90 = uStack_88;
      }
      for (; local_90 != 0; local_90 = local_90 - 1) {
        *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
      }
                    /* try { // try from 00d14258 to 00d1425b has its CatchHandler @ 00d144cc */
      UnalignedDeallocate(local_80);
      goto LAB_00d1430c;
    }
                    /* try { // try from 00d14260 to 00d1426f has its CatchHandler @ 00d144c8 */
    Integer::Minus(param_3);
                    /* try { // try from 00d14270 to 00d1427f has its CatchHandler @ 00d144c0 */
    Integer::Modulo((Integer *)local_a0);
                    /* try { // try from 00d14280 to 00d1428b has its CatchHandler @ 00d144bc */
    Integer::operator+=(param_1,(Integer *)local_210);
    local_210[0] = &PTR__Integer_0100c890;
    if (uStack_1f8 <= local_200) {
      local_200 = uStack_1f8;
    }
    for (; local_200 != 0; local_200 = local_200 - 1) {
      *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
    }
                    /* try { // try from 00d142bc to 00d142bf has its CatchHandler @ 00d144b8 */
    UnalignedDeallocate(local_1f0);
    local_a0[0] = &PTR__Integer_0100c890;
    uVar10 = local_90;
    if (uStack_88 <= local_90) {
      uVar10 = uStack_88;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)((long)local_80 + uVar10 * 4 + -4) = 0;
    }
                    /* try { // try from 00d142f0 to 00d142f3 has its CatchHandler @ 00d144b4 */
    UnalignedDeallocate(local_80);
                    /* try { // try from 00d142f4 to 00d142ff has its CatchHandler @ 00d14560 */
    iVar7 = Integer::Compare(param_1,param_2);
    if (iVar7 < 1) {
                    /* try { // try from 00d14374 to 00d1438b has its CatchHandler @ 00d144a4 */
      PrimeSieve::PrimeSieve((PrimeSieve *)local_210,param_1,param_2,param_4,0);
      do {
        do {
                    /* try { // try from 00d14390 to 00d143cb has its CatchHandler @ 00d145b0 */
          bVar6 = PrimeSieve::NextCandidate((PrimeSieve *)local_210,param_1);
          if ((bVar6 & 1) == 0) goto LAB_00d1441c;
        } while ((param_5 != (PrimeSelector *)0x0) &&
                (uVar10 = (***(code ***)param_5)(param_5,param_1), (uVar10 & 1) == 0));
        Integer::Integer((Integer *)local_a0,2);
                    /* try { // try from 00d143cc to 00d143d7 has its CatchHandler @ 00d14568 */
        uVar12 = IsStrongProbablePrime((CryptoPP *)param_1,(Integer *)local_a0,param_2);
        uVar10 = local_90;
        if (uStack_88 <= local_90) {
          uVar10 = uStack_88;
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)((long)local_80 + uVar10 * 4 + -4) = 0;
        }
        local_a0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d14408 to 00d1440b has its CatchHandler @ 00d14578 */
        UnalignedDeallocate(local_80);
      } while (((uVar12 & 1) == 0) ||
              (uVar10 = IsPrime(param_1), (uVar10 & 1) == 0
                    /* try { // try from 00d14410 to 00d14417 has its CatchHandler @ 00d145b0 */));
LAB_00d1441c:
      PrimeSieve::~PrimeSieve((PrimeSieve *)local_210);
      goto LAB_00d1430c;
    }
  }
  else {
    iVar7 = Integer::Compare(param_1,(Integer *)local_d0);
    if ((((iVar7 < 1) && (iVar7 = Integer::Compare((Integer *)local_d0,param_2), iVar7 < 1)) &&
        (uVar10 = IsPrime((Integer *)local_d0), (uVar10 & 1) != 0)) &&
       ((param_5 == (PrimeSelector *)0x0 ||
        (uVar10 = (***(code ***)param_5)(param_5,local_d0), (uVar10 & 1) != 0)))) {
      Integer::operator=(param_1,(Integer *)local_d0);
      bVar6 = 1;
      goto LAB_00d1430c;
    }
  }
  bVar6 = 0;
LAB_00d1430c:
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1433c to 00d1433f has its CatchHandler @ 00d14564 */
  UnalignedDeallocate(local_b0);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return bVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


