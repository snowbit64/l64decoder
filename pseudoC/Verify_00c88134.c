// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Verify
// Entry Point: 00c88134
// Size: 948 bytes
// Signature: undefined __thiscall Verify(DL_Algorithm_GDSA<CryptoPP::Integer> * this, DL_GroupParameters * param_1, DL_PublicKey * param_2, Integer * param_3, Integer * param_4, Integer * param_5)


/* CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>::Verify(CryptoPP::DL_GroupParameters<CryptoPP::Integer>
   const&, CryptoPP::DL_PublicKey<CryptoPP::Integer> const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&) const */

bool __thiscall
CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>::Verify
          (DL_Algorithm_GDSA<CryptoPP::Integer> *this,DL_GroupParameters *param_1,
          DL_PublicKey *param_2,Integer *param_3,Integer *param_4,Integer *param_5)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  Integer *pIVar5;
  ulong uVar6;
  undefined **local_188 [2];
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
    Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00c881a4 to 00c881c7 has its CatchHandler @ 00c88588 */
    iVar4 = Integer::Compare(param_4,(Integer *)local_98);
    if ((iVar4 < 0) || (iVar4 = Integer::Compare(param_5,pIVar5), -1 < iVar4)) {
      iVar4 = 1;
    }
    else {
                    /* try { // try from 00c881d4 to 00c881df has its CatchHandler @ 00c884f0 */
      Integer::Integer((Integer *)local_c8,1);
                    /* try { // try from 00c881e0 to 00c881eb has its CatchHandler @ 00c884ec */
      uVar6 = Integer::Compare(param_5,(Integer *)local_c8);
      local_c8[0] = &PTR__Integer_0100c890;
      uVar2 = local_b8;
      if (uStack_b0 <= local_b8) {
        uVar2 = uStack_b0;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_a8 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c88220 to 00c88223 has its CatchHandler @ 00c884e8 */
      UnalignedDeallocate(local_a8);
      iVar4 = (int)((uVar6 & 0xffffffff) >> 0x1f);
    }
    local_98[0] = &PTR__Integer_0100c890;
    uVar2 = local_88;
    if (uStack_80 <= local_88) {
      uVar2 = uStack_80;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)local_78 + uVar2 * 4 + -4) = 0;
    }
                    /* try { // try from 00c88258 to 00c8825b has its CatchHandler @ 00c88584 */
    UnalignedDeallocate(local_78);
    if (iVar4 == 0) {
      Integer::InverseMod(param_5,pIVar5);
                    /* try { // try from 00c882a8 to 00c882b7 has its CatchHandler @ 00c88580 */
      Integer::Times(param_3);
                    /* try { // try from 00c882b8 to 00c882c7 has its CatchHandler @ 00c88574 */
      Integer::Modulo((Integer *)local_f8);
      local_f8[0] = &PTR__Integer_0100c890;
      uVar2 = local_e8;
      if (uStack_e0 <= local_e8) {
        uVar2 = uStack_e0;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_d8 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c882f8 to 00c882fb has its CatchHandler @ 00c88570 */
      UnalignedDeallocate(local_d8);
                    /* try { // try from 00c882fc to 00c8830b has its CatchHandler @ 00c88560 */
      Integer::Times(param_4);
                    /* try { // try from 00c8830c to 00c8831b has its CatchHandler @ 00c88550 */
      Integer::Modulo((Integer *)local_128);
      local_128[0] = &PTR__Integer_0100c890;
      uVar2 = local_118;
      if (uStack_110 <= local_118) {
        uVar2 = uStack_110;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_108 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8834c to 00c8834f has its CatchHandler @ 00c8854c */
      UnalignedDeallocate(local_108);
                    /* try { // try from 00c88358 to 00c8836b has its CatchHandler @ 00c8853c */
      (**(code **)(*(long *)param_2 + 0x38))(local_188,param_2,local_c8,local_f8);
                    /* try { // try from 00c88374 to 00c88383 has its CatchHandler @ 00c8852c */
      (**(code **)(*(long *)param_1 + 0xd8))(local_158,param_1,local_188);
                    /* try { // try from 00c88384 to 00c88393 has its CatchHandler @ 00c8851c */
      Integer::Modulo((Integer *)local_158);
                    /* try { // try from 00c88394 to 00c8839f has its CatchHandler @ 00c8850c */
      iVar4 = Integer::Compare(param_4,(Integer *)local_128);
      bVar3 = iVar4 == 0;
      local_128[0] = &PTR__Integer_0100c890;
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      for (; local_118 != 0; local_118 = local_118 - 1) {
        *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
      }
                    /* try { // try from 00c883d8 to 00c883db has its CatchHandler @ 00c88508 */
      UnalignedDeallocate(local_108);
      local_158[0] = &PTR__Integer_0100c890;
      if (uStack_140 <= local_148) {
        local_148 = uStack_140;
      }
      for (; local_148 != 0; local_148 = local_148 - 1) {
        *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
      }
                    /* try { // try from 00c8840c to 00c8840f has its CatchHandler @ 00c88504 */
      UnalignedDeallocate(local_138);
      local_188[0] = &PTR__Integer_0100c890;
      if (uStack_170 <= local_178) {
        local_178 = uStack_170;
      }
      for (; local_178 != 0; local_178 = local_178 - 1) {
        *(undefined4 *)((long)local_168 + local_178 * 4 + -4) = 0;
      }
                    /* try { // try from 00c88440 to 00c88443 has its CatchHandler @ 00c88500 */
      UnalignedDeallocate(local_168);
      local_f8[0] = &PTR__Integer_0100c890;
      if (uStack_e0 <= local_e8) {
        local_e8 = uStack_e0;
      }
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c88474 to 00c88477 has its CatchHandler @ 00c884fc */
      UnalignedDeallocate(local_d8);
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00c884a8 to 00c884ab has its CatchHandler @ 00c884f8 */
      UnalignedDeallocate(local_a8);
      local_98[0] = &PTR__Integer_0100c890;
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00c884dc to 00c884df has its CatchHandler @ 00c884f4 */
      UnalignedDeallocate(local_78);
      goto LAB_00c88264;
    }
  }
  bVar3 = false;
LAB_00c88264:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


