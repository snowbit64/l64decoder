// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateGroup
// Entry Point: 00cea854
// Size: 588 bytes
// Signature: undefined __thiscall ValidateGroup(DL_GroupParameters_IntegerBased * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_GroupParameters_IntegerBased::ValidateGroup(CryptoPP::RandomNumberGenerator&,
   unsigned int) const */

byte __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::ValidateGroup
          (DL_GroupParameters_IntegerBased *this,RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  Integer *this_00;
  Integer *this_01;
  Integer *pIVar5;
  ulong uVar6;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  this_01 = (Integer *)(**(code **)(*(long *)this + 0x50))(this);
  pIVar5 = (Integer *)Integer::One();
  iVar4 = Integer::Compare(this_00,pIVar5);
  if ((iVar4 < 1) || (uVar6 = Integer::GetBit(this_00,0), (uVar6 & 1) == 0)) {
LAB_00cea9dc:
    bVar3 = 0;
  }
  else {
    pIVar5 = (Integer *)Integer::One();
    iVar4 = Integer::Compare(this_01,pIVar5);
    if (iVar4 < 1) goto LAB_00cea9dc;
    bVar3 = Integer::GetBit(this_01,0);
    if ((param_2 != 0) && ((bVar3 & 1) != 0)) {
      (**(code **)(*(long *)(this + 8) + 0xb8))(local_88);
                    /* try { // try from 00cea914 to 00cea923 has its CatchHandler @ 00ceaad0 */
      pIVar5 = (Integer *)Integer::One();
      iVar4 = Integer::Compare((Integer *)local_88,pIVar5);
      if (iVar4 < 1) {
        bVar2 = false;
      }
      else {
                    /* try { // try from 00cea93c to 00cea947 has its CatchHandler @ 00ceaab0 */
        (**(code **)(*(long *)this + 0x58))(local_e8,this);
                    /* try { // try from 00cea948 to 00cea957 has its CatchHandler @ 00ceaaa8 */
        Integer::Modulo((Integer *)local_e8);
                    /* try { // try from 00cea958 to 00cea967 has its CatchHandler @ 00ceaab8 */
        pIVar5 = (Integer *)Integer::Zero();
        iVar4 = Integer::Compare((Integer *)local_b8,pIVar5);
        bVar2 = iVar4 == 0;
        local_b8[0] = &PTR__Integer_0100c890;
        if (uStack_a0 <= local_a8) {
          local_a8 = uStack_a0;
        }
        for (; local_a8 != 0; local_a8 = local_a8 - 1) {
          *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cea9a0 to 00cea9a3 has its CatchHandler @ 00ceaaa4 */
        UnalignedDeallocate(local_98);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00cea9d4 to 00cea9d7 has its CatchHandler @ 00ceaaa0 */
        UnalignedDeallocate(local_c8);
      }
      local_88[0] = &PTR__Integer_0100c890;
      if (uStack_70 <= local_78) {
        local_78 = uStack_70;
      }
      for (; local_78 != 0; local_78 = local_78 - 1) {
        *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
      }
                    /* try { // try from 00ceaa50 to 00ceaa53 has its CatchHandler @ 00ceaab4 */
      UnalignedDeallocate(local_68);
      bVar3 = param_2 < 2 & bVar2;
      if ((param_2 >= 2) && (bVar2 == true)) {
        uVar6 = VerifyPrime(param_1,this_01,param_2 - 2);
        if ((uVar6 & 1) == 0) {
          bVar3 = 0;
        }
        else {
          bVar3 = VerifyPrime(param_1,this_00,param_2 - 2);
        }
      }
      goto LAB_00cea9ec;
    }
  }
  bVar3 = param_2 < 2 & bVar3;
LAB_00cea9ec:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3 & 1;
}


