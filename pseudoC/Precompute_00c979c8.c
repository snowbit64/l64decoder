// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00c979c8
// Size: 636 bytes
// Signature: undefined __thiscall Precompute(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1, uint param_2, uint param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Precompute(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, unsigned int, unsigned int) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Precompute
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1,
          uint param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *this_00;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **local_d8;
  undefined **local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar8 = (ulong)param_3;
  local_68 = *(long *)(lVar3 + 0x28);
  if (1 < param_3) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = ((param_2 + param_3) - 1) / param_3;
    }
    *(uint *)(this + 0x78) = uVar2;
    Integer::Power2((Integer *)(ulong)uVar2,(ulong)param_1);
                    /* try { // try from 00c97a24 to 00c97a2b has its CatchHandler @ 00c97c48 */
    Integer::operator=((Integer *)(this + 0x80),(Integer *)&local_d8);
    if (local_c0 <= local_c8) {
      local_c8 = local_c0;
    }
    local_d8 = &PTR__Integer_0100c890;
    for (; local_c8 != (void *)0x0; local_c8 = (void *)((long)local_c8 - 1)) {
      *(undefined4 *)((long)local_b8 + (long)local_c8 * 4 + -4) = 0;
    }
                    /* try { // try from 00c97a64 to 00c97a67 has its CatchHandler @ 00c97c44 */
    UnalignedDeallocate(local_b8);
  }
  this_00 = (long *)(this + 0xb0);
  puVar10 = *(undefined8 **)(this + 0xb8);
  lVar6 = (long)puVar10 - *this_00 >> 4;
  uVar7 = lVar6 * 0x6db6db6db6db6db7;
  if (uVar8 <= uVar7) {
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      puVar9 = (undefined8 *)(*this_00 + uVar8 * 0x70);
      while (puVar10 != puVar9) {
        puVar10 = puVar10 + -0xe;
        (**(code **)*puVar10)(puVar10);
      }
      *(undefined8 **)(this + 0xb8) = puVar9;
    }
  }
  else {
    std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::__append
              ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)this_00,
               uVar8 + lVar6 * -0x6db6db6db6db6db7);
  }
  if (1 < param_3) {
    uVar7 = 1;
    do {
      plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x28))(param_1);
      (**(code **)(*plVar5 + 0x58))(&local_d8,plVar5,uVar7 * 0x70 + *this_00 + -0x70,this + 0x80);
      lVar6 = *this_00;
                    /* try { // try from 00c97b68 to 00c97b7f has its CatchHandler @ 00c97c64 */
      Integer::operator=((Integer *)(lVar6 + uVar7 * 0x70 + 8),(Integer *)&local_d0);
      Integer::operator=((Integer *)(lVar6 + uVar7 * 0x70 + 0x38),(Integer *)local_a0);
      *(undefined *)(lVar6 + uVar7 * 0x70 + 0x68) = local_70;
      uVar4 = local_90;
      if (uStack_88 <= local_90) {
        uVar4 = uStack_88;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_80 + uVar4 * 4 + -4) = 0;
      }
      local_d8 = &PTR__ECPPoint_00fe9fd8;
      local_a0[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00c97bbc to 00c97bbf has its CatchHandler @ 00c97c5c */
      UnalignedDeallocate(local_80);
      pvVar1 = local_c0;
      if (local_b8 <= local_c0) {
        pvVar1 = local_b8;
      }
      local_d0 = &PTR__Integer_0100c890;
      for (; pvVar1 != (void *)0x0; pvVar1 = (void *)((long)pvVar1 - 1)) {
        *(undefined4 *)((long)local_b0 + (long)pvVar1 * 4 + -4) = 0;
      }
                    /* try { // try from 00c97bfc to 00c97bff has its CatchHandler @ 00c97c60 */
      UnalignedDeallocate(local_b0);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


