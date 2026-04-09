// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsStrongLucasProbablePrime
// Entry Point: 00d11ebc
// Size: 1772 bytes
// Signature: undefined __cdecl IsStrongLucasProbablePrime(Integer * param_1)


/* CryptoPP::IsStrongLucasProbablePrime(CryptoPP::Integer const&) */

uint CryptoPP::IsStrongLucasProbablePrime(Integer *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Integer *in_x3;
  uint uVar6;
  uint uVar7;
  undefined **local_1e8 [2];
  ulong local_1d8;
  ulong uStack_1d0;
  void *local_1c8;
  undefined **local_1b8 [2];
  ulong local_1a8;
  ulong uStack_1a0;
  void *local_198;
  undefined **local_188 [2];
  ulong local_178;
  ulong uStack_170;
  void *local_168;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
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
  Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00d11ef8 to 00d11f03 has its CatchHandler @ 00d126c0 */
  iVar3 = Integer::Compare(param_1,(Integer *)local_98);
  uVar5 = local_88;
  if (uStack_80 <= local_88) {
    uVar5 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)((long)local_78 + uVar5 * 4 + -4) = 0;
  }
                    /* try { // try from 00d11f40 to 00d11f43 has its CatchHandler @ 00d126bc */
  UnalignedDeallocate(local_78);
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    uVar5 = Integer::GetBit(param_1,0);
    if ((uVar5 & 1) != 0) {
      Integer::Integer((Integer *)local_98,3);
      iVar3 = 0;
      while( true ) {
                    /* try { // try from 00d11f70 to 00d11f7f has its CatchHandler @ 00d12710 */
        Integer::Times((Integer *)local_98);
                    /* try { // try from 00d11f80 to 00d11f8b has its CatchHandler @ 00d12700 */
        Integer::Integer((Integer *)local_128,4);
                    /* try { // try from 00d11f8c to 00d11f9b has its CatchHandler @ 00d126d8 */
        Integer::Minus((Integer *)local_f8);
                    /* try { // try from 00d11f9c to 00d11fa7 has its CatchHandler @ 00d126e8 */
        uVar4 = Jacobi((Integer *)local_c8,param_1);
        uVar5 = local_b8;
        if (uStack_b0 <= local_b8) {
          uVar5 = uStack_b0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_a8 + uVar5 * 4 + -4) = 0;
        }
        local_c8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d11fd8 to 00d11fdb has its CatchHandler @ 00d126e4 */
        UnalignedDeallocate(local_a8);
        local_128[0] = &PTR__Integer_0100c890;
        uVar5 = local_118;
        if (uStack_110 <= local_118) {
          uVar5 = uStack_110;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_108 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1200c to 00d1200f has its CatchHandler @ 00d126d4 */
        UnalignedDeallocate(local_108);
        local_f8[0] = &PTR__Integer_0100c890;
        uVar5 = local_e8;
        if (uStack_e0 <= local_e8) {
          uVar5 = uStack_e0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_d8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d12040 to 00d12043 has its CatchHandler @ 00d126e0 */
        UnalignedDeallocate(local_d8);
        if (uVar4 != 1) break;
        iVar3 = iVar3 + 1;
                    /* try { // try from 00d12058 to 00d12073 has its CatchHandler @ 00d12714 */
        if ((iVar3 == 0x40) && (uVar5 = Integer::IsSquare(), (uVar5 & 1) != 0)) goto LAB_00d12228;
        Integer::operator++((Integer *)local_98);
        Integer::operator++((Integer *)local_98);
      }
      if (uVar4 == 0) goto LAB_00d1253c;
                    /* try { // try from 00d120dc to 00d120e7 has its CatchHandler @ 00d12600 */
      Integer::Integer((Integer *)local_f8,1);
                    /* try { // try from 00d120e8 to 00d120f7 has its CatchHandler @ 00d125fc */
      Integer::Plus(param_1);
      local_f8[0] = &PTR__Integer_0100c890;
      uVar5 = local_e8;
      if (uStack_e0 <= local_e8) {
        uVar5 = uStack_e0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_d8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d12128 to 00d1212b has its CatchHandler @ 00d125f8 */
      UnalignedDeallocate(local_d8);
      uVar6 = 0;
      while( true ) {
                    /* try { // try from 00d12134 to 00d1213f has its CatchHandler @ 00d126c4 */
        uVar5 = Integer::GetBit((Integer *)local_c8,(ulong)uVar6);
        if ((uVar5 & 1) != 0) break;
        uVar6 = uVar6 + 1;
      }
                    /* try { // try from 00d1214c to 00d1215b has its CatchHandler @ 00d125f4 */
      Integer::operator>>((Integer *)local_c8,(ulong)uVar6);
                    /* try { // try from 00d1215c to 00d1216f has its CatchHandler @ 00d125ec */
      Lucas((CryptoPP *)local_f8,(Integer *)local_98,param_1,in_x3);
                    /* try { // try from 00d12170 to 00d1217b has its CatchHandler @ 00d125e8 */
      Integer::Integer((Integer *)local_158,2);
                    /* try { // try from 00d1217c to 00d12187 has its CatchHandler @ 00d125e4 */
      iVar3 = Integer::Compare((Integer *)local_128,(Integer *)local_158);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else {
                    /* try { // try from 00d1218c to 00d12197 has its CatchHandler @ 00d125d0 */
        Integer::Integer((Integer *)local_1b8,2);
                    /* try { // try from 00d12198 to 00d121a7 has its CatchHandler @ 00d125c0 */
        Integer::Minus(param_1);
                    /* try { // try from 00d121a8 to 00d121b3 has its CatchHandler @ 00d125b0 */
        iVar3 = Integer::Compare((Integer *)local_128,(Integer *)local_188);
        bVar2 = iVar3 == 0;
        local_188[0] = &PTR__Integer_0100c890;
        uVar5 = local_178;
        if (uStack_170 <= local_178) {
          uVar5 = uStack_170;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d121ec to 00d121ef has its CatchHandler @ 00d125ac */
        UnalignedDeallocate(local_168);
        local_1b8[0] = &PTR__Integer_0100c890;
        uVar5 = local_1a8;
        if (uStack_1a0 <= local_1a8) {
          uVar5 = uStack_1a0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_198 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d12220 to 00d12223 has its CatchHandler @ 00d125a8 */
        UnalignedDeallocate(local_198);
      }
      local_158[0] = &PTR__Integer_0100c890;
      uVar5 = local_148;
      if (uStack_140 <= local_148) {
        uVar5 = uStack_140;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d12264 to 00d12267 has its CatchHandler @ 00d125e0 */
      UnalignedDeallocate(local_138);
      if (bVar2) {
        uVar4 = 1;
      }
      else if (uVar6 < 2) {
        uVar4 = 0;
      }
      else {
        uVar7 = 1;
        while( true ) {
                    /* try { // try from 00d12284 to 00d12293 has its CatchHandler @ 00d126a4 */
          Integer::Times((Integer *)local_128);
                    /* try { // try from 00d12294 to 00d1229f has its CatchHandler @ 00d12694 */
          Integer::Integer((Integer *)local_1e8,2);
                    /* try { // try from 00d122a0 to 00d122af has its CatchHandler @ 00d12684 */
          Integer::Minus((Integer *)local_1b8);
                    /* try { // try from 00d122b0 to 00d122bf has its CatchHandler @ 00d12674 */
          Integer::Modulo((Integer *)local_188);
                    /* try { // try from 00d122c0 to 00d122cb has its CatchHandler @ 00d12664 */
          Integer::operator=((Integer *)local_128,(Integer *)local_158);
          uVar5 = local_148;
          if (uStack_140 <= local_148) {
            uVar5 = uStack_140;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
          }
          local_158[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d122f8 to 00d122fb has its CatchHandler @ 00d12660 */
          UnalignedDeallocate(local_138);
          local_188[0] = &PTR__Integer_0100c890;
          uVar5 = local_178;
          if (uStack_170 <= local_178) {
            uVar5 = uStack_170;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d1232c to 00d1232f has its CatchHandler @ 00d1265c */
          UnalignedDeallocate(local_168);
          local_1e8[0] = &PTR__Integer_0100c890;
          uVar5 = local_1d8;
          if (uStack_1d0 <= local_1d8) {
            uVar5 = uStack_1d0;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d12360 to 00d12363 has its CatchHandler @ 00d12658 */
          UnalignedDeallocate(local_1c8);
          local_1b8[0] = &PTR__Integer_0100c890;
          uVar5 = local_1a8;
          if (uStack_1a0 <= local_1a8) {
            uVar5 = uStack_1a0;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_198 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d12394 to 00d12397 has its CatchHandler @ 00d12654 */
          UnalignedDeallocate(local_198);
                    /* try { // try from 00d12398 to 00d123a3 has its CatchHandler @ 00d12650 */
          Integer::Integer((Integer *)local_188,2);
                    /* try { // try from 00d123a4 to 00d123b3 has its CatchHandler @ 00d12640 */
          Integer::Minus(param_1);
                    /* try { // try from 00d123b4 to 00d123bf has its CatchHandler @ 00d12630 */
          iVar3 = Integer::Compare((Integer *)local_128,(Integer *)local_158);
          uVar4 = (uint)(iVar3 == 0);
          local_158[0] = &PTR__Integer_0100c890;
          uVar5 = local_148;
          if (uStack_140 <= local_148) {
            uVar5 = uStack_140;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d123fc to 00d123ff has its CatchHandler @ 00d1262c */
          UnalignedDeallocate(local_138);
          local_188[0] = &PTR__Integer_0100c890;
          uVar5 = local_178;
          if (uStack_170 <= local_178) {
            uVar5 = uStack_170;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d12430 to 00d12433 has its CatchHandler @ 00d12628 */
          UnalignedDeallocate(local_168);
          if (iVar3 == 0) break;
                    /* try { // try from 00d12438 to 00d12443 has its CatchHandler @ 00d12624 */
          Integer::Integer((Integer *)local_158,2);
                    /* try { // try from 00d12444 to 00d1244f has its CatchHandler @ 00d12614 */
          iVar3 = Integer::Compare((Integer *)local_128,(Integer *)local_158);
          local_158[0] = &PTR__Integer_0100c890;
          uVar5 = local_148;
          if (uStack_140 <= local_148) {
            uVar5 = uStack_140;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d12484 to 00d12487 has its CatchHandler @ 00d12610 */
          UnalignedDeallocate(local_138);
          if ((iVar3 == 0) || (uVar7 = uVar7 + 1, uVar6 == uVar7)) break;
        }
      }
      local_128[0] = &PTR__Integer_0100c890;
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      for (; local_118 != 0; local_118 = local_118 - 1) {
        *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
      }
                    /* try { // try from 00d124d0 to 00d124d3 has its CatchHandler @ 00d125dc */
      UnalignedDeallocate(local_108);
      local_f8[0] = &PTR__Integer_0100c890;
      if (uStack_e0 <= local_e8) {
        local_e8 = uStack_e0;
      }
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d12504 to 00d12507 has its CatchHandler @ 00d125d8 */
      UnalignedDeallocate(local_d8);
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d12538 to 00d1253b has its CatchHandler @ 00d125d4 */
      UnalignedDeallocate(local_a8);
      goto LAB_00d1253c;
    }
    Integer::Integer((Integer *)local_98,2);
                    /* try { // try from 00d1208c to 00d12097 has its CatchHandler @ 00d1260c */
    iVar3 = Integer::Compare(param_1,(Integer *)local_98);
    local_98[0] = &PTR__Integer_0100c890;
    uVar4 = (uint)(iVar3 == 0);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d120d0 to 00d120d3 has its CatchHandler @ 00d12608 */
    UnalignedDeallocate(local_78);
  }
LAB_00d12570:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d12228:
  uVar4 = 0;
LAB_00d1253c:
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1256c to 00d1256f has its CatchHandler @ 00d12604 */
  UnalignedDeallocate(local_78);
  goto LAB_00d12570;
}


