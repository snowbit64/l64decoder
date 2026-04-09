// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SignAndRestart
// Entry Point: 00d1b30c
// Size: 908 bytes
// Signature: undefined __cdecl SignAndRestart(RandomNumberGenerator * param_1, PK_MessageAccumulator * param_2, uchar * param_3, bool param_4)


/* CryptoPP::TF_SignerBase::SignAndRestart(CryptoPP::RandomNumberGenerator&,
   CryptoPP::PK_MessageAccumulator&, unsigned char*, bool) const */

ulong CryptoPP::TF_SignerBase::SignAndRestart
                (RandomNumberGenerator *param_1,PK_MessageAccumulator *param_2,uchar *param_3,
                bool param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  uchar *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  KeyTooShort *this;
  long *plVar15;
  undefined auVar16 [16];
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  auVar16 = (**(code **)(*(long *)param_1 + 0x80))();
  plVar15 = (long *)(param_1 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar15 + 0x20))(plVar15);
  plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15);
  (**(code **)(*plVar10 + 0x18))(local_a0);
                    /* try { // try from 00d1b398 to 00d1b39f has its CatchHandler @ 00d1b6dc */
  iVar7 = Integer::BitCount();
  uVar11 = local_90;
  if (uStack_88 <= local_90) {
    uVar11 = uStack_88;
  }
  local_a0[0] = &PTR__Integer_0100c890;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)((long)local_80 + uVar11 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1b3dc to 00d1b3df has its CatchHandler @ 00d1b6d8 */
  UnalignedDeallocate(local_80);
  uVar1 = 0;
  if (iVar7 != 0) {
    uVar1 = iVar7 - 1;
  }
  plVar10 = (long *)(**(code **)(*(long *)param_3 + 0xa0))(param_3);
  uVar8 = (**(code **)(*plVar10 + 0x48))();
  uVar11 = (**(code **)(*plVar9 + 0x10))(plVar9,auVar16._8_8_ & 0xffffffff,uVar8);
  if (uVar11 <= uVar1) {
    uVar11 = TF_SignatureSchemeBase<CryptoPP::PK_Signer,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunctionInverse,CryptoPP::PK_SignatureMessageEncodingMethod>>
             ::MessageRepresentativeLength();
    if (uVar11 == 0) {
      puVar12 = (uchar *)0x0;
    }
    else {
      puVar12 = (uchar *)UnalignedAllocate(uVar11);
    }
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
                    /* try { // try from 00d1b474 to 00d1b4a3 has its CatchHandler @ 00d1b700 */
    uVar13 = (**(code **)(*(long *)param_3 + 0xa0))(param_3);
    uVar5 = param_3[0xe8];
    plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15);
    (**(code **)(*plVar10 + 0x18))(local_a0);
                    /* try { // try from 00d1b4a4 to 00d1b4ab has its CatchHandler @ 00d1b6d4 */
    iVar7 = Integer::BitCount();
    uVar14 = local_90;
    if (uStack_88 <= local_90) {
      uVar14 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)((long)local_80 + uVar14 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1b4e8 to 00d1b4eb has its CatchHandler @ 00d1b6d0 */
    UnalignedDeallocate(local_80);
    iVar2 = 0;
    if (iVar7 != 0) {
      iVar2 = iVar7 + -1;
    }
                    /* try { // try from 00d1b504 to 00d1b51f has its CatchHandler @ 00d1b700 */
    (**(code **)(*plVar9 + 0x38))
              (plVar9,param_2,uVar4,uVar3,uVar13,auVar16._0_8_,auVar16._8_8_,uVar5 != '\0',puVar12,
               iVar2);
    param_3[0xe8] = '\x01';
                    /* try { // try from 00d1b528 to 00d1b53f has its CatchHandler @ 00d1b6cc */
    Integer::Integer((Integer *)local_a0,puVar12,uVar11,0,1);
                    /* try { // try from 00d1b548 to 00d1b54f has its CatchHandler @ 00d1b6c8 */
    uVar14 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
                    /* try { // try from 00d1b55c to 00d1b57b has its CatchHandler @ 00d1b6f0 */
    plVar9 = (long *)(**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar9 + 0x10))(local_d0,plVar9,param_2,local_a0);
                    /* try { // try from 00d1b57c to 00d1b58f has its CatchHandler @ 00d1b6b8 */
    Integer::Encode((Integer *)local_d0,(uchar *)(ulong)param_4,uVar14,0);
    if (uStack_b8 <= local_c0) {
      local_c0 = uStack_b8;
    }
    local_d0[0] = &PTR__Integer_0100c890;
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1b5c8 to 00d1b5cb has its CatchHandler @ 00d1b6b4 */
    UnalignedDeallocate(local_b0);
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    local_a0[0] = &PTR__Integer_0100c890;
    for (; local_90 != 0; local_90 = local_90 - 1) {
      *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1b604 to 00d1b607 has its CatchHandler @ 00d1b6b0 */
    UnalignedDeallocate(local_80);
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar12[uVar11 - 1] = '\0';
    }
                    /* try { // try from 00d1b62c to 00d1b633 has its CatchHandler @ 00d1b6ac */
    UnalignedDeallocate(puVar12);
    if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar14;
  }
  this = (KeyTooShort *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1b678 to 00d1b67b has its CatchHandler @ 00d1b698 */
  PK_SignatureScheme::KeyTooShort::KeyTooShort(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&PK_SignatureScheme::KeyTooShort::typeinfo,Exception::~Exception);
}


