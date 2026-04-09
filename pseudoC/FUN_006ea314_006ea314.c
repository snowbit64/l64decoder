// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea314
// Entry Point: 006ea314
// Size: 212 bytes
// Signature: undefined FUN_006ea314(void)


void FUN_006ea314(long param_1)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  MasterServerManager *this;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  char local_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char cStack_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  char cStack_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  undefined local_54;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
                    /* try { // try from 006ea340 to 006ea347 has its CatchHandler @ 006ea3e8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_50);
  strncpy(&local_74,*(char **)(param_1 + 0x10),0x20);
  local_54 = 0;
  auVar6[8] = 0x40;
  auVar6._0_8_ = 0x4040404040404040;
  auVar6[9] = 0x40;
  auVar6[10] = 0x40;
  auVar6[11] = 0x40;
  auVar6[12] = 0x40;
  auVar6[13] = 0x40;
  auVar6[14] = 0x40;
  auVar6[15] = 0x40;
  auVar7[8] = 0xd0;
  auVar7._0_8_ = 0xd0d0d0d0d0d0d0d0;
  auVar7[9] = 0xd0;
  auVar7[10] = 0xd0;
  auVar7[11] = 0xd0;
  auVar7[12] = 0xd0;
  auVar7[13] = 0xd0;
  auVar7[14] = 0xd0;
  auVar7[15] = 0xd0;
  auVar8[1] = cStack_71;
  auVar8[0] = cStack_73;
  auVar8[2] = cStack_6f;
  auVar8[3] = cStack_6d;
  auVar8[4] = cStack_6b;
  auVar8[5] = cStack_69;
  auVar8[6] = cStack_67;
  auVar8[7] = cStack_65;
  auVar8[8] = cStack_63;
  auVar8[9] = cStack_61;
  auVar8[10] = cStack_5f;
  auVar8[11] = cStack_5d;
  auVar8[12] = cStack_5b;
  auVar8[13] = cStack_59;
  auVar8[14] = cStack_57;
  auVar8[15] = cStack_55;
  auVar8 = NEON_cmhi(auVar8,auVar6,1);
  auVar10[1] = cStack_72;
  auVar10[0] = local_74;
  auVar10[2] = cStack_70;
  auVar10[3] = cStack_6e;
  auVar10[4] = cStack_6c;
  auVar10[5] = cStack_6a;
  auVar10[6] = cStack_68;
  auVar10[7] = cStack_66;
  auVar10[8] = cStack_64;
  auVar10[9] = cStack_62;
  auVar10[10] = cStack_60;
  auVar10[11] = cStack_5e;
  auVar10[12] = cStack_5c;
  auVar10[13] = cStack_5a;
  auVar10[14] = cStack_58;
  auVar10[15] = cStack_56;
  auVar10 = NEON_cmhi(auVar10,auVar6,1);
  auVar2[8] = 0xc9;
  auVar2._0_8_ = 0xc9c9c9c9c9c9c9c9;
  auVar2[9] = 0xc9;
  auVar2[10] = 0xc9;
  auVar2[11] = 0xc9;
  auVar2[12] = 0xc9;
  auVar2[13] = 0xc9;
  auVar2[14] = 0xc9;
  auVar2[15] = 0xc9;
  auVar8 = NEON_bit(auVar7,auVar2,auVar8,1);
  auVar9[1] = cStack_71;
  auVar9[0] = cStack_73;
  auVar9[2] = cStack_6f;
  auVar9[3] = cStack_6d;
  auVar9[4] = cStack_6b;
  auVar9[5] = cStack_69;
  auVar9[6] = cStack_67;
  auVar9[7] = cStack_65;
  auVar9[8] = cStack_63;
  auVar9[9] = cStack_61;
  auVar9[10] = cStack_5f;
  auVar9[11] = cStack_5d;
  auVar9[12] = cStack_5b;
  auVar9[13] = cStack_59;
  auVar9[14] = cStack_57;
  auVar9[15] = cStack_55;
  auVar5[8] = 0x60;
  auVar5._0_8_ = 0x6060606060606060;
  auVar5[9] = 0x60;
  auVar5[10] = 0x60;
  auVar5[11] = 0x60;
  auVar5[12] = 0x60;
  auVar5[13] = 0x60;
  auVar5[14] = 0x60;
  auVar5[15] = 0x60;
  auVar9 = NEON_cmhi(auVar9,auVar5,1);
  auVar4[8] = 9;
  auVar4._0_8_ = 0x909090909090909;
  auVar4[9] = 9;
  auVar4[10] = 9;
  auVar4[11] = 9;
  auVar4[12] = 9;
  auVar4[13] = 9;
  auVar4[14] = 9;
  auVar4[15] = 9;
  auVar10 = NEON_bit(auVar6,auVar4,auVar10,1);
  auVar3[8] = 0xa9;
  auVar3._0_8_ = 0xa9a9a9a9a9a9a9a9;
  auVar3[9] = 0xa9;
  auVar3[10] = 0xa9;
  auVar3[11] = 0xa9;
  auVar3[12] = 0xa9;
  auVar3[13] = 0xa9;
  auVar3[14] = 0xa9;
  auVar3[15] = 0xa9;
  auVar8 = NEON_bit(auVar8,auVar3,auVar9,1);
  uStack_30 = CONCAT17(auVar8[15] + cStack_55 + (auVar10[15] + cStack_56) * '\x10',
                       CONCAT16(auVar8[14] + cStack_57 + (auVar10[14] + cStack_58) * '\x10',
                                CONCAT15(auVar8[13] + cStack_59 + (auVar10[13] + cStack_5a) * '\x10'
                                         ,CONCAT14(auVar8[12] + cStack_5b +
                                                   (auVar10[12] + cStack_5c) * '\x10',
                                                   CONCAT13(auVar8[11] + cStack_5d +
                                                            (auVar10[11] + cStack_5e) * '\x10',
                                                            CONCAT12(auVar8[10] + cStack_5f +
                                                                     (auVar10[10] + cStack_60) *
                                                                     '\x10',CONCAT11(auVar8[9] +
                                                                                     cStack_61 +
                                                                                     (auVar10[9] +
                                                                                     cStack_62) *
                                                                                     '\x10',auVar8[8
                                                  ] + cStack_63 + (auVar10[8] + cStack_64) * '\x10')
                                                  ))))));
  local_38 = CONCAT17(auVar8[7] + cStack_65 + (auVar10[7] + cStack_66) * '\x10',
                      CONCAT16(auVar8[6] + cStack_67 + (auVar10[6] + cStack_68) * '\x10',
                               CONCAT15(auVar8[5] + cStack_69 + (auVar10[5] + cStack_6a) * '\x10',
                                        CONCAT14(auVar8[4] + cStack_6b +
                                                 (auVar10[4] + cStack_6c) * '\x10',
                                                 CONCAT13(auVar8[3] + cStack_6d +
                                                          (auVar10[3] + cStack_6e) * '\x10',
                                                          CONCAT12(auVar8[2] + cStack_6f +
                                                                   (auVar10[2] + cStack_70) * '\x10'
                                                                   ,CONCAT11(auVar8[1] + cStack_71 +
                                                                             (auVar10[1] + cStack_72
                                                                             ) * '\x10',
                                                                             auVar8[0] + cStack_73 +
                                                                             (auVar10[0] + local_74)
                                                                             * '\x10')))))));
                    /* try { // try from 006ea3a8 to 006ea3b3 has its CatchHandler @ 006ea3ec */
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::addServerMod(this,(ServerModInfo *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


