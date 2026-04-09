// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InputRecoverableMessage
// Entry Point: 00d1ae40
// Size: 864 bytes
// Signature: undefined __thiscall InputRecoverableMessage(TF_SignerBase * this, PK_MessageAccumulator * param_1, uchar * param_2, ulong param_3)


/* CryptoPP::TF_SignerBase::InputRecoverableMessage(CryptoPP::PK_MessageAccumulator&, unsigned char
   const*, unsigned long) const */

void __thiscall
CryptoPP::TF_SignerBase::InputRecoverableMessage
          (TF_SignerBase *this,PK_MessageAccumulator *param_1,uchar *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  void *__dest;
  undefined8 uVar9;
  KeyTooShort *this_00;
  NotImplemented *this_01;
  InvalidArgument *this_02;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long *plVar10;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(*(long *)this + 0x80))();
  plVar10 = (long *)(this + 0x10);
  plVar6 = (long *)(**(code **)(*plVar10 + 0x20))(plVar10);
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
  (**(code **)(*plVar7 + 0x18))(local_98);
                    /* try { // try from 00d1aec4 to 00d1aecb has its CatchHandler @ 00d1b200 */
  iVar4 = Integer::BitCount();
  uVar8 = local_88;
  if (uStack_80 <= local_88) {
    uVar8 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_78 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1af08 to 00d1af0b has its CatchHandler @ 00d1b1fc */
  UnalignedDeallocate(local_78);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = iVar4 - 1;
  }
  plVar7 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar5 = (**(code **)(*plVar7 + 0x48))();
  uVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,extraout_x1 & 0xffffffff,uVar5);
  if (uVar1 < uVar8) {
    this_00 = (KeyTooShort *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1b0f0 to 00d1b0f3 has its CatchHandler @ 00d1b1e0 */
    PK_SignatureScheme::KeyTooShort::KeyTooShort(this_00);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&PK_SignatureScheme::KeyTooShort::typeinfo,Exception::~Exception);
  }
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
  (**(code **)(*plVar7 + 0x18))(local_98);
                    /* try { // try from 00d1af74 to 00d1af7b has its CatchHandler @ 00d1b1f8 */
  iVar4 = Integer::BitCount();
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1afb0 to 00d1afb3 has its CatchHandler @ 00d1b1f4 */
  UnalignedDeallocate(local_78);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = iVar4 + -1;
  }
  (**(code **)(*(long *)this + 0x80))(this);
  plVar7 = (long *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  uVar5 = (**(code **)(*plVar7 + 0x48))();
  uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,iVar2,extraout_x1_00 & 0xffffffff,uVar5);
  if (uVar8 == 0) {
    this_01 = (NotImplemented *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1b118 to 00d1b127 has its CatchHandler @ 00d1b1dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_98,
               "TF_SignerBase: this algorithm does not support message recovery or the key is too short"
              );
                    /* try { // try from 00d1b12c to 00d1b153 has its CatchHandler @ 00d1b1c4 */
    NotImplemented::NotImplemented(this_01,(basic_string *)local_98);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_01,&NotImplemented::typeinfo,Exception::~Exception);
  }
  if (uVar8 < param_3) {
    this_02 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1b164 to 00d1b173 has its CatchHandler @ 00d1b1c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_98,
               "TF_SignerBase: the recoverable message part is too long for the given key and algorithm"
              );
                    /* try { // try from 00d1b178 to 00d1b19f has its CatchHandler @ 00d1b1a4 */
    InvalidArgument::InvalidArgument(this_02,(basic_string *)local_98);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_02,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar8 = *(ulong *)(param_1 + 0x18);
  __dest = *(void **)(param_1 + 0x20);
  if (uVar8 != param_3) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined *)((long)__dest + (uVar8 - 1)) = 0;
    }
    UnalignedDeallocate(__dest);
    if (param_3 == 0) {
      *(ulong *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      goto LAB_00d1b074;
    }
    __dest = (void *)UnalignedAllocate(param_3);
  }
  *(ulong *)(param_1 + 0x18) = param_3;
  *(void **)(param_1 + 0x20) = __dest;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  if ((param_2 != (uchar *)0x0) && (__dest != (void *)0x0)) {
    memcpy(__dest,param_2,param_3);
  }
LAB_00d1b074:
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  uVar9 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  (**(code **)(*plVar6 + 0x30))(plVar6,uVar9,param_2,param_3,0,0,param_1 + 0x68);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


