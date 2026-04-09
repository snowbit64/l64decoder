// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetCofactor
// Entry Point: 00c9d64c
// Size: 672 bytes
// Signature: undefined GetCofactor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetCofactor() const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetCofactor(void)

{
  Integer *this;
  long lVar1;
  long in_x0;
  ulong uVar2;
  Integer *in_x8;
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
  this = (Integer *)(in_x0 + 0x140);
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = Integer::operator!(this);
  if ((uVar2 & 1) != 0) {
    Integer::Integer((Integer *)local_78,
                     (Integer *)(*(long *)(*(long *)(in_x0 + 0x20) + 0x10) + 0x18));
                    /* try { // try from 00c9d69c to 00c9d6a7 has its CatchHandler @ 00c9d99c */
    Integer::SquareRoot();
                    /* try { // try from 00c9d6a8 to 00c9d6b3 has its CatchHandler @ 00c9d980 */
    Integer::Integer((Integer *)local_198,2);
                    /* try { // try from 00c9d6b4 to 00c9d6c3 has its CatchHandler @ 00c9d978 */
    Integer::Times((Integer *)local_198);
                    /* try { // try from 00c9d6c4 to 00c9d6d3 has its CatchHandler @ 00c9d94c */
    Integer::Plus((Integer *)local_78);
                    /* try { // try from 00c9d6d4 to 00c9d6df has its CatchHandler @ 00c9d93c */
    Integer::Integer((Integer *)local_1c8,1);
                    /* try { // try from 00c9d6e0 to 00c9d6ef has its CatchHandler @ 00c9d92c */
    Integer::Plus((Integer *)local_138);
                    /* try { // try from 00c9d6f4 to 00c9d6ff has its CatchHandler @ 00c9d91c */
    Integer::DividedBy((Integer *)local_108);
                    /* try { // try from 00c9d700 to 00c9d70b has its CatchHandler @ 00c9d90c */
    Integer::operator=(this,(Integer *)local_d8);
    if (uStack_c0 <= local_c8) {
      local_c8 = uStack_c0;
    }
    local_d8[0] = &PTR__Integer_0100c890;
    for (; local_c8 != 0; local_c8 = local_c8 - 1) {
      *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d744 to 00c9d747 has its CatchHandler @ 00c9d908 */
    UnalignedDeallocate(local_b8);
    local_108[0] = &PTR__Integer_0100c890;
    if (uStack_f0 <= local_f8) {
      local_f8 = uStack_f0;
    }
    for (; local_f8 != 0; local_f8 = local_f8 - 1) {
      *(undefined4 *)((long)local_e8 + local_f8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d778 to 00c9d77b has its CatchHandler @ 00c9d904 */
    UnalignedDeallocate(local_e8);
    local_1c8[0] = &PTR__Integer_0100c890;
    if (uStack_1b0 <= local_1b8) {
      local_1b8 = uStack_1b0;
    }
    for (; local_1b8 != 0; local_1b8 = local_1b8 - 1) {
      *(undefined4 *)((long)local_1a8 + local_1b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d7ac to 00c9d7af has its CatchHandler @ 00c9d900 */
    UnalignedDeallocate(local_1a8);
    local_138[0] = &PTR__Integer_0100c890;
    if (uStack_120 <= local_128) {
      local_128 = uStack_120;
    }
    for (; local_128 != 0; local_128 = local_128 - 1) {
      *(undefined4 *)((long)local_118 + local_128 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d7e0 to 00c9d7e3 has its CatchHandler @ 00c9d8fc */
    UnalignedDeallocate(local_118);
    local_168 = &PTR__Integer_0100c890;
    if (uStack_150 <= local_158) {
      local_158 = uStack_150;
    }
    for (; local_158 != 0; local_158 = local_158 - 1) {
      *(undefined4 *)((long)local_148 + local_158 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d814 to 00c9d817 has its CatchHandler @ 00c9d8f8 */
    UnalignedDeallocate(local_148);
    local_198[0] = &PTR__Integer_0100c890;
    if (uStack_180 <= local_188) {
      local_188 = uStack_180;
    }
    for (; local_188 != 0; local_188 = local_188 - 1) {
      *(undefined4 *)((long)local_178 + local_188 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d848 to 00c9d84b has its CatchHandler @ 00c9d8f4 */
    UnalignedDeallocate(local_178);
    local_a8 = &PTR__Integer_0100c890;
    if (uStack_90 <= local_98) {
      local_98 = uStack_90;
    }
    for (; local_98 != 0; local_98 = local_98 - 1) {
      *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d87c to 00c9d87f has its CatchHandler @ 00c9d8f0 */
    UnalignedDeallocate(local_88);
    local_78[0] = &PTR__Integer_0100c890;
    if (uStack_60 <= local_68) {
      local_68 = uStack_60;
    }
    for (; local_68 != 0; local_68 = local_68 - 1) {
      *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
    }
                    /* try { // try from 00c9d8b0 to 00c9d8b3 has its CatchHandler @ 00c9d8ec */
    UnalignedDeallocate(local_58);
  }
  Integer::Integer(in_x8,this);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


