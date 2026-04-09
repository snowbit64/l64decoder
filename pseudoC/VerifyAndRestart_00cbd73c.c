// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyAndRestart
// Entry Point: 00cbd73c
// Size: 752 bytes
// Signature: undefined __thiscall VerifyAndRestart(DL_VerifierBase<CryptoPP::EC2NPoint> * this, PK_MessageAccumulator * param_1)


/* CryptoPP::DL_VerifierBase<CryptoPP::EC2NPoint>::VerifyAndRestart(CryptoPP::PK_MessageAccumulator&)
   const */

uint __thiscall
CryptoPP::DL_VerifierBase<CryptoPP::EC2NPoint>::VerifyAndRestart
          (DL_VerifierBase<CryptoPP::EC2NPoint> *this,PK_MessageAccumulator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  PK_MessageAccumulator PVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  uchar *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined auVar16 [16];
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar7 = (long *)(**(code **)(*(long *)(this + 8) + 0x30))();
  uVar8 = NullRNG();
  (**(code **)(*plVar7 + 0x28))(plVar7,uVar8,0);
  plVar7 = (long *)(**(code **)(*(long *)this + 0x98))(this);
  plVar15 = (long *)(this + 0x10);
  plVar9 = (long *)(**(code **)(*plVar15 + 0x18))(plVar15);
  uVar8 = (**(code **)(*plVar9 + 0x10))();
  uVar10 = (**(code **)(*plVar15 + 0x18))(plVar15);
  plVar9 = (long *)(**(code **)(*plVar15 + 0x18))(plVar15);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))();
  (**(code **)(*plVar9 + 0xa0))();
  uVar5 = Integer::BitCount();
  uVar14 = (ulong)uVar5 + 7 >> 3;
  if (uVar5 == 0) {
    puVar11 = (uchar *)0x0;
  }
  else {
    puVar11 = (uchar *)UnalignedAllocate(uVar14);
  }
                    /* try { // try from 00cbd850 to 00cbd8fb has its CatchHandler @ 00cbda5c */
  plVar9 = (long *)(**(code **)(*(long *)this + 0xa0))(this);
  uVar12 = NullRNG();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  auVar16 = (**(code **)(*(long *)this + 0xa8))(this);
  PVar3 = param_1[0xe8];
  plVar15 = (long *)(**(code **)(*plVar15 + 0x18))(plVar15);
  plVar15 = (long *)(**(code **)(*plVar15 + 0x10))();
  (**(code **)(*plVar15 + 0xa0))();
  uVar6 = Integer::BitCount();
  (**(code **)(*plVar9 + 0x38))
            (plVar9,uVar12,uVar2,uVar1,uVar13,auVar16._0_8_,auVar16._8_8_,
             PVar3 != (PK_MessageAccumulator)0x0,puVar11,uVar6);
  param_1[0xe8] = (PK_MessageAccumulator)0x1;
                    /* try { // try from 00cbd904 to 00cbd91b has its CatchHandler @ 00cbda58 */
  Integer::Integer((Integer *)local_a0,puVar11,uVar14,0,1);
                    /* try { // try from 00cbd920 to 00cbd92f has its CatchHandler @ 00cbda48 */
  Integer::Integer((Integer *)local_d0,*(uchar **)(param_1 + 0x80),*(ulong *)(param_1 + 0x78),0,1);
                    /* try { // try from 00cbd940 to 00cbd94f has its CatchHandler @ 00cbda38 */
  uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar8,uVar10,local_a0,local_d0,param_1 + 0xb8);
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  local_d0[0] = &PTR__Integer_0100c890;
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbd98c to 00cbd98f has its CatchHandler @ 00cbda34 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbd9c0 to 00cbd9c3 has its CatchHandler @ 00cbda30 */
  UnalignedDeallocate(local_80);
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    puVar11[uVar14 - 1] = '\0';
  }
                    /* try { // try from 00cbd9e8 to 00cbd9ef has its CatchHandler @ 00cbda2c */
  UnalignedDeallocate(puVar11);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


