// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00c95bd4
// Size: 592 bytes
// Signature: undefined __thiscall Precompute(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this, DL_GroupPrecomputation * param_1, uint param_2, uint param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Precompute(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, unsigned int, unsigned int) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Precompute
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this,DL_GroupPrecomputation *param_1
          ,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *this_00;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **local_b8;
  PolynomialMod2 aPStack_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar7 = (ulong)param_3;
  local_68 = *(long *)(lVar2 + 0x28);
  if (1 < param_3) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = ((param_2 + param_3) - 1) / param_3;
    }
    *(uint *)(this + 0x58) = uVar1;
    Integer::Power2((Integer *)(ulong)uVar1,(ulong)param_1);
                    /* try { // try from 00c95c30 to 00c95c37 has its CatchHandler @ 00c95e28 */
    Integer::operator=((Integer *)(this + 0x60),(Integer *)&local_b8);
    uVar6 = local_a8;
    if (uStack_a0 <= local_a8) {
      uVar6 = uStack_a0;
    }
    local_b8 = &PTR__Integer_0100c890;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)((long)local_98 + uVar6 * 4 + -4) = 0;
    }
                    /* try { // try from 00c95c70 to 00c95c73 has its CatchHandler @ 00c95e24 */
    UnalignedDeallocate(local_98);
  }
  this_00 = (long *)(this + 0x90);
  puVar9 = *(undefined8 **)(this + 0x98);
  lVar5 = (long)puVar9 - *this_00 >> 4;
  uVar6 = lVar5 * -0x3333333333333333;
  if (uVar7 <= uVar6) {
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      puVar8 = (undefined8 *)(*this_00 + uVar7 * 0x50);
      while (puVar9 != puVar8) {
        puVar9 = puVar9 + -10;
        (**(code **)*puVar9)(puVar9);
      }
      *(undefined8 **)(this + 0x98) = puVar8;
    }
  }
  else {
    std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::__append
              ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)this_00,
               uVar7 + lVar5 * 0x3333333333333333);
  }
  if (1 < param_3) {
    uVar6 = 1;
    do {
      plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x28))(param_1);
      (**(code **)(*plVar4 + 0x58))(&local_b8,plVar4,uVar6 * 0x50 + *this_00 + -0x50,this + 0x60);
      lVar5 = *this_00;
                    /* try { // try from 00c95d60 to 00c95d77 has its CatchHandler @ 00c95e44 */
      PolynomialMod2::operator=((PolynomialMod2 *)(lVar5 + uVar6 * 0x50 + 8),aPStack_b0);
      PolynomialMod2::operator=((PolynomialMod2 *)(lVar5 + uVar6 * 0x50 + 0x28),aPStack_90);
      *(undefined *)(lVar5 + uVar6 * 0x50 + 0x48) = local_70;
      uVar3 = local_88;
      if (uStack_80 <= local_88) {
        uVar3 = uStack_80;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_78 + uVar3 * 4 + -4) = 0;
      }
      local_b8 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c95db0 to 00c95db3 has its CatchHandler @ 00c95e3c */
      UnalignedDeallocate(local_78);
      uVar3 = local_a8;
      if (uStack_a0 <= local_a8) {
        uVar3 = uStack_a0;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_98 + uVar3 * 4 + -4) = 0;
      }
                    /* try { // try from 00c95ddc to 00c95ddf has its CatchHandler @ 00c95e40 */
      UnalignedDeallocate(local_98);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


