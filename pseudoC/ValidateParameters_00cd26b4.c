// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateParameters
// Entry Point: 00cd26b4
// Size: 972 bytes
// Signature: undefined __thiscall ValidateParameters(ECP * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::ECP::ValidateParameters(CryptoPP::RandomNumberGenerator&, unsigned int) const */

uint __thiscall
CryptoPP::ECP::ValidateParameters(ECP *this,RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined **local_238 [2];
  ulong local_228;
  ulong uStack_220;
  void *local_218;
  undefined **local_208 [2];
  ulong local_1f8;
  ulong uStack_1f0;
  void *local_1e8;
  undefined **local_1d8;
  ulong local_1c8;
  ulong uStack_1c0;
  void *local_1b8;
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
  int local_90;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_88,(Integer *)(*(long *)(this + 0x10) + 0x18));
                    /* try { // try from 00cd26f8 to 00cd274b has its CatchHandler @ 00cd2b3c */
  uVar5 = Integer::GetBit((Integer *)local_88,0);
  uVar4 = 0;
  if (((uVar5 & 1) != 0) && (*(int *)(this + 0x40) != 1)) {
    iVar2 = Integer::Compare((Integer *)(this + 0x18),(Integer *)local_88);
    uVar4 = 0;
    if ((iVar2 < 0) && (*(int *)(this + 0x70) != 1)) {
      uVar3 = Integer::Compare((Integer *)(this + 0x48),(Integer *)local_88);
      uVar4 = uVar3 >> 0x1f;
      if ((param_2 != 0) && ((int)uVar3 < 0)) {
                    /* try { // try from 00cd2758 to 00cd2763 has its CatchHandler @ 00cd2b34 */
        Integer::Integer((Integer *)local_1a8,4);
                    /* try { // try from 00cd2768 to 00cd2777 has its CatchHandler @ 00cd2b2c */
        Integer::Times((Integer *)local_1a8);
                    /* try { // try from 00cd2778 to 00cd2787 has its CatchHandler @ 00cd2b24 */
        Integer::Times((Integer *)local_178);
                    /* try { // try from 00cd2788 to 00cd2797 has its CatchHandler @ 00cd2b1c */
        Integer::Times((Integer *)local_148);
                    /* try { // try from 00cd2798 to 00cd27a3 has its CatchHandler @ 00cd2b14 */
        Integer::Integer((Integer *)local_238,0x1b);
                    /* try { // try from 00cd27a8 to 00cd27b7 has its CatchHandler @ 00cd2ae4 */
        Integer::Times((Integer *)local_238);
                    /* try { // try from 00cd27b8 to 00cd27c7 has its CatchHandler @ 00cd2ad4 */
        Integer::Times((Integer *)local_208);
                    /* try { // try from 00cd27c8 to 00cd27d7 has its CatchHandler @ 00cd2ac4 */
        Integer::Plus((Integer *)local_118);
                    /* try { // try from 00cd27d8 to 00cd27e7 has its CatchHandler @ 00cd2ab4 */
        Integer::Modulo((Integer *)local_e8);
        if (local_90 == 1) {
          uVar3 = 0;
        }
        else {
                    /* try { // try from 00cd286c to 00cd2873 has its CatchHandler @ 00cd2a80 */
          uVar3 = Integer::operator!((Integer *)local_b8);
          uVar3 = uVar3 ^ 1;
        }
        local_b8[0] = &PTR__Integer_0100c890;
        if (uStack_a0 <= local_a8) {
          local_a8 = uStack_a0;
        }
        for (; local_a8 != 0; local_a8 = local_a8 - 1) {
          *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd28a8 to 00cd28ab has its CatchHandler @ 00cd2ab0 */
        UnalignedDeallocate(local_98);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd28dc to 00cd28df has its CatchHandler @ 00cd2aac */
        UnalignedDeallocate(local_c8);
        local_1d8 = &PTR__Integer_0100c890;
        if (uStack_1c0 <= local_1c8) {
          local_1c8 = uStack_1c0;
        }
        for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
          *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd2910 to 00cd2913 has its CatchHandler @ 00cd2aa8 */
        UnalignedDeallocate(local_1b8);
        local_208[0] = &PTR__Integer_0100c890;
        if (uStack_1f0 <= local_1f8) {
          local_1f8 = uStack_1f0;
        }
        for (; local_1f8 != 0; local_1f8 = local_1f8 - 1) {
          *(undefined4 *)((long)local_1e8 + local_1f8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd2944 to 00cd2947 has its CatchHandler @ 00cd2aa4 */
        UnalignedDeallocate(local_1e8);
        local_238[0] = &PTR__Integer_0100c890;
        if (uStack_220 <= local_228) {
          local_228 = uStack_220;
        }
        for (; local_228 != 0; local_228 = local_228 - 1) {
          *(undefined4 *)((long)local_218 + local_228 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd2978 to 00cd297b has its CatchHandler @ 00cd2aa0 */
        UnalignedDeallocate(local_218);
        local_118[0] = &PTR__Integer_0100c890;
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd29ac to 00cd29af has its CatchHandler @ 00cd2a9c */
        UnalignedDeallocate(local_f8);
        local_148[0] = &PTR__Integer_0100c890;
        if (uStack_130 <= local_138) {
          local_138 = uStack_130;
        }
        for (; local_138 != 0; local_138 = local_138 - 1) {
          *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd29e0 to 00cd29e3 has its CatchHandler @ 00cd2a98 */
        UnalignedDeallocate(local_128);
        local_178[0] = &PTR__Integer_0100c890;
        if (uStack_160 <= local_168) {
          local_168 = uStack_160;
        }
        for (; local_168 != 0; local_168 = local_168 - 1) {
          *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd2a14 to 00cd2a17 has its CatchHandler @ 00cd2a94 */
        UnalignedDeallocate(local_158);
        local_1a8[0] = &PTR__Integer_0100c890;
        if (uStack_190 <= local_198) {
          local_198 = uStack_190;
        }
        for (; local_198 != 0; local_198 = local_198 - 1) {
          *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
        }
                    /* try { // try from 00cd2a48 to 00cd2a4b has its CatchHandler @ 00cd2a90 */
        UnalignedDeallocate(local_188);
        uVar4 = param_2 < 2 & uVar3;
        if ((param_2 >= 2) && (((uVar3 ^ 1) & 1) == 0)) {
                    /* try { // try from 00cd2a64 to 00cd2a73 has its CatchHandler @ 00cd2b3c */
          uVar4 = VerifyPrime(param_1,(Integer *)local_88,1);
        }
        goto LAB_00cd2808;
      }
    }
  }
  uVar4 = param_2 < 2 & uVar4;
LAB_00cd2808:
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd2838 to 00cd283b has its CatchHandler @ 00cd2b38 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


