// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Verify
// Entry Point: 00cac554
// Size: 1016 bytes
// Signature: undefined __thiscall Verify(DL_Algorithm_GDSA<CryptoPP::ECPPoint> * this, DL_GroupParameters * param_1, DL_PublicKey * param_2, Integer * param_3, Integer * param_4, Integer * param_5)


/* CryptoPP::DL_Algorithm_GDSA<CryptoPP::ECPPoint>::Verify(CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint>
   const&, CryptoPP::DL_PublicKey<CryptoPP::ECPPoint> const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&) const */

bool __thiscall
CryptoPP::DL_Algorithm_GDSA<CryptoPP::ECPPoint>::Verify
          (DL_Algorithm_GDSA<CryptoPP::ECPPoint> *this,DL_GroupParameters *param_1,
          DL_PublicKey *param_2,Integer *param_3,Integer *param_4,Integer *param_5)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  Integer *pIVar6;
  ulong uVar7;
  undefined **local_1c8;
  undefined **local_1c0;
  void *local_1b8;
  void *local_1b0;
  void *local_1a8;
  void *local_1a0;
  undefined **local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
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
  pIVar6 = (Integer *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  iVar5 = Integer::Compare(param_4,pIVar6);
  if (iVar5 < 0) {
    Integer::Integer((Integer *)&local_1c8,1);
                    /* try { // try from 00cac5c4 to 00cac5e7 has its CatchHandler @ 00caca00 */
    iVar5 = Integer::Compare(param_4,(Integer *)&local_1c8);
    if ((iVar5 < 0) || (iVar5 = Integer::Compare(param_5,pIVar6), -1 < iVar5)) {
      iVar5 = 1;
    }
    else {
                    /* try { // try from 00cac5f4 to 00cac5ff has its CatchHandler @ 00cac960 */
      Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00cac600 to 00cac60b has its CatchHandler @ 00cac950 */
      uVar7 = Integer::Compare(param_5,(Integer *)local_98);
      local_98[0] = &PTR__Integer_0100c890;
      uVar2 = local_88;
      if (uStack_80 <= local_88) {
        uVar2 = uStack_80;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)local_78 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac640 to 00cac643 has its CatchHandler @ 00cac94c */
      UnalignedDeallocate(local_78);
      iVar5 = (int)((uVar7 & 0xffffffff) >> 0x1f);
    }
    local_1c8 = &PTR__Integer_0100c890;
    pvVar3 = local_1b8;
    if (local_1b0 <= local_1b8) {
      pvVar3 = local_1b0;
    }
    for (; pvVar3 != (void *)0x0; pvVar3 = (void *)((long)pvVar3 - 1)) {
      *(undefined4 *)((long)local_1a8 + (long)pvVar3 * 4 + -4) = 0;
    }
                    /* try { // try from 00cac678 to 00cac67b has its CatchHandler @ 00cac9fc */
    UnalignedDeallocate(local_1a8);
    if (iVar5 == 0) {
      Integer::InverseMod(param_5,pIVar6);
                    /* try { // try from 00cac6c8 to 00cac6d7 has its CatchHandler @ 00cac9f4 */
      Integer::Times(param_3);
                    /* try { // try from 00cac6d8 to 00cac6e7 has its CatchHandler @ 00cac9e8 */
      Integer::Modulo((Integer *)&local_1c8);
      local_1c8 = &PTR__Integer_0100c890;
      pvVar3 = local_1b8;
      if (local_1b0 <= local_1b8) {
        pvVar3 = local_1b0;
      }
      for (; pvVar3 != (void *)0x0; pvVar3 = (void *)((long)pvVar3 - 1)) {
        *(undefined4 *)((long)local_1a8 + (long)pvVar3 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac718 to 00cac71b has its CatchHandler @ 00cac9e4 */
      UnalignedDeallocate(local_1a8);
                    /* try { // try from 00cac71c to 00cac72b has its CatchHandler @ 00cac9dc */
      Integer::Times(param_4);
                    /* try { // try from 00cac72c to 00cac73b has its CatchHandler @ 00cac9d0 */
      Integer::Modulo((Integer *)&local_1c8);
      local_1c8 = &PTR__Integer_0100c890;
      if (local_1b0 <= local_1b8) {
        local_1b8 = local_1b0;
      }
      for (; local_1b8 != (void *)0x0; local_1b8 = (void *)((long)local_1b8 - 1)) {
        *(undefined4 *)((long)local_1a8 + (long)local_1b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac76c to 00cac76f has its CatchHandler @ 00cac9cc */
      UnalignedDeallocate(local_1a8);
                    /* try { // try from 00cac778 to 00cac78b has its CatchHandler @ 00cac9b0 */
      (**(code **)(*(long *)param_2 + 0x38))(&local_1c8,param_2,local_c8,local_f8);
                    /* try { // try from 00cac794 to 00cac7a3 has its CatchHandler @ 00cac9a0 */
      (**(code **)(*(long *)param_1 + 0xd8))(local_158,param_1,&local_1c8);
                    /* try { // try from 00cac7a4 to 00cac7b3 has its CatchHandler @ 00cac990 */
      Integer::Modulo((Integer *)local_158);
                    /* try { // try from 00cac7b4 to 00cac7bf has its CatchHandler @ 00cac980 */
      iVar5 = Integer::Compare(param_4,(Integer *)local_128);
      bVar4 = iVar5 == 0;
      local_128[0] = &PTR__Integer_0100c890;
      if (uStack_110 <= local_118) {
        local_118 = uStack_110;
      }
      for (; local_118 != 0; local_118 = local_118 - 1) {
        *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac7f8 to 00cac7fb has its CatchHandler @ 00cac97c */
      UnalignedDeallocate(local_108);
      local_158[0] = &PTR__Integer_0100c890;
      if (uStack_140 <= local_148) {
        local_148 = uStack_140;
      }
      for (; local_148 != 0; local_148 = local_148 - 1) {
        *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac82c to 00cac82f has its CatchHandler @ 00cac978 */
      UnalignedDeallocate(local_138);
      local_190 = &PTR__Integer_0100c890;
      local_1c8 = &PTR__ECPPoint_00fe9fd8;
      if (uStack_178 <= local_180) {
        local_180 = uStack_178;
      }
      for (; local_180 != 0; local_180 = local_180 - 1) {
        *(undefined4 *)((long)local_170 + local_180 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac870 to 00cac873 has its CatchHandler @ 00cac974 */
      UnalignedDeallocate(local_170);
      local_1c0 = &PTR__Integer_0100c890;
      if (local_1a8 <= local_1b0) {
        local_1b0 = local_1a8;
      }
      for (; local_1b0 != (void *)0x0; local_1b0 = (void *)((long)local_1b0 - 1)) {
        *(undefined4 *)((long)local_1a0 + (long)local_1b0 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac8a4 to 00cac8a7 has its CatchHandler @ 00cac970 */
      UnalignedDeallocate(local_1a0);
      local_f8[0] = &PTR__Integer_0100c890;
      if (uStack_e0 <= local_e8) {
        local_e8 = uStack_e0;
      }
      for (; local_e8 != 0; local_e8 = local_e8 - 1) {
        *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac8d8 to 00cac8db has its CatchHandler @ 00cac96c */
      UnalignedDeallocate(local_d8);
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac90c to 00cac90f has its CatchHandler @ 00cac968 */
      UnalignedDeallocate(local_a8);
      local_98[0] = &PTR__Integer_0100c890;
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00cac940 to 00cac943 has its CatchHandler @ 00cac964 */
      UnalignedDeallocate(local_78);
      goto LAB_00cac684;
    }
  }
  bVar4 = false;
LAB_00cac684:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


