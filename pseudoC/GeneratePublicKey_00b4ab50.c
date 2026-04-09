// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneratePublicKey
// Entry Point: 00b4ab50
// Size: 380 bytes
// Signature: undefined __thiscall GeneratePublicKey(DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePublicKey(CryptoPP::RandomNumberGenerator&,
   unsigned char const*, unsigned char*) const */

void __thiscall
CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePublicKey
          (DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *this,RandomNumberGenerator *param_1,
          uchar *param_2,uchar *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **local_e8;
  undefined **local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined **local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(*(long *)this + 0x88))();
  uVar3 = (**(code **)(*(long *)this + 0x50))(this);
  Integer::Integer((Integer *)local_78,param_2,uVar3 & 0xffffffff,0,1);
                    /* try { // try from 00b4abc0 to 00b4abcf has its CatchHandler @ 00b4ace8 */
  (**(code **)(*plVar2 + 0x78))(&local_e8,plVar2,local_78);
                    /* try { // try from 00b4abd8 to 00b4abeb has its CatchHandler @ 00b4acd8 */
  (**(code **)(*plVar2 + 200))(plVar2,1,&local_e8,param_3);
  local_e8 = &PTR__ECPPoint_00fe9fd8;
  local_b0 = &PTR__Integer_0100c890;
  if (uStack_98 <= local_a0) {
    local_a0 = uStack_98;
  }
  for (; local_a0 != 0; local_a0 = local_a0 - 1) {
    *(undefined4 *)((long)local_90 + local_a0 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4ac34 to 00b4ac37 has its CatchHandler @ 00b4acd4 */
  UnalignedDeallocate(local_90);
  local_e0 = &PTR__Integer_0100c890;
  if (uStack_c8 <= local_d0) {
    local_d0 = uStack_c8;
  }
  for (; local_d0 != 0; local_d0 = local_d0 - 1) {
    *(undefined4 *)((long)local_c0 + local_d0 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4ac68 to 00b4ac6b has its CatchHandler @ 00b4acd0 */
  UnalignedDeallocate(local_c0);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4ac9c to 00b4ac9f has its CatchHandler @ 00b4accc */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


