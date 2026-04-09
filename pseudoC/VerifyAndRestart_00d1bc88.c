// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyAndRestart
// Entry Point: 00d1bc88
// Size: 544 bytes
// Signature: undefined __thiscall VerifyAndRestart(TF_VerifierBase * this, PK_MessageAccumulator * param_1)


/* CryptoPP::TF_VerifierBase::VerifyAndRestart(CryptoPP::PK_MessageAccumulator&) const */

uint __thiscall
CryptoPP::TF_VerifierBase::VerifyAndRestart(TF_VerifierBase *this,PK_MessageAccumulator *param_1)

{
  int iVar1;
  PK_MessageAccumulator PVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  KeyTooShort *this_00;
  long *plVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  auVar13 = (**(code **)(*(long *)this + 0x90))();
  plVar11 = (long *)(this + 0x10);
  plVar7 = (long *)(**(code **)(*plVar11 + 0x20))(plVar11);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11);
  (**(code **)(*plVar8 + 0x18))(local_98);
                    /* try { // try from 00d1bd04 to 00d1bd0b has its CatchHandler @ 00d1bec8 */
  iVar4 = Integer::BitCount();
  uVar9 = local_88;
  if (uStack_80 <= local_88) {
    uVar9 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)((long)local_78 + uVar9 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1bd48 to 00d1bd4b has its CatchHandler @ 00d1bec4 */
  UnalignedDeallocate(local_78);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = iVar4 - 1;
  }
  plVar8 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar5 = (**(code **)(*plVar8 + 0x48))();
  uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,auVar13._8_8_ & 0xffffffff,uVar5);
  if (uVar6 < uVar9) {
    this_00 = (KeyTooShort *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1be88 to 00d1be8b has its CatchHandler @ 00d1bea8 */
    PK_SignatureScheme::KeyTooShort::KeyTooShort(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&PK_SignatureScheme::KeyTooShort::typeinfo,Exception::~Exception);
  }
  uVar10 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  PVar2 = param_1[0xe8];
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11);
  (**(code **)(*plVar8 + 0x18))(local_98);
                    /* try { // try from 00d1bdd0 to 00d1bdd7 has its CatchHandler @ 00d1bec0 */
  iVar4 = Integer::BitCount();
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1be0c to 00d1be0f has its CatchHandler @ 00d1bebc */
  UnalignedDeallocate(local_78);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = iVar4 + -1;
  }
  uVar6 = (**(code **)(*plVar7 + 0x40))
                    (plVar7,uVar10,auVar13._0_8_,auVar13._8_8_,PVar2 != (PK_MessageAccumulator)0x0,
                     uVar12,iVar1);
  param_1[0xe8] = (PK_MessageAccumulator)0x1;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 1;
}


