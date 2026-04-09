// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateElement
// Entry Point: 00ceae90
// Size: 1000 bytes
// Signature: undefined __thiscall ValidateElement(DL_GroupParameters_IntegerBased * this, uint param_1, Integer * param_2, DL_FixedBasePrecomputation * param_3)


/* CryptoPP::DL_GroupParameters_IntegerBased::ValidateElement(unsigned int, CryptoPP::Integer
   const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::Integer> const*) const */

byte __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::ValidateElement
          (DL_GroupParameters_IntegerBased *this,uint param_1,Integer *param_2,
          DL_FixedBasePrecomputation *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  Integer *pIVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar8 = (Integer *)(**(code **)(*(long *)this + 0xa0))();
  uVar9 = (**(code **)(*(long *)this + 0x50))(this);
  iVar7 = (**(code **)(*(long *)this + 0xb0))(this);
  if (iVar7 == 1) {
    if ((*(int *)(param_2 + 0x28) == 1) || (uVar10 = Integer::operator!(param_2), (uVar10 & 1) != 0)
       ) goto LAB_00ceaf3c;
LAB_00ceaf2c:
    iVar7 = Integer::Compare(param_2,pIVar8);
    if (-1 < iVar7) goto LAB_00ceaf3c;
    bVar6 = (**(code **)(*(long *)(this + 8) + 0xf8))(this + 8,param_2);
    bVar4 = param_3 == (DL_FixedBasePrecomputation *)0x0;
    bVar3 = !bVar4;
    bVar5 = (bVar6 ^ 1) & (param_1 == 0 || bVar4);
    if ((param_1 != 0 && !bVar4) && (((bVar6 ^ 1) & 1) != 0)) {
      uVar11 = (**(code **)(*(long *)(this + 8) + 0x88))();
      uVar12 = Integer::One();
      (**(code **)(*(long *)param_3 + 0x40))(local_98,param_3,uVar11,uVar12);
                    /* try { // try from 00ceb17c to 00ceb187 has its CatchHandler @ 00ceb27c */
      iVar7 = Integer::Compare((Integer *)local_98,param_2);
      bVar5 = iVar7 == 0;
      uVar10 = local_88;
      if (uStack_80 <= local_88) {
        uVar10 = uStack_80;
      }
      local_98[0] = &PTR__Integer_0100c890;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)((long)local_78 + uVar10 * 4 + -4) = 0;
      }
                    /* try { // try from 00ceb1c8 to 00ceb1cb has its CatchHandler @ 00ceb278 */
      UnalignedDeallocate(local_78);
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) != 1) goto LAB_00ceaf2c;
LAB_00ceaf3c:
    bVar3 = param_3 != (DL_FixedBasePrecomputation *)0x0;
    bVar5 = false;
  }
  if (param_1 < 2) goto LAB_00ceb240;
  iVar7 = (**(code **)(*(long *)this + 0xb0))(this);
  bVar4 = (bool)(bVar5 & iVar7 != 2);
  if ((iVar7 == 2) && ((bool)bVar5 == true)) {
    Integer::Times(param_2);
                    /* try { // try from 00ceaf88 to 00ceaf93 has its CatchHandler @ 00ceb2bc */
    Integer::Integer((Integer *)local_f8,4);
                    /* try { // try from 00ceaf94 to 00ceafa3 has its CatchHandler @ 00ceb2ac */
    Integer::Minus((Integer *)local_c8);
                    /* try { // try from 00ceafa4 to 00ceafaf has its CatchHandler @ 00ceb29c */
    iVar7 = Jacobi((Integer *)local_98,pIVar8);
    bVar4 = iVar7 == -1;
    uVar10 = local_88;
    if (uStack_80 <= local_88) {
      uVar10 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)((long)local_78 + uVar10 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceaff0 to 00ceaff3 has its CatchHandler @ 00ceb298 */
    UnalignedDeallocate(local_78);
    local_f8[0] = &PTR__Integer_0100c890;
    if (uStack_e0 <= local_e8) {
      local_e8 = uStack_e0;
    }
    for (; local_e8 != 0; local_e8 = local_e8 - 1) {
      *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceb024 to 00ceb027 has its CatchHandler @ 00ceb294 */
    UnalignedDeallocate(local_d8);
    local_c8[0] = &PTR__Integer_0100c890;
    if (uStack_b0 <= local_b8) {
      local_b8 = uStack_b0;
    }
    for (; local_b8 != 0; local_b8 = local_b8 - 1) {
      *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceb058 to 00ceb05b has its CatchHandler @ 00ceb290 */
    UnalignedDeallocate(local_a8);
  }
  iVar7 = (**(code **)(*(long *)this + 0xb0))(this);
  if ((param_1 < 3) || (iVar7 != 2)) {
    uVar10 = (**(code **)(*(long *)this + 0x70))(this);
    if (((uVar10 & 1) == 0) && (bVar4 == true)) goto LAB_00ceb0a4;
  }
  else if (bVar4 != false) {
LAB_00ceb0a4:
    plVar1 = (long *)(this + 8);
    if (bVar3) {
      param_2 = (Integer *)(**(code **)(*plVar1 + 0x88))(plVar1);
      pcVar13 = *(code **)(*(long *)param_3 + 0x40);
    }
    else {
      pcVar13 = *(code **)(*plVar1 + 0x80);
      param_3 = (DL_FixedBasePrecomputation *)plVar1;
    }
    (*pcVar13)(local_98,param_3,param_2,uVar9);
                    /* try { // try from 00ceb1f4 to 00ceb1ff has its CatchHandler @ 00ceb284 */
    bVar5 = (**(code **)(*(long *)(this + 8) + 0xf8))(plVar1,local_98);
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceb23c to 00ceb23f has its CatchHandler @ 00ceb280 */
    UnalignedDeallocate(local_78);
    goto LAB_00ceb240;
  }
  iVar7 = (**(code **)(*(long *)this + 0xb0))(this);
  bVar5 = bVar4 & iVar7 != 1;
  if ((iVar7 == 1) && (bVar4 == true)) {
    iVar7 = Jacobi(param_2,pIVar8);
    bVar5 = iVar7 == 1;
  }
LAB_00ceb240:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


