// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateGroup
// Entry Point: 00ca2d7c
// Size: 956 bytes
// Signature: undefined __thiscall ValidateGroup(DL_GroupParameters_EC<CryptoPP::EC2N> * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ValidateGroup(CryptoPP::RandomNumberGenerator&,
   unsigned int) const */

byte __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ValidateGroup
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,RandomNumberGenerator *param_1,uint param_2)

{
  Integer *this_00;
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined auVar5 [16];
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
  auVar5 = EC2N::ValidateParameters((EC2N *)(this + 0x18),param_1,param_2);
  Integer::Power2((Integer *)(ulong)*(uint *)(*(long *)(this + 0x28) + 0x90),auVar5._8_8_);
  if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    bVar2 = false;
  }
  else {
                    /* try { // try from 00ca2dd4 to 00ca2ddb has its CatchHandler @ 00ca31f4 */
    iVar3 = Integer::Compare((Integer *)(this + 0x188),(Integer *)local_88);
    bVar2 = iVar3 != 0;
  }
  if (param_2 < 2) goto LAB_00ca30d0;
                    /* try { // try from 00ca2e0c to 00ca2e17 has its CatchHandler @ 00ca31f0 */
  Integer::SquareRoot();
  if ((bool)bVar2 != false) {
                    /* try { // try from 00ca2e1c to 00ca2e27 has its CatchHandler @ 00ca31d8 */
    Integer::Integer((Integer *)local_118,4);
                    /* try { // try from 00ca2e28 to 00ca2e37 has its CatchHandler @ 00ca31c8 */
    Integer::Times((Integer *)local_118);
    this_00 = (Integer *)(this + 0x188);
                    /* try { // try from 00ca2e3c to 00ca2e47 has its CatchHandler @ 00ca31b8 */
    iVar3 = Integer::Compare(this_00,(Integer *)local_e8);
    local_e8[0] = &PTR__Integer_0100c890;
    uVar4 = local_d8;
    if (uStack_d0 <= local_d8) {
      uVar4 = uStack_d0;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_c8 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2e7c to 00ca2e7f has its CatchHandler @ 00ca31b4 */
    UnalignedDeallocate(local_c8);
    local_118[0] = &PTR__Integer_0100c890;
    uVar4 = local_108;
    if (uStack_100 <= local_108) {
      uVar4 = uStack_100;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_f8 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2eb0 to 00ca2eb3 has its CatchHandler @ 00ca31b0 */
    UnalignedDeallocate(local_f8);
                    /* try { // try from 00ca2ebc to 00ca2edb has its CatchHandler @ 00ca31dc */
    if ((iVar3 < 1) || (uVar4 = VerifyPrime(param_1,this_00,param_2 - 2), (uVar4 & 1) == 0)) {
LAB_00ca3084:
      bVar2 = 0;
    }
    else {
      uVar4 = Integer::operator!((Integer *)(this + 0x1b8));
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 00ca2ee0 to 00ca2eeb has its CatchHandler @ 00ca31ac */
        Integer::Integer((Integer *)local_1a8,2);
                    /* try { // try from 00ca2eec to 00ca2efb has its CatchHandler @ 00ca31a4 */
        Integer::Times((Integer *)local_1a8);
                    /* try { // try from 00ca2efc to 00ca2f0b has its CatchHandler @ 00ca3190 */
        Integer::Plus((Integer *)local_88);
                    /* try { // try from 00ca2f0c to 00ca2f17 has its CatchHandler @ 00ca3180 */
        Integer::Integer((Integer *)local_1d8,1);
                    /* try { // try from 00ca2f18 to 00ca2f27 has its CatchHandler @ 00ca3170 */
        Integer::Plus((Integer *)local_148);
                    /* try { // try from 00ca2f28 to 00ca2f37 has its CatchHandler @ 00ca3160 */
        Integer::DividedBy((Integer *)local_118);
                    /* try { // try from 00ca2f38 to 00ca2f43 has its CatchHandler @ 00ca3150 */
        iVar3 = Integer::Compare((Integer *)(this + 0x1b8),(Integer *)local_e8);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca2f78 to 00ca2f7b has its CatchHandler @ 00ca314c */
        UnalignedDeallocate(local_c8);
        local_118[0] = &PTR__Integer_0100c890;
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca2fac to 00ca2faf has its CatchHandler @ 00ca3148 */
        UnalignedDeallocate(local_f8);
        local_1d8[0] = &PTR__Integer_0100c890;
        if (uStack_1c0 <= local_1c8) {
          local_1c8 = uStack_1c0;
        }
        for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
          *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca2fe0 to 00ca2fe3 has its CatchHandler @ 00ca3144 */
        UnalignedDeallocate(local_1b8);
        local_148[0] = &PTR__Integer_0100c890;
        if (uStack_130 <= local_138) {
          local_138 = uStack_130;
        }
        for (; local_138 != 0; local_138 = local_138 - 1) {
          *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca3014 to 00ca3017 has its CatchHandler @ 00ca3140 */
        UnalignedDeallocate(local_128);
        local_178 = &PTR__Integer_0100c890;
        if (uStack_160 <= local_168) {
          local_168 = uStack_160;
        }
        for (; local_168 != 0; local_168 = local_168 - 1) {
          *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca3048 to 00ca304b has its CatchHandler @ 00ca313c */
        UnalignedDeallocate(local_158);
        local_1a8[0] = &PTR__Integer_0100c890;
        if (uStack_190 <= local_198) {
          local_198 = uStack_190;
        }
        for (; local_198 != 0; local_198 = local_198 - 1) {
          *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca307c to 00ca307f has its CatchHandler @ 00ca3138 */
        UnalignedDeallocate(local_188);
        if (iVar3 != 0) goto LAB_00ca3084;
      }
                    /* try { // try from 00ca308c to 00ca3097 has its CatchHandler @ 00ca31dc */
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
                    /* try { // try from 00ca30cc to 00ca30cf has its CatchHandler @ 00ca31ec */
  UnalignedDeallocate(local_98);
LAB_00ca30d0:
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca3100 to 00ca3103 has its CatchHandler @ 00ca3208 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2 & 1;
}


