// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Agree
// Entry Point: 00b4a71c
// Size: 588 bytes
// Signature: undefined __thiscall Agree(DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> * this, uchar * param_1, uchar * param_2, uchar * param_3, bool param_4)


/* CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree(unsigned char*, unsigned
   char const*, unsigned char const*, bool) const */

void __thiscall
CryptoPP::DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint>::Agree
          (DL_SimpleKeyAgreementDomainBase<CryptoPP::ECPPoint> *this,uchar *param_1,uchar *param_2,
          uchar *param_3,bool param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined **local_168;
  undefined **local_160;
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  undefined **local_130;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  undefined **local_f8;
  undefined **local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined **local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00b4a760 to 00b4a763 has its CatchHandler @ 00b4a99c */
  plVar2 = (long *)(**(code **)(*(long *)this + 0x88))();
                    /* try { // try from 00b4a770 to 00b4a78f has its CatchHandler @ 00b4a9a0 */
  uVar3 = (**(code **)(*(long *)this + 0x50))(this);
  Integer::Integer((Integer *)local_88,param_2,uVar3 & 0xffffffff,0,1);
                    /* try { // try from 00b4a798 to 00b4a7ab has its CatchHandler @ 00b4a990 */
  (**(code **)(*plVar2 + 0xd0))(&local_f8,plVar2,param_3,param_4);
                    /* try { // try from 00b4a7b4 to 00b4a7f3 has its CatchHandler @ 00b4a9ac */
  plVar4 = (long *)(**(code **)(*(long *)this + 0x80))(this);
  uVar5 = (**(code **)(*(long *)this + 0x88))(this);
  (**(code **)(*plVar4 + 0x18))(&local_168,plVar4,uVar5,&local_f8,param_4,local_88);
                    /* try { // try from 00b4a7fc to 00b4a80f has its CatchHandler @ 00b4a97c */
  (**(code **)(*plVar2 + 200))(plVar2,0,&local_168,param_1);
  local_168 = &PTR__ECPPoint_00fe9fd8;
  local_130 = &PTR__Integer_0100c890;
  if (uStack_118 <= local_120) {
    local_120 = uStack_118;
  }
  for (; local_120 != 0; local_120 = local_120 - 1) {
    *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a858 to 00b4a85b has its CatchHandler @ 00b4a978 */
  UnalignedDeallocate(local_110);
  local_160 = &PTR__Integer_0100c890;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a88c to 00b4a88f has its CatchHandler @ 00b4a974 */
  UnalignedDeallocate(local_140);
  local_f8 = &PTR__ECPPoint_00fe9fd8;
  local_c0 = &PTR__Integer_0100c890;
  if (uStack_a8 <= local_b0) {
    local_b0 = uStack_a8;
  }
  for (; local_b0 != 0; local_b0 = local_b0 - 1) {
    *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a8c8 to 00b4a8cb has its CatchHandler @ 00b4a970 */
  UnalignedDeallocate(local_a0);
  local_f0 = &PTR__Integer_0100c890;
  if (uStack_d8 <= local_e0) {
    local_e0 = uStack_d8;
  }
  for (; local_e0 != 0; local_e0 = local_e0 - 1) {
    *(undefined4 *)((long)local_d0 + local_e0 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a8fc to 00b4a8ff has its CatchHandler @ 00b4a96c */
  UnalignedDeallocate(local_d0);
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4a930 to 00b4a933 has its CatchHandler @ 00b4a968 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


