// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC1Block_RGBA_Waveren
// Entry Point: 00a8e0c4
// Size: 320 bytes
// Signature: undefined __cdecl encodeBC1Block_RGBA_Waveren(uint * param_1, uint param_2, uchar * param_3)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DXTUtil::encodeBC1Block_RGBA_Waveren(unsigned int const*, unsigned int, unsigned char*) */

void DXTUtil::encodeBC1Block_RGBA_Waveren(uint *param_1,uint param_2,uchar *param_3)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  undefined4 uVar20;
  ushort uVar21;
  ushort uVar22;
  undefined auVar11 [16];
  ushort uVar23;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  undefined6 uVar8;
  undefined auVar9 [12];
  undefined auVar10 [14];
  ushort uVar24;
  ushort uVar33;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  pauVar1 = (undefined (*) [16])(param_1 + (param_2 << 1));
  pauVar2 = (undefined (*) [16])(param_1 + param_2);
  uStack_58 = *(undefined8 *)(*pauVar2 + 8);
  uStack_60 = *(undefined8 *)*pauVar2;
  pauVar3 = (undefined (*) [16])(*pauVar1 + (ulong)param_2 * 4);
  uStack_38 = *(undefined8 *)(*pauVar3 + 8);
  uStack_40 = *(undefined8 *)*pauVar3;
  uStack_68 = *(undefined8 *)(param_1 + 2);
  local_70 = *(undefined8 *)param_1;
  uStack_48 = *(undefined8 *)(*pauVar1 + 8);
  local_50 = *(undefined8 *)*pauVar1;
  auVar11 = NEON_umin(*(undefined (*) [16])param_1,*pauVar2,1);
  auVar27 = NEON_umin(*pauVar1,*pauVar3,1);
  auVar31 = NEON_umax(*(undefined (*) [16])param_1,*pauVar2,1);
  auVar34 = NEON_umax(*pauVar1,*pauVar3,1);
  auVar11 = NEON_umin(auVar11,auVar27,1);
  auVar27 = NEON_umax(auVar31,auVar34,1);
  uVar20 = auVar11._8_4_;
  auVar32._4_4_ = uVar20;
  auVar32._0_4_ = uVar20;
  auVar32._8_4_ = uVar20;
  auVar32._12_4_ = uVar20;
  auVar31 = NEON_ext(auVar11,auVar32,8,1);
  uVar20 = auVar27._8_4_;
  auVar35._4_4_ = uVar20;
  auVar35._0_4_ = uVar20;
  auVar35._8_4_ = uVar20;
  auVar35._12_4_ = uVar20;
  auVar34 = NEON_ext(auVar27,auVar35,8,1);
  auVar31 = NEON_ext(auVar11,auVar31,0xc,1);
  auVar34 = NEON_ext(auVar27,auVar34,0xc,1);
  auVar27 = NEON_ext(auVar27,auVar27,8,1);
  auVar31 = NEON_ext(auVar31,auVar31,0xc,1);
  auVar34 = NEON_ext(auVar34,auVar34,0xc,1);
  auVar11 = NEON_umin(auVar11,auVar31,1);
  auVar31 = NEON_ext(auVar34,auVar34,8,1);
  auVar28._8_8_ = auVar27._8_8_;
  uVar25 = NEON_umax(auVar27._0_8_,auVar31._0_8_,1);
  auVar36._4_12_ = auVar11._4_12_;
  auVar36._0_4_ = auVar11._4_4_;
  auVar28._0_8_ = NEON_umax(uVar25,uVar25,1);
  auVar11._0_8_ = NEON_umin(auVar11._0_8_,auVar36._0_8_,1);
  uVar44 = (ushort)(byte)((ulong)auVar28._0_8_ >> 8);
  uVar45 = (ushort)(byte)((ulong)auVar28._0_8_ >> 0x10);
  uVar46 = (ushort)(byte)((ulong)auVar28._0_8_ >> 0x18);
  auVar29._1_15_ = auVar28._1_15_;
  auVar29[0] = (char)((ulong)auVar28._0_8_ >> 0x20);
  uVar24 = auVar29._0_2_ & 0xff;
  auVar37._1_15_ = auVar36._1_15_;
  auVar37[0] = (char)auVar11._0_8_;
  uVar33 = auVar37._0_2_ & 0xff;
  auVar27._1_15_ = auVar11._1_15_;
  auVar27[0] = (char)((ulong)auVar11._0_8_ >> 0x20);
  uVar5 = auVar27._0_2_ & 0xff;
  uVar6 = (byte)auVar28._0_8_ - uVar33;
  uVar38 = (ushort)(byte)((ulong)auVar11._0_8_ >> 8);
  uVar12 = uVar44 - uVar38;
  uVar39 = (ushort)(byte)((ulong)auVar11._0_8_ >> 0x10);
  uVar14 = uVar45 - uVar39;
  uVar40 = (ushort)(byte)((ulong)auVar11._0_8_ >> 0x18);
  uVar16 = uVar46 - uVar40;
  uVar18 = uVar24 - uVar5;
  uVar41 = (ushort)(byte)((ulong)auVar11._0_8_ >> 0x28);
  uVar47 = (ushort)(byte)((ulong)auVar28._0_8_ >> 0x28);
  uVar21 = uVar47 - uVar41;
  uVar42 = (ushort)(byte)((ulong)auVar11._0_8_ >> 0x30);
  uVar48 = (ushort)(byte)((ulong)auVar28._0_8_ >> 0x30);
  uVar22 = uVar48 - uVar42;
  uVar43 = (ushort)(byte)((ulong)auVar11._0_8_ >> 0x38);
  uVar49 = (ushort)(byte)((ulong)auVar28._0_8_ >> 0x38);
  uVar23 = uVar49 - uVar43;
  sVar7 = CONCAT11((byte)(uVar6 >> 0xc) & SUB161(_DAT_004c5a00,1),
                   (byte)(uVar6 >> 4) & SUB161(_DAT_004c5a00,0));
  uVar20 = CONCAT13((byte)(uVar12 >> 0xc) & SUB161(_DAT_004c5a00,3),
                    CONCAT12((byte)(uVar12 >> 4) & SUB161(_DAT_004c5a00,2),sVar7));
  uVar8 = CONCAT15((byte)(uVar14 >> 0xc) & SUB161(_DAT_004c5a00,5),
                   CONCAT14((byte)(uVar14 >> 4) & SUB161(_DAT_004c5a00,4),uVar20));
  uVar25 = CONCAT17((byte)(uVar16 >> 0xc) & SUB161(_DAT_004c5a00,7),
                    CONCAT16((byte)(uVar16 >> 4) & SUB161(_DAT_004c5a00,6),uVar8));
  auVar9._0_10_ =
       CONCAT19((byte)(uVar18 >> 0xc) & SUB161(_DAT_004c5a00,9),
                CONCAT18((byte)(uVar18 >> 4) & SUB161(_DAT_004c5a00,8),uVar25));
  auVar9[10] = (byte)(uVar21 >> 4) & SUB161(_DAT_004c5a00,10);
  auVar9[11] = (byte)(uVar21 >> 0xc) & SUB161(_DAT_004c5a00,0xb);
  auVar10[12] = (byte)(uVar22 >> 4) & SUB161(_DAT_004c5a00,0xc);
  auVar10._0_12_ = auVar9;
  auVar10[13] = (byte)(uVar22 >> 0xc) & SUB161(_DAT_004c5a00,0xd);
  auVar31[14] = (byte)(uVar23 >> 4) & SUB161(_DAT_004c5a00,0xe);
  auVar31._0_14_ = auVar10;
  auVar31[15] = (byte)(uVar23 >> 0xc) & SUB161(_DAT_004c5a00,0xf);
  sVar13 = (short)((uint)uVar20 >> 0x10);
  sVar15 = (short)((uint6)uVar8 >> 0x20);
  sVar17 = (short)((ulong)uVar25 >> 0x30);
  auVar30._0_8_ =
       CONCAT26(sVar17 + uVar40,CONCAT24(sVar15 + uVar39,CONCAT22(sVar13 + uVar38,sVar7 + uVar33)));
  sVar19 = (short)((unkuint10)auVar9._0_10_ >> 0x40);
  auVar30._8_2_ = sVar19 + uVar5;
  auVar30._10_2_ = auVar9._10_2_ + uVar41;
  auVar30._12_2_ = auVar10._12_2_ + uVar42;
  auVar30._14_2_ = auVar31._14_2_ + uVar43;
  auVar34._0_8_ =
       CONCAT26(uVar46 - sVar17,
                CONCAT24(uVar45 - sVar15,
                         CONCAT22(uVar44 - sVar13,(ushort)(byte)auVar28._0_8_ - sVar7)));
  auVar34._8_2_ = uVar24 - sVar19;
  auVar34._10_2_ = uVar47 - auVar9._10_2_;
  auVar34._12_2_ = uVar48 - auVar10._12_2_;
  auVar34._14_2_ = uVar49 - auVar31._14_2_;
  uVar26 = NEON_sqxtun(auVar30._0_8_,auVar30,2);
  uVar25 = NEON_sqxtun(auVar34._0_8_,auVar34,2);
  uStack_74 = (uint)uVar26;
  local_78 = (uint)uVar25;
  *(uint *)param_3 =
       ((local_78 & 0xfffff8) << 8 | local_78 >> 5 & 0x7ff) & 0xffe0 | local_78 >> 0x13 & 0x1f |
       ((uStack_74 & 0xfffff8) << 8 | uStack_74 >> 5 & 0x7e0 | uStack_74 >> 0x13 & 0x1f) << 0x10;
  emitColorIndices_Waveren((uchar *)&local_70,(uchar *)&uStack_74,(uchar *)&local_78,param_3 + 4);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


