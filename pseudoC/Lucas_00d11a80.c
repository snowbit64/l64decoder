// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Lucas
// Entry Point: 00d11a80
// Size: 924 bytes
// Signature: undefined __thiscall Lucas(CryptoPP * this, Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::Lucas(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall CryptoPP::Lucas(CryptoPP *this,Integer *param_1,Integer *param_2,Integer *param_3)

{
  long lVar1;
  int iVar2;
  Integer *pIVar3;
  ulong uVar4;
  Integer *in_x8;
  ulong uVar5;
  undefined **local_210 [2];
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined **local_1e0 [2];
  ulong local_1d0;
  ulong uStack_1c8;
  void *local_1c0;
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  MontgomeryRepresentation aMStack_180 [48];
  long local_150;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = Integer::BitCount();
  if (iVar2 == 0) {
    pIVar3 = (Integer *)Integer::Two();
    Integer::Integer(in_x8,pIVar3);
    if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_00d11d44;
  }
  else {
    MontgomeryRepresentation::MontgomeryRepresentation(aMStack_180,param_2);
                    /* try { // try from 00d11ad4 to 00d11ae3 has its CatchHandler @ 00d11e70 */
    Integer::Modulo(param_1);
                    /* try { // try from 00d11aec to 00d11af7 has its CatchHandler @ 00d11e64 */
    Integer::operator<<((Integer *)local_1e0,local_150 << 5);
                    /* try { // try from 00d11afc to 00d11b0b has its CatchHandler @ 00d11e50 */
    Integer::Modulo((Integer *)local_88);
    uVar5 = local_78;
    if (uStack_70 <= local_78) {
      uVar5 = uStack_70;
    }
    local_88[0] = &PTR__Integer_0100c890;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_68 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11b44 to 00d11b47 has its CatchHandler @ 00d11e4c */
    UnalignedDeallocate(local_68);
    local_1e0[0] = &PTR__Integer_0100c890;
    uVar5 = local_1d0;
    if (uStack_1c8 <= local_1d0) {
      uVar5 = uStack_1c8;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_1c0 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11b78 to 00d11b7b has its CatchHandler @ 00d11e48 */
    UnalignedDeallocate(local_1c0);
                    /* try { // try from 00d11b7c to 00d11b8f has its CatchHandler @ 00d11e78 */
    pIVar3 = (Integer *)Integer::Two();
    Integer::operator<<(pIVar3,local_150 << 5);
                    /* try { // try from 00d11b90 to 00d11b9f has its CatchHandler @ 00d11e3c */
    Integer::Modulo((Integer *)local_88);
    local_88[0] = &PTR__Integer_0100c890;
    uVar5 = local_78;
    if (uStack_70 <= local_78) {
      uVar5 = uStack_70;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)((long)local_68 + uVar5 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11bd0 to 00d11bd3 has its CatchHandler @ 00d11e38 */
    UnalignedDeallocate(local_68);
                    /* try { // try from 00d11bd4 to 00d11bdf has its CatchHandler @ 00d11e30 */
    Integer::Integer((Integer *)local_88,(Integer *)local_1b0);
                    /* try { // try from 00d11be0 to 00d11c07 has its CatchHandler @ 00d11e80 */
    pIVar3 = (Integer *)MontgomeryRepresentation::Square(aMStack_180,(Integer *)local_1b0);
    pIVar3 = (Integer *)
             ModularArithmetic::Subtract
                       ((ModularArithmetic *)aMStack_180,pIVar3,(Integer *)local_1e0);
    Integer::Integer((Integer *)local_210,pIVar3);
    if (iVar2 != 1) {
      uVar5 = (ulong)(iVar2 - 2);
      do {
                    /* try { // try from 00d11d5c to 00d11e17 has its CatchHandler @ 00d11e88 */
        uVar4 = Integer::GetBit((Integer *)this,uVar5);
        if ((uVar4 & 1) == 0) {
          pIVar3 = (Integer *)
                   MontgomeryRepresentation::Multiply
                             (aMStack_180,(Integer *)local_88,(Integer *)local_210);
          pIVar3 = (Integer *)
                   ModularArithmetic::Subtract
                             ((ModularArithmetic *)aMStack_180,pIVar3,(Integer *)local_1b0);
          Integer::operator=((Integer *)local_210,pIVar3);
          pIVar3 = (Integer *)MontgomeryRepresentation::Square(aMStack_180,(Integer *)local_88);
          pIVar3 = (Integer *)
                   ModularArithmetic::Subtract
                             ((ModularArithmetic *)aMStack_180,pIVar3,(Integer *)local_1e0);
          Integer::operator=((Integer *)local_88,pIVar3);
        }
        else {
          pIVar3 = (Integer *)
                   MontgomeryRepresentation::Multiply
                             (aMStack_180,(Integer *)local_88,(Integer *)local_210);
          pIVar3 = (Integer *)
                   ModularArithmetic::Subtract
                             ((ModularArithmetic *)aMStack_180,pIVar3,(Integer *)local_1b0);
          Integer::operator=((Integer *)local_88,pIVar3);
          pIVar3 = (Integer *)MontgomeryRepresentation::Square(aMStack_180,(Integer *)local_210);
          pIVar3 = (Integer *)
                   ModularArithmetic::Subtract
                             ((ModularArithmetic *)aMStack_180,pIVar3,(Integer *)local_1e0);
          Integer::operator=((Integer *)local_210,pIVar3);
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0xffffffffffffffff);
    }
                    /* try { // try from 00d11c10 to 00d11c1f has its CatchHandler @ 00d11e2c */
    MontgomeryRepresentation::ConvertOut((Integer *)aMStack_180);
    local_210[0] = &PTR__Integer_0100c890;
    if (uStack_1f8 <= local_200) {
      local_200 = uStack_1f8;
    }
    for (; local_200 != 0; local_200 = local_200 - 1) {
      *(undefined4 *)((long)local_1f0 + local_200 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11c50 to 00d11c53 has its CatchHandler @ 00d11e28 */
    UnalignedDeallocate(local_1f0);
    local_88[0] = &PTR__Integer_0100c890;
    if (uStack_70 <= local_78) {
      local_78 = uStack_70;
    }
    for (; local_78 != 0; local_78 = local_78 - 1) {
      *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11c84 to 00d11c87 has its CatchHandler @ 00d11e24 */
    UnalignedDeallocate(local_68);
    local_1e0[0] = &PTR__Integer_0100c890;
    if (uStack_1c8 <= local_1d0) {
      local_1d0 = uStack_1c8;
    }
    for (; local_1d0 != 0; local_1d0 = local_1d0 - 1) {
      *(undefined4 *)((long)local_1c0 + local_1d0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11cb8 to 00d11cbb has its CatchHandler @ 00d11e20 */
    UnalignedDeallocate(local_1c0);
    local_1b0[0] = &PTR__Integer_0100c890;
    if (uStack_198 <= local_1a0) {
      local_1a0 = uStack_198;
    }
    for (; local_1a0 != 0; local_1a0 = local_1a0 - 1) {
      *(undefined4 *)((long)local_190 + local_1a0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11cec to 00d11cef has its CatchHandler @ 00d11e1c */
    UnalignedDeallocate(local_190);
    MontgomeryRepresentation::~MontgomeryRepresentation(aMStack_180);
    if (*(long *)(lVar1 + 0x28) != local_58) {
LAB_00d11d44:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return;
}


