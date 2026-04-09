// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverAndRestart
// Entry Point: 00d1bedc
// Size: 556 bytes
// Signature: undefined __thiscall RecoverAndRestart(TF_VerifierBase * this, uchar * param_1, PK_MessageAccumulator * param_2)


/* CryptoPP::TF_VerifierBase::RecoverAndRestart(unsigned char*, CryptoPP::PK_MessageAccumulator&)
   const */

void __thiscall
CryptoPP::TF_VerifierBase::RecoverAndRestart
          (TF_VerifierBase *this,uchar *param_1,PK_MessageAccumulator *param_2)

{
  uint uVar1;
  int iVar2;
  PK_MessageAccumulator PVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  auVar13 = (**(code **)(*(long *)this + 0x90))();
  plVar11 = (long *)(this + 0x10);
  plVar7 = (long *)(**(code **)(*plVar11 + 0x20))(plVar11);
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11);
  (**(code **)(*plVar8 + 0x18))(local_98);
                    /* try { // try from 00d1bf5c to 00d1bf63 has its CatchHandler @ 00d1c128 */
  iVar5 = Integer::BitCount();
  uVar9 = local_88;
  if (uStack_80 <= local_88) {
    uVar9 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)((long)local_78 + uVar9 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1bfa0 to 00d1bfa3 has its CatchHandler @ 00d1c124 */
  UnalignedDeallocate(local_78);
  uVar1 = 0;
  if (iVar5 != 0) {
    uVar1 = iVar5 - 1;
  }
  plVar8 = (long *)(**(code **)(*(long *)param_2 + 0xa0))(param_2);
  uVar6 = (**(code **)(*plVar8 + 0x48))();
  uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7,auVar13._8_8_ & 0xffffffff,uVar6);
  if (uVar9 <= uVar1) {
    uVar10 = (**(code **)(*(long *)param_2 + 0xa0))(param_2);
    PVar3 = param_2[0xe8];
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar8 + 0x18))(local_98);
                    /* try { // try from 00d1c028 to 00d1c02f has its CatchHandler @ 00d1c120 */
    iVar5 = Integer::BitCount();
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d1c06c to 00d1c06f has its CatchHandler @ 00d1c11c */
    UnalignedDeallocate(local_78);
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = iVar5 + -1;
    }
    (**(code **)(*plVar7 + 0x48))
              (plVar7,uVar10,auVar13._0_8_,auVar13._8_8_,PVar3 != (PK_MessageAccumulator)0x0,uVar12,
               iVar2,param_1);
    param_2[0xe8] = (PK_MessageAccumulator)0x1;
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (KeyTooShort *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1c0e8 to 00d1c0eb has its CatchHandler @ 00d1c108 */
  PK_SignatureScheme::KeyTooShort::KeyTooShort(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&PK_SignatureScheme::KeyTooShort::typeinfo,Exception::~Exception);
}


