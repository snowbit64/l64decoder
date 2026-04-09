// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeCost
// Entry Point: 00eff494
// Size: 536 bytes
// Signature: undefined __cdecl computeCost(ulong param_1, bool * param_2, ulong param_3)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Luau::Compile::computeCost(unsigned long, bool const*, unsigned long) */

uint Luau::Compile::computeCost(ulong param_1,bool *param_2,ulong param_3)

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  undefined auVar14 [16];
  uint uVar15;
  undefined auVar16 [16];
  int iVar17;
  int iVar20;
  int iVar21;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar22 [16];
  undefined auVar25 [12];
  undefined auVar26 [12];
  unkbyte9 Var24;
  undefined uVar28;
  undefined auVar27 [16];
  undefined4 uVar29;
  int iVar30;
  byte bVar36;
  unkbyte9 Var31;
  undefined uVar34;
  int iVar35;
  undefined auVar32 [12];
  int iVar37;
  undefined auVar33 [12];
  undefined auVar38 [12];
  undefined4 uVar23;
  
  uVar1 = (uint)param_1 & 0x7f;
  if (uVar1 == 0x7f) {
    return 0x7f;
  }
  if (param_3 == 0) {
    return uVar1;
  }
  uVar11 = param_3 - 1;
  if (5 < uVar11) {
    uVar11 = 6;
  }
  auVar22._8_8_ = uVar11;
  auVar22._0_8_ = uVar11;
  auVar14 = NEON_cmhs(auVar22,_DAT_004c5d80,8);
  auVar16 = NEON_cmhs(auVar22,_DAT_004c53e0,8);
  auVar18 = NEON_cmhs(auVar22,_DAT_004c4d80,8);
  auVar22 = NEON_cmhs(auVar22,_DAT_004c34b0,8);
  auVar19._0_3_ = CONCAT12(auVar18[0],CONCAT11(auVar22[8],auVar22[0]));
  auVar19[3] = 0;
  auVar19[4] = auVar16[0];
  auVar19[5] = auVar16[8];
  auVar19[6] = auVar14[0];
  auVar19[7] = auVar14[8];
  auVar19._8_8_ = 0;
  uVar13 = (uint)auVar19._0_3_;
  if ((auVar22 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auVar19 = ZEXT116(*param_2);
  }
  if (((uVar13 & 0xff00) >> 8 & 1) != 0) {
    auVar19[1] = param_2[1];
  }
  if ((auVar18 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auVar19[2] = param_2[2];
  }
  if ((auVar18 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    auVar19[3] = 0;
  }
  if ((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar3,_DAT_004c4d40,8);
    uVar23 = auVar27._0_4_;
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar4,_DAT_004c4450,8);
    auVar38 = auVar27._0_12_;
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar5,_DAT_004c5970,8);
    uVar29 = auVar27._0_4_;
    auVar2._8_8_ = 0xfffffffffffffff0;
    auVar2._0_8_ = 0xfffffffffffffff8;
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar6,auVar2,8);
    auVar26 = auVar27._0_12_;
  }
  else {
    auVar19[4] = param_2[4];
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar7,_DAT_004c4d40,8);
    uVar23 = auVar27._0_4_;
    auVar8._8_8_ = param_1;
    auVar8._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar8,_DAT_004c4450,8);
    auVar38 = auVar27._0_12_;
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar9,_DAT_004c5970,8);
    uVar29 = auVar27._0_4_;
    auVar27._8_8_ = 0xfffffffffffffff0;
    auVar27._0_8_ = 0xfffffffffffffff8;
    auVar10._8_8_ = param_1;
    auVar10._0_8_ = param_1;
    auVar27 = NEON_ushl(auVar10,auVar27,8);
    auVar26 = auVar27._0_12_;
  }
  if ((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    auVar32._4_4_ = auVar26._8_4_;
    auVar32._0_4_ = auVar26._0_4_;
    auVar32._8_4_ = uVar29;
    Var31 = auVar32._0_9_;
    auVar25._4_4_ = auVar38._8_4_;
    auVar25._0_4_ = auVar38._0_4_;
    auVar25._8_4_ = uVar23;
    Var24 = auVar25._0_9_;
  }
  else {
    auVar19[5] = param_2[5];
    auVar33._4_4_ = auVar26._8_4_;
    auVar33._0_4_ = auVar26._0_4_;
    auVar33._8_4_ = uVar29;
    Var31 = auVar33._0_9_;
    auVar26._4_4_ = auVar38._8_4_;
    auVar26._0_4_ = auVar38._0_4_;
    auVar26._8_4_ = uVar23;
    Var24 = auVar26._0_9_;
  }
  uVar28 = (undefined)((unkuint9)Var24 >> 0x20);
  bVar12 = (byte)((unkuint9)Var24 >> 0x40);
  uVar34 = (undefined)((unkuint9)Var31 >> 0x20);
  bVar36 = (byte)((unkuint9)Var31 >> 0x40);
  if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar11 = auVar19._0_8_;
    Var24 = CONCAT18(bVar12 & 0x7f,
                     (ulong)(CONCAT14(uVar28,(uint)((byte)Var24 & 0x7f)) & 0x7f00ffffff));
    Var31 = CONCAT18(bVar36 & 0x7f,
                     (ulong)(CONCAT14(uVar34,(uint)((byte)Var31 & 0x7f)) & 0x7f00ffffff));
  }
  else {
    auVar19[6] = param_2[6];
    uVar11 = auVar19._0_8_;
    Var24 = CONCAT18(bVar12 & 0x7f,
                     (ulong)(CONCAT14(uVar28,(uint)((byte)Var24 & 0x7f)) & 0x7f00ffffff));
    Var31 = CONCAT18(bVar36 & 0x7f,
                     (ulong)(CONCAT14(uVar34,(uint)((byte)Var31 & 0x7f)) & 0x7f00ffffff));
  }
  if ((auVar14 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    uVar11 = (ulong)auVar19._0_7_;
  }
  bVar12 = (byte)(uVar11 >> 8);
  iVar30 = (int)Var31 * (CONCAT12(bVar12,(ushort)(byte)uVar11) & 0xffff);
  iVar35 = (int)((unkuint9)Var31 >> 0x20) * (uint)bVar12;
  iVar37 = (uint)(byte)((unkuint9)Var31 >> 0x40) * (uint)(byte)(uVar11 >> 0x10);
  iVar17 = (int)Var24 * (uint)(byte)(uVar11 >> 0x20);
  iVar20 = (int)((unkuint9)Var24 >> 0x20) * (uint)(byte)(uVar11 >> 0x28);
  iVar21 = (uint)(byte)((unkuint9)Var24 >> 0x40) * (uint)(byte)(uVar11 >> 0x30);
  uVar15 = (uint)CONCAT11((byte)((uint)iVar30 >> 8) & auVar22[1],(byte)iVar30 & auVar22[0]);
  uVar13 = (uint)CONCAT11((byte)((uint)iVar17 >> 8) & auVar16[1],(byte)iVar17 & auVar16[0]);
  return ((uVar1 - uVar15) - uVar13) +
         (-(uint)(ushort)(CONCAT15((byte)((uint)iVar20 >> 8) & auVar16[9],
                                   CONCAT14((byte)iVar20 & auVar16[8],uVar13)) >> 0x20) -
         (uint)(ushort)(CONCAT15((byte)((uint)iVar35 >> 8) & auVar22[9],
                                 CONCAT14((byte)iVar35 & auVar22[8],uVar15)) >> 0x20)) +
         (-(uint)CONCAT11((byte)((uint)iVar21 >> 8) & auVar14[1],(byte)iVar21 & auVar14[0]) -
         (uint)CONCAT11((byte)((uint)iVar37 >> 8) & auVar18[1],(byte)iVar37 & auVar18[0]));
}


