// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC1Block_RGBA_Waveren
// Entry Point: 00a8e204
// Size: 284 bytes
// Signature: undefined __cdecl encodeBC1Block_RGBA_Waveren(uchar * param_1, uchar * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DXTUtil::encodeBC1Block_RGBA_Waveren(unsigned char const*, unsigned char*) */

void DXTUtil::encodeBC1Block_RGBA_Waveren(uchar *param_1,uchar *param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined8 uVar6;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  undefined4 uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined auVar9 [16];
  ushort uVar21;
  ushort uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  ushort uVar38;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  undefined auVar40 [16];
  undefined auVar41 [16];
  ushort uVar47;
  undefined auVar48 [16];
  uint local_30;
  uint uStack_2c;
  long local_28;
  undefined6 uVar5;
  undefined auVar7 [12];
  undefined auVar8 [14];
  ushort uVar28;
  ushort uVar39;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  auVar40 = NEON_umin(*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x10),1);
  auVar9 = NEON_umax(*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x10),1);
  auVar48 = NEON_umin(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x30),1)
  ;
  auVar24 = NEON_umax(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])(param_1 + 0x30),1)
  ;
  auVar48 = NEON_umin(auVar40,auVar48,1);
  auVar9 = NEON_umax(auVar9,auVar24,1);
  uVar18 = auVar48._8_4_;
  auVar25._4_4_ = uVar18;
  auVar25._0_4_ = uVar18;
  auVar25._8_4_ = uVar18;
  auVar25._12_4_ = uVar18;
  uVar18 = auVar9._8_4_;
  auVar29._4_4_ = uVar18;
  auVar29._0_4_ = uVar18;
  auVar29._8_4_ = uVar18;
  auVar29._12_4_ = uVar18;
  auVar24 = NEON_ext(auVar48,auVar25,8,1);
  auVar30 = NEON_ext(auVar9,auVar29,8,1);
  auVar24 = NEON_ext(auVar48,auVar24,0xc,1);
  auVar30 = NEON_ext(auVar9,auVar30,0xc,1);
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
  auVar30 = NEON_ext(auVar30,auVar30,0xc,1);
  auVar24 = NEON_umin(auVar48,auVar24,1);
  auVar48 = NEON_ext(auVar30,auVar30,8,1);
  auVar26._8_8_ = auVar24._8_8_;
  uVar6 = NEON_umax(auVar9._0_8_,auVar48._0_8_,1);
  auVar31._4_12_ = auVar24._4_12_;
  auVar31._0_4_ = auVar24._4_4_;
  auVar9._0_8_ = NEON_umax(uVar6,uVar6,1);
  auVar26._0_8_ = NEON_umin(auVar24._0_8_,auVar31._0_8_,1);
  auVar41._1_15_ = auVar40._1_15_;
  auVar41[0] = (char)auVar9._0_8_;
  uVar39 = auVar41._0_2_ & 0xff;
  auVar24._1_15_ = auVar9._1_15_;
  auVar24[0] = (char)((ulong)auVar9._0_8_ >> 0x20);
  uVar2 = auVar24._0_2_ & 0xff;
  auVar32._1_15_ = auVar31._1_15_;
  auVar32[0] = (char)auVar26._0_8_;
  uVar28 = auVar32._0_2_ & 0xff;
  auVar40._1_15_ = auVar26._1_15_;
  auVar40[0] = (char)((ulong)auVar26._0_8_ >> 0x20);
  uVar22 = auVar40._0_2_ & 0xff;
  uVar3 = uVar39 - uVar28;
  uVar33 = (ushort)(byte)((ulong)auVar26._0_8_ >> 8);
  uVar42 = (ushort)(byte)((ulong)auVar9._0_8_ >> 8);
  uVar10 = uVar42 - uVar33;
  uVar34 = (ushort)(byte)((ulong)auVar26._0_8_ >> 0x10);
  uVar43 = (ushort)(byte)((ulong)auVar9._0_8_ >> 0x10);
  uVar12 = uVar43 - uVar34;
  uVar35 = (ushort)(byte)((ulong)auVar26._0_8_ >> 0x18);
  uVar44 = (ushort)(byte)((ulong)auVar9._0_8_ >> 0x18);
  uVar14 = uVar44 - uVar35;
  uVar16 = uVar2 - uVar22;
  uVar36 = (ushort)(byte)((ulong)auVar26._0_8_ >> 0x28);
  uVar45 = (ushort)(byte)((ulong)auVar9._0_8_ >> 0x28);
  uVar19 = uVar45 - uVar36;
  uVar37 = (ushort)(byte)((ulong)auVar26._0_8_ >> 0x30);
  uVar46 = (ushort)(byte)((ulong)auVar9._0_8_ >> 0x30);
  uVar20 = uVar46 - uVar37;
  uVar38 = (ushort)(byte)((ulong)auVar26._0_8_ >> 0x38);
  uVar47 = (ushort)(byte)((ulong)auVar9._0_8_ >> 0x38);
  uVar21 = uVar47 - uVar38;
  sVar4 = CONCAT11((byte)(uVar3 >> 0xc) & SUB161(_DAT_004c5a00,1),
                   (byte)(uVar3 >> 4) & SUB161(_DAT_004c5a00,0));
  uVar18 = CONCAT13((byte)(uVar10 >> 0xc) & SUB161(_DAT_004c5a00,3),
                    CONCAT12((byte)(uVar10 >> 4) & SUB161(_DAT_004c5a00,2),sVar4));
  uVar5 = CONCAT15((byte)(uVar12 >> 0xc) & SUB161(_DAT_004c5a00,5),
                   CONCAT14((byte)(uVar12 >> 4) & SUB161(_DAT_004c5a00,4),uVar18));
  uVar6 = CONCAT17((byte)(uVar14 >> 0xc) & SUB161(_DAT_004c5a00,7),
                   CONCAT16((byte)(uVar14 >> 4) & SUB161(_DAT_004c5a00,6),uVar5));
  auVar7._0_10_ =
       CONCAT19((byte)(uVar16 >> 0xc) & SUB161(_DAT_004c5a00,9),
                CONCAT18((byte)(uVar16 >> 4) & SUB161(_DAT_004c5a00,8),uVar6));
  auVar7[10] = (byte)(uVar19 >> 4) & SUB161(_DAT_004c5a00,10);
  auVar7[11] = (byte)(uVar19 >> 0xc) & SUB161(_DAT_004c5a00,0xb);
  auVar8[12] = (byte)(uVar20 >> 4) & SUB161(_DAT_004c5a00,0xc);
  auVar8._0_12_ = auVar7;
  auVar8[13] = (byte)(uVar20 >> 0xc) & SUB161(_DAT_004c5a00,0xd);
  auVar48[14] = (byte)(uVar21 >> 4) & SUB161(_DAT_004c5a00,0xe);
  auVar48._0_14_ = auVar8;
  auVar48[15] = (byte)(uVar21 >> 0xc) & SUB161(_DAT_004c5a00,0xf);
  sVar11 = (short)((uint)uVar18 >> 0x10);
  sVar13 = (short)((uint6)uVar5 >> 0x20);
  sVar15 = (short)((ulong)uVar6 >> 0x30);
  auVar27._0_8_ =
       CONCAT26(sVar15 + uVar35,CONCAT24(sVar13 + uVar34,CONCAT22(sVar11 + uVar33,sVar4 + uVar28)));
  sVar17 = (short)((unkuint10)auVar7._0_10_ >> 0x40);
  auVar27._8_2_ = sVar17 + uVar22;
  auVar27._10_2_ = auVar7._10_2_ + uVar36;
  auVar27._12_2_ = auVar8._12_2_ + uVar37;
  auVar27._14_2_ = auVar48._14_2_ + uVar38;
  auVar30._0_8_ =
       CONCAT26(uVar44 - sVar15,CONCAT24(uVar43 - sVar13,CONCAT22(uVar42 - sVar11,uVar39 - sVar4)));
  auVar30._8_2_ = uVar2 - sVar17;
  auVar30._10_2_ = uVar45 - auVar7._10_2_;
  auVar30._12_2_ = uVar46 - auVar8._12_2_;
  auVar30._14_2_ = uVar47 - auVar48._14_2_;
  uVar23 = NEON_sqxtun(auVar27._0_8_,auVar27,2);
  uVar6 = NEON_sqxtun(auVar30._0_8_,auVar30,2);
  uStack_2c = (uint)uVar23;
  local_30 = (uint)uVar6;
  *(uint *)param_2 =
       ((local_30 & 0xfffff8) << 8 | local_30 >> 5 & 0x7ff) & 0xffe0 | local_30 >> 0x13 & 0x1f |
       ((uStack_2c & 0xfffff8) << 8 | uStack_2c >> 5 & 0x7e0 | uStack_2c >> 0x13 & 0x1f) << 0x10;
  emitColorIndices_Waveren(param_1,(uchar *)&uStack_2c,(uchar *)&local_30,param_2 + 4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


