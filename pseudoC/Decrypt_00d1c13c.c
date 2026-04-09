// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decrypt
// Entry Point: 00d1c13c
// Size: 1024 bytes
// Signature: undefined __thiscall Decrypt(TF_DecryptorBase * this, RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, uchar * param_4, NameValuePairs * param_5)


/* CryptoPP::TF_DecryptorBase::Decrypt(CryptoPP::RandomNumberGenerator&, unsigned char const*,
   unsigned long, unsigned char*, CryptoPP::NameValuePairs const&) const */

undefined  [16] __thiscall
CryptoPP::TF_DecryptorBase::Decrypt
          (TF_DecryptorBase *this,RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
          uchar *param_4,NameValuePairs *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  Integer *pIVar9;
  InvalidArgument *this_00;
  undefined8 *puVar10;
  uchar *puVar11;
  long *plVar12;
  undefined auVar13 [16];
  undefined8 local_170;
  ulong uStack_168;
  ulong local_160;
  uchar *local_158;
  undefined auStack_148 [24];
  undefined auStack_130 [24];
  char acStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char acStack_e8 [24];
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar6 = (**(code **)(*(long *)this + 0x28))();
  if (uVar6 != param_3) {
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00d1c43c to 00d1c447 has its CatchHandler @ 00d1c698 */
    (**(code **)(*(long *)(this + 8) + 0x18))(acStack_118,this + 8);
                    /* try { // try from 00d1c448 to 00d1c457 has its CatchHandler @ 00d1c680 */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (acStack_118);
    local_f0 = puVar10[2];
    uStack_f8 = puVar10[1];
    local_100 = *puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 00d1c470 to 00d1c47f has its CatchHandler @ 00d1c650 */
    IntToString<unsigned_long>(param_3,10);
                    /* try { // try from 00d1c480 to 00d1c48f has its CatchHandler @ 00d1c62c */
    FUN_00c751d0(acStack_e8,&local_100,auStack_130);
                    /* try { // try from 00d1c490 to 00d1c49f has its CatchHandler @ 00d1c608 */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (acStack_e8);
    local_160 = puVar10[2];
    uStack_168 = puVar10[1];
    local_170 = *puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 00d1c4c4 to 00d1c4d3 has its CatchHandler @ 00d1c5e4 */
    uVar6 = (**(code **)(*(long *)this + 0x28))(this);
    IntToString<unsigned_long>(uVar6,10);
                    /* try { // try from 00d1c4d4 to 00d1c4e3 has its CatchHandler @ 00d1c5c0 */
    FUN_00c751d0(local_d0,&local_170,auStack_148);
                    /* try { // try from 00d1c4e4 to 00d1c4f3 has its CatchHandler @ 00d1c59c */
    puVar10 = (undefined8 *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)local_d0);
    local_90 = puVar10[2];
    uStack_98 = puVar10[1];
    local_a0 = (undefined **)*puVar10;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
                    /* try { // try from 00d1c510 to 00d1c537 has its CatchHandler @ 00d1c53c */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_a0);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  plVar12 = (long *)(this + 0x10);
  plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar7 + 0x10))(&local_a0);
                    /* try { // try from 00d1c1b8 to 00d1c1bf has its CatchHandler @ 00d1c6e8 */
  uVar4 = Integer::BitCount();
  uVar6 = local_90;
  if (uStack_88 <= local_90) {
    uVar6 = uStack_88;
  }
  local_a0 = &PTR__Integer_0100c890;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)((long)local_80 + uVar6 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c1fc to 00d1c1ff has its CatchHandler @ 00d1c6e4 */
  UnalignedDeallocate(local_80);
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = uVar4 - 1;
  }
  uVar6 = (ulong)uVar1 + 7 >> 3;
  uStack_168 = 0xffffffffffffffff;
  local_160 = uVar6;
  if (uVar4 < 2) {
    puVar11 = (uchar *)0x0;
  }
  else {
    puVar11 = (uchar *)UnalignedAllocate(uVar6);
  }
  local_158 = puVar11;
                    /* try { // try from 00d1c240 to 00d1c247 has its CatchHandler @ 00d1c6dc */
  plVar7 = (long *)(**(code **)(*plVar12 + 0x18))(plVar12);
                    /* try { // try from 00d1c24c to 00d1c263 has its CatchHandler @ 00d1c6d8 */
  Integer::Integer((Integer *)&local_a0,param_2,param_3,0,1);
                    /* try { // try from 00d1c26c to 00d1c27f has its CatchHandler @ 00d1c6cc */
  (**(code **)(*plVar7 + 0x20))(local_d0,plVar7,param_1,&local_a0);
  local_a0 = &PTR__Integer_0100c890;
  uVar8 = local_90;
  if (uStack_88 <= local_90) {
    uVar8 = uStack_88;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)((long)local_80 + uVar8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c2b0 to 00d1c2b3 has its CatchHandler @ 00d1c6c8 */
  UnalignedDeallocate(local_80);
                    /* try { // try from 00d1c2b4 to 00d1c31b has its CatchHandler @ 00d1c734 */
  uVar8 = Integer::ByteCount();
  if (uVar6 < (uVar8 & 0xffffffff)) {
    pIVar9 = (Integer *)Integer::Zero();
    Integer::operator=((Integer *)local_d0,pIVar9);
  }
  Integer::Encode((Integer *)local_d0,puVar11,uVar6,0);
  plVar7 = (long *)(**(code **)(*plVar12 + 0x20))(plVar12);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12);
  (**(code **)(*plVar12 + 0x10))(&local_a0);
                    /* try { // try from 00d1c31c to 00d1c323 has its CatchHandler @ 00d1c6b8 */
  iVar5 = Integer::BitCount();
  local_a0 = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c358 to 00d1c35b has its CatchHandler @ 00d1c6b4 */
  UnalignedDeallocate(local_80);
  iVar2 = 0;
  if (iVar5 != 0) {
    iVar2 = iVar5 + -1;
  }
                    /* try { // try from 00d1c36c to 00d1c37f has its CatchHandler @ 00d1c734 */
  auVar13 = (**(code **)(*plVar7 + 0x28))(plVar7,puVar11,iVar2,param_4,param_5);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c3b8 to 00d1c3bb has its CatchHandler @ 00d1c6b0 */
  UnalignedDeallocate(local_b0);
  uVar6 = uStack_168;
  if (local_160 <= uStack_168) {
    uVar6 = local_160;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar11[uVar6 - 1] = '\0';
  }
                    /* try { // try from 00d1c3e0 to 00d1c3e7 has its CatchHandler @ 00d1c6ac */
  UnalignedDeallocate(puVar11);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar13;
}


