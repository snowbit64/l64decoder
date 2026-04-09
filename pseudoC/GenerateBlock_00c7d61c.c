// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00c7d61c
// Size: 520 bytes
// Signature: undefined __thiscall GenerateBlock(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>> * this, uchar * param_1, ulong param_2)


/* CryptoPP::AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,
   CryptoPP::SymmetricCipher> >::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::
AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
::GenerateBlock(AdditiveCipherTemplate<CryptoPP::AbstractPolicyHolder<CryptoPP::AdditiveCipherAbstractPolicy,CryptoPP::SymmetricCipher>>
                *this,uchar *param_1,ulong param_2)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  uVar8 = *(ulong *)(this + 0x38);
  if (uVar8 != 0) {
    __n = param_2;
    if (uVar8 <= param_2) {
      __n = uVar8;
    }
    memcpy(param_1,(void *)((*(long *)(this + 0x30) + *(long *)(this + 0x28)) - uVar8),__n);
    param_2 = param_2 - __n;
    *(size_t *)(this + 0x38) = *(long *)(this + 0x38) - __n;
    if (param_2 == 0) goto LAB_00c7d768;
    param_1 = param_1 + __n;
  }
  plVar4 = (long *)(**(code **)(*(long *)this + 0x88))(this);
  uVar3 = (**(code **)(*plVar4 + 0x18))();
  uVar8 = (ulong)uVar3;
  if (uVar8 <= param_2) {
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = param_2 / uVar8;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,param_1,uVar1);
    param_2 = param_2 - uVar1 * uVar8;
    param_1 = param_1 + uVar1 * uVar8;
  }
  if (param_2 != 0) {
    if (-uVar8 < param_2) {
      puVar5 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7d7a0 to 00c7d7a7 has its CatchHandler @ 00c7d860 */
      puVar6 = (undefined8 *)operator_new(0x30);
      *(undefined *)((long)puVar6 + 0x25) = 0;
      puVar6[1] = 0x6c7069746c754d6f;
      *puVar6 = 0x547055646e756f52;
      puVar6[3] = 0x65766f2072656765;
      puVar6[2] = 0x746e69203a664f65;
      *(undefined8 *)((long)puVar6 + 0x1d) = 0x776f6c667265766f;
      *puVar5 = &PTR__Exception_00fe0298;
      *(undefined4 *)(puVar5 + 1) = 1;
                    /* try { // try from 00c7d7f0 to 00c7d7f7 has its CatchHandler @ 00c7d840 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar5 + 2));
      *puVar5 = &PTR__Exception_00fe9ee0;
                    /* try { // try from 00c7d808 to 00c7d81f has its CatchHandler @ 00c7d824 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&InvalidArgument::typeinfo,Exception::~Exception);
    }
    uVar9 = (uVar8 + param_2) - 1;
    uVar11 = NEON_cnt(uVar8,1);
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = uVar9 / uVar8;
    }
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar1 = uVar9 - uVar1 * uVar8;
    if ((int)CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) == 1) {
      uVar1 = (ulong)(uVar3 - 1 & (uint)uVar9);
    }
    uVar9 = uVar9 - uVar1;
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = uVar9 / uVar8;
    }
    (**(code **)(*plVar4 + 0x30))
              (plVar4,(*(long *)(this + 0x30) + *(long *)(this + 0x28)) - uVar9,uVar1);
    memcpy(param_1,(void *)((*(long *)(this + 0x30) + *(long *)(this + 0x28)) - uVar9),param_2);
    *(ulong *)(this + 0x38) = uVar9 - param_2;
  }
LAB_00c7d768:
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


