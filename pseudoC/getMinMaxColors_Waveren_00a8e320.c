// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMinMaxColors_Waveren
// Entry Point: 00a8e320
// Size: 172 bytes
// Signature: undefined __cdecl getMinMaxColors_Waveren(uchar * param_1, uchar * param_2, uchar * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DXTUtil::getMinMaxColors_Waveren(unsigned char const*, unsigned char*, unsigned char*) */

void DXTUtil::getMinMaxColors_Waveren(uchar *param_1,uchar *param_2,uchar *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  ushort uVar11;
  short sVar12;
  ushort uVar13;
  short sVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  undefined uVar18;
  byte bVar19;
  undefined uVar20;
  byte bVar21;
  undefined uVar22;
  byte bVar23;
  undefined uVar24;
  byte bVar25;
  undefined uVar26;
  byte bVar27;
  undefined uVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  ushort uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined4 uVar41;
  undefined auVar40 [16];
  undefined auVar42 [16];
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  ushort uVar52;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  ushort uVar62;
  undefined auVar63 [16];
  ushort uVar43;
  ushort uVar53;
  
  auVar63 = NEON_umin(*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x10),1);
  auVar40 = NEON_umax(*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x10),1);
  auVar42 = NEON_umin(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x30),1)
  ;
  auVar44 = NEON_umax(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x30),1)
  ;
  auVar42 = NEON_umin(auVar63,auVar42,1);
  auVar40 = NEON_umax(auVar40,auVar44,1);
  uVar41 = auVar42._8_4_;
  auVar45._4_4_ = uVar41;
  auVar45._0_4_ = uVar41;
  auVar45._8_4_ = uVar41;
  auVar45._12_4_ = uVar41;
  uVar41 = auVar40._8_4_;
  auVar54._4_4_ = uVar41;
  auVar54._0_4_ = uVar41;
  auVar54._8_4_ = uVar41;
  auVar54._12_4_ = uVar41;
  auVar44 = NEON_ext(auVar42,auVar45,8,1);
  auVar63 = NEON_ext(auVar40,auVar54,8,1);
  auVar44 = NEON_ext(auVar42,auVar44,0xc,1);
  auVar63 = NEON_ext(auVar40,auVar63,0xc,1);
  auVar40 = NEON_ext(auVar40,auVar40,8,1);
  auVar44 = NEON_ext(auVar44,auVar44,0xc,1);
  auVar63 = NEON_ext(auVar63,auVar63,0xc,1);
  auVar44 = NEON_umin(auVar42,auVar44,1);
  auVar63 = NEON_ext(auVar63,auVar63,8,1);
  auVar42._8_8_ = auVar40._8_8_;
  uVar38 = NEON_umax(auVar40._0_8_,auVar63._0_8_,1);
  auVar55._4_12_ = auVar44._4_12_;
  auVar55._0_4_ = auVar44._4_4_;
  auVar42._0_8_ = NEON_umax(uVar38,uVar38,1);
  uVar38 = NEON_umin(auVar44._0_8_,auVar55._0_8_,1);
  auVar46._1_15_ = auVar63._1_15_;
  auVar46[0] = (char)auVar42._0_8_;
  uVar43 = auVar46._0_2_ & 0xff;
  auVar44._1_15_ = auVar42._1_15_;
  auVar44[0] = (char)((ulong)auVar42._0_8_ >> 0x20);
  uVar37 = auVar44._0_2_ & 0xff;
  auVar56._1_15_ = auVar55._1_15_;
  auVar56[0] = (char)uVar38;
  uVar53 = auVar56._0_2_ & 0xff;
  uVar1 = (ushort)(byte)((ulong)uVar38 >> 0x20);
  uVar2 = uVar43 - uVar53;
  uVar47 = (ushort)(byte)((ulong)auVar42._0_8_ >> 8);
  uVar57 = (ushort)(byte)((ulong)uVar38 >> 8);
  uVar4 = uVar47 - uVar57;
  uVar48 = (ushort)(byte)((ulong)auVar42._0_8_ >> 0x10);
  uVar58 = (ushort)(byte)((ulong)uVar38 >> 0x10);
  uVar6 = uVar48 - uVar58;
  uVar49 = (ushort)(byte)((ulong)auVar42._0_8_ >> 0x18);
  uVar59 = (ushort)(byte)((ulong)uVar38 >> 0x18);
  uVar7 = uVar49 - uVar59;
  uVar8 = uVar37 - uVar1;
  uVar50 = (ushort)(byte)((ulong)auVar42._0_8_ >> 0x28);
  uVar60 = (ushort)(byte)((ulong)uVar38 >> 0x28);
  uVar9 = uVar50 - uVar60;
  uVar51 = (ushort)(byte)((ulong)auVar42._0_8_ >> 0x30);
  uVar61 = (ushort)(byte)((ulong)uVar38 >> 0x30);
  uVar11 = uVar51 - uVar61;
  uVar52 = (ushort)(byte)((ulong)auVar42._0_8_ >> 0x38);
  uVar62 = (ushort)(byte)((ulong)uVar38 >> 0x38);
  uVar13 = uVar52 - uVar62;
  bVar15 = (byte)(uVar2 >> 4) & SUB161(_DAT_004c5a00,0);
  bVar16 = (byte)(uVar2 >> 0xc) & SUB161(_DAT_004c5a00,1);
  bVar17 = (byte)(uVar4 >> 4) & SUB161(_DAT_004c5a00,2);
  bVar19 = (byte)(uVar4 >> 0xc) & SUB161(_DAT_004c5a00,3);
  bVar21 = (byte)(uVar6 >> 4) & SUB161(_DAT_004c5a00,4);
  bVar23 = (byte)(uVar6 >> 0xc) & SUB161(_DAT_004c5a00,5);
  bVar25 = (byte)(uVar7 >> 4) & SUB161(_DAT_004c5a00,6);
  bVar27 = (byte)(uVar7 >> 0xc) & SUB161(_DAT_004c5a00,7);
  bVar29 = (byte)(uVar8 >> 4) & SUB161(_DAT_004c5a00,8);
  bVar30 = (byte)(uVar8 >> 0xc) & SUB161(_DAT_004c5a00,9);
  bVar31 = (byte)(uVar9 >> 4) & SUB161(_DAT_004c5a00,10);
  bVar32 = (byte)(uVar9 >> 0xc) & SUB161(_DAT_004c5a00,0xb);
  bVar33 = (byte)(uVar11 >> 4) & SUB161(_DAT_004c5a00,0xc);
  bVar34 = (byte)(uVar11 >> 0xc) & SUB161(_DAT_004c5a00,0xd);
  bVar35 = (byte)(uVar13 >> 4) & SUB161(_DAT_004c5a00,0xe);
  bVar36 = (byte)(uVar13 >> 0xc) & SUB161(_DAT_004c5a00,0xf);
  auVar63._0_8_ =
       CONCAT26(CONCAT11(bVar27,bVar25) + uVar59,
                CONCAT24(CONCAT11(bVar23,bVar21) + uVar58,
                         CONCAT22(CONCAT11(bVar19,bVar17) + uVar57,CONCAT11(bVar16,bVar15) + uVar53)
                        ));
  auVar63._8_2_ = CONCAT11(bVar30,bVar29) + uVar1;
  auVar63._10_2_ = CONCAT11(bVar32,bVar31) + uVar60;
  auVar63._12_2_ = CONCAT11(bVar34,bVar33) + uVar61;
  auVar63._14_2_ = CONCAT11(bVar36,bVar35) + uVar62;
  sVar3 = uVar43 - CONCAT11(bVar16,bVar15);
  sVar5 = uVar47 - CONCAT11(bVar19,bVar17);
  uVar18 = (undefined)sVar5;
  uVar20 = (undefined)((ushort)sVar5 >> 8);
  sVar5 = uVar48 - CONCAT11(bVar23,bVar21);
  uVar22 = (undefined)sVar5;
  uVar24 = (undefined)((ushort)sVar5 >> 8);
  sVar5 = uVar49 - CONCAT11(bVar27,bVar25);
  uVar26 = (undefined)sVar5;
  uVar28 = (undefined)((ushort)sVar5 >> 8);
  sVar5 = uVar37 - CONCAT11(bVar30,bVar29);
  sVar10 = uVar50 - CONCAT11(bVar32,bVar31);
  sVar12 = uVar51 - CONCAT11(bVar34,bVar33);
  sVar14 = uVar52 - CONCAT11(bVar36,bVar35);
  uVar39 = NEON_sqxtun(auVar63._0_8_,auVar63,2);
  auVar40[2] = uVar18;
  auVar40._0_2_ = sVar3;
  auVar40[3] = uVar20;
  auVar40[4] = uVar22;
  auVar40[5] = uVar24;
  auVar40[6] = uVar26;
  auVar40[7] = uVar28;
  auVar40[8] = (char)sVar5;
  auVar40[9] = (char)((ushort)sVar5 >> 8);
  auVar40[10] = (char)sVar10;
  auVar40[11] = (char)((ushort)sVar10 >> 8);
  auVar40[12] = (char)sVar12;
  auVar40[13] = (char)((ushort)sVar12 >> 8);
  auVar40[14] = (char)sVar14;
  auVar40[15] = (char)((ushort)sVar14 >> 8);
  uVar38 = NEON_sqxtun(CONCAT17(uVar28,CONCAT16(uVar26,CONCAT15(uVar24,CONCAT14(uVar22,CONCAT13(
                                                  uVar20,CONCAT12(uVar18,sVar3)))))),auVar40,2);
  *(int *)param_2 = (int)uVar39;
  *(int *)param_3 = (int)uVar38;
  return;
}


