// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Agree
// Entry Point: 00cb1304
// Size: 460 bytes
// Signature: undefined __thiscall Agree(DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer> * this, uchar * param_1, uchar * param_2, uchar * param_3, bool param_4)


/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::Agree(unsigned char*, unsigned char
   const*, unsigned char const*, bool) const */

void __thiscall
CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer>::Agree
          (DL_SimpleKeyAgreementDomainBase<CryptoPP::Integer> *this,uchar *param_1,uchar *param_2,
          uchar *param_3,bool param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
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
                    /* try { // try from 00cb1348 to 00cb134b has its CatchHandler @ 00cb14f8 */
  plVar2 = (long *)(**(code **)(*(long *)this + 0x88))();
                    /* try { // try from 00cb1358 to 00cb1377 has its CatchHandler @ 00cb14fc */
  uVar3 = (**(code **)(*(long *)this + 0x50))(this);
  Integer::Integer((Integer *)local_88,param_2,uVar3 & 0xffffffff,0,1);
                    /* try { // try from 00cb1380 to 00cb1393 has its CatchHandler @ 00cb14ec */
  (**(code **)(*plVar2 + 0xd0))(local_b8,plVar2,param_3,param_4);
                    /* try { // try from 00cb139c to 00cb13db has its CatchHandler @ 00cb1508 */
  plVar4 = (long *)(**(code **)(*(long *)this + 0x80))(this);
  uVar5 = (**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*plVar4 + 0x18))(local_e8,plVar4,uVar5,local_b8,param_4,local_88);
                    /* try { // try from 00cb13e4 to 00cb13f7 has its CatchHandler @ 00cb14d8 */
  (**(code **)(*plVar2 + 200))(plVar2,0,local_e8,param_1);
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  local_e8[0] = &PTR__Integer_0100c890;
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb1430 to 00cb1433 has its CatchHandler @ 00cb14d4 */
  UnalignedDeallocate(local_c8);
  local_b8[0] = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb1464 to 00cb1467 has its CatchHandler @ 00cb14d0 */
  UnalignedDeallocate(local_98);
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb1498 to 00cb149b has its CatchHandler @ 00cb14cc */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


