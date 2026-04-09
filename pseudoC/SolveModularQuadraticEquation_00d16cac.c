// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SolveModularQuadraticEquation
// Entry Point: 00d16cac
// Size: 1628 bytes
// Signature: undefined __cdecl SolveModularQuadraticEquation(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4, Integer * param_5, Integer * param_6)


/* CryptoPP::SolveModularQuadraticEquation(CryptoPP::Integer&, CryptoPP::Integer&, CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

undefined4
CryptoPP::SolveModularQuadraticEquation
          (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,Integer *param_5,
          Integer *param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  Integer *pIVar4;
  undefined4 uVar5;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178 [2];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  undefined **local_148 [2];
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pIVar4 = param_3;
  Integer::Times(param_4);
                    /* try { // try from 00d16cfc to 00d16d07 has its CatchHandler @ 00d174a0 */
  Integer::Integer((Integer *)local_178,4);
                    /* try { // try from 00d16d08 to 00d16d17 has its CatchHandler @ 00d17490 */
  Integer::Times((Integer *)local_178);
                    /* try { // try from 00d16d18 to 00d16d27 has its CatchHandler @ 00d17480 */
  Integer::Times((Integer *)local_148);
                    /* try { // try from 00d16d28 to 00d16d37 has its CatchHandler @ 00d17470 */
  Integer::Minus((Integer *)local_e8);
                    /* try { // try from 00d16d38 to 00d16d47 has its CatchHandler @ 00d17460 */
  Integer::Modulo((Integer *)local_b8);
  uVar1 = local_a8;
  if (uStack_a0 <= local_a8) {
    uVar1 = uStack_a0;
  }
  local_b8[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_98 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d16d80 to 00d16d83 has its CatchHandler @ 00d1745c */
  UnalignedDeallocate(local_98);
  local_118[0] = &PTR__Integer_0100c890;
  uVar1 = local_108;
  if (uStack_100 <= local_108) {
    uVar1 = uStack_100;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_f8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d16db4 to 00d16db7 has its CatchHandler @ 00d17458 */
  UnalignedDeallocate(local_f8);
  local_148[0] = &PTR__Integer_0100c890;
  uVar1 = local_138;
  if (uStack_130 <= local_138) {
    uVar1 = uStack_130;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_128 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d16de8 to 00d16deb has its CatchHandler @ 00d17454 */
  UnalignedDeallocate(local_128);
  local_178[0] = &PTR__Integer_0100c890;
  uVar1 = local_168;
  if (uStack_160 <= local_168) {
    uVar1 = uStack_160;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_158 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d16e1c to 00d16e1f has its CatchHandler @ 00d17450 */
  UnalignedDeallocate(local_158);
  local_e8[0] = &PTR__Integer_0100c890;
  uVar1 = local_d8;
  if (uStack_d0 <= local_d8) {
    uVar1 = uStack_d0;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_c8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d16e50 to 00d16e53 has its CatchHandler @ 00d1744c */
  UnalignedDeallocate(local_c8);
                    /* try { // try from 00d16e54 to 00d16e5f has its CatchHandler @ 00d17440 */
  iVar3 = Jacobi((Integer *)local_88,param_6);
  if (iVar3 == 0) {
                    /* try { // try from 00d1712c to 00d17137 has its CatchHandler @ 00d1733c */
    Integer::operator-(param_4);
                    /* try { // try from 00d17138 to 00d17147 has its CatchHandler @ 00d17334 */
    Integer::Plus(param_3);
                    /* try { // try from 00d17148 to 00d17157 has its CatchHandler @ 00d1732c */
    Integer::InverseMod((Integer *)local_178,param_6);
                    /* try { // try from 00d17158 to 00d17167 has its CatchHandler @ 00d17324 */
    Integer::Times((Integer *)local_118);
                    /* try { // try from 00d17168 to 00d17177 has its CatchHandler @ 00d1731c */
    Integer::Modulo((Integer *)local_e8);
                    /* try { // try from 00d17178 to 00d1718f has its CatchHandler @ 00d1740c */
    pIVar4 = (Integer *)Integer::operator=(param_2,(Integer *)local_b8);
    Integer::operator=(param_1,pIVar4);
    local_b8[0] = &PTR__Integer_0100c890;
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d171c0 to 00d171c3 has its CatchHandler @ 00d17318 */
    UnalignedDeallocate(local_98);
    local_e8[0] = &PTR__Integer_0100c890;
    if (uStack_d0 <= local_d8) {
      local_d8 = uStack_d0;
    }
    for (; local_d8 != 0; local_d8 = local_d8 - 1) {
      *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d171f4 to 00d171f7 has its CatchHandler @ 00d17314 */
    UnalignedDeallocate(local_c8);
    local_148[0] = &PTR__Integer_0100c890;
    if (uStack_130 <= local_138) {
      local_138 = uStack_130;
    }
    for (; local_138 != 0; local_138 = local_138 - 1) {
      *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17228 to 00d1722b has its CatchHandler @ 00d17310 */
    UnalignedDeallocate(local_128);
    local_178[0] = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1725c to 00d1725f has its CatchHandler @ 00d1730c */
    UnalignedDeallocate(local_158);
    local_118[0] = &PTR__Integer_0100c890;
    if (uStack_100 <= local_108) {
      local_108 = uStack_100;
    }
    for (; local_108 != 0; local_108 = local_108 - 1) {
      *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17290 to 00d17293 has its CatchHandler @ 00d17308 */
    UnalignedDeallocate(local_f8);
  }
  else {
    if (iVar3 != 1) {
      uVar5 = 0;
      goto LAB_00d172a0;
    }
                    /* try { // try from 00d16e6c to 00d16e7b has its CatchHandler @ 00d17408 */
    ModularSquareRoot((CryptoPP *)local_88,param_6,pIVar4);
                    /* try { // try from 00d16e7c to 00d16e8b has its CatchHandler @ 00d17400 */
    Integer::Plus(param_3);
                    /* try { // try from 00d16e8c to 00d16e9b has its CatchHandler @ 00d173f4 */
    Integer::InverseMod((Integer *)local_118,param_6);
    local_118[0] = &PTR__Integer_0100c890;
    uVar1 = local_108;
    if (uStack_100 <= local_108) {
      uVar1 = uStack_100;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)local_f8 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16ecc to 00d16ecf has its CatchHandler @ 00d173f0 */
    UnalignedDeallocate(local_f8);
                    /* try { // try from 00d16ed0 to 00d16edf has its CatchHandler @ 00d173e8 */
    Integer::Minus((Integer *)local_b8);
                    /* try { // try from 00d16ee0 to 00d16eef has its CatchHandler @ 00d173c8 */
    Integer::Times((Integer *)local_178);
                    /* try { // try from 00d16ef0 to 00d16eff has its CatchHandler @ 00d173b8 */
    Integer::Modulo((Integer *)local_148);
                    /* try { // try from 00d16f00 to 00d16f0b has its CatchHandler @ 00d173a8 */
    Integer::operator=(param_1,(Integer *)local_118);
    local_118[0] = &PTR__Integer_0100c890;
    uVar1 = local_108;
    if (uStack_100 <= local_108) {
      uVar1 = uStack_100;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)local_f8 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16f3c to 00d16f3f has its CatchHandler @ 00d173a4 */
    UnalignedDeallocate(local_f8);
    local_148[0] = &PTR__Integer_0100c890;
    uVar1 = local_138;
    if (uStack_130 <= local_138) {
      uVar1 = uStack_130;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)local_128 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16f70 to 00d16f73 has its CatchHandler @ 00d173a0 */
    UnalignedDeallocate(local_128);
    local_178[0] = &PTR__Integer_0100c890;
    uVar1 = local_168;
    if (uStack_160 <= local_168) {
      uVar1 = uStack_160;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)local_158 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00d16fa4 to 00d16fa7 has its CatchHandler @ 00d1739c */
    UnalignedDeallocate(local_158);
                    /* try { // try from 00d16fa8 to 00d16fb3 has its CatchHandler @ 00d17394 */
    Integer::operator-((Integer *)local_b8);
                    /* try { // try from 00d16fb4 to 00d16fc3 has its CatchHandler @ 00d17388 */
    Integer::Minus((Integer *)local_1a8);
                    /* try { // try from 00d16fc4 to 00d16fd3 has its CatchHandler @ 00d17378 */
    Integer::Times((Integer *)local_178);
                    /* try { // try from 00d16fd4 to 00d16fe3 has its CatchHandler @ 00d17368 */
    Integer::Modulo((Integer *)local_148);
                    /* try { // try from 00d16fe4 to 00d16fef has its CatchHandler @ 00d17358 */
    Integer::operator=(param_2,(Integer *)local_118);
    local_118[0] = &PTR__Integer_0100c890;
    if (uStack_100 <= local_108) {
      local_108 = uStack_100;
    }
    for (; local_108 != 0; local_108 = local_108 - 1) {
      *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17020 to 00d17023 has its CatchHandler @ 00d17354 */
    UnalignedDeallocate(local_f8);
    local_148[0] = &PTR__Integer_0100c890;
    if (uStack_130 <= local_138) {
      local_138 = uStack_130;
    }
    for (; local_138 != 0; local_138 = local_138 - 1) {
      *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17054 to 00d17057 has its CatchHandler @ 00d17350 */
    UnalignedDeallocate(local_128);
    local_178[0] = &PTR__Integer_0100c890;
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
    for (; local_168 != 0; local_168 = local_168 - 1) {
      *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17088 to 00d1708b has its CatchHandler @ 00d1734c */
    UnalignedDeallocate(local_158);
    local_1a8[0] = &PTR__Integer_0100c890;
    if (uStack_190 <= local_198) {
      local_198 = uStack_190;
    }
    for (; local_198 != 0; local_198 = local_198 - 1) {
      *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
    }
                    /* try { // try from 00d170bc to 00d170bf has its CatchHandler @ 00d17348 */
    UnalignedDeallocate(local_188);
    local_e8[0] = &PTR__Integer_0100c890;
    if (uStack_d0 <= local_d8) {
      local_d8 = uStack_d0;
    }
    for (; local_d8 != 0; local_d8 = local_d8 - 1) {
      *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d170f0 to 00d170f3 has its CatchHandler @ 00d17344 */
    UnalignedDeallocate(local_c8);
    local_b8[0] = &PTR__Integer_0100c890;
    if (uStack_a0 <= local_a8) {
      local_a8 = uStack_a0;
    }
    for (; local_a8 != 0; local_a8 = local_a8 - 1) {
      *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
    }
                    /* try { // try from 00d17124 to 00d17127 has its CatchHandler @ 00d17340 */
    UnalignedDeallocate(local_98);
  }
  uVar5 = 1;
LAB_00d172a0:
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00d172d0 to 00d172d3 has its CatchHandler @ 00d1743c */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


