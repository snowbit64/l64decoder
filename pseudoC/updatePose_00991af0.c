// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePose
// Entry Point: 00991af0
// Size: 584 bytes
// Signature: undefined updatePose(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsJointObject::updatePose() */

void Bt2PhysicsJointObject::updatePose(void)

{
  long in_x0;
  long lVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  lVar1 = *(long *)(in_x0 + 0x28);
  lVar4 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(lVar4 + 0xe0) & 1) == 0) {
    lVar4 = *(long *)(lVar1 + 0x30);
    puVar3 = (undefined4 *)(lVar1 + 0x88);
  }
  else {
    puVar3 = (undefined4 *)(lVar1 + 0x48);
  }
  pbVar2 = *(byte **)(lVar4 + 0x108);
  lVar1 = btTypedConstraint::getFixedBody();
  uVar11 = 0;
  uVar9 = 0x3f800000;
  if (pbVar2 == (byte *)0x0 || lVar4 == lVar1) {
    fVar6 = 0.0;
    uVar7 = 0;
    uVar22 = 0;
    uVar24 = 0;
    fVar16 = 0.0;
    fVar15 = 0.0;
    uVar21 = 0;
    uVar19 = 0;
    fVar13 = 1.0;
    uVar17 = 0x3f800000;
    uVar9 = 0x3f800000;
  }
  else {
    fVar6 = 0.0;
    uVar7 = 0;
    uVar22 = 0;
    uVar24 = 0;
    fVar16 = 0.0;
    fVar15 = 0.0;
    uVar21 = 0;
    uVar19 = 0;
    fVar13 = 1.0;
    uVar17 = 0x3f800000;
    if ((*pbVar2 & 1) != 0) {
      lVar1 = *(long *)(pbVar2 + 8);
      RawTransformGroup::updateWorldTransformation();
      uVar9 = *(undefined4 *)(lVar1 + 0xb8);
      fVar15 = *(float *)(lVar1 + 0xbc);
      uVar19 = *(undefined4 *)(lVar1 + 200);
      fVar13 = *(float *)(lVar1 + 0xcc);
      uVar21 = *(undefined4 *)(lVar1 + 0xd8);
      fVar16 = *(float *)(lVar1 + 0xdc);
      uVar7 = *(undefined4 *)(lVar1 + 0xe8);
      fVar6 = *(float *)(lVar1 + 0xec);
      uVar24 = *(undefined4 *)(lVar1 + 0xc0);
      uVar22 = *(undefined4 *)(lVar1 + 0xd0);
      uVar17 = *(undefined4 *)(lVar1 + 0xe0);
      uVar11 = *(undefined4 *)(lVar1 + 0xf0);
    }
  }
  lVar1 = *(long *)(in_x0 + 0x20);
  RawTransformGroup::updateWorldTransformation();
  uVar5 = *(undefined4 *)(lVar1 + 0xb8);
  fVar8 = *(float *)(lVar1 + 0xbc);
  uVar10 = *(undefined4 *)(lVar1 + 200);
  fVar12 = *(float *)(lVar1 + 0xcc);
  uVar14 = *(undefined4 *)(lVar1 + 0xd8);
  fVar18 = *(float *)(lVar1 + 0xdc);
  fVar6 = -fVar6;
  uVar28 = *(undefined4 *)(lVar1 + 0xe8);
  fVar29 = *(float *)(lVar1 + 0xec);
  uVar26 = NEON_fmadd(uVar5,uVar9,fVar15 * fVar8);
  uVar31 = NEON_fmadd(uVar5,uVar19,fVar13 * fVar8);
  uVar33 = NEON_fmadd(uVar10,uVar19,fVar13 * fVar12);
  uVar35 = NEON_fmadd(uVar14,uVar19,fVar13 * fVar18);
  uVar5 = NEON_fmadd(uVar5,uVar21,fVar16 * fVar8);
  uVar20 = *(undefined4 *)(lVar1 + 0xc0);
  uVar23 = *(undefined4 *)(lVar1 + 0xd0);
  uVar25 = *(undefined4 *)(lVar1 + 0xe0);
  uVar30 = NEON_fmadd(uVar10,uVar9,fVar15 * fVar12);
  uVar27 = NEON_fmadd(uVar20,uVar24,uVar26);
  uVar10 = NEON_fmadd(uVar10,uVar21,fVar16 * fVar12);
  uVar32 = NEON_fmadd(uVar20,uVar22,uVar31);
  uVar26 = NEON_fmadd(uVar23,uVar22,uVar33);
  uVar34 = NEON_fmadd(uVar25,uVar22,uVar35);
  uVar5 = NEON_fmadd(uVar20,uVar17,uVar5);
  uVar31 = NEON_fmsub(uVar9,uVar7,fVar15 * fVar6);
  uVar33 = NEON_fmsub(uVar19,uVar7,fVar13 * fVar6);
  uVar7 = NEON_fmsub(uVar21,uVar7,fVar16 * fVar6);
  uVar35 = NEON_fmadd(uVar14,uVar9,fVar15 * fVar18);
  uVar14 = NEON_fmadd(uVar14,uVar21,fVar16 * fVar18);
  uVar20 = NEON_fmadd(uVar28,uVar9,fVar15 * fVar29);
  uVar19 = NEON_fmadd(uVar28,uVar19,fVar13 * fVar29);
  uVar21 = NEON_fmadd(uVar28,uVar21,fVar16 * fVar29);
  uVar28 = *(undefined4 *)(lVar1 + 0xf0);
  fVar16 = (float)NEON_fmsub(uVar24,uVar11,uVar31);
  fVar12 = (float)NEON_fmsub(uVar22,uVar11,uVar33);
  fVar6 = (float)NEON_fmsub(uVar17,uVar11,uVar7);
  uVar9 = NEON_fmadd(uVar23,uVar17,uVar10);
  puVar3[4] = uVar32;
  puVar3[5] = uVar26;
  fVar15 = (float)NEON_fmadd(uVar28,uVar24,uVar20);
  fVar8 = (float)NEON_fmadd(uVar28,uVar22,uVar19);
  fVar13 = (float)NEON_fmadd(uVar28,uVar17,uVar21);
  uVar21 = NEON_fmadd(uVar23,uVar24,uVar30);
  uVar7 = NEON_fmadd(uVar25,uVar24,uVar35);
  uVar11 = NEON_fmadd(uVar25,uVar17,uVar14);
  puVar3[8] = uVar5;
  puVar3[9] = uVar9;
  *puVar3 = uVar27;
  puVar3[1] = uVar21;
  puVar3[2] = uVar7;
  puVar3[3] = 0;
  puVar3[6] = uVar34;
  puVar3[7] = 0;
  puVar3[10] = uVar11;
  puVar3[0xb] = 0;
  puVar3[0xc] = fVar16 + fVar15;
  puVar3[0xd] = fVar12 + fVar8;
  puVar3[0xe] = fVar6 + fVar13;
  puVar3[0xf] = 0;
  *(undefined *)(in_x0 + 0x30) = 0;
  return;
}


