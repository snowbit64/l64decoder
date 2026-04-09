// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsLucasProbablePrime
// Entry Point: 00d11394
// Size: 940 bytes
// Signature: undefined __cdecl IsLucasProbablePrime(Integer * param_1)


/* CryptoPP::IsLucasProbablePrime(CryptoPP::Integer const&) */

bool CryptoPP::IsLucasProbablePrime(Integer *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Integer *in_x3;
  undefined **local_148 [2];
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_88,1);
                    /* try { // try from 00d113cc to 00d113d7 has its CatchHandler @ 00d117a4 */
  iVar3 = Integer::Compare(param_1,(Integer *)local_88);
  uVar5 = local_78;
  if (uStack_70 <= local_78) {
    uVar5 = uStack_70;
  }
  local_88[0] = &PTR__Integer_0100c890;
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)((long)local_68 + uVar5 * 4 + -4) = 0;
  }
                    /* try { // try from 00d11414 to 00d11417 has its CatchHandler @ 00d117a0 */
  UnalignedDeallocate(local_68);
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    uVar5 = Integer::GetBit(param_1,0);
    if ((uVar5 & 1) == 0) {
      Integer::Integer((Integer *)local_88,2);
                    /* try { // try from 00d11560 to 00d1156b has its CatchHandler @ 00d1179c */
      iVar3 = Integer::Compare(param_1,(Integer *)local_88);
      bVar2 = iVar3 == 0;
      local_88[0] = &PTR__Integer_0100c890;
      if (uStack_70 <= local_78) {
        local_78 = uStack_70;
      }
      for (; local_78 != 0; local_78 = local_78 - 1) {
        *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
      }
                    /* try { // try from 00d115a4 to 00d115a7 has its CatchHandler @ 00d11798 */
      UnalignedDeallocate(local_68);
    }
    else {
      Integer::Integer((Integer *)local_88,3);
      iVar3 = 0;
      while( true ) {
                    /* try { // try from 00d11444 to 00d11453 has its CatchHandler @ 00d117e4 */
        Integer::Times((Integer *)local_88);
                    /* try { // try from 00d11454 to 00d1145f has its CatchHandler @ 00d117bc */
        Integer::Integer((Integer *)local_118,4);
                    /* try { // try from 00d11460 to 00d1146f has its CatchHandler @ 00d117ac */
        Integer::Minus((Integer *)local_e8);
                    /* try { // try from 00d11470 to 00d1147b has its CatchHandler @ 00d117c4 */
        iVar4 = Jacobi((Integer *)local_b8,param_1);
        uVar5 = local_a8;
        if (uStack_a0 <= local_a8) {
          uVar5 = uStack_a0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_98 + uVar5 * 4 + -4) = 0;
        }
        local_b8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d114ac to 00d114af has its CatchHandler @ 00d117b8 */
        UnalignedDeallocate(local_98);
        local_118[0] = &PTR__Integer_0100c890;
        uVar5 = local_108;
        if (uStack_100 <= local_108) {
          uVar5 = uStack_100;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_f8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d114e0 to 00d114e3 has its CatchHandler @ 00d117a8 */
        UnalignedDeallocate(local_f8);
        local_e8[0] = &PTR__Integer_0100c890;
        uVar5 = local_d8;
        if (uStack_d0 <= local_d8) {
          uVar5 = uStack_d0;
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)((long)local_c8 + uVar5 * 4 + -4) = 0;
        }
                    /* try { // try from 00d11514 to 00d11517 has its CatchHandler @ 00d117b4 */
        UnalignedDeallocate(local_c8);
        if (iVar4 != 1) break;
        iVar3 = iVar3 + 1;
                    /* try { // try from 00d1152c to 00d11547 has its CatchHandler @ 00d117e8 */
        if ((iVar3 == 0x40) && (uVar5 = Integer::IsSquare(), (uVar5 & 1) != 0)) goto LAB_00d115b0;
        Integer::operator++((Integer *)local_88);
        Integer::operator++((Integer *)local_88);
      }
      if (iVar4 != 0) {
                    /* try { // try from 00d115b8 to 00d115c3 has its CatchHandler @ 00d11790 */
        Integer::Integer((Integer *)local_118,1);
                    /* try { // try from 00d115c4 to 00d115d3 has its CatchHandler @ 00d11780 */
        Integer::Plus(param_1);
                    /* try { // try from 00d115d4 to 00d115e7 has its CatchHandler @ 00d11770 */
        Lucas((CryptoPP *)local_e8,(Integer *)local_88,param_1,in_x3);
                    /* try { // try from 00d115e8 to 00d115f3 has its CatchHandler @ 00d11760 */
        Integer::Integer((Integer *)local_148,2);
                    /* try { // try from 00d115f4 to 00d115ff has its CatchHandler @ 00d11750 */
        iVar3 = Integer::Compare((Integer *)local_b8,(Integer *)local_148);
        bVar2 = iVar3 == 0;
        local_148[0] = &PTR__Integer_0100c890;
        if (uStack_130 <= local_138) {
          local_138 = uStack_130;
        }
        for (; local_138 != 0; local_138 = local_138 - 1) {
          *(undefined4 *)((long)local_128 + local_138 * 4 + -4) = 0;
        }
                    /* try { // try from 00d11638 to 00d1163b has its CatchHandler @ 00d1174c */
        UnalignedDeallocate(local_128);
        local_b8[0] = &PTR__Integer_0100c890;
        if (uStack_a0 <= local_a8) {
          local_a8 = uStack_a0;
        }
        for (; local_a8 != 0; local_a8 = local_a8 - 1) {
          *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d1166c to 00d1166f has its CatchHandler @ 00d11748 */
        UnalignedDeallocate(local_98);
        local_e8[0] = &PTR__Integer_0100c890;
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        for (; local_d8 != 0; local_d8 = local_d8 - 1) {
          *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d116a0 to 00d116a3 has its CatchHandler @ 00d11744 */
        UnalignedDeallocate(local_c8);
        local_118[0] = &PTR__Integer_0100c890;
        if (uStack_100 <= local_108) {
          local_108 = uStack_100;
        }
        for (; local_108 != 0; local_108 = local_108 - 1) {
          *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
        }
                    /* try { // try from 00d116d4 to 00d116d7 has its CatchHandler @ 00d11740 */
        UnalignedDeallocate(local_f8);
        goto LAB_00d116d8;
      }
LAB_00d115b0:
      bVar2 = false;
LAB_00d116d8:
      local_88[0] = &PTR__Integer_0100c890;
      if (uStack_70 <= local_78) {
        local_78 = uStack_70;
      }
      for (; local_78 != 0; local_78 = local_78 - 1) {
        *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
      }
                    /* try { // try from 00d11708 to 00d1170b has its CatchHandler @ 00d11794 */
      UnalignedDeallocate(local_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


