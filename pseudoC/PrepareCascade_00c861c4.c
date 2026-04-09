// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrepareCascade
// Entry Point: 00c861c4
// Size: 1224 bytes
// Signature: undefined __thiscall PrepareCascade(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_GroupPrecomputation * param_1, vector * param_2, Integer * param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::PrepareCascade(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer, CryptoPP::Integer> > >&,
   CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::PrepareCascade
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,DL_GroupPrecomputation *param_1,
          vector *param_2,Integer *param_3)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  Integer *pIVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined **local_190 [2];
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  undefined **local_160 [2];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
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
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x28))(param_1);
  Integer::Integer((Integer *)local_a0);
                    /* try { // try from 00c86218 to 00c8621f has its CatchHandler @ 00c86704 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00c86220 to 00c8622b has its CatchHandler @ 00c866fc */
  Integer::Integer((Integer *)local_100,param_3);
                    /* try { // try from 00c86234 to 00c8623b has its CatchHandler @ 00c866f8 */
  bVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
  lVar8 = *(long *)(this + 0x70);
  uVar7 = *(uint *)(this + 0x38);
  bVar1 = 1 < uVar7;
  if ((ulong)((*(long *)(this + 0x78) - lVar8 >> 4) * -0x5555555555555555) < 2) {
    uVar11 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 1;
    while( true ) {
                    /* try { // try from 00c8629c to 00c862d7 has its CatchHandler @ 00c86814 */
      Integer::DivideByPowerOf2((Integer *)local_a0,(Integer *)local_d0,(Integer *)local_100,uVar7);
      Integer::swap((Integer *)local_d0,(Integer *)local_100);
      if (((bVar3 & bVar1) == 0) ||
         (uVar5 = Integer::GetBit((Integer *)local_a0,(ulong)(*(int *)(this + 0x38) - 1)),
         (uVar5 & 1) == 0)) {
                    /* try { // try from 00c8635c to 00c86363 has its CatchHandler @ 00c86810 */
        Integer::Integer((Integer *)local_160,
                         (Integer *)(*(long *)(this + 0x70) + (ulong)uVar10 * 0x30));
                    /* try { // try from 00c86364 to 00c8636f has its CatchHandler @ 00c86800 */
        Integer::Integer((Integer *)local_130,(Integer *)local_a0);
        pIVar6 = *(Integer **)(param_2 + 8);
        if (pIVar6 < *(Integer **)(param_2 + 0x10)) {
                    /* try { // try from 00c8637c to 00c86387 has its CatchHandler @ 00c867dc */
          Integer::Integer(pIVar6,(Integer *)local_160);
                    /* try { // try from 00c8638c to 00c86393 has its CatchHandler @ 00c8679c */
          Integer::Integer(pIVar6 + 0x30,(Integer *)local_130);
          *(Integer **)(param_2 + 8) = pIVar6 + 0x60;
        }
        else {
                    /* try { // try from 00c863a0 to 00c863ab has its CatchHandler @ 00c867e8 */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)local_160);
        }
        local_130[0] = &PTR__Integer_0100c890;
        uVar5 = local_120;
        if (uStack_118 <= local_120) {
          uVar5 = uStack_118;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_110 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00c863dc to 00c863df has its CatchHandler @ 00c867fc */
        UnalignedDeallocate(local_110);
        local_160[0] = &PTR__Integer_0100c890;
        uVar5 = local_150;
        if (uStack_148 <= local_150) {
          uVar5 = uStack_148;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_140 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00c86410 to 00c86413 has its CatchHandler @ 00c867f8 */
        UnalignedDeallocate(local_140);
      }
      else {
        Integer::operator++((Integer *)local_100);
                    /* try { // try from 00c862ec to 00c862f3 has its CatchHandler @ 00c8678c */
        pIVar6 = (Integer *)
                 (**(code **)(*plVar4 + 0x28))(plVar4,*(long *)(this + 0x70) + (ulong)uVar10 * 0x30)
        ;
                    /* try { // try from 00c862f8 to 00c86307 has its CatchHandler @ 00c86788 */
        Integer::Minus((Integer *)(this + 0x40));
                    /* try { // try from 00c86308 to 00c86313 has its CatchHandler @ 00c86778 */
        Integer::Integer((Integer *)local_160,pIVar6);
                    /* try { // try from 00c86314 to 00c8631f has its CatchHandler @ 00c86768 */
        Integer::Integer((Integer *)local_130,(Integer *)local_190);
        pIVar6 = *(Integer **)(param_2 + 8);
        if (pIVar6 < *(Integer **)(param_2 + 0x10)) {
                    /* try { // try from 00c8632c to 00c86337 has its CatchHandler @ 00c86754 */
          Integer::Integer(pIVar6,(Integer *)local_160);
                    /* try { // try from 00c8633c to 00c86343 has its CatchHandler @ 00c86714 */
          Integer::Integer(pIVar6 + 0x30,(Integer *)local_130);
          *(Integer **)(param_2 + 8) = pIVar6 + 0x60;
        }
        else {
                    /* try { // try from 00c86418 to 00c86423 has its CatchHandler @ 00c8670c */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)local_160);
        }
        uVar5 = local_120;
        if (uStack_118 <= local_120) {
          uVar5 = uStack_118;
        }
        local_130[0] = &PTR__Integer_0100c890;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_110 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00c86454 to 00c86457 has its CatchHandler @ 00c86798 */
        UnalignedDeallocate(local_110);
        local_160[0] = &PTR__Integer_0100c890;
        uVar5 = local_150;
        if (uStack_148 <= local_150) {
          uVar5 = uStack_148;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_140 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00c86488 to 00c8648b has its CatchHandler @ 00c86794 */
        UnalignedDeallocate(local_140);
        local_190[0] = &PTR__Integer_0100c890;
        uVar5 = local_180;
        if (uStack_178 <= local_180) {
          uVar5 = uStack_178;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_170 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00c864bc to 00c864bf has its CatchHandler @ 00c86790 */
        UnalignedDeallocate(local_170);
      }
      lVar8 = *(long *)(this + 0x70);
      uVar9 = (*(long *)(this + 0x78) - lVar8 >> 4) * -0x5555555555555555;
      uVar10 = (uint)uVar11;
      uVar5 = (ulong)(uVar10 + 1);
      if (uVar9 < uVar5 || uVar9 - uVar5 == 0) break;
      uVar7 = *(uint *)(this + 0x38);
      uVar11 = uVar5;
    }
  }
                    /* try { // try from 00c864fc to 00c86507 has its CatchHandler @ 00c866f4 */
  Integer::Integer((Integer *)local_160,(Integer *)(lVar8 + uVar11 * 0x30));
                    /* try { // try from 00c8650c to 00c86517 has its CatchHandler @ 00c866f0 */
  Integer::Integer((Integer *)local_130,(Integer *)local_100);
  pIVar6 = *(Integer **)(param_2 + 8);
  if (pIVar6 < *(Integer **)(param_2 + 0x10)) {
                    /* try { // try from 00c86524 to 00c8652f has its CatchHandler @ 00c866d0 */
    Integer::Integer(pIVar6,(Integer *)local_160);
                    /* try { // try from 00c86534 to 00c8653b has its CatchHandler @ 00c86690 */
    Integer::Integer(pIVar6 + 0x30,(Integer *)local_130);
    *(Integer **)(param_2 + 8) = pIVar6 + 0x60;
  }
  else {
                    /* try { // try from 00c86548 to 00c86553 has its CatchHandler @ 00c8668c */
    std::__ndk1::
    vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
    ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>
              ((vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
                *)param_2,(BaseAndExponent *)local_160);
  }
  local_130[0] = &PTR__Integer_0100c890;
  if (uStack_118 <= local_120) {
    local_120 = uStack_118;
  }
  for (; local_120 != 0; local_120 = local_120 - 1) {
    *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86584 to 00c86587 has its CatchHandler @ 00c866ec */
  UnalignedDeallocate(local_110);
  local_160[0] = &PTR__Integer_0100c890;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00c865b8 to 00c865bb has its CatchHandler @ 00c866e8 */
  UnalignedDeallocate(local_140);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c865ec to 00c865ef has its CatchHandler @ 00c866e4 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86620 to 00c86623 has its CatchHandler @ 00c866e0 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86654 to 00c86657 has its CatchHandler @ 00c866dc */
  UnalignedDeallocate(local_80);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


