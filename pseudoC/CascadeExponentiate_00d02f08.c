// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00d02f08
// Size: 688 bytes
// Signature: undefined __thiscall CascadeExponentiate(ModularArithmetic * this, Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::ModularArithmetic::CascadeExponentiate(CryptoPP::Integer const&, CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::ModularArithmetic::CascadeExponentiate
          (ModularArithmetic *this,Integer *param_1,Integer *param_2,Integer *param_3,
          Integer *param_4)

{
  ulong uVar1;
  long lVar2;
  Integer *in_x8;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0;
  ulong local_1a0;
  ulong local_198;
  uint *local_190;
  MontgomeryRepresentation aMStack_180 [48];
  ulong local_150;
  uint *local_148;
  Integer aIStack_138 [32];
  uint *local_118;
  uint *local_b8;
  uint *local_90;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x30) == 0) || ((**(byte **)(this + 0x38) & 1) == 0)) {
    AbstractRing<CryptoPP::Integer>::CascadeExponentiate((Integer *)this,param_1,param_2,param_3);
    if (*(long *)(lVar2 + 0x28) != local_58) goto LAB_00d031b4;
  }
  else {
    MontgomeryRepresentation::MontgomeryRepresentation(aMStack_180,(Integer *)(this + 0x18));
                    /* try { // try from 00d02fb4 to 00d02fbf has its CatchHandler @ 00d031f4 */
    Integer::operator<<(param_1,local_150 << 5);
                    /* try { // try from 00d02fc4 to 00d02fd3 has its CatchHandler @ 00d031e8 */
    Integer::Modulo((Integer *)local_88);
    uVar1 = local_78;
    if (uStack_70 <= local_78) {
      uVar1 = uStack_70;
    }
    local_88[0] = &PTR__Integer_0100c890;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)local_68 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00d0300c to 00d0300f has its CatchHandler @ 00d031e4 */
    UnalignedDeallocate(local_68);
                    /* try { // try from 00d03018 to 00d03023 has its CatchHandler @ 00d031dc */
    Integer::operator<<(param_3,local_150 << 5);
                    /* try { // try from 00d03024 to 00d03033 has its CatchHandler @ 00d031d0 */
    Integer::Modulo((Integer *)local_88);
    local_88[0] = &PTR__Integer_0100c890;
    if (uStack_70 <= local_78) {
      local_78 = uStack_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00d03064 to 00d03067 has its CatchHandler @ 00d031cc */
    UnalignedDeallocate(local_68);
                    /* try { // try from 00d03068 to 00d03083 has its CatchHandler @ 00d031c4 */
    AbstractRing<CryptoPP::Integer>::CascadeExponentiate
              ((Integer *)aMStack_180,(Integer *)local_1e0,param_2,(Integer *)local_210);
    if (local_90 != local_190) {
      memcpy(local_90,local_190,local_198 << 2);
    }
    if (local_150 * 2 - local_198 != 0) {
      memset(local_90 + local_198,0,local_150 * 8 + local_198 * -4);
    }
                    /* try { // try from 00d030e0 to 00d030ff has its CatchHandler @ 00d031fc */
    MontgomeryReduce(local_118,local_90 + local_150 * 2,local_90,local_148,local_b8,local_150);
    Integer::Integer(in_x8,aIStack_138);
    local_1b0 = &PTR__Integer_0100c890;
    if (local_198 <= local_1a0) {
      local_1a0 = local_198;
    }
    for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
      local_190[local_1a0 - 1] = 0;
    }
                    /* try { // try from 00d03130 to 00d03133 has its CatchHandler @ 00d031c0 */
    UnalignedDeallocate(local_190);
    local_210[0] = &PTR__Integer_0100c890;
    if (uStack_1f8 <= local_200) {
      local_200 = uStack_1f8;
    }
    for (; local_200 != 0; local_200 = local_200 - 1) {
      *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
    }
                    /* try { // try from 00d03164 to 00d03167 has its CatchHandler @ 00d031bc */
    UnalignedDeallocate(local_1f0);
    local_1e0[0] = &PTR__Integer_0100c890;
    if (uStack_1c8 <= local_1d0) {
      local_1d0 = uStack_1c8;
    }
    for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
      *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d03198 to 00d0319b has its CatchHandler @ 00d031b8 */
    UnalignedDeallocate(local_1c0);
    MontgomeryRepresentation::~MontgomeryRepresentation(aMStack_180);
    if (*(long *)(lVar2 + 0x28) != local_58) {
LAB_00d031b4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


