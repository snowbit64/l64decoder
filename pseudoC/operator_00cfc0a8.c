// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00cfc0a8
// Size: 1284 bytes
// Signature: undefined __cdecl operator<<(basic_ostream * param_1, Integer * param_2)


/* CryptoPP::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, CryptoPP::Integer const&) */

basic_ostream * CryptoPP::operator<<(basic_ostream *param_1,Integer *param_2)

{
  undefined uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  basic_ostream *pbVar9;
  int iVar10;
  long lVar11;
  undefined uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 local_dc;
  char local_d8 [8];
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  undefined8 *local_98;
  int local_90;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  undefined8 *local_68;
  int local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar15 = *(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0x4a;
  uVar13 = 8;
  if (uVar15 != 0x40) {
    uVar13 = 10;
  }
  uVar12 = 0x6f;
  if (uVar15 != 0x40) {
    uVar12 = 0x2e;
  }
  uVar2 = 0x10;
  if (uVar15 != 8) {
    uVar2 = uVar13;
  }
  uVar1 = 0x68;
  if (uVar15 != 8) {
    uVar1 = uVar12;
  }
  Integer::Integer((Integer *)local_88,param_2);
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  local_b8[0] = &PTR__Integer_0100c890;
  uStack_a0 = 2;
  local_a8 = 0x3fffffffffffffff;
                    /* try { // try from 00cfc218 to 00cfc21f has its CatchHandler @ 00cfc5cc */
  local_98 = (undefined8 *)UnalignedAllocate(8);
  local_90 = 0;
  *local_98 = 0;
  if (*(int *)(param_2 + 0x28) == 1) {
    local_d8[0] = '-';
                    /* try { // try from 00cfc240 to 00cfc2c7 has its CatchHandler @ 00cfc5b4 */
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_d8,1);
    if ((local_60 == 1) || (uVar19 = uStack_70, *(int *)local_68 != 0)) {
LAB_00cfc268:
      local_60 = 1 - local_60;
    }
    else {
      do {
        if (uVar19 == 0) goto LAB_00cfc274;
        uVar18 = uVar19 - 1;
        lVar11 = uVar19 * 4;
        uVar19 = uVar18;
      } while (*(int *)((long)local_68 + lVar11 + -4) == 0);
      if ((int)uVar18 != -1) goto LAB_00cfc268;
    }
LAB_00cfc274:
    if (*(int *)(param_2 + 0x28) == 1) goto LAB_00cfc2c8;
  }
  if (**(int **)(param_2 + 0x20) == 0) {
    lVar11 = *(long *)(param_2 + 0x18);
    do {
      if (lVar11 == 0) goto LAB_00cfc2b0;
      lVar16 = lVar11 + -1;
      lVar6 = lVar11 + -1;
      lVar11 = lVar16;
    } while ((*(int **)(param_2 + 0x20))[lVar6] == 0);
    if ((int)lVar16 == -1) {
LAB_00cfc2b0:
      local_d8[0] = '0';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_d8,1)
      ;
    }
  }
LAB_00cfc2c8:
  iVar10 = (int)*(ulong *)(param_2 + 0x18) * -0x20;
  pcVar3 = "0123456789abcdef";
  if ((*(uint *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) & 0x4000) != 0) {
    pcVar3 = "0123456789ABCDEF";
  }
  uVar19 = *(ulong *)(param_2 + 0x18);
  do {
    if (uVar19 == 0) goto LAB_00cfc354;
    uVar18 = uVar19 - 1;
    lVar11 = uVar19 * 4;
    iVar10 = iVar10 + 0x20;
    uVar19 = uVar18;
  } while (*(int *)(*(long *)(param_2 + 0x20) + -4 + lVar11) == 0);
  if ((int)uVar18 == -1) {
LAB_00cfc354:
    uVar15 = 0;
  }
  else {
    uVar13 = *(uint *)(*(long *)(param_2 + 0x20) + (uVar18 & 0xffffffff) * 4);
    if (uVar13 == 0) {
      uVar15 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 0x20;
      do {
        uVar4 = uVar17 + uVar14 >> 1;
        uVar15 = uVar4;
        if (uVar13 >> (ulong)(uVar4 & 0x1f) != 0) {
          uVar15 = uVar14;
          uVar17 = uVar4;
        }
        uVar14 = uVar15;
      } while (1 < uVar15 - uVar17);
    }
    uVar15 = uVar15 - iVar10;
  }
  uVar13 = 0;
  uVar17 = 0x20;
  do {
    uVar4 = uVar13 + uVar17 >> 1;
    uVar14 = uVar4;
    if (uVar2 >> (ulong)(uVar4 & 0x1f) != 0) {
      uVar14 = uVar17;
      uVar13 = uVar4;
    }
    uVar17 = uVar14;
  } while (1 < uVar14 - uVar13);
  uVar13 = uVar14 - 1;
  if (uVar14 == 0 || uVar13 == 0) {
    uVar13 = 1;
  }
  uVar17 = 0;
  if (uVar13 != 0) {
    uVar17 = uVar15 / uVar13;
  }
  uStack_c8 = (ulong)(uVar17 + 1);
  local_d0 = 0xffffffffffffffff;
  if (uVar17 == 0xffffffff) {
    local_c0 = (void *)0x0;
  }
  else {
                    /* try { // try from 00cfc3c8 to 00cfc3cb has its CatchHandler @ 00cfc5ac */
    local_c0 = (void *)UnalignedAllocate(uStack_c8);
  }
  uVar15 = 0;
  pvVar7 = local_c0;
  uVar19 = local_a8;
  uVar18 = uStack_a0;
  puVar8 = local_98;
  iVar10 = local_90;
  do {
    local_90 = iVar10;
    local_98 = puVar8;
    uStack_a0 = uVar18;
    local_a8 = uVar19;
    local_c0 = pvVar7;
    if ((local_60 != 1) && (uVar19 = uStack_70, *(int *)local_68 == 0)) {
      do {
        if (uVar19 == 0) goto LAB_00cfc474;
        uVar18 = uVar19 - 1;
        lVar11 = uVar19 * 4;
        uVar19 = uVar18;
      } while (*(int *)((long)local_68 + lVar11 + -4) == 0);
      if ((int)uVar18 == -1) {
LAB_00cfc474:
        if (uVar15 != 0) {
          uVar19 = (ulong)uVar15;
          do {
            local_dc = CONCAT31(local_dc._1_3_,*(undefined *)((long)pvVar7 + (uVar19 - 1)));
                    /* try { // try from 00cfc48c to 00cfc49b has its CatchHandler @ 00cfc5d8 */
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,(char *)&local_dc,1);
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        local_dc = CONCAT31(local_dc._1_3_,uVar1);
                    /* try { // try from 00cfc4a8 to 00cfc4b7 has its CatchHandler @ 00cfc5c8 */
        pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,(char *)&local_dc,1);
        uVar19 = local_d0;
        if (uStack_c8 <= local_d0) {
          uVar19 = uStack_c8;
        }
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined *)((long)local_c0 + (uVar19 - 1)) = 0;
        }
                    /* try { // try from 00cfc4e4 to 00cfc4e7 has its CatchHandler @ 00cfc5c4 */
        UnalignedDeallocate(local_c0);
        local_b8[0] = &PTR__Integer_0100c890;
        uVar19 = local_a8;
        if (uStack_a0 <= local_a8) {
          uVar19 = uStack_a0;
        }
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)((long)local_98 + uVar19 * 4 + -4) = 0;
        }
                    /* try { // try from 00cfc518 to 00cfc51b has its CatchHandler @ 00cfc5c0 */
        UnalignedDeallocate(local_98);
        local_88[0] = &PTR__Integer_0100c890;
        uVar19 = local_78;
        if (uStack_70 <= local_78) {
          uVar19 = uStack_70;
        }
        for (; uVar19 != 0; uVar19 = uVar19 - 1) {
          *(undefined4 *)((long)local_68 + uVar19 * 4 + -4) = 0;
        }
                    /* try { // try from 00cfc54c to 00cfc54f has its CatchHandler @ 00cfc5bc */
        UnalignedDeallocate(local_68);
        if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return pbVar9;
      }
    }
                    /* try { // try from 00cfc410 to 00cfc423 has its CatchHandler @ 00cfc5d4 */
    Integer::Divide(&local_dc,(Integer *)local_b8,(Integer *)local_88,uVar2);
    *(char *)((long)local_c0 + (ulong)uVar15) = pcVar3[local_dc];
    uVar15 = uVar15 + 1;
    pvVar7 = local_c0;
    uVar19 = local_78;
    uVar18 = uStack_70;
    puVar8 = local_68;
    iVar10 = local_60;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    local_60 = local_90;
  } while( true );
}


