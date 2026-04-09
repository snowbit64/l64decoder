// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyPoint
// Entry Point: 00cd2b50
// Size: 756 bytes
// Signature: undefined __thiscall VerifyPoint(ECP * this, ECPPoint * param_1)


/* CryptoPP::ECP::VerifyPoint(CryptoPP::ECPPoint const&) const */

uint __thiscall CryptoPP::ECP::VerifyPoint(ECP *this,ECPPoint *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
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
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_88,(Integer *)(*(long *)(this + 0x10) + 0x18));
  if (param_1[0x68] != (ECPPoint)0x0) {
    uVar3 = 1;
    goto LAB_00cd2bf0;
  }
  if (*(int *)(param_1 + 0x30) != 1) {
                    /* try { // try from 00cd2bb8 to 00cd2be7 has its CatchHandler @ 00cd2ed4 */
    iVar2 = Integer::Compare((Integer *)(param_1 + 8),(Integer *)local_88);
    uVar3 = 0;
    if ((-1 < iVar2) || (*(int *)(param_1 + 0x60) == 1)) goto LAB_00cd2bf0;
    iVar2 = Integer::Compare((Integer *)(param_1 + 0x38),(Integer *)local_88);
    if (iVar2 < 0) {
                    /* try { // try from 00cd2c54 to 00cd2c63 has its CatchHandler @ 00cd2ed0 */
      Integer::Times((Integer *)(param_1 + 8));
                    /* try { // try from 00cd2c68 to 00cd2c73 has its CatchHandler @ 00cd2ec8 */
      Integer::Plus((Integer *)local_1a8);
                    /* try { // try from 00cd2c74 to 00cd2c83 has its CatchHandler @ 00cd2ec0 */
      Integer::Times((Integer *)local_178);
                    /* try { // try from 00cd2c88 to 00cd2c93 has its CatchHandler @ 00cd2eb8 */
      Integer::Plus((Integer *)local_148);
                    /* try { // try from 00cd2c94 to 00cd2ca3 has its CatchHandler @ 00cd2e90 */
      Integer::Times((Integer *)(param_1 + 0x38));
                    /* try { // try from 00cd2ca4 to 00cd2cb3 has its CatchHandler @ 00cd2e80 */
      Integer::Minus((Integer *)local_118);
                    /* try { // try from 00cd2cb4 to 00cd2cc3 has its CatchHandler @ 00cd2e70 */
      Integer::Modulo((Integer *)local_e8);
                    /* try { // try from 00cd2cc4 to 00cd2ccb has its CatchHandler @ 00cd2e60 */
      uVar3 = Integer::operator!((Integer *)local_b8);
      local_b8[0] = &PTR__Integer_0100c890;
      if (uStack_a0 <= local_a8) {
        local_a8 = uStack_a0;
      }
      for (; local_a8 != 0; local_a8 = local_a8 - 1) {
        *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2d00 to 00cd2d03 has its CatchHandler @ 00cd2e5c */
      UnalignedDeallocate(local_98);
      local_e8[0] = &PTR__Integer_0100c890;
      if (uStack_d0 <= local_d8) {
        local_d8 = uStack_d0;
      }
      for (; local_d8 != 0; local_d8 = local_d8 - 1) {
        *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2d34 to 00cd2d37 has its CatchHandler @ 00cd2e58 */
      UnalignedDeallocate(local_c8);
      if (uStack_1c0 <= local_1c8) {
        local_1c8 = uStack_1c0;
      }
      for (; local_1c8 != 0; local_1c8 = local_1c8 - 1) {
        *(undefined4 *)((long)local_1b8 + local_1c8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2d68 to 00cd2d6b has its CatchHandler @ 00cd2e54 */
      UnalignedDeallocate(local_1b8);
      local_118[0] = &PTR__Integer_0100c890;
      if (uStack_100 <= local_108) {
        local_108 = uStack_100;
      }
      for (; local_108 != 0; local_108 = local_108 - 1) {
        *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2d9c to 00cd2d9f has its CatchHandler @ 00cd2e50 */
      UnalignedDeallocate(local_f8);
      local_148[0] = &PTR__Integer_0100c890;
      if (uStack_130 <= local_138) {
        local_138 = uStack_130;
      }
      for (; local_138 != 0; local_138 = local_138 - 1) {
        *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2dd0 to 00cd2dd3 has its CatchHandler @ 00cd2e4c */
      UnalignedDeallocate(local_128);
      local_178[0] = &PTR__Integer_0100c890;
      if (uStack_160 <= local_168) {
        local_168 = uStack_160;
      }
      for (; local_168 != 0; local_168 = local_168 - 1) {
        *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2e04 to 00cd2e07 has its CatchHandler @ 00cd2e48 */
      UnalignedDeallocate(local_158);
      local_1a8[0] = &PTR__Integer_0100c890;
      if (uStack_190 <= local_198) {
        local_198 = uStack_190;
      }
      for (; local_198 != 0; local_198 = local_198 - 1) {
        *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
      }
                    /* try { // try from 00cd2e38 to 00cd2e3b has its CatchHandler @ 00cd2e44 */
      UnalignedDeallocate(local_188);
      goto LAB_00cd2bf0;
    }
  }
  uVar3 = 0;
LAB_00cd2bf0:
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cd2c20 to 00cd2c23 has its CatchHandler @ 00cd2ee8 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


