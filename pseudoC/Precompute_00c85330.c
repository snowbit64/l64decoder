// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00c85330
// Size: 488 bytes
// Signature: undefined __thiscall Precompute(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_GroupPrecomputation * param_1, uint param_2, uint param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Precompute(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, unsigned int, unsigned int) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Precompute
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,DL_GroupPrecomputation *param_1,
          uint param_2,uint param_3)

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
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  uVar7 = (ulong)param_3;
  local_68 = *(long *)(lVar2 + 0x28);
  if (1 < param_3) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = ((param_2 + param_3) - 1) / param_3;
    }
    *(uint *)(this + 0x38) = uVar1;
    Integer::Power2((Integer *)(ulong)uVar1,(ulong)param_1);
                    /* try { // try from 00c8538c to 00c85393 has its CatchHandler @ 00c8551c */
    Integer::operator=((Integer *)(this + 0x40),(Integer *)local_98);
    uVar6 = local_88;
    if (uStack_80 <= local_88) {
      uVar6 = uStack_80;
    }
    local_98[0] = &PTR__Integer_0100c890;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)((long)local_78 + uVar6 * 4 + -4) = 0;
    }
                    /* try { // try from 00c853cc to 00c853cf has its CatchHandler @ 00c85518 */
    UnalignedDeallocate(local_78);
  }
  this_00 = (long *)(this + 0x70);
  puVar9 = *(undefined8 **)(this + 0x78);
  lVar5 = (long)puVar9 - *this_00 >> 4;
  uVar6 = lVar5 * -0x5555555555555555;
  if (uVar7 <= uVar6) {
    if (uVar7 <= uVar6 && uVar6 - uVar7 != 0) {
      puVar8 = (undefined8 *)(*this_00 + uVar7 * 0x30);
      while (puVar9 != puVar8) {
        puVar9 = puVar9 + -6;
        (**(code **)*puVar9)(puVar9);
      }
      *(undefined8 **)(this + 0x78) = puVar8;
    }
  }
  else {
    std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::__append
              ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)this_00,
               uVar7 + lVar5 * 0x5555555555555555);
  }
  if (1 < param_3) {
    uVar6 = 1;
    do {
      plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x28))(param_1);
      (**(code **)(*plVar4 + 0x58))(local_98,plVar4,uVar6 * 0x30 + *this_00 + -0x30,this + 0x40);
                    /* try { // try from 00c854a0 to 00c854a7 has its CatchHandler @ 00c85524 */
      Integer::operator=((Integer *)(*this_00 + uVar6 * 0x30),(Integer *)local_98);
      uVar3 = local_88;
      if (uStack_80 <= local_88) {
        uVar3 = uStack_80;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_78 + uVar3 * 4 + -4) = 0;
      }
      local_98[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c854d4 to 00c854d7 has its CatchHandler @ 00c85520 */
      UnalignedDeallocate(local_78);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


