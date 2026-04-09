// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GeneratePublicKey
// Entry Point: 00c8f0f4
// Size: 312 bytes
// Signature: undefined __thiscall GeneratePublicKey(DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer> * this, RandomNumberGenerator * param_1, uchar * param_2, uchar * param_3)


/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::GeneratePublicKey(CryptoPP::RandomNumberGenerator&,
   unsigned char const*, unsigned char*) const */

void __thiscall
CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::GeneratePublicKey
          (DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer> *this,RandomNumberGenerator *param_1,
          uchar *param_2,uchar *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
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
  plVar2 = (long *)(**(code **)(*(long *)this + 0x88))();
  uVar3 = (**(code **)(*(long *)this + 0x50))(this);
  Integer::Integer((Integer *)local_78,param_2,uVar3 & 0xffffffff,0,1);
                    /* try { // try from 00c8f164 to 00c8f173 has its CatchHandler @ 00c8f244 */
  (**(code **)(*plVar2 + 0x78))(local_a8,plVar2,local_78);
                    /* try { // try from 00c8f17c to 00c8f18f has its CatchHandler @ 00c8f234 */
  (**(code **)(*plVar2 + 200))(plVar2,1,local_a8,param_3);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  local_a8[0] = &PTR__Integer_0100c890;
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8f1c8 to 00c8f1cb has its CatchHandler @ 00c8f230 */
  UnalignedDeallocate(local_88);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8f1fc to 00c8f1ff has its CatchHandler @ 00c8f22c */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


