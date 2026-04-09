// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Encrypt
// Entry Point: 00d1c750
// Size: 1036 bytes
// Signature: undefined __thiscall Encrypt(TF_EncryptorBase * this, RandomNumberGenerator * param_1, uchar * param_2, ulong param_3, uchar * param_4, NameValuePairs * param_5)


/* CryptoPP::TF_EncryptorBase::Encrypt(CryptoPP::RandomNumberGenerator&, unsigned char const*,
   unsigned long, unsigned char*, CryptoPP::NameValuePairs const&) const */

void __thiscall
CryptoPP::TF_EncryptorBase::Encrypt
          (TF_EncryptorBase *this,RandomNumberGenerator *param_1,uchar *param_2,ulong param_3,
          uchar *param_4,NameValuePairs *param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  uchar *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  InvalidArgument *this_00;
  undefined8 *puVar9;
  long *plVar10;
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
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  uVar4 = (**(code **)(*(long *)this + 0x30))();
  if (uVar4 < param_3) {
    lVar8 = (**(code **)(*(long *)this + 0x30))(this);
    this_00 = (InvalidArgument *)__cxa_allocate_exception(0x28);
    if (lVar8 != 0) {
                    /* try { // try from 00d1ca64 to 00d1ca6b has its CatchHandler @ 00d1ccfc */
      (**(code **)(*(long *)(this + 8) + 0x18))(acStack_118);
                    /* try { // try from 00d1ca6c to 00d1ca7b has its CatchHandler @ 00d1cccc */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_118);
      local_f0 = puVar9[2];
      uStack_f8 = puVar9[1];
      local_100 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00d1ca94 to 00d1caa3 has its CatchHandler @ 00d1cc70 */
      IntToString<unsigned_long>(param_3,10);
                    /* try { // try from 00d1caa4 to 00d1cab3 has its CatchHandler @ 00d1cc4c */
      FUN_00c751d0(acStack_e8,&local_100,auStack_130);
                    /* try { // try from 00d1cab4 to 00d1cac3 has its CatchHandler @ 00d1cc28 */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(acStack_e8);
      local_160 = puVar9[2];
      uStack_168 = puVar9[1];
      local_170 = *puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00d1cae4 to 00d1caf7 has its CatchHandler @ 00d1cc04 */
      uVar4 = (**(code **)(*(long *)this + 0x30))(this);
      IntToString<unsigned_long>(uVar4,10);
                    /* try { // try from 00d1caf8 to 00d1cb07 has its CatchHandler @ 00d1cbe0 */
      FUN_00c751d0(local_d0,&local_170,auStack_148);
                    /* try { // try from 00d1cb08 to 00d1cb17 has its CatchHandler @ 00d1cbbc */
      puVar9 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((char *)local_d0);
      local_90 = puVar9[2];
      uStack_98 = puVar9[1];
      local_a0 = (undefined **)*puVar9;
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = 0;
                    /* try { // try from 00d1cb34 to 00d1cb5b has its CatchHandler @ 00d1cb60 */
      InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_a0);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
    }
                    /* try { // try from 00d1c9f4 to 00d1c9ff has its CatchHandler @ 00d1cd00 */
    (**(code **)(*(long *)(this + 8) + 0x18))(local_d0,this + 8);
                    /* try { // try from 00d1ca00 to 00d1ca0f has its CatchHandler @ 00d1cce4 */
    puVar9 = (undefined8 *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                       ((char *)local_d0);
    local_90 = puVar9[2];
    uStack_98 = puVar9[1];
    local_a0 = (undefined **)*puVar9;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 00d1ca2c to 00d1ca53 has its CatchHandler @ 00d1cc98 */
    InvalidArgument::InvalidArgument(this_00,(basic_string *)&local_a0);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&InvalidArgument::typeinfo,Exception::~Exception);
  }
  uVar4 = TF_CryptoSystemBase<CryptoPP::PK_Encryptor,CryptoPP::TF_Base<CryptoPP::RandomizedTrapdoorFunction,CryptoPP::PK_EncryptionMessageEncodingMethod>>
          ::PaddedBlockByteLength();
  uStack_168 = 0xffffffffffffffff;
  local_160 = uVar4;
  if (uVar4 == 0) {
    puVar5 = (uchar *)0x0;
  }
  else {
    puVar5 = (uchar *)UnalignedAllocate(uVar4);
  }
  plVar10 = (long *)(this + 0x10);
  local_158 = puVar5;
                    /* try { // try from 00d1c7ec to 00d1c817 has its CatchHandler @ 00d1cd58 */
  plVar6 = (long *)(**(code **)(*plVar10 + 0x20))(plVar10);
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10);
  (**(code **)(*plVar7 + 0x10))(&local_a0);
                    /* try { // try from 00d1c818 to 00d1c81f has its CatchHandler @ 00d1cd34 */
  iVar3 = Integer::BitCount();
  uVar2 = local_90;
  if (uStack_88 <= local_90) {
    uVar2 = uStack_88;
  }
  local_a0 = &PTR__Integer_0100c890;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)((long)local_80 + uVar2 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c85c to 00d1c85f has its CatchHandler @ 00d1cd30 */
  UnalignedDeallocate(local_80);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar3 + -1;
  }
                    /* try { // try from 00d1c870 to 00d1c88b has its CatchHandler @ 00d1cd58 */
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1,param_2,param_3,puVar5,iVar1,param_5);
                    /* try { // try from 00d1c894 to 00d1c89b has its CatchHandler @ 00d1cd2c */
  plVar6 = (long *)(**(code **)(*plVar10 + 0x18))(plVar10);
                    /* try { // try from 00d1c8a0 to 00d1c8b7 has its CatchHandler @ 00d1cd28 */
  Integer::Integer((Integer *)local_d0,puVar5,uVar4,0,1);
                    /* try { // try from 00d1c8c0 to 00d1c8d3 has its CatchHandler @ 00d1cd20 */
  (**(code **)(*plVar6 + 0x30))(&local_a0,plVar6,param_1,local_d0);
                    /* try { // try from 00d1c8dc to 00d1c8f7 has its CatchHandler @ 00d1cd40 */
  uVar4 = (**(code **)(*(long *)this + 0x28))(this);
  Integer::Encode((Integer *)&local_a0,param_4,uVar4,0);
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  local_a0 = &PTR__Integer_0100c890;
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c930 to 00d1c933 has its CatchHandler @ 00d1cd1c */
  UnalignedDeallocate(local_80);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1c964 to 00d1c967 has its CatchHandler @ 00d1cd18 */
  UnalignedDeallocate(local_b0);
  uVar4 = uStack_168;
  if (local_160 <= uStack_168) {
    uVar4 = local_160;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar5[uVar4 - 1] = '\0';
  }
                    /* try { // try from 00d1c98c to 00d1c993 has its CatchHandler @ 00d1cd14 */
  UnalignedDeallocate(puVar5);
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


