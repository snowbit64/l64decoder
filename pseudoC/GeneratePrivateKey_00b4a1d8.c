// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneratePrivateKey
// Entry Point: 00b4a1d8
// Size: 324 bytes
// Signature: undefined __thiscall GeneratePrivateKey(DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> * this, RandomNumberGenerator * param_1, uchar * param_2)


/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePrivateKey(CryptoPP::RandomNumberGenerator&,
   unsigned char*) const */

void __thiscall
CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::GeneratePrivateKey
          (DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *this,RandomNumberGenerator *param_1,
          uchar *param_2)

{
  long lVar1;
  Integer *pIVar2;
  long *plVar3;
  Integer *pIVar4;
  Integer *pIVar5;
  ulong uVar6;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)Integer::One();
  plVar3 = (long *)(**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*plVar3 + 0xa8))(local_a8);
                    /* try { // try from 00b4a230 to 00b4a25b has its CatchHandler @ 00b4a330 */
  pIVar4 = (Integer *)Integer::Zero();
  pIVar5 = (Integer *)Integer::One();
  Integer::Integer((Integer *)local_78,param_1,pIVar2,(Integer *)local_a8,0,pIVar4,pIVar5);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  local_a8[0] = &PTR__Integer_0100c890;
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a294 to 00b4a297 has its CatchHandler @ 00b4a320 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00b4a2a0 to 00b4a2bb has its CatchHandler @ 00b4a324 */
  uVar6 = (**(code **)(*(long *)this + 0x50))(this);
  Integer::Encode((Integer *)local_78,param_2,uVar6 & 0xffffffff,0);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a2ec to 00b4a2ef has its CatchHandler @ 00b4a31c */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


