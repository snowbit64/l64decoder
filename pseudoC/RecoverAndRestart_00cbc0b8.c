// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverAndRestart
// Entry Point: 00cbc0b8
// Size: 1032 bytes
// Signature: undefined __thiscall RecoverAndRestart(DL_VerifierBase<CryptoPP::ECPPoint> * this, uchar * param_1, PK_MessageAccumulator * param_2)


/* CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>::RecoverAndRestart(unsigned char*,
   CryptoPP::PK_MessageAccumulator&) const */

undefined  [16] __thiscall
CryptoPP::DL_VerifierBase<CryptoPP::ECPPoint>::RecoverAndRestart
          (DL_VerifierBase<CryptoPP::ECPPoint> *this,uchar *param_1,PK_MessageAccumulator *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  PK_MessageAccumulator PVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uchar *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined auVar19 [16];
  undefined **local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  plVar8 = (long *)(**(code **)(*(long *)(this + 8) + 0x30))();
  uVar9 = NullRNG();
  (**(code **)(*plVar8 + 0x28))(plVar8,uVar9,0);
  plVar8 = (long *)(**(code **)(*(long *)this + 0x98))(this);
  plVar18 = (long *)(this + 0x10);
  plVar10 = (long *)(**(code **)(*plVar18 + 0x18))(plVar18);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))();
  uVar9 = (**(code **)(*plVar18 + 0x18))(plVar18);
  plVar11 = (long *)(**(code **)(*plVar18 + 0x18))(plVar18);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x10))();
  (**(code **)(*plVar11 + 0xa0))();
  uVar6 = Integer::BitCount();
  uVar17 = (ulong)uVar6 + 7 >> 3;
  if (uVar6 == 0) {
    puVar12 = (uchar *)0x0;
  }
  else {
    puVar12 = (uchar *)UnalignedAllocate(uVar17);
  }
                    /* try { // try from 00cbc1cc to 00cbc277 has its CatchHandler @ 00cbc510 */
  plVar11 = (long *)(**(code **)(*(long *)this + 0xa0))(this);
  uVar13 = NullRNG();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar14 = (**(code **)(*(long *)param_2 + 0xa0))(param_2);
  auVar19 = (**(code **)(*(long *)this + 0xa8))(this);
  PVar4 = param_2[0xe8];
  plVar18 = (long *)(**(code **)(*plVar18 + 0x18))(plVar18);
  plVar18 = (long *)(**(code **)(*plVar18 + 0x10))();
  (**(code **)(*plVar18 + 0xa0))();
  uVar7 = Integer::BitCount();
  (**(code **)(*plVar11 + 0x38))
            (plVar11,uVar13,uVar3,uVar1,uVar14,auVar19._0_8_,auVar19._8_8_,
             PVar4 != (PK_MessageAccumulator)0x0,puVar12,uVar7);
  param_2[0xe8] = (PK_MessageAccumulator)0x1;
                    /* try { // try from 00cbc280 to 00cbc297 has its CatchHandler @ 00cbc4ec */
  Integer::Integer((Integer *)local_a0,puVar12,uVar17,0,1);
                    /* try { // try from 00cbc2a4 to 00cbc2eb has its CatchHandler @ 00cbc4f0 */
  uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10,0);
  uVar16 = (ulong)uVar6;
  uVar2 = *(ulong *)(param_2 + 0x58);
  pvVar15 = *(void **)(param_2 + 0x60);
  if (uVar2 != uVar16) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)((long)pvVar15 + (uVar2 - 1)) = 0;
    }
    UnalignedDeallocate(pvVar15);
    if (uVar6 == 0) {
      pvVar15 = (void *)0x0;
    }
    else {
      pvVar15 = (void *)UnalignedAllocate(uVar16);
    }
  }
  *(ulong *)(param_2 + 0x58) = uVar16;
  *(void **)(param_2 + 0x60) = pvVar15;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
                    /* try { // try from 00cbc304 to 00cbc313 has its CatchHandler @ 00cbc4e4 */
  Integer::Integer((Integer *)local_d0,*(uchar **)(param_2 + 0x80),*(ulong *)(param_2 + 0x78),0,1);
                    /* try { // try from 00cbc324 to 00cbc333 has its CatchHandler @ 00cbc4e0 */
  (**(code **)(*plVar8 + 0x20))(local_100,plVar8,plVar10,uVar9,local_d0,param_2 + 0xb8);
                    /* try { // try from 00cbc338 to 00cbc343 has its CatchHandler @ 00cbc4d0 */
  Integer::Encode((Integer *)local_100,*(uchar **)(param_2 + 0x60),*(ulong *)(param_2 + 0x58),0);
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  local_100[0] = &PTR__Integer_0100c890;
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbc37c to 00cbc37f has its CatchHandler @ 00cbc4cc */
  UnalignedDeallocate(local_e0);
                    /* try { // try from 00cbc388 to 00cbc3e3 has its CatchHandler @ 00cbc4f8 */
  plVar8 = (long *)(**(code **)(*(long *)this + 0xa0))(this);
  uVar9 = (**(code **)(*(long *)param_2 + 0xa0))(param_2);
  auVar19 = (**(code **)(*(long *)this + 0xa8))(this);
  auVar19 = (**(code **)(*plVar8 + 0x50))
                      (plVar8,uVar9,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)(param_2 + 0x60),
                       *(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x80),
                       *(undefined8 *)(param_2 + 0x78),param_1);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbc41c to 00cbc41f has its CatchHandler @ 00cbc4c8 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00cbc450 to 00cbc453 has its CatchHandler @ 00cbc4c4 */
  UnalignedDeallocate(local_80);
  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
    puVar12[uVar17 - 1] = '\0';
  }
                    /* try { // try from 00cbc47c to 00cbc47f has its CatchHandler @ 00cbc4c0 */
  UnalignedDeallocate(puVar12);
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return auVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


