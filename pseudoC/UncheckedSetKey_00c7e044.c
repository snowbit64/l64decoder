// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00c7e044
// Size: 560 bytes
// Signature: undefined __thiscall UncheckedSetKey(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this, uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::UncheckedSetKey(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
                  *this,uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)(**(code **)(*(long *)this + 0x88))(this,param_1,param_2);
  (**(code **)(*plVar6 + 0x48))(plVar6,param_3,param_1,param_2);
  *(undefined8 *)(this + 0x38) = 0;
  uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
  iVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
  iVar5 = (**(code **)(*plVar6 + 0x28))(plVar6);
  uVar1 = iVar5 * iVar4;
  uVar10 = (ulong)uVar1;
  if ((uVar7 & 1) == 0) {
    if (-uVar1 < 0x400) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7e1f0 to 00c7e1f7 has its CatchHandler @ 00c7e2b0 */
      local_50 = (undefined8 *)operator_new(0x30);
      *(undefined *)((long)local_50 + 0x25) = 0;
      local_50[1] = 0x6c7069746c754d6f;
      *local_50 = 0x547055646e756f52;
      local_50[3] = 0x65766f2072656765;
      local_50[2] = 0x746e69203a664f65;
      *(undefined8 *)((long)local_50 + 0x1d) = 0x776f6c667265766f;
      uStack_58 = 0x25;
      local_60 = 0x31;
      *puVar9 = &PTR__Exception_00fe0298;
      *(undefined4 *)(puVar9 + 1) = 1;
                    /* try { // try from 00c7e240 to 00c7e247 has its CatchHandler @ 00c7e290 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar9 + 2));
      *puVar9 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00c7e258 to 00c7e26f has its CatchHandler @ 00c7e274 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    if ((int)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) == 1) {
      uVar10 = (ulong)(uVar1 + 0x3ff & -uVar1);
      goto LAB_00c7e110;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uVar1 + 0x3ff) / uVar1;
    }
    uVar7 = *(ulong *)(this + 0x28);
    pvVar8 = *(void **)(this + 0x30);
    uVar10 = (ulong)(uVar2 * uVar1);
    if (uVar7 == uVar10) goto LAB_00c7e16c;
  }
  else {
LAB_00c7e110:
    uVar7 = *(ulong *)(this + 0x28);
    pvVar8 = *(void **)(this + 0x30);
    if (uVar7 == uVar10) goto LAB_00c7e16c;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined *)((long)pvVar8 + (uVar7 - 1)) = 0;
  }
  UnalignedDeallocate(pvVar8);
  if ((int)uVar10 == 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)UnalignedAllocate(uVar10);
  }
LAB_00c7e16c:
  *(ulong *)(this + 0x28) = uVar10;
  *(void **)(this + 0x30) = pvVar8;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  iVar4 = (**(code **)(*(long *)this + 0x40))(this);
  if (iVar4 < 4) {
    uVar12 = SimpleKeyingInterface::GetIVAndThrowIfInvalid
                       ((SimpleKeyingInterface *)this,param_3,&local_60);
    (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined8 *)(this + 0x30),uVar12,local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


