// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ModularSquareRoot
// Entry Point: 00d16038
// Size: 2540 bytes
// Signature: undefined __thiscall ModularSquareRoot(CryptoPP * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularSquareRoot(CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall CryptoPP::ModularSquareRoot(CryptoPP *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Integer *pIVar6;
  Integer *in_x8;
  int iVar7;
  undefined **local_218 [2];
  ulong local_208;
  ulong uStack_200;
  void *local_1f8;
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
  iVar2 = Integer::Modulo(param_1,4);
  if (iVar2 == 3) {
    Integer::Integer((Integer *)local_f8,1);
                    /* try { // try from 00d16090 to 00d1609f has its CatchHandler @ 00d16bbc */
    Integer::Plus(param_1);
                    /* try { // try from 00d160a0 to 00d160af has its CatchHandler @ 00d16ba0 */
    Integer::DividedBy((uint)local_c8);
                    /* try { // try from 00d160b0 to 00d160c3 has its CatchHandler @ 00d16b90 */
    a_exp_b_mod_c((Integer *)this,(Integer *)local_98,param_1);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d160fc to 00d160ff has its CatchHandler @ 00d16b74 */
    UnalignedDeallocate(local_78);
    local_c8[0] = &PTR__Integer_0100c890;
    if (uStack_b0 <= local_b8) {
      local_b8 = uStack_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16130 to 00d16133 has its CatchHandler @ 00d16b70 */
    UnalignedDeallocate(local_a8);
    local_f8[0] = &PTR__Integer_0100c890;
    if (uStack_e0 <= local_e8) {
      local_e8 = uStack_e0;
    }
    for (; local_e8 != 0; local_e8 = local_e8 - 1) {
      *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16164 to 00d16167 has its CatchHandler @ 00d16b6c */
    UnalignedDeallocate(local_d8);
  }
  else {
    Integer::Integer((Integer *)local_c8,1);
                    /* try { // try from 00d16178 to 00d16187 has its CatchHandler @ 00d16b7c */
    Integer::Minus(param_1);
    uVar5 = local_b8;
    if (uStack_b0 <= local_b8) {
      uVar5 = uStack_b0;
    }
    local_c8[0] = &PTR__Integer_0100c890;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_a8 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d161c0 to 00d161c3 has its CatchHandler @ 00d16b78 */
    UnalignedDeallocate(local_a8);
    iVar2 = 0;
                    /* try { // try from 00d161c8 to 00d161e7 has its CatchHandler @ 00d16c98 */
    while (uVar5 = Integer::GetBit((Integer *)local_98,0), (uVar5 & 1) == 0) {
      iVar2 = iVar2 + 1;
      Integer::operator>>=((Integer *)local_98,1);
    }
                    /* try { // try from 00d161ec to 00d161f7 has its CatchHandler @ 00d16b58 */
    Integer::Integer((Integer *)local_c8,2);
                    /* try { // try from 00d161f8 to 00d16213 has its CatchHandler @ 00d16c7c */
    while (iVar3 = Jacobi((Integer *)local_c8,param_1), iVar3 != -1) {
      Integer::operator++((Integer *)local_c8);
    }
                    /* try { // try from 00d16218 to 00d1622b has its CatchHandler @ 00d16b54 */
    a_exp_b_mod_c((Integer *)local_c8,(Integer *)local_98,param_1);
                    /* try { // try from 00d1622c to 00d16237 has its CatchHandler @ 00d16b4c */
    Integer::Integer((Integer *)local_1b8,1);
                    /* try { // try from 00d16238 to 00d16247 has its CatchHandler @ 00d16b40 */
    Integer::Minus((Integer *)local_98);
                    /* try { // try from 00d16248 to 00d16257 has its CatchHandler @ 00d16b2c */
    Integer::DividedBy((uint)local_188);
                    /* try { // try from 00d16258 to 00d1626b has its CatchHandler @ 00d16b1c */
    a_exp_b_mod_c((Integer *)this,(Integer *)local_158,param_1);
    local_158[0] = &PTR__Integer_0100c890;
    uVar5 = local_148;
    if (uStack_140 <= local_148) {
      uVar5 = uStack_140;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1629c to 00d1629f has its CatchHandler @ 00d16b18 */
    UnalignedDeallocate(local_138);
    local_188[0] = &PTR__Integer_0100c890;
    uVar5 = local_178;
    if (uStack_170 <= local_178) {
      uVar5 = uStack_170;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d162d0 to 00d162d3 has its CatchHandler @ 00d16b14 */
    UnalignedDeallocate(local_168);
    local_1b8[0] = &PTR__Integer_0100c890;
    uVar5 = local_1a8;
    if (uStack_1a0 <= local_1a8) {
      uVar5 = uStack_1a0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_198 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16304 to 00d16307 has its CatchHandler @ 00d16b10 */
    UnalignedDeallocate(local_198);
                    /* try { // try from 00d16308 to 00d16317 has its CatchHandler @ 00d16b08 */
    Integer::Times((Integer *)local_128);
                    /* try { // try from 00d16318 to 00d16327 has its CatchHandler @ 00d16afc */
    Integer::Modulo((Integer *)local_1e8);
                    /* try { // try from 00d16328 to 00d16337 has its CatchHandler @ 00d16ae8 */
    Integer::Times((Integer *)local_1b8);
                    /* try { // try from 00d16338 to 00d16347 has its CatchHandler @ 00d16ad8 */
    Integer::Modulo((Integer *)local_188);
    local_188[0] = &PTR__Integer_0100c890;
    uVar5 = local_178;
    if (uStack_170 <= local_178) {
      uVar5 = uStack_170;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16378 to 00d1637b has its CatchHandler @ 00d16ad4 */
    UnalignedDeallocate(local_168);
    local_1b8[0] = &PTR__Integer_0100c890;
    uVar5 = local_1a8;
    if (uStack_1a0 <= local_1a8) {
      uVar5 = uStack_1a0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_198 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d163ac to 00d163af has its CatchHandler @ 00d16ad0 */
    UnalignedDeallocate(local_198);
    local_1e8[0] = &PTR__Integer_0100c890;
    uVar5 = local_1d8;
    if (uStack_1d0 <= local_1d8) {
      uVar5 = uStack_1d0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d163e0 to 00d163e3 has its CatchHandler @ 00d16acc */
    UnalignedDeallocate(local_1c8);
                    /* try { // try from 00d163e4 to 00d163f3 has its CatchHandler @ 00d16ac4 */
    Integer::Times((Integer *)this);
                    /* try { // try from 00d163f4 to 00d16403 has its CatchHandler @ 00d16ab8 */
    Integer::Modulo((Integer *)local_1b8);
                    /* try { // try from 00d16404 to 00d1640f has its CatchHandler @ 00d16aa4 */
    Integer::operator=((Integer *)local_128,(Integer *)local_188);
    local_188[0] = &PTR__Integer_0100c890;
    uVar5 = local_178;
    if (uStack_170 <= local_178) {
      uVar5 = uStack_170;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16440 to 00d16443 has its CatchHandler @ 00d16aa0 */
    UnalignedDeallocate(local_168);
    local_1b8[0] = &PTR__Integer_0100c890;
    uVar5 = local_1a8;
    if (uStack_1a0 <= local_1a8) {
      uVar5 = uStack_1a0;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_198 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16474 to 00d16477 has its CatchHandler @ 00d16a9c */
    UnalignedDeallocate(local_198);
                    /* try { // try from 00d16478 to 00d1647f has its CatchHandler @ 00d16a94 */
    Integer::Integer((Integer *)local_188);
                    /* try { // try from 00d16480 to 00d16487 has its CatchHandler @ 00d16a8c */
    Integer::Integer((Integer *)local_1b8);
    while( true ) {
                    /* try { // try from 00d1648c to 00d16497 has its CatchHandler @ 00d16bdc */
      Integer::Integer((Integer *)local_1e8,1);
                    /* try { // try from 00d16498 to 00d164a3 has its CatchHandler @ 00d16bd8 */
      iVar3 = Integer::Compare((Integer *)local_158,(Integer *)local_1e8);
      uVar5 = local_1d8;
      if (uStack_1d0 <= local_1d8) {
        uVar5 = uStack_1d0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
      }
      local_1e8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d164d4 to 00d164d7 has its CatchHandler @ 00d16bd4 */
      UnalignedDeallocate(local_1c8);
      if (iVar3 == 0) break;
                    /* try { // try from 00d164dc to 00d164e7 has its CatchHandler @ 00d16be0 */
      Integer::operator=((Integer *)local_188,(Integer *)local_158);
      iVar3 = 0;
      do {
        iVar7 = iVar3;
                    /* try { // try from 00d164f0 to 00d164ff has its CatchHandler @ 00d16c18 */
        Integer::Times((Integer *)local_158);
                    /* try { // try from 00d16500 to 00d1650f has its CatchHandler @ 00d16c20 */
        Integer::Modulo((Integer *)local_218);
                    /* try { // try from 00d16510 to 00d1651b has its CatchHandler @ 00d16c28 */
        Integer::operator=((Integer *)local_158,(Integer *)local_1e8);
        local_1e8[0] = &PTR__Integer_0100c890;
        uVar5 = local_1d8;
        if (uStack_1d0 <= local_1d8) {
          uVar5 = uStack_1d0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1654c to 00d1654f has its CatchHandler @ 00d16c10 */
        UnalignedDeallocate(local_1c8);
        local_218[0] = &PTR__Integer_0100c890;
        uVar5 = local_208;
        if (uStack_200 <= local_208) {
          uVar5 = uStack_200;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_1f8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d16580 to 00d16583 has its CatchHandler @ 00d16c14 */
        UnalignedDeallocate(local_1f8);
        iVar3 = iVar7 + 1;
        if (iVar2 == iVar3) {
                    /* try { // try from 00d16864 to 00d16873 has its CatchHandler @ 00d16bd0 */
          pIVar6 = (Integer *)Integer::Zero();
          Integer::Integer(in_x8,pIVar6);
          goto LAB_00d16874;
        }
                    /* try { // try from 00d16590 to 00d1659b has its CatchHandler @ 00d16c0c */
        Integer::Integer((Integer *)local_1e8,1);
                    /* try { // try from 00d1659c to 00d165a7 has its CatchHandler @ 00d16bfc */
        iVar4 = Integer::Compare((Integer *)local_158,(Integer *)local_1e8);
        local_1e8[0] = &PTR__Integer_0100c890;
        uVar5 = local_1d8;
        if (uStack_1d0 <= local_1d8) {
          uVar5 = uStack_1d0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d165dc to 00d165df has its CatchHandler @ 00d16c08 */
        UnalignedDeallocate(local_1c8);
      } while (iVar4 != 0);
                    /* try { // try from 00d165e4 to 00d165ef has its CatchHandler @ 00d16be0 */
      Integer::operator=((Integer *)local_1b8,(Integer *)local_f8);
      iVar2 = iVar2 - iVar7;
      if (iVar2 != 2) {
        iVar7 = 0;
        do {
                    /* try { // try from 00d16600 to 00d1660f has its CatchHandler @ 00d16be8 */
          Integer::Times((Integer *)local_1b8);
                    /* try { // try from 00d16610 to 00d1661f has its CatchHandler @ 00d16bf0 */
          Integer::Modulo((Integer *)local_218);
                    /* try { // try from 00d16620 to 00d1662b has its CatchHandler @ 00d16bf8 */
          Integer::operator=((Integer *)local_1b8,(Integer *)local_1e8);
          local_1e8[0] = &PTR__Integer_0100c890;
          uVar5 = local_1d8;
          if (uStack_1d0 <= local_1d8) {
            uVar5 = uStack_1d0;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d1665c to 00d1665f has its CatchHandler @ 00d16be4 */
          UnalignedDeallocate(local_1c8);
          local_218[0] = &PTR__Integer_0100c890;
          uVar5 = local_208;
          if (uStack_200 <= local_208) {
            uVar5 = uStack_200;
          }
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)((long)local_1f8 + uVar5 * 4 + -4) = 0;
          }
                    /* try { // try from 00d16690 to 00d16693 has its CatchHandler @ 00d16bec */
          UnalignedDeallocate(local_1f8);
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar2 + -2);
      }
                    /* try { // try from 00d166a0 to 00d166af has its CatchHandler @ 00d16a6c */
      Integer::Times((Integer *)local_1b8);
                    /* try { // try from 00d166b0 to 00d166bf has its CatchHandler @ 00d16a64 */
      Integer::Modulo((Integer *)local_218);
                    /* try { // try from 00d166c0 to 00d166cb has its CatchHandler @ 00d16a60 */
      Integer::operator=((Integer *)local_f8,(Integer *)local_1e8);
      local_1e8[0] = &PTR__Integer_0100c890;
      uVar5 = local_1d8;
      if (uStack_1d0 <= local_1d8) {
        uVar5 = uStack_1d0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d166fc to 00d166ff has its CatchHandler @ 00d16a5c */
      UnalignedDeallocate(local_1c8);
      local_218[0] = &PTR__Integer_0100c890;
      uVar5 = local_208;
      if (uStack_200 <= local_208) {
        uVar5 = uStack_200;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1f8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d16730 to 00d16733 has its CatchHandler @ 00d16a58 */
      UnalignedDeallocate(local_1f8);
                    /* try { // try from 00d16734 to 00d16743 has its CatchHandler @ 00d16a54 */
      Integer::Times((Integer *)local_128);
                    /* try { // try from 00d16744 to 00d16753 has its CatchHandler @ 00d16a4c */
      Integer::Modulo((Integer *)local_218);
                    /* try { // try from 00d16754 to 00d1675f has its CatchHandler @ 00d16a48 */
      Integer::operator=((Integer *)local_128,(Integer *)local_1e8);
      local_1e8[0] = &PTR__Integer_0100c890;
      uVar5 = local_1d8;
      if (uStack_1d0 <= local_1d8) {
        uVar5 = uStack_1d0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d16790 to 00d16793 has its CatchHandler @ 00d16a44 */
      UnalignedDeallocate(local_1c8);
      local_218[0] = &PTR__Integer_0100c890;
      uVar5 = local_208;
      if (uStack_200 <= local_208) {
        uVar5 = uStack_200;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1f8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d167c4 to 00d167c7 has its CatchHandler @ 00d16a40 */
      UnalignedDeallocate(local_1f8);
                    /* try { // try from 00d167c8 to 00d167d7 has its CatchHandler @ 00d16a3c */
      Integer::Times((Integer *)local_188);
                    /* try { // try from 00d167d8 to 00d167e7 has its CatchHandler @ 00d16a34 */
      Integer::Modulo((Integer *)local_218);
                    /* try { // try from 00d167e8 to 00d167f3 has its CatchHandler @ 00d16a30 */
      Integer::operator=((Integer *)local_158,(Integer *)local_1e8);
      local_1e8[0] = &PTR__Integer_0100c890;
      uVar5 = local_1d8;
      if (uStack_1d0 <= local_1d8) {
        uVar5 = uStack_1d0;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1c8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d16824 to 00d16827 has its CatchHandler @ 00d16a2c */
      UnalignedDeallocate(local_1c8);
      local_218[0] = &PTR__Integer_0100c890;
      uVar5 = local_208;
      if (uStack_200 <= local_208) {
        uVar5 = uStack_200;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)((long)local_1f8 + uVar5 * 4 + -4) = 0;
      }
                    /* try { // try from 00d16858 to 00d1685b has its CatchHandler @ 00d16a28 */
      UnalignedDeallocate(local_1f8);
      iVar2 = iVar3;
    }
                    /* try { // try from 00d16a10 to 00d16a1b has its CatchHandler @ 00d16a24 */
    Integer::Integer(in_x8,(Integer *)local_128);
LAB_00d16874:
    local_1b8[0] = &PTR__Integer_0100c890;
    if (uStack_1a0 <= local_1a8) {
      local_1a8 = uStack_1a0;
    }
    for (; local_1a8 != 0; local_1a8 = local_1a8 - 1) {
      *(undefined4 *)((long)local_198 + local_1a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d168a4 to 00d168a7 has its CatchHandler @ 00d16a88 */
    UnalignedDeallocate(local_198);
    local_188[0] = &PTR__Integer_0100c890;
    if (uStack_170 <= local_178) {
      local_178 = uStack_170;
    }
    for (; local_178 != 0; local_178 = local_178 - 1) {
      *(undefined4 *)((long)local_168 + local_178 * 4 + -4) = 0;
    }
                    /* try { // try from 00d168d8 to 00d168db has its CatchHandler @ 00d16a84 */
    UnalignedDeallocate(local_168);
    local_158[0] = &PTR__Integer_0100c890;
    if (uStack_140 <= local_148) {
      local_148 = uStack_140;
    }
    for (; local_148 != 0; local_148 = local_148 - 1) {
      *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1690c to 00d1690f has its CatchHandler @ 00d16a80 */
    UnalignedDeallocate(local_138);
    local_128[0] = &PTR__Integer_0100c890;
    if (uStack_110 <= local_118) {
      local_118 = uStack_110;
    }
    for (; local_118 != 0; local_118 = local_118 - 1) {
      *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16940 to 00d16943 has its CatchHandler @ 00d16a7c */
    UnalignedDeallocate(local_108);
    local_f8[0] = &PTR__Integer_0100c890;
    if (uStack_e0 <= local_e8) {
      local_e8 = uStack_e0;
    }
    for (; local_e8 != 0; local_e8 = local_e8 - 1) {
      *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16974 to 00d16977 has its CatchHandler @ 00d16a78 */
    UnalignedDeallocate(local_d8);
    local_c8[0] = &PTR__Integer_0100c890;
    if (uStack_b0 <= local_b8) {
      local_b8 = uStack_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d169a8 to 00d169ab has its CatchHandler @ 00d16a74 */
    UnalignedDeallocate(local_a8);
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d169dc to 00d169df has its CatchHandler @ 00d16a70 */
    UnalignedDeallocate(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


