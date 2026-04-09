// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneratePublicKey
// Entry Point: 00b4a344
// Size: 788 bytes
// Signature: undefined __thiscall GeneratePublicKey(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>> * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2>
   >::GeneratePublicKey(CryptoPP::RandomNumberGenerator&, unsigned char const*, unsigned char*)
   const */

void __thiscall
CryptoPP::
DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
::GeneratePublicKey(DH_Domain<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
                    *this,RandomNumberGenerator *param_1,uchar *param_2,uchar *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  ulong uVar11;
  SelfTestFailure *this_00;
  undefined8 *puVar12;
  char acStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_e8;
  ulong uStack_e0;
  uchar *local_d8;
  ulong local_c8;
  ulong uStack_c0;
  uchar *local_b8;
  ulong local_a8;
  ulong uStack_a0;
  uchar *local_98;
  ulong local_88;
  ulong uStack_80;
  uchar *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePublicKey
            ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this,param_1,param_2,param_3);
  uVar6 = FIPS_140_2_ComplianceEnabled();
  if ((uVar6 & 1) != 0) {
    uVar2 = (**(code **)(*(long *)this + 0x50))(this);
    uStack_80 = (ulong)uVar2;
    local_88 = 0xffffffffffffffff;
    if (uVar2 == 0) {
      puVar7 = (uchar *)0x0;
    }
    else {
      puVar7 = (uchar *)UnalignedAllocate(uStack_80);
    }
    local_78 = puVar7;
                    /* try { // try from 00b4a3cc to 00b4a3db has its CatchHandler @ 00b4a6d0 */
    (**(code **)(*(long *)this + 0x60))(this,param_1,puVar7);
                    /* try { // try from 00b4a3e4 to 00b4a403 has its CatchHandler @ 00b4a6e8 */
    uVar2 = (**(code **)(*(long *)this + 0x58))(this);
    uStack_a0 = (ulong)uVar2;
    local_a8 = 0xffffffffffffffff;
    if (uVar2 == 0) {
      puVar8 = (uchar *)0x0;
    }
    else {
      puVar8 = (uchar *)UnalignedAllocate(uStack_a0);
    }
    local_98 = puVar8;
                    /* try { // try from 00b4a414 to 00b4a427 has its CatchHandler @ 00b4a6c8 */
    DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePublicKey
              ((DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *)this,param_1,puVar7,puVar8);
                    /* try { // try from 00b4a430 to 00b4a457 has its CatchHandler @ 00b4a6e0 */
    uVar2 = (**(code **)(*(long *)this + 0x48))(this);
    uVar6 = (ulong)uVar2;
    local_c8 = 0xffffffffffffffff;
    uStack_c0 = uVar6;
    if (uVar2 == 0) {
      puVar9 = (uchar *)0x0;
    }
    else {
      puVar9 = (uchar *)UnalignedAllocate(uVar6);
    }
    local_b8 = puVar9;
                    /* try { // try from 00b4a470 to 00b4a48f has its CatchHandler @ 00b4a6d8 */
    uVar3 = (**(code **)(*(long *)this + 0x48))(this);
    uStack_e0 = (ulong)uVar3;
    local_e8 = 0xffffffffffffffff;
    if (uVar3 == 0) {
      puVar10 = (uchar *)0x0;
    }
    else {
      puVar10 = (uchar *)UnalignedAllocate(uStack_e0);
    }
    local_d8 = puVar10;
                    /* try { // try from 00b4a4a8 to 00b4a4bf has its CatchHandler @ 00b4a6c4 */
    uVar4 = (**(code **)(*(long *)this + 0x78))(this,puVar9,param_2,puVar8,1);
                    /* try { // try from 00b4a4cc to 00b4a503 has its CatchHandler @ 00b4a6f0 */
    uVar5 = (**(code **)(*(long *)this + 0x78))(this,puVar10,puVar7,param_3,1);
    if ((((uVar4 & uVar5 & 1) == 0) || (uVar2 != uVar3)) ||
       (uVar11 = VerifyBufsEqual(puVar9,puVar10,uVar6), (uVar11 & 1) == 0)) {
      this_00 = (SelfTestFailure *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00b4a5f4 to 00b4a5ff has its CatchHandler @ 00b4a6b4 */
      (**(code **)(*(long *)this + 0x18))(acStack_128,this);
                    /* try { // try from 00b4a600 to 00b4a60f has its CatchHandler @ 00b4a68c */
      puVar12 = (undefined8 *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append(acStack_128);
      local_100 = puVar12[2];
      uStack_108 = puVar12[1];
      local_110 = *puVar12;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
                    /* try { // try from 00b4a62c to 00b4a653 has its CatchHandler @ 00b4a658 */
      SelfTestFailure::SelfTestFailure(this_00,(basic_string *)&local_110);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&SelfTestFailure::typeinfo,Exception::~Exception);
    }
    if (uVar2 != 0) {
      do {
        uVar11 = uVar6 - 1;
        puVar10[uVar6 - 1] = '\0';
        uVar6 = uVar11;
      } while (uVar11 != 0);
    }
                    /* try { // try from 00b4a520 to 00b4a527 has its CatchHandler @ 00b4a6b0 */
    UnalignedDeallocate(puVar10);
    uVar6 = local_c8;
    if (uStack_c0 <= local_c8) {
      uVar6 = uStack_c0;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      local_b8[uVar6 - 1] = '\0';
    }
                    /* try { // try from 00b4a554 to 00b4a557 has its CatchHandler @ 00b4a6ac */
    UnalignedDeallocate(local_b8);
    uVar6 = local_a8;
    if (uStack_a0 <= local_a8) {
      uVar6 = uStack_a0;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      local_98[uVar6 - 1] = '\0';
    }
                    /* try { // try from 00b4a580 to 00b4a583 has its CatchHandler @ 00b4a6a8 */
    UnalignedDeallocate(local_98);
    uVar6 = local_88;
    if (uStack_80 <= local_88) {
      uVar6 = uStack_80;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      local_78[uVar6 - 1] = '\0';
    }
                    /* try { // try from 00b4a5ac to 00b4a5af has its CatchHandler @ 00b4a6a4 */
    UnalignedDeallocate(local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


