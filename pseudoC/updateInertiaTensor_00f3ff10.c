// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInertiaTensor
// Entry Point: 00f3ff10
// Size: 232 bytes
// Signature: undefined updateInertiaTensor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btRigidBody::updateInertiaTensor() */

void btRigidBody::updateInertiaTensor(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  fVar2 = *(float *)(in_x0 + 8);
  fVar4 = *(float *)(in_x0 + 0xc);
  fVar1 = *(float *)(in_x0 + 0x1d0);
  *(undefined4 *)(in_x0 + 0x158) = 0;
  fVar8 = *(float *)(in_x0 + 0x18);
  fVar10 = *(float *)(in_x0 + 0x1c);
  fVar14 = *(float *)(in_x0 + 0x28);
  fVar21 = *(float *)(in_x0 + 0x2c);
  fVar11 = fVar1 * fVar2;
  fVar6 = *(float *)(in_x0 + 0x1d4);
  fVar7 = *(float *)(in_x0 + 0x10);
  *(undefined4 *)(in_x0 + 0x168) = 0;
  fVar16 = fVar8 * fVar1;
  fVar18 = *(float *)(in_x0 + 0x1d8);
  fVar13 = fVar6 * fVar4;
  fVar1 = fVar14 * fVar1;
  fVar19 = fVar10 * fVar6;
  fVar15 = fVar18 * fVar7;
  uVar12 = NEON_fmadd(fVar21,fVar13,fVar14 * fVar11);
  fVar6 = fVar21 * fVar6;
  fVar22 = *(float *)(in_x0 + 0x20);
  fVar26 = *(float *)(in_x0 + 0x30);
  uVar23 = NEON_fmadd(fVar13,fVar4,fVar11 * fVar2);
  uVar25 = NEON_fmadd(fVar10,fVar13,fVar8 * fVar11);
  uVar27 = NEON_fmadd(fVar19,fVar4,fVar16 * fVar2);
  fVar11 = fVar22 * fVar18;
  uVar28 = NEON_fmadd(fVar19,fVar10,fVar16 * fVar8);
  fVar18 = fVar26 * fVar18;
  uVar17 = NEON_fmadd(fVar21,fVar19,fVar14 * fVar16);
  uVar3 = NEON_fmadd(fVar6,fVar4,fVar1 * fVar2);
  uVar5 = NEON_fmadd(fVar26,fVar15,uVar12);
  uVar9 = NEON_fmadd(fVar6,fVar10,fVar1 * fVar8);
  uVar12 = NEON_fmadd(fVar6,fVar21,fVar1 * fVar14);
  uVar24 = NEON_fmadd(fVar15,fVar7,uVar23);
  uVar20 = NEON_fmadd(fVar22,fVar15,uVar25);
  uVar23 = NEON_fmadd(fVar11,fVar7,uVar27);
  uVar25 = NEON_fmadd(fVar11,fVar22,uVar28);
  uVar17 = NEON_fmadd(fVar26,fVar11,uVar17);
  *(undefined4 *)(in_x0 + 0x154) = uVar5;
  uVar3 = NEON_fmadd(fVar18,fVar7,uVar3);
  uVar5 = NEON_fmadd(fVar18,fVar22,uVar9);
  uVar12 = NEON_fmadd(fVar18,fVar26,uVar12);
  *(undefined4 *)(in_x0 + 0x14c) = uVar24;
  *(undefined4 *)(in_x0 + 0x150) = uVar20;
  *(undefined4 *)(in_x0 + 0x15c) = uVar23;
  *(undefined4 *)(in_x0 + 0x160) = uVar25;
  *(undefined4 *)(in_x0 + 0x164) = uVar17;
  *(undefined4 *)(in_x0 + 0x16c) = uVar3;
  *(undefined4 *)(in_x0 + 0x170) = uVar5;
  *(undefined4 *)(in_x0 + 0x174) = uVar12;
  *(undefined4 *)(in_x0 + 0x178) = 0;
  return;
}


