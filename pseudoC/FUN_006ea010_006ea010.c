// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea010
// Entry Point: 006ea010
// Size: 172 bytes
// Signature: undefined FUN_006ea010(void)


void FUN_006ea010(char **param_1)

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
  undefined8 local_60;
  undefined8 uStack_58;
  char local_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  char cStack_38;
  char cStack_37;
  char cStack_36;
  char cStack_35;
  char cStack_34;
  char cStack_33;
  char cStack_32;
  char cStack_31;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  undefined local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  strncpy(&local_4c,*param_1,0x20);
  local_2c = 0;
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
  auVar8[1] = cStack_49;
  auVar8[0] = cStack_4b;
  auVar8[2] = cStack_47;
  auVar8[3] = cStack_45;
  auVar8[4] = cStack_43;
  auVar8[5] = cStack_41;
  auVar8[6] = cStack_3f;
  auVar8[7] = cStack_3d;
  auVar8[8] = cStack_3b;
  auVar8[9] = cStack_39;
  auVar8[10] = cStack_37;
  auVar8[11] = cStack_35;
  auVar8[12] = cStack_33;
  auVar8[13] = cStack_31;
  auVar8[14] = cStack_2f;
  auVar8[15] = cStack_2d;
  auVar8 = NEON_cmhi(auVar8,auVar6,1);
  auVar10[1] = cStack_4a;
  auVar10[0] = local_4c;
  auVar10[2] = cStack_48;
  auVar10[3] = cStack_46;
  auVar10[4] = cStack_44;
  auVar10[5] = cStack_42;
  auVar10[6] = cStack_40;
  auVar10[7] = cStack_3e;
  auVar10[8] = cStack_3c;
  auVar10[9] = cStack_3a;
  auVar10[10] = cStack_38;
  auVar10[11] = cStack_36;
  auVar10[12] = cStack_34;
  auVar10[13] = cStack_32;
  auVar10[14] = cStack_30;
  auVar10[15] = cStack_2e;
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
  auVar9[1] = cStack_49;
  auVar9[0] = cStack_4b;
  auVar9[2] = cStack_47;
  auVar9[3] = cStack_45;
  auVar9[4] = cStack_43;
  auVar9[5] = cStack_41;
  auVar9[6] = cStack_3f;
  auVar9[7] = cStack_3d;
  auVar9[8] = cStack_3b;
  auVar9[9] = cStack_39;
  auVar9[10] = cStack_37;
  auVar9[11] = cStack_35;
  auVar9[12] = cStack_33;
  auVar9[13] = cStack_31;
  auVar9[14] = cStack_2f;
  auVar9[15] = cStack_2d;
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
  uStack_58 = CONCAT17(auVar8[15] + cStack_2d + (auVar10[15] + cStack_2e) * '\x10',
                       CONCAT16(auVar8[14] + cStack_2f + (auVar10[14] + cStack_30) * '\x10',
                                CONCAT15(auVar8[13] + cStack_31 + (auVar10[13] + cStack_32) * '\x10'
                                         ,CONCAT14(auVar8[12] + cStack_33 +
                                                   (auVar10[12] + cStack_34) * '\x10',
                                                   CONCAT13(auVar8[11] + cStack_35 +
                                                            (auVar10[11] + cStack_36) * '\x10',
                                                            CONCAT12(auVar8[10] + cStack_37 +
                                                                     (auVar10[10] + cStack_38) *
                                                                     '\x10',CONCAT11(auVar8[9] +
                                                                                     cStack_39 +
                                                                                     (auVar10[9] +
                                                                                     cStack_3a) *
                                                                                     '\x10',auVar8[8
                                                  ] + cStack_3b + (auVar10[8] + cStack_3c) * '\x10')
                                                  ))))));
  local_60 = CONCAT17(auVar8[7] + cStack_3d + (auVar10[7] + cStack_3e) * '\x10',
                      CONCAT16(auVar8[6] + cStack_3f + (auVar10[6] + cStack_40) * '\x10',
                               CONCAT15(auVar8[5] + cStack_41 + (auVar10[5] + cStack_42) * '\x10',
                                        CONCAT14(auVar8[4] + cStack_43 +
                                                 (auVar10[4] + cStack_44) * '\x10',
                                                 CONCAT13(auVar8[3] + cStack_45 +
                                                          (auVar10[3] + cStack_46) * '\x10',
                                                          CONCAT12(auVar8[2] + cStack_47 +
                                                                   (auVar10[2] + cStack_48) * '\x10'
                                                                   ,CONCAT11(auVar8[1] + cStack_49 +
                                                                             (auVar10[1] + cStack_4a
                                                                             ) * '\x10',
                                                                             auVar8[0] + cStack_4b +
                                                                             (auVar10[0] + local_4c)
                                                                             * '\x10')))))));
  this = (MasterServerManager *)MasterServerManager::getInstance();
  MasterServerManager::addAvailableMod(this,(ModHash *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


