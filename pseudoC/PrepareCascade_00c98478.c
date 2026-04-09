// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrepareCascade
// Entry Point: 00c98478
// Size: 1596 bytes
// Signature: undefined __thiscall PrepareCascade(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1, vector * param_2, Integer * param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::PrepareCascade(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint, CryptoPP::Integer> > >&,
   CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::PrepareCascade
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1,
          vector *param_2,Integer *param_3)

{
  bool bVar1;
  allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *this_00;
  BaseAndExponent *pBVar2;
  long lVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined **local_1d0 [2];
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  undefined **local_1a0;
  undefined **local_198 [2];
  ulong local_188;
  ulong uStack_180;
  void *local_178;
  undefined **local_168 [2];
  ulong local_158;
  ulong uStack_150;
  void *local_148;
  undefined local_138;
  undefined **local_130 [2];
  ulong local_120;
  ulong uStack_118;
  void *local_110;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x28))(param_1);
  Integer::Integer((Integer *)local_a0);
                    /* try { // try from 00c984cc to 00c984d3 has its CatchHandler @ 00c98af4 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00c984d4 to 00c984df has its CatchHandler @ 00c98aec */
  Integer::Integer((Integer *)local_100,param_3);
                    /* try { // try from 00c984ec to 00c984ef has its CatchHandler @ 00c98ae8 */
  bVar4 = (**(code **)(*plVar5 + 0x30))();
  lVar7 = *(long *)(this + 0xb0);
  this_00 = (allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>> *)
            (param_2 + 0x10);
  uVar8 = *(uint *)(this + 0x78);
  bVar1 = 1 < uVar8;
  if ((ulong)((*(long *)(this + 0xb8) - lVar7 >> 4) * 0x6db6db6db6db6db7) < 2) {
    uVar11 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 1;
    while( true ) {
                    /* try { // try from 00c98580 to 00c985bb has its CatchHandler @ 00c98bac */
      Integer::DivideByPowerOf2((Integer *)local_a0,(Integer *)local_d0,(Integer *)local_100,uVar8);
      Integer::swap((Integer *)local_d0,(Integer *)local_100);
      if (((bVar4 & bVar1) == 0) ||
         (uVar6 = Integer::GetBit((Integer *)local_a0,(ulong)(*(int *)(this + 0x78) - 1)),
         (uVar6 & 1) == 0)) {
        lVar7 = *(long *)(this + 0xb0);
        local_1a0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c98668 to 00c9866f has its CatchHandler @ 00c98ba8 */
        Integer::Integer((Integer *)local_198,(Integer *)(lVar7 + (ulong)uVar10 * 0x70 + 8));
                    /* try { // try from 00c9867c to 00c98683 has its CatchHandler @ 00c98b98 */
        Integer::Integer((Integer *)local_168,(Integer *)(lVar7 + (ulong)uVar10 * 0x70 + 0x38));
        local_138 = *(undefined *)(lVar7 + (ulong)uVar10 * 0x70 + 0x68);
                    /* try { // try from 00c98690 to 00c9869b has its CatchHandler @ 00c98b88 */
        Integer::Integer((Integer *)local_130,(Integer *)local_a0);
        pBVar2 = *(BaseAndExponent **)(param_2 + 8);
        if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c986a8 to 00c986b7 has its CatchHandler @ 00c98b60 */
          std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
          construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                    (this_00,pBVar2,(BaseAndExponent *)&local_1a0);
          *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0xa0;
        }
        else {
                    /* try { // try from 00c986c4 to 00c986cf has its CatchHandler @ 00c98b6c */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)&local_1a0);
        }
        local_130[0] = &PTR__Integer_0100c890;
        uVar6 = local_120;
        if (uStack_118 <= local_120) {
          uVar6 = uStack_118;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_110 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98700 to 00c98703 has its CatchHandler @ 00c98b84 */
        UnalignedDeallocate(local_110);
        local_168[0] = &PTR__Integer_0100c890;
        uVar6 = local_158;
        if (uStack_150 <= local_158) {
          uVar6 = uStack_150;
        }
        local_1a0 = &PTR__ECPPoint_00fe9fd8;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_148 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98744 to 00c98747 has its CatchHandler @ 00c98b80 */
        UnalignedDeallocate(local_148);
        local_198[0] = &PTR__Integer_0100c890;
        uVar6 = local_188;
        if (uStack_180 <= local_188) {
          uVar6 = uStack_180;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_178 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98778 to 00c9877b has its CatchHandler @ 00c98b7c */
        UnalignedDeallocate(local_178);
      }
      else {
        Integer::operator++((Integer *)local_100);
                    /* try { // try from 00c985d4 to 00c985d7 has its CatchHandler @ 00c98b58 */
        lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,*(long *)(this + 0xb0) + (ulong)uVar10 * 0x70);
                    /* try { // try from 00c985dc to 00c985eb has its CatchHandler @ 00c98b4c */
        Integer::Minus((Integer *)(this + 0x80));
        local_1a0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c985f8 to 00c985ff has its CatchHandler @ 00c98b3c */
        Integer::Integer((Integer *)local_198,(Integer *)(lVar7 + 8));
                    /* try { // try from 00c98604 to 00c9860b has its CatchHandler @ 00c98b28 */
        Integer::Integer((Integer *)local_168,(Integer *)(lVar7 + 0x38));
        local_138 = *(undefined *)(lVar7 + 0x68);
                    /* try { // try from 00c98614 to 00c9861f has its CatchHandler @ 00c98b18 */
        Integer::Integer((Integer *)local_130,(Integer *)local_1d0);
        pBVar2 = *(BaseAndExponent **)(param_2 + 8);
        if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c9862c to 00c9863b has its CatchHandler @ 00c98b04 */
          std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
          construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                    (this_00,pBVar2,(BaseAndExponent *)&local_1a0);
          *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0xa0;
        }
        else {
                    /* try { // try from 00c98780 to 00c9878b has its CatchHandler @ 00c98afc */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)&local_1a0);
        }
        uVar6 = local_120;
        if (uStack_118 <= local_120) {
          uVar6 = uStack_118;
        }
        local_130[0] = &PTR__Integer_0100c890;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_110 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c987bc to 00c987bf has its CatchHandler @ 00c98b5c */
        UnalignedDeallocate(local_110);
        local_168[0] = &PTR__Integer_0100c890;
        uVar6 = local_158;
        if (uStack_150 <= local_158) {
          uVar6 = uStack_150;
        }
        local_1a0 = &PTR__ECPPoint_00fe9fd8;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_148 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98800 to 00c98803 has its CatchHandler @ 00c98b54 */
        UnalignedDeallocate(local_148);
        local_198[0] = &PTR__Integer_0100c890;
        uVar6 = local_188;
        if (uStack_180 <= local_188) {
          uVar6 = uStack_180;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_178 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98834 to 00c98837 has its CatchHandler @ 00c98b50 */
        UnalignedDeallocate(local_178);
        local_1d0[0] = &PTR__Integer_0100c890;
        uVar6 = local_1c0;
        if (uStack_1b8 <= local_1c0) {
          uVar6 = uStack_1b8;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_1b0 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c98868 to 00c9886b has its CatchHandler @ 00c98b38 */
        UnalignedDeallocate(local_1b0);
      }
      lVar7 = *(long *)(this + 0xb0);
      uVar9 = (*(long *)(this + 0xb8) - lVar7 >> 4) * 0x6db6db6db6db6db7;
      uVar10 = (uint)uVar11;
      uVar6 = (ulong)(uVar10 + 1);
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) break;
      uVar8 = *(uint *)(this + 0x78);
      uVar11 = uVar6;
    }
  }
  local_1a0 = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c988cc to 00c988d3 has its CatchHandler @ 00c98ae4 */
  Integer::Integer((Integer *)local_198,(Integer *)(lVar7 + uVar11 * 0x70 + 8));
                    /* try { // try from 00c988ec to 00c988ef has its CatchHandler @ 00c98ae0 */
  Integer::Integer((Integer *)local_168,(Integer *)(lVar7 + uVar11 * 0x70 + 0x38));
  local_138 = *(undefined *)(lVar7 + uVar11 * 0x70 + 0x68);
                    /* try { // try from 00c98904 to 00c9890b has its CatchHandler @ 00c98adc */
  Integer::Integer((Integer *)local_130,(Integer *)local_100);
  pBVar2 = *(BaseAndExponent **)(param_2 + 8);
  if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c98918 to 00c98927 has its CatchHandler @ 00c98ab8 */
    std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>::
    construct<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
              (this_00,pBVar2,(BaseAndExponent *)&local_1a0);
    *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0xa0;
  }
  else {
                    /* try { // try from 00c98934 to 00c9893f has its CatchHandler @ 00c98ab4 */
    std::__ndk1::
    vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
    ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>
              ((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
                *)param_2,(BaseAndExponent *)&local_1a0);
  }
  local_130[0] = &PTR__Integer_0100c890;
  if (uStack_118 <= local_120) {
    local_120 = uStack_118;
  }
  for (; local_120 != 0; local_120 = local_120 - 1) {
    *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
  }
                    /* try { // try from 00c98970 to 00c98973 has its CatchHandler @ 00c98ad8 */
  UnalignedDeallocate(local_110);
  local_1a0 = &PTR__ECPPoint_00fe9fd8;
  local_168[0] = &PTR__Integer_0100c890;
  if (uStack_150 <= local_158) {
    local_158 = uStack_150;
  }
  for (; local_158 != 0; local_158 = local_158 - 1) {
    *(undefined4 *)((long)local_148 + local_158 * 4 + -4) = 0;
  }
                    /* try { // try from 00c989ac to 00c989af has its CatchHandler @ 00c98ad4 */
  UnalignedDeallocate(local_148);
  local_198[0] = &PTR__Integer_0100c890;
  if (uStack_180 <= local_188) {
    local_188 = uStack_180;
  }
  for (; local_188 != 0; local_188 = local_188 - 1) {
    *(undefined4 *)((long)local_178 + local_188 * 4 + -4) = 0;
  }
                    /* try { // try from 00c989e0 to 00c989e3 has its CatchHandler @ 00c98ad0 */
  UnalignedDeallocate(local_178);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c98a14 to 00c98a17 has its CatchHandler @ 00c98acc */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c98a48 to 00c98a4b has its CatchHandler @ 00c98ac8 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00c98a7c to 00c98a7f has its CatchHandler @ 00c98ac4 */
  UnalignedDeallocate(local_80);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


