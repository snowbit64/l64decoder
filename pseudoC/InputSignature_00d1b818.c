// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InputSignature
// Entry Point: 00d1b818
// Size: 780 bytes
// Signature: undefined __thiscall InputSignature(TF_VerifierBase * this, PK_MessageAccumulator * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::TF_VerifierBase::InputSignature(CryptoPP::PK_MessageAccumulator&, unsigned char const*,
   unsigned long) const */

void __thiscall
CryptoPP::TF_VerifierBase::InputSignature
          (TF_VerifierBase *this,PK_MessageAccumulator *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  Integer *pIVar11;
  KeyTooShort *this_00;
  ulong extraout_x1;
  long *plVar12;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)this + 0x90))();
  plVar12 = (long *)(this + 0x10);
  plVar6 = (long *)(**(code **)(*plVar12 + 0x20))(plVar12);
  plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar7 + 0x18))(local_98);
                    /* try { // try from 00d1b89c to 00d1b8a3 has its CatchHandler @ 00d1bb5c */
  iVar3 = Integer::BitCount();
  uVar8 = local_88;
  if (uStack_80 <= local_88) {
    uVar8 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_78 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1b8e0 to 00d1b8e3 has its CatchHandler @ 00d1bb58 */
  UnalignedDeallocate(local_78);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = iVar3 - 1;
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar4 = (**(code **)(*plVar7 + 0x48))();
  uVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,extraout_x1 & 0xffffffff,uVar4);
  if (uVar5 < uVar8) {
    this_00 = (KeyTooShort *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1bb04 to 00d1bb07 has its CatchHandler @ 00d1bb24 */
    PK_SignatureScheme::KeyTooShort::KeyTooShort(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&PK_SignatureScheme::KeyTooShort::typeinfo,Exception::~Exception);
  }
  uVar9 = TF_SignatureSchemeBase<CryptoPP::PK_Verifier,CryptoPP::TF_Base<CryptoPP::TrapdoorFunction,CryptoPP::PK_SignatureMessageEncodingMethod>>
          ::MessageRepresentativeLength();
  uVar8 = *(ulong *)(param_1 + 0x38);
  pvVar10 = *(void **)(param_1 + 0x40);
  if (uVar8 != uVar9) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined *)((long)pvVar10 + (uVar8 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar10);
    if (uVar9 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      pvVar10 = (void *)UnalignedAllocate(uVar9);
    }
  }
  *(ulong *)(param_1 + 0x38) = uVar9;
  *(void **)(param_1 + 0x40) = pvVar10;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  plVar6 = (long *)(**(code **)(*plVar12 + 0x18))(plVar12);
  Integer::Integer((Integer *)local_98,param_2,param_3,0,1);
                    /* try { // try from 00d1b9b4 to 00d1b9c3 has its CatchHandler @ 00d1bb54 */
  (**(code **)(*plVar6 + 0x40))(local_c8,plVar6,local_98);
  local_98[0] = &PTR__Integer_0100c890;
  uVar8 = local_88;
  if (uStack_80 <= local_88) {
    uVar8 = uStack_80;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_78 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1b9f4 to 00d1b9f7 has its CatchHandler @ 00d1bb50 */
  UnalignedDeallocate(local_78);
                    /* try { // try from 00d1b9f8 to 00d1ba23 has its CatchHandler @ 00d1bb70 */
  uVar5 = Integer::BitCount();
  plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar6 + 0x18))(local_98);
                    /* try { // try from 00d1ba24 to 00d1ba2b has its CatchHandler @ 00d1bb40 */
  iVar3 = Integer::BitCount();
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1ba60 to 00d1ba63 has its CatchHandler @ 00d1bb3c */
  UnalignedDeallocate(local_78);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  if (uVar1 < uVar5) {
                    /* try { // try from 00d1ba74 to 00d1ba93 has its CatchHandler @ 00d1bb70 */
    pIVar11 = (Integer *)Integer::Zero();
    Integer::operator=((Integer *)local_c8,pIVar11);
  }
  Integer::Encode((Integer *)local_c8,*(uchar **)(param_1 + 0x40),*(ulong *)(param_1 + 0x38),0);
  local_c8[0] = &PTR__Integer_0100c890;
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1bac4 to 00d1bac7 has its CatchHandler @ 00d1bb38 */
  UnalignedDeallocate(local_a8);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


