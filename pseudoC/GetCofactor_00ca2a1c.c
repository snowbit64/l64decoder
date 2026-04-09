// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCofactor
// Entry Point: 00ca2a1c
// Size: 668 bytes
// Signature: undefined GetCofactor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetCofactor() const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::GetCofactor(void)

{
  Integer *this;
  long lVar1;
  long in_x0;
  Integer *in_x8;
  undefined auVar2 [16];
  undefined **local_1c8 [2];
  ulong local_1b8;
  ulong uStack_1b0;
  void *local_1a8;
  undefined **local_198 [2];
  ulong local_188;
  ulong uStack_180;
  void *local_178;
  undefined **local_168;
  ulong local_158;
  ulong uStack_150;
  void *local_148;
  undefined **local_138 [2];
  ulong local_128;
  ulong uStack_120;
  void *local_118;
  undefined **local_108 [2];
  ulong local_f8;
  ulong uStack_f0;
  void *local_e8;
  undefined **local_d8 [2];
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  undefined **local_a8;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  this = (Integer *)(in_x0 + 0x1b8);
  local_48 = *(long *)(lVar1 + 0x28);
  auVar2 = Integer::operator!(this);
  if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    Integer::Power2((Integer *)(ulong)*(uint *)(*(long *)(in_x0 + 0x28) + 0x90),auVar2._8_8_);
                    /* try { // try from 00ca2a68 to 00ca2a73 has its CatchHandler @ 00ca2d68 */
    Integer::SquareRoot();
                    /* try { // try from 00ca2a74 to 00ca2a7f has its CatchHandler @ 00ca2d4c */
    Integer::Integer((Integer *)local_198,2);
                    /* try { // try from 00ca2a80 to 00ca2a8f has its CatchHandler @ 00ca2d44 */
    Integer::Times((Integer *)local_198);
                    /* try { // try from 00ca2a90 to 00ca2a9f has its CatchHandler @ 00ca2d18 */
    Integer::Plus((Integer *)local_78);
                    /* try { // try from 00ca2aa0 to 00ca2aab has its CatchHandler @ 00ca2d08 */
    Integer::Integer((Integer *)local_1c8,1);
                    /* try { // try from 00ca2aac to 00ca2abb has its CatchHandler @ 00ca2cf8 */
    Integer::Plus((Integer *)local_138);
                    /* try { // try from 00ca2ac0 to 00ca2acb has its CatchHandler @ 00ca2ce8 */
    Integer::DividedBy((Integer *)local_108);
                    /* try { // try from 00ca2acc to 00ca2ad7 has its CatchHandler @ 00ca2cd8 */
    Integer::operator=(this,(Integer *)local_d8);
    if (uStack_c0 <= local_c8) {
      local_c8 = uStack_c0;
    }
    local_d8[0] = &PTR__Integer_0100c890;
    for (; local_c8 != 0; local_c8 = local_c8 - 1) {
      *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2b10 to 00ca2b13 has its CatchHandler @ 00ca2cd4 */
    UnalignedDeallocate(local_b8);
    local_108[0] = &PTR__Integer_0100c890;
    if (uStack_f0 <= local_f8) {
      local_f8 = uStack_f0;
    }
    for (; local_f8 != 0; local_f8 = local_f8 - 1) {
      *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2b44 to 00ca2b47 has its CatchHandler @ 00ca2cd0 */
    UnalignedDeallocate(local_e8);
    local_1c8[0] = &PTR__Integer_0100c890;
    if (uStack_1b0 <= local_1b8) {
      local_1b8 = uStack_1b0;
    }
    for (; local_1b8 != 0; local_1b8 = local_1b8 - 1) {
      *(undefined4 *)((long)local_1a8 + local_1b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2b78 to 00ca2b7b has its CatchHandler @ 00ca2ccc */
    UnalignedDeallocate(local_1a8);
    local_138[0] = &PTR__Integer_0100c890;
    if (uStack_120 <= local_128) {
      local_128 = uStack_120;
    }
    for (; local_128 != 0; local_128 = local_128 - 1) {
      *(undefined4 *)((long)local_118 + local_128 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2bac to 00ca2baf has its CatchHandler @ 00ca2cc8 */
    UnalignedDeallocate(local_118);
    local_168 = &PTR__Integer_0100c890;
    if (uStack_150 <= local_158) {
      local_158 = uStack_150;
    }
    for (; local_158 != 0; local_158 = local_158 - 1) {
      *(undefined4 *)((long)local_148 + local_158 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2be0 to 00ca2be3 has its CatchHandler @ 00ca2cc4 */
    UnalignedDeallocate(local_148);
    local_198[0] = &PTR__Integer_0100c890;
    if (uStack_180 <= local_188) {
      local_188 = uStack_180;
    }
    for (; local_188 != 0; local_188 = local_188 - 1) {
      *(undefined4 *)((long)local_178 + local_188 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2c14 to 00ca2c17 has its CatchHandler @ 00ca2cc0 */
    UnalignedDeallocate(local_178);
    local_a8 = &PTR__Integer_0100c890;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2c48 to 00ca2c4b has its CatchHandler @ 00ca2cbc */
    UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca2c7c to 00ca2c7f has its CatchHandler @ 00ca2cb8 */
    UnalignedDeallocate(local_58);
  }
  Integer::Integer(in_x8,this);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


