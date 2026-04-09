// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0fb1c
// Entry Point: 00f0fb1c
// Size: 900 bytes
// Signature: undefined FUN_00f0fb1c(void)


undefined8 FUN_00f0fb1c(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  
  dVar12 = (double)luaL_checknumber(param_1,1);
  dVar13 = (double)luaL_optnumber(param_1,2,0.0);
  dVar14 = (double)luaL_optnumber(param_1,3,0.0);
  fVar16 = (float)dVar12 - (float)(int)dVar12;
  fVar15 = (float)dVar13 - (float)(int)dVar13;
  lVar1 = ((ulong)(uint)(int)dVar13 & 0xff) + (ulong)(byte)(&DAT_0056f6f7)[(byte)(int)dVar12];
  fVar22 = fVar15 + -1.0;
  fVar10 = (float)dVar14 - (float)(int)dVar14;
  fVar18 = fVar16 + -1.0;
  uVar9 = (ulong)(uint)(int)dVar14 & 0xff;
  fVar25 = fVar10 + -1.0;
  lVar2 = ((ulong)(uint)(int)dVar13 & 0xff) + (ulong)(byte)(&DAT_0056f6f8)[(byte)(int)dVar12];
  bVar3 = (&DAT_0056f6f7)[uVar9 + (byte)(&DAT_0056f6f7)[lVar1]];
  bVar4 = (&DAT_0056f6f8)[uVar9 + (byte)(&DAT_0056f6f7)[lVar1]];
  fVar11 = fVar16;
  if (7 < (bVar3 & 0xf)) {
    fVar11 = fVar15;
  }
  fVar19 = fVar16;
  if ((bVar3 & 0xd) != 0xc) {
    fVar19 = fVar10;
  }
  fVar17 = fVar15;
  if (3 < (bVar3 & 0xf)) {
    fVar17 = fVar19;
  }
  bVar5 = (&DAT_0056f6f7)[uVar9 + (byte)(&DAT_0056f6f7)[lVar2]];
  if ((bVar3 & 1) != 0) {
    fVar11 = -fVar11;
  }
  bVar6 = (&DAT_0056f6f8)[uVar9 + (byte)(&DAT_0056f6f7)[lVar2]];
  if ((bVar3 & 2) != 0) {
    fVar17 = -fVar17;
  }
  fVar19 = fVar18;
  if (7 < (bVar5 & 0xf)) {
    fVar19 = fVar15;
  }
  fVar20 = fVar18;
  if ((bVar5 & 0xd) != 0xc) {
    fVar20 = fVar10;
  }
  fVar21 = fVar15;
  if (3 < (bVar5 & 0xf)) {
    fVar21 = fVar20;
  }
  bVar3 = (&DAT_0056f6f7)[uVar9 + (byte)(&DAT_0056f6f8)[lVar1]];
  bVar7 = (&DAT_0056f6f7)[uVar9 + (byte)(&DAT_0056f6f8)[lVar2]];
  bVar8 = (&DAT_0056f6f8)[uVar9 + (byte)(&DAT_0056f6f8)[lVar2]];
  if ((bVar5 & 1) != 0) {
    fVar19 = -fVar19;
  }
  if ((bVar5 & 2) != 0) {
    fVar21 = -fVar21;
  }
  fVar20 = fVar16;
  if (7 < (bVar3 & 0xf)) {
    fVar20 = fVar22;
  }
  fVar23 = fVar16;
  if ((bVar3 & 0xd) != 0xc) {
    fVar23 = fVar10;
  }
  fVar24 = fVar22;
  if (3 < (bVar3 & 0xf)) {
    fVar24 = fVar23;
  }
  if ((bVar3 & 1) != 0) {
    fVar20 = -fVar20;
  }
  if ((bVar3 & 2) != 0) {
    fVar24 = -fVar24;
  }
  fVar23 = fVar18;
  if (7 < (bVar7 & 0xf)) {
    fVar23 = fVar22;
  }
  fVar26 = fVar18;
  if ((bVar7 & 0xd) != 0xc) {
    fVar26 = fVar10;
  }
  fVar27 = fVar22;
  if (3 < (bVar7 & 0xf)) {
    fVar27 = fVar26;
  }
  if ((bVar7 & 1) != 0) {
    fVar23 = -fVar23;
  }
  if ((bVar7 & 2) != 0) {
    fVar27 = -fVar27;
  }
  fVar26 = fVar16;
  if (7 < (bVar4 & 0xf)) {
    fVar26 = fVar15;
  }
  fVar29 = fVar16;
  if ((bVar4 & 0xd) != 0xc) {
    fVar29 = fVar25;
  }
  fVar30 = fVar15;
  if (3 < (bVar4 & 0xf)) {
    fVar30 = fVar29;
  }
  if ((bVar4 & 1) != 0) {
    fVar26 = -fVar26;
  }
  bVar3 = (&DAT_0056f6f8)[uVar9 + (byte)(&DAT_0056f6f8)[lVar1]];
  if ((bVar4 & 2) != 0) {
    fVar30 = -fVar30;
  }
  fVar29 = fVar18;
  if (7 < (bVar6 & 0xf)) {
    fVar29 = fVar15;
  }
  fVar31 = fVar18;
  if ((bVar6 & 0xd) != 0xc) {
    fVar31 = fVar25;
  }
  fVar32 = fVar15;
  if (3 < (bVar6 & 0xf)) {
    fVar32 = fVar31;
  }
  if ((bVar6 & 1) != 0) {
    fVar29 = -fVar29;
  }
  if ((bVar6 & 2) != 0) {
    fVar32 = -fVar32;
  }
  fVar31 = fVar16;
  if (7 < (bVar3 & 0xf)) {
    fVar31 = fVar22;
  }
  fVar33 = fVar16;
  if ((bVar3 & 0xd) != 0xc) {
    fVar33 = fVar25;
  }
  fVar34 = fVar22;
  if (3 < (bVar3 & 0xf)) {
    fVar34 = fVar33;
  }
  if ((bVar3 & 1) != 0) {
    fVar31 = -fVar31;
  }
  if ((bVar3 & 2) != 0) {
    fVar34 = -fVar34;
  }
  fVar33 = fVar18;
  if (7 < (bVar8 & 0xf)) {
    fVar33 = fVar22;
  }
  if ((bVar8 & 0xd) != 0xc) {
    fVar18 = fVar25;
  }
  if (3 < (bVar8 & 0xf)) {
    fVar22 = fVar18;
  }
  if ((bVar8 & 1) != 0) {
    fVar33 = -fVar33;
  }
  uVar35 = NEON_fmadd(fVar16,0x40c00000,0xc1700000);
  uVar28 = NEON_fmadd(fVar15,0x40c00000,0xc1700000);
  if ((bVar8 & 2) != 0) {
    fVar22 = -fVar22;
  }
  fVar25 = (float)NEON_fmadd(fVar16,uVar35,0x41200000);
  fVar18 = (float)NEON_fmadd(fVar15,uVar28,0x41200000);
  fVar25 = fVar16 * fVar16 * fVar16 * fVar25;
  fVar18 = fVar15 * fVar15 * fVar15 * fVar18;
  fVar15 = (float)NEON_fmadd(fVar25,(fVar19 + fVar21) - (fVar11 + fVar17),fVar11 + fVar17);
  fVar16 = (float)NEON_fmadd(fVar25,(fVar23 + fVar27) - (fVar20 + fVar24),fVar20 + fVar24);
  fVar19 = (float)NEON_fmadd(fVar25,(fVar29 + fVar32) - (fVar26 + fVar30),fVar26 + fVar30);
  uVar28 = NEON_fmadd(fVar10,0x40c00000,0xc1700000);
  fVar22 = (float)NEON_fmadd(fVar25,(fVar33 + fVar22) - (fVar31 + fVar34),fVar31 + fVar34);
  fVar11 = (float)NEON_fmadd(fVar10,uVar28,0x41200000);
  fVar15 = (float)NEON_fmadd(fVar18,fVar16 - fVar15,fVar15);
  fVar22 = (float)NEON_fmadd(fVar18,fVar22 - fVar19,fVar19);
  fVar11 = (float)NEON_fmadd(fVar10 * fVar10 * fVar10 * fVar11,fVar22 - fVar15,fVar15);
  lua_pushnumber(param_1,(double)fVar11);
  return 1;
}


