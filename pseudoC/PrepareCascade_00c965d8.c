// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrepareCascade
// Entry Point: 00c965d8
// Size: 1528 bytes
// Signature: undefined __thiscall PrepareCascade(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this, DL_GroupPrecomputation * param_1, vector * param_2, Integer * param_3)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::PrepareCascade(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, std::__ndk1::vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer>,
   std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint, CryptoPP::Integer> > >&,
   CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::PrepareCascade
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this,DL_GroupPrecomputation *param_1
          ,vector *param_2,Integer *param_3)

{
  bool bVar1;
  allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *this_00;
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
  undefined **local_1b0 [2];
  ulong local_1a0;
  ulong uStack_198;
  void *local_190;
  undefined **local_180;
  PolynomialMod2 aPStack_178 [8];
  ulong local_170;
  ulong uStack_168;
  void *local_160;
  PolynomialMod2 aPStack_158 [8];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
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
                    /* try { // try from 00c9662c to 00c96633 has its CatchHandler @ 00c96c10 */
  Integer::Integer((Integer *)local_d0);
                    /* try { // try from 00c96634 to 00c9663f has its CatchHandler @ 00c96c08 */
  Integer::Integer((Integer *)local_100,param_3);
                    /* try { // try from 00c9664c to 00c9664f has its CatchHandler @ 00c96c04 */
  bVar4 = (**(code **)(*plVar5 + 0x30))();
  lVar7 = *(long *)(this + 0x90);
  this_00 = (allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>> *)
            (param_2 + 0x10);
  uVar8 = *(uint *)(this + 0x58);
  bVar1 = 1 < uVar8;
  if ((ulong)((*(long *)(this + 0x98) - lVar7 >> 4) * -0x3333333333333333) < 2) {
    uVar11 = 0;
  }
  else {
    uVar10 = 0;
    uVar11 = 1;
    while( true ) {
                    /* try { // try from 00c966d8 to 00c96717 has its CatchHandler @ 00c96cc8 */
      Integer::DivideByPowerOf2((Integer *)local_a0,(Integer *)local_d0,(Integer *)local_100,uVar8);
      Integer::swap((Integer *)local_d0,(Integer *)local_100);
      if (((bVar4 & bVar1) == 0) ||
         (uVar6 = Integer::GetBit((Integer *)local_a0,(ulong)(*(int *)(this + 0x58) - 1)),
         (uVar6 & 1) == 0)) {
        lVar7 = *(long *)(this + 0x90);
        local_180 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c967c4 to 00c967cb has its CatchHandler @ 00c96cc4 */
        PolynomialMod2::PolynomialMod2
                  (aPStack_178,(PolynomialMod2 *)(lVar7 + (ulong)uVar10 * 0x50 + 8));
                    /* try { // try from 00c967d8 to 00c967df has its CatchHandler @ 00c96cb4 */
        PolynomialMod2::PolynomialMod2
                  (aPStack_158,(PolynomialMod2 *)(lVar7 + (ulong)uVar10 * 0x50 + 0x28));
        local_138 = *(undefined *)(lVar7 + (ulong)uVar10 * 0x50 + 0x48);
                    /* try { // try from 00c967ec to 00c967f7 has its CatchHandler @ 00c96ca4 */
        Integer::Integer((Integer *)local_130,(Integer *)local_a0);
        pBVar2 = *(BaseAndExponent **)(param_2 + 8);
        if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c96808 to 00c96817 has its CatchHandler @ 00c96c7c */
          std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
          construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
                    (this_00,pBVar2,(BaseAndExponent *)&local_180);
          *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0x80;
        }
        else {
                    /* try { // try from 00c96828 to 00c96833 has its CatchHandler @ 00c96c88 */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)&local_180);
        }
        local_130[0] = &PTR__Integer_0100c890;
        uVar6 = local_120;
        if (uStack_118 <= local_120) {
          uVar6 = uStack_118;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_110 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c96868 to 00c9686b has its CatchHandler @ 00c96ca0 */
        UnalignedDeallocate(local_110);
        local_180 = &PTR__EC2NPoint_010026a8;
        uVar6 = local_150;
        if (uStack_148 <= local_150) {
          uVar6 = uStack_148;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_140 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9689c to 00c9689f has its CatchHandler @ 00c96c9c */
        UnalignedDeallocate(local_140);
        uVar6 = local_170;
        if (uStack_168 <= local_170) {
          uVar6 = uStack_168;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_160 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c968c8 to 00c968cb has its CatchHandler @ 00c96c98 */
        UnalignedDeallocate(local_160);
      }
      else {
        Integer::operator++((Integer *)local_100);
                    /* try { // try from 00c96730 to 00c96733 has its CatchHandler @ 00c96c74 */
        lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,*(long *)(this + 0x90) + (ulong)uVar10 * 0x50);
                    /* try { // try from 00c96738 to 00c96747 has its CatchHandler @ 00c96c68 */
        Integer::Minus((Integer *)(this + 0x60));
        local_180 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c96754 to 00c9675b has its CatchHandler @ 00c96c58 */
        PolynomialMod2::PolynomialMod2(aPStack_178,(PolynomialMod2 *)(lVar7 + 8));
                    /* try { // try from 00c96760 to 00c96767 has its CatchHandler @ 00c96c44 */
        PolynomialMod2::PolynomialMod2(aPStack_158,(PolynomialMod2 *)(lVar7 + 0x28));
        local_138 = *(undefined *)(lVar7 + 0x48);
                    /* try { // try from 00c96770 to 00c9677b has its CatchHandler @ 00c96c34 */
        Integer::Integer((Integer *)local_130,(Integer *)local_1b0);
        pBVar2 = *(BaseAndExponent **)(param_2 + 8);
        if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c96788 to 00c96797 has its CatchHandler @ 00c96c20 */
          std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
          construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
                    (this_00,pBVar2,(BaseAndExponent *)&local_180);
          *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0x80;
        }
        else {
                    /* try { // try from 00c968d0 to 00c968db has its CatchHandler @ 00c96c18 */
          std::__ndk1::
          vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
          ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
                    ((vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
                      *)param_2,(BaseAndExponent *)&local_180);
        }
        uVar6 = local_120;
        if (uStack_118 <= local_120) {
          uVar6 = uStack_118;
        }
        local_130[0] = &PTR__Integer_0100c890;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_110 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9690c to 00c9690f has its CatchHandler @ 00c96c78 */
        UnalignedDeallocate(local_110);
        local_180 = &PTR__EC2NPoint_010026a8;
        uVar6 = local_150;
        if (uStack_148 <= local_150) {
          uVar6 = uStack_148;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_140 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c96940 to 00c96943 has its CatchHandler @ 00c96c70 */
        UnalignedDeallocate(local_140);
        uVar6 = local_170;
        if (uStack_168 <= local_170) {
          uVar6 = uStack_168;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_160 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c9696c to 00c9696f has its CatchHandler @ 00c96c6c */
        UnalignedDeallocate(local_160);
        local_1b0[0] = &PTR__Integer_0100c890;
        uVar6 = local_1a0;
        if (uStack_198 <= local_1a0) {
          uVar6 = uStack_198;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)((long)local_190 + uVar6 * 4 + -4) = 0;
        }
                    /* try { // try from 00c969a0 to 00c969a3 has its CatchHandler @ 00c96c54 */
        UnalignedDeallocate(local_190);
      }
      lVar7 = *(long *)(this + 0x90);
      uVar9 = (*(long *)(this + 0x98) - lVar7 >> 4) * -0x3333333333333333;
      uVar10 = (uint)uVar11;
      uVar6 = (ulong)(uVar10 + 1);
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) break;
      uVar8 = *(uint *)(this + 0x58);
      uVar11 = uVar6;
    }
  }
  local_180 = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00c969f4 to 00c969fb has its CatchHandler @ 00c96c00 */
  PolynomialMod2::PolynomialMod2(aPStack_178,(PolynomialMod2 *)(lVar7 + uVar11 * 0x50 + 8));
                    /* try { // try from 00c96a14 to 00c96a17 has its CatchHandler @ 00c96bfc */
  PolynomialMod2::PolynomialMod2(aPStack_158,(PolynomialMod2 *)(lVar7 + uVar11 * 0x50 + 0x28));
  local_138 = *(undefined *)(lVar7 + uVar11 * 0x50 + 0x48);
                    /* try { // try from 00c96a30 to 00c96a37 has its CatchHandler @ 00c96bf8 */
  Integer::Integer((Integer *)local_130,(Integer *)local_100);
  pBVar2 = *(BaseAndExponent **)(param_2 + 8);
  if (pBVar2 < *(BaseAndExponent **)(param_2 + 0x10)) {
                    /* try { // try from 00c96a44 to 00c96a53 has its CatchHandler @ 00c96bd4 */
    std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>::
    construct<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
              (this_00,pBVar2,(BaseAndExponent *)&local_180);
    *(BaseAndExponent **)(param_2 + 8) = pBVar2 + 0x80;
  }
  else {
                    /* try { // try from 00c96a60 to 00c96a6b has its CatchHandler @ 00c96bd0 */
    std::__ndk1::
    vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
    ::__push_back_slow_path<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>
              ((vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
                *)param_2,(BaseAndExponent *)&local_180);
  }
  local_130[0] = &PTR__Integer_0100c890;
  if (uStack_118 <= local_120) {
    local_120 = uStack_118;
  }
  for (; local_120 != 0; local_120 = local_120 - 1) {
    *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96a9c to 00c96a9f has its CatchHandler @ 00c96bf4 */
  UnalignedDeallocate(local_110);
  local_180 = &PTR__EC2NPoint_010026a8;
  if (uStack_148 <= local_150) {
    local_150 = uStack_148;
  }
  for (; local_150 != 0; local_150 = local_150 - 1) {
    *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96ad0 to 00c96ad3 has its CatchHandler @ 00c96bf0 */
  UnalignedDeallocate(local_140);
  if (uStack_168 <= local_170) {
    local_170 = uStack_168;
  }
  for (; local_170 != 0; local_170 = local_170 - 1) {
    *(undefined4 *)((long)local_160 + local_170 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96afc to 00c96aff has its CatchHandler @ 00c96bec */
  UnalignedDeallocate(local_160);
  local_100[0] = &PTR__Integer_0100c890;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96b30 to 00c96b33 has its CatchHandler @ 00c96be8 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96b64 to 00c96b67 has its CatchHandler @ 00c96be4 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96b98 to 00c96b9b has its CatchHandler @ 00c96be0 */
  UnalignedDeallocate(local_80);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


