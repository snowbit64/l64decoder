// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Verify
// Entry Point: 00caccd4
// Size: 1000 bytes
// Signature: undefined __thiscall Verify(DL_Algorithm_GDSA<CryptoPP::EC2NPoint> * this, DL_GroupParameters * param_1, DL_PublicKey * param_2, Integer * param_3, Integer * param_4, Integer * param_5)


/* CryptoPP::DL_Algorithm_GDSA<CryptoPP::EC2NPoint>::Verify(CryptoPP::DL_GroupParameters<CryptoPP::EC2NPoint>
   const&, CryptoPP::DL_PublicKey<CryptoPP::EC2NPoint> const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&) const */

bool __thiscall
CryptoPP::DL_Algorithm_GDSA<CryptoPP::EC2NPoint>::Verify
          (DL_Algorithm_GDSA<CryptoPP::EC2NPoint> *this,DL_GroupParameters *param_1,
          DL_PublicKey *param_2,Integer *param_3,Integer *param_4,Integer *param_5)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  Integer *pIVar5;
  ulong uVar6;
  undefined **local_1a8 [2];
  ulong local_198;
  ulong uStack_190;
  void *local_188;
  ulong local_178;
  ulong uStack_170;
  void *local_168;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pIVar5 = (Integer *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  iVar4 = Integer::Compare(param_4,pIVar5);
  if (iVar4 < 0) {
    Integer::Integer((Integer *)local_1a8,1);
                    /* try { // try from 00cacd44 to 00cacd67 has its CatchHandler @ 00cad170 */
    iVar4 = Integer::Compare(param_4,(Integer *)local_1a8);
    if ((iVar4 < 0) || (iVar4 = Integer::Compare(param_5,pIVar5), -1 < iVar4)) {
      iVar4 = 1;
    }
    else {
                    /* try { // try from 00cacd74 to 00cacd7f has its CatchHandler @ 00cad0d0 */
      Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00cacd80 to 00cacd8b has its CatchHandler @ 00cad0c0 */
      uVar6 = Integer::Compare(param_5,(Integer *)local_98);
      local_98[0] = &PTR__Integer_0100c890;
      uVar2 = local_88;
      if (uStack_80 <= local_88) {
        uVar2 = uStack_80;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_78 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00cacdc0 to 00cacdc3 has its CatchHandler @ 00cad0bc */
      UnalignedDeallocate(local_78);
      iVar4 = (int)((uVar6 & 0xffffffff) >> 0x1f);
    }
    local_1a8[0] = &PTR__Integer_0100c890;
    uVar2 = local_198;
    if (uStack_190 <= local_198) {
      uVar2 = uStack_190;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_188 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00cacdf8 to 00cacdfb has its CatchHandler @ 00cad16c */
    UnalignedDeallocate(local_188);
    if (iVar4 == 0) {
      Integer::InverseMod(param_5,pIVar5);
                    /* try { // try from 00cace48 to 00cace57 has its CatchHandler @ 00cad164 */
      Integer::Times(param_3);
                    /* try { // try from 00cace58 to 00cace67 has its CatchHandler @ 00cad158 */
      Integer::Modulo((Integer *)local_1a8);
      local_1a8[0] = &PTR__Integer_0100c890;
      uVar2 = local_198;
      if (uStack_190 <= local_198) {
        uVar2 = uStack_190;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_188 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00cace98 to 00cace9b has its CatchHandler @ 00cad154 */
      UnalignedDeallocate(local_188);
                    /* try { // try from 00cace9c to 00caceab has its CatchHandler @ 00cad14c */
      Integer::Times(param_4);
                    /* try { // try from 00caceac to 00cacebb has its CatchHandler @ 00cad140 */
      Integer::Modulo((Integer *)local_1a8);
      local_1a8[0] = &PTR__Integer_0100c890;
      uVar2 = local_198;
      if (uStack_190 <= local_198) {
        uVar2 = uStack_190;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_188 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00caceec to 00caceef has its CatchHandler @ 00cad13c */
      UnalignedDeallocate(local_188);
                    /* try { // try from 00cacef8 to 00cacf0b has its CatchHandler @ 00cad120 */
      (**(code **)(*(long *)param_2 + 0x38))(local_1a8,param_2,local_c8,local_f8);
                    /* try { // try from 00cacf14 to 00cacf23 has its CatchHandler @ 00cad110 */
      (**(code **)(*(long *)param_1 + 0xd8))(local_158,param_1,local_1a8);
                    /* try { // try from 00cacf24 to 00cacf33 has its CatchHandler @ 00cad100 */
      Integer::Modulo((Integer *)local_158);
                    /* try { // try from 00cacf34 to 00cacf3f has its CatchHandler @ 00cad0f0 */
      iVar4 = Integer::Compare(param_4,(Integer *)local_128);
      bVar3 = iVar4 == 0;
      local_128[0] = &PTR__Integer_0100c890;
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      for (; local_118 != 0; local_118 = local_118 - 1) {
        *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
      }
                    /* try { // try from 00cacf78 to 00cacf7b has its CatchHandler @ 00cad0ec */
      UnalignedDeallocate(local_108);
      local_158[0] = &PTR__Integer_0100c890;
      if (uStack_140 <= local_148) {
        local_148 = uStack_140;
      }
      for (; local_148 != 0; local_148 = local_148 - 1) {
        *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
      }
                    /* try { // try from 00cacfac to 00cacfaf has its CatchHandler @ 00cad0e8 */
      UnalignedDeallocate(local_138);
      if (uStack_170 <= local_178) {
        local_178 = uStack_170;
      }
      local_1a8[0] = &PTR__EC2NPoint_010026a8;
      for (; local_178 != 0; local_178 = local_178 - 1) {
        *(undefined4 *)((long)local_168 + local_178 * 4 + -4) = 0;
      }
                    /* try { // try from 00cacfe8 to 00cacfeb has its CatchHandler @ 00cad0e4 */
      UnalignedDeallocate(local_168);
      if (uStack_190 <= local_198) {
        local_198 = uStack_190;
      }
      for (; local_198 != 0; local_198 = local_198 - 1) {
        *(undefined4 *)((long)local_188 + local_198 * 4 + -4) = 0;
      }
                    /* try { // try from 00cad014 to 00cad017 has its CatchHandler @ 00cad0e0 */
      UnalignedDeallocate(local_188);
      local_f8[0] = &PTR__Integer_0100c890;
      if (uStack_e0 <= local_e8) {
        local_e8 = uStack_e0;
      }
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cad048 to 00cad04b has its CatchHandler @ 00cad0dc */
      UnalignedDeallocate(local_d8);
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cad07c to 00cad07f has its CatchHandler @ 00cad0d8 */
      UnalignedDeallocate(local_a8);
      local_98[0] = &PTR__Integer_0100c890;
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00cad0b0 to 00cad0b3 has its CatchHandler @ 00cad0d4 */
      UnalignedDeallocate(local_78);
      goto LAB_00cace04;
    }
  }
  bVar3 = false;
LAB_00cace04:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


