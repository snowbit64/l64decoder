// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c8e594
// Size: 352 bytes
// Signature: undefined __thiscall GenerateRandom(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::GenerateRandom
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,RandomNumberGenerator *param_1,
          NameValuePairs *param_2)

{
  long lVar1;
  bool bVar2;
  Integer *pIVar3;
  long *plVar4;
  Integer *pIVar5;
  Integer *pIVar6;
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
  plVar4 = (long *)(this + 0x60);
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = NameValuePairs::GetThisObject<CryptoPP::DL_GroupParameters_DSA>
                    (param_2,(DL_GroupParameters_DSA *)plVar4);
  if (!bVar2) {
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1,param_2);
  }
  pIVar3 = (Integer *)Integer::One();
  plVar4 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  (**(code **)(*plVar4 + 0xa8))(local_a8);
                    /* try { // try from 00c8e618 to 00c8e643 has its CatchHandler @ 00c8e708 */
  pIVar5 = (Integer *)Integer::Zero();
  pIVar6 = (Integer *)Integer::One();
  Integer::Integer((Integer *)local_78,param_1,pIVar3,(Integer *)local_a8,0,pIVar5,pIVar6);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  local_a8[0] = &PTR__Integer_0100c890;
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8e67c to 00c8e67f has its CatchHandler @ 00c8e704 */
  UnalignedDeallocate(local_88);
                    /* try { // try from 00c8e688 to 00c8e693 has its CatchHandler @ 00c8e6f8 */
  (**(code **)(*(long *)this + 0x28))(this,local_78);
  local_78[0] = &PTR__Integer_0100c890;
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8e6c4 to 00c8e6c7 has its CatchHandler @ 00c8e6f4 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


