// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsStrongProbablePrime
// Entry Point: 00d1098c
// Size: 1416 bytes
// Signature: undefined __thiscall IsStrongProbablePrime(CryptoPP * this, Integer * param_1, Integer * param_2)


/* CryptoPP::IsStrongProbablePrime(CryptoPP::Integer const&, CryptoPP::Integer const&) */

bool __thiscall CryptoPP::IsStrongProbablePrime(CryptoPP *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
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
  Integer::Integer((Integer *)local_98,3);
                    /* try { // try from 00d109cc to 00d109d7 has its CatchHandler @ 00d11028 */
  iVar4 = Integer::Compare((Integer *)this,(Integer *)local_98);
  uVar5 = local_88;
  if (uStack_80 <= local_88) {
    uVar5 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)((long)local_78 + uVar5 * 4 + -4) = 0;
  }
                    /* try { // try from 00d10a14 to 00d10a17 has its CatchHandler @ 00d11024 */
  UnalignedDeallocate(local_78);
  if (iVar4 < 1) {
    Integer::Integer((Integer *)local_98,2);
                    /* try { // try from 00d10bb8 to 00d10bc3 has its CatchHandler @ 00d10f78 */
    iVar4 = Integer::Compare((Integer *)this,(Integer *)local_98);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    else {
                    /* try { // try from 00d10bc8 to 00d10bd3 has its CatchHandler @ 00d10f30 */
      Integer::Integer((Integer *)local_c8,3);
                    /* try { // try from 00d10bd4 to 00d10bdf has its CatchHandler @ 00d10f20 */
      iVar4 = Integer::Compare((Integer *)this,(Integer *)local_c8);
      bVar3 = iVar4 == 0;
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d10c18 to 00d10c1b has its CatchHandler @ 00d10f1c */
      UnalignedDeallocate(local_a8);
    }
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10df8 to 00d10dfb has its CatchHandler @ 00d10f74 */
    UnalignedDeallocate(local_78);
    goto LAB_00d10edc;
  }
  uVar5 = Integer::GetBit((Integer *)this,0);
  if ((uVar5 & 1) == 0) {
    Integer::Integer((Integer *)local_98,2);
                    /* try { // try from 00d10a40 to 00d10a4b has its CatchHandler @ 00d10f68 */
    iVar4 = Integer::Compare((Integer *)this,(Integer *)local_98);
    if (iVar4 == 0) goto LAB_00d10a58;
    bVar3 = true;
LAB_00d10b04:
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10b34 to 00d10b37 has its CatchHandler @ 00d10f84 */
    UnalignedDeallocate(local_78);
    if (bVar3) {
LAB_00d10afc:
      bVar3 = false;
      goto LAB_00d10edc;
    }
  }
  else {
LAB_00d10a58:
                    /* try { // try from 00d10a58 to 00d10a67 has its CatchHandler @ 00d10fb4 */
    Integer::Gcd(param_1,(Integer *)this,param_2);
                    /* try { // try from 00d10a68 to 00d10a73 has its CatchHandler @ 00d10fa0 */
    Integer::Integer((Integer *)local_f8,1);
                    /* try { // try from 00d10a74 to 00d10a7f has its CatchHandler @ 00d10f90 */
    iVar4 = Integer::Compare((Integer *)local_c8,(Integer *)local_f8);
    bVar3 = iVar4 != 0;
    local_f8[0] = &PTR__Integer_0100c890;
    uVar2 = local_e8;
    if (uStack_e0 <= local_e8) {
      uVar2 = uStack_e0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_d8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10abc to 00d10abf has its CatchHandler @ 00d10f8c */
    UnalignedDeallocate(local_d8);
    local_c8[0] = &PTR__Integer_0100c890;
    uVar2 = local_b8;
    if (uStack_b0 <= local_b8) {
      uVar2 = uStack_b0;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_a8 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10af0 to 00d10af3 has its CatchHandler @ 00d10f88 */
    UnalignedDeallocate(local_a8);
    if ((uVar5 & 1) == 0) goto LAB_00d10b04;
    if (iVar4 != 0) goto LAB_00d10afc;
  }
  Integer::Integer((Integer *)local_f8,1);
                    /* try { // try from 00d10b48 to 00d10b57 has its CatchHandler @ 00d10f5c */
  Integer::Minus((Integer *)this);
  local_f8[0] = &PTR__Integer_0100c890;
  uVar5 = local_e8;
  if (uStack_e0 <= local_e8) {
    uVar5 = uStack_e0;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)((long)local_d8 + uVar5 * 4 + -4) = 0;
  }
                    /* try { // try from 00d10b88 to 00d10b8b has its CatchHandler @ 00d10f58 */
  UnalignedDeallocate(local_d8);
  uVar6 = 0;
  while( true ) {
                    /* try { // try from 00d10b94 to 00d10b9f has its CatchHandler @ 00d11034 */
    uVar5 = Integer::GetBit((Integer *)local_c8,(ulong)uVar6);
    if ((uVar5 & 1) != 0) break;
    uVar6 = uVar6 + 1;
  }
                    /* try { // try from 00d10c20 to 00d10c2f has its CatchHandler @ 00d10f54 */
  Integer::operator>>((Integer *)local_c8,(ulong)uVar6);
                    /* try { // try from 00d10c30 to 00d10c43 has its CatchHandler @ 00d10f4c */
  a_exp_b_mod_c(param_1,(Integer *)local_f8,(Integer *)this);
                    /* try { // try from 00d10c44 to 00d10c4f has its CatchHandler @ 00d10f48 */
  Integer::Integer((Integer *)local_158,1);
                    /* try { // try from 00d10c50 to 00d10c6b has its CatchHandler @ 00d10fc4 */
  iVar4 = Integer::Compare((Integer *)local_128,(Integer *)local_158);
  if (iVar4 == 0) {
    local_158[0] = &PTR__Integer_0100c890;
    if (uStack_140 <= local_148) {
      local_148 = uStack_140;
    }
    for (; local_148 != 0; local_148 = local_148 - 1) {
      *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10e30 to 00d10e33 has its CatchHandler @ 00d10f14 */
    UnalignedDeallocate(local_138);
LAB_00d10e34:
    bVar3 = true;
  }
  else {
    iVar4 = Integer::Compare((Integer *)local_128,(Integer *)local_c8);
    local_158[0] = &PTR__Integer_0100c890;
    uVar5 = local_148;
    if (uStack_140 <= local_148) {
      uVar5 = uStack_140;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d10ca0 to 00d10ca3 has its CatchHandler @ 00d10f18 */
    UnalignedDeallocate(local_138);
    if (iVar4 == 0) goto LAB_00d10e34;
    if (uVar6 < 2) {
      bVar3 = false;
    }
    else {
      uVar7 = 1;
      while( true ) {
                    /* try { // try from 00d10cb8 to 00d10cc7 has its CatchHandler @ 00d1100c */
        Integer::Times((Integer *)local_128);
                    /* try { // try from 00d10cc8 to 00d10cd7 has its CatchHandler @ 00d10fec */
        Integer::Modulo((Integer *)local_188);
                    /* try { // try from 00d10cd8 to 00d10ce3 has its CatchHandler @ 00d10ff4 */
        Integer::operator=((Integer *)local_128,(Integer *)local_158);
        uVar5 = local_148;
        if (uStack_140 <= local_148) {
          uVar5 = uStack_140;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
        }
        local_158[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d10d10 to 00d10d13 has its CatchHandler @ 00d10fe8 */
        UnalignedDeallocate(local_138);
        local_188[0] = &PTR__Integer_0100c890;
        uVar5 = local_178;
        if (uStack_170 <= local_178) {
          uVar5 = uStack_170;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_168 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d10d44 to 00d10d47 has its CatchHandler @ 00d10fe4 */
        UnalignedDeallocate(local_168);
                    /* try { // try from 00d10d48 to 00d10d53 has its CatchHandler @ 00d10fe0 */
        iVar4 = Integer::Compare((Integer *)local_128,(Integer *)local_c8);
        bVar3 = iVar4 == 0;
        if (iVar4 == 0) break;
                    /* try { // try from 00d10d60 to 00d10d6b has its CatchHandler @ 00d10fdc */
        Integer::Integer((Integer *)local_158,1);
                    /* try { // try from 00d10d6c to 00d10d77 has its CatchHandler @ 00d10fcc */
        iVar4 = Integer::Compare((Integer *)local_128,(Integer *)local_158);
        local_158[0] = &PTR__Integer_0100c890;
        uVar5 = local_148;
        if (uStack_140 <= local_148) {
          uVar5 = uStack_140;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_138 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d10dac to 00d10daf has its CatchHandler @ 00d10fc8 */
        UnalignedDeallocate(local_138);
        if ((iVar4 == 0) || (uVar7 = uVar7 + 1, uVar6 == uVar7)) break;
      }
    }
  }
  local_128[0] = &PTR__Integer_0100c890;
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00d10e70 to 00d10e73 has its CatchHandler @ 00d10f44 */
  UnalignedDeallocate(local_108);
  local_f8[0] = &PTR__Integer_0100c890;
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d10ea4 to 00d10ea7 has its CatchHandler @ 00d10f40 */
  UnalignedDeallocate(local_d8);
  local_c8[0] = &PTR__Integer_0100c890;
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d10ed8 to 00d10edb has its CatchHandler @ 00d10f3c */
  UnalignedDeallocate(local_a8);
LAB_00d10edc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


