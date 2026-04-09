// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateGroup
// Entry Point: 00c9d9b0
// Size: 960 bytes
// Signature: undefined __thiscall ValidateGroup(DL_GroupParameters_EC<CryptoPP::ECP> * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::ValidateGroup(CryptoPP::RandomNumberGenerator&,
   unsigned int) const */

byte __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::ValidateGroup
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,RandomNumberGenerator *param_1,uint param_2)

{
  Integer *this_00;
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined **local_1d8 [2];
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  undefined **local_178;
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
  undefined **local_b8;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = ECP::ValidateParameters(*(ECP **)(this + 0x20),param_1,param_2);
  Integer::Integer((Integer *)local_88,(Integer *)(*(long *)(*(long *)(this + 0x20) + 0x10) + 0x18))
  ;
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
                    /* try { // try from 00c9da0c to 00c9da13 has its CatchHandler @ 00c9de2c */
    iVar3 = Integer::Compare((Integer *)(this + 0x110),(Integer *)local_88);
    bVar2 = iVar3 != 0;
  }
  if (param_2 < 2) goto LAB_00c9dd08;
                    /* try { // try from 00c9da44 to 00c9da4f has its CatchHandler @ 00c9de28 */
  Integer::SquareRoot();
  if ((bool)bVar2 != false) {
                    /* try { // try from 00c9da54 to 00c9da5f has its CatchHandler @ 00c9de10 */
    Integer::Integer((Integer *)local_118,4);
                    /* try { // try from 00c9da60 to 00c9da6f has its CatchHandler @ 00c9de00 */
    Integer::Times((Integer *)local_118);
    this_00 = (Integer *)(this + 0x110);
                    /* try { // try from 00c9da74 to 00c9da7f has its CatchHandler @ 00c9ddf0 */
    iVar3 = Integer::Compare(this_00,(Integer *)local_e8);
    local_e8[0] = &PTR__Integer_0100c890;
    uVar4 = local_d8;
    if (uStack_d0 <= local_d8) {
      uVar4 = uStack_d0;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_c8 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9dab4 to 00c9dab7 has its CatchHandler @ 00c9ddec */
    UnalignedDeallocate(local_c8);
    local_118[0] = &PTR__Integer_0100c890;
    uVar4 = local_108;
    if (uStack_100 <= local_108) {
      uVar4 = uStack_100;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_f8 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9dae8 to 00c9daeb has its CatchHandler @ 00c9dde8 */
    UnalignedDeallocate(local_f8);
                    /* try { // try from 00c9daf4 to 00c9db13 has its CatchHandler @ 00c9de14 */
    if ((iVar3 < 1) || (uVar4 = VerifyPrime(param_1,this_00,param_2 - 2), (uVar4 & 1) == 0)) {
LAB_00c9dcbc:
      bVar2 = 0;
    }
    else {
      uVar4 = Integer::operator!((Integer *)(this + 0x140));
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 00c9db18 to 00c9db23 has its CatchHandler @ 00c9dde4 */
        Integer::Integer((Integer *)local_1a8,2);
                    /* try { // try from 00c9db24 to 00c9db33 has its CatchHandler @ 00c9dddc */
        Integer::Times((Integer *)local_1a8);
                    /* try { // try from 00c9db34 to 00c9db43 has its CatchHandler @ 00c9ddc8 */
        Integer::Plus((Integer *)local_88);
                    /* try { // try from 00c9db44 to 00c9db4f has its CatchHandler @ 00c9ddb8 */
        Integer::Integer((Integer *)local_1d8,1);
                    /* try { // try from 00c9db50 to 00c9db5f has its CatchHandler @ 00c9dda8 */
        Integer::Plus((Integer *)local_148);
                    /* try { // try from 00c9db60 to 00c9db6f has its CatchHandler @ 00c9dd98 */
        Integer::DividedBy((Integer *)local_118);
                    /* try { // try from 00c9db70 to 00c9db7b has its CatchHandler @ 00c9dd88 */
        iVar3 = Integer::Compare((Integer *)(this + 0x140),(Integer *)local_e8);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dbb0 to 00c9dbb3 has its CatchHandler @ 00c9dd84 */
        UnalignedDeallocate(local_c8);
        local_118[0] = &PTR__Integer_0100c890;
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dbe4 to 00c9dbe7 has its CatchHandler @ 00c9dd80 */
        UnalignedDeallocate(local_f8);
        local_1d8[0] = &PTR__Integer_0100c890;
        if (uStack_1c0 <= local_1c8) {
          local_1c8 = uStack_1c0;
        }
        for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
          *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dc18 to 00c9dc1b has its CatchHandler @ 00c9dd7c */
        UnalignedDeallocate(local_1b8);
        local_148[0] = &PTR__Integer_0100c890;
        if (uStack_130 <= local_138) {
          local_138 = uStack_130;
        }
        for (; local_138 != 0; local_138 = local_138 - 1) {
          *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dc4c to 00c9dc4f has its CatchHandler @ 00c9dd78 */
        UnalignedDeallocate(local_128);
        local_178 = &PTR__Integer_0100c890;
        if (uStack_160 <= local_168) {
          local_168 = uStack_160;
        }
        for (; local_168 != 0; local_168 = local_168 - 1) {
          *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dc80 to 00c9dc83 has its CatchHandler @ 00c9dd74 */
        UnalignedDeallocate(local_158);
        local_1a8[0] = &PTR__Integer_0100c890;
        if (uStack_190 <= local_198) {
          local_198 = uStack_190;
        }
        for (; local_198 != 0; local_198 = local_198 - 1) {
          *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9dcb4 to 00c9dcb7 has its CatchHandler @ 00c9dd70 */
        UnalignedDeallocate(local_188);
        if (iVar3 != 0) goto LAB_00c9dcbc;
      }
                    /* try { // try from 00c9dcc4 to 00c9dccf has its CatchHandler @ 00c9de14 */
      bVar2 = FUN_00c9de44(local_88,this_00);
    }
  }
  local_b8 = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9dd04 to 00c9dd07 has its CatchHandler @ 00c9de24 */
  UnalignedDeallocate(local_98);
LAB_00c9dd08:
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9dd38 to 00c9dd3b has its CatchHandler @ 00c9de40 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2 & 1;
}


