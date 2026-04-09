// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSteering
// Entry Point: 0099f530
// Size: 436 bytes
// Signature: undefined updateSteering(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2WheelInfo::updateSteering() */

void Bt2WheelInfo::updateSteering(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float local_8;
  float fStack_4;
  
  fVar6 = *(float *)(in_x0 + 0xa4);
  fVar1 = *(float *)(in_x0 + 0xa8);
  fVar8 = *(float *)(in_x0 + 0xac);
  uVar3 = NEON_fmadd(fVar6,fVar6,fVar1 * fVar1);
  fVar4 = (float)NEON_fmadd(fVar8,fVar8,uVar3);
  sincosf(*(float *)(in_x0 + 0x158) * 0.5,&fStack_4,&local_8);
  fVar7 = *(float *)(in_x0 + 0xb8);
  fVar2 = *(float *)(in_x0 + 0xbc);
  fVar12 = *(float *)(in_x0 + 0x98);
  fVar10 = *(float *)(in_x0 + 0x9c);
  fVar5 = *(float *)(in_x0 + 0xb4);
  *(undefined4 *)(in_x0 + 0x128) = 0;
  fStack_4 = fStack_4 / SQRT(fVar4);
  fVar11 = *(float *)(in_x0 + 0x94);
  *(undefined4 *)(in_x0 + 0x118) = 0;
  *(undefined4 *)(in_x0 + 0x138) = 0;
  fVar9 = fStack_4 * -fVar1;
  fVar8 = fStack_4 * -fVar8;
  fVar6 = fStack_4 * -fVar6;
  fVar1 = -(fStack_4 * -fVar1);
  uVar13 = NEON_fmadd(local_8,fVar5,fVar2 * fVar9);
  uVar14 = NEON_fmadd(local_8,fVar11,fVar9 * fVar10);
  uVar16 = NEON_fmadd(local_8,fVar7,fVar5 * fVar8);
  uVar18 = NEON_fmadd(local_8,fVar12,fVar8 * fVar11);
  uVar21 = NEON_fmadd(local_8,fVar10,fVar6 * fVar12);
  uVar20 = NEON_fmadd(local_8,fVar2,fVar7 * fVar6);
  uVar22 = NEON_fmsub(fVar6,fVar5,fVar7 * fVar1);
  uVar3 = NEON_fmsub(fVar6,fVar11,fVar12 * fVar1);
  fVar4 = (float)NEON_fmsub(fVar8,fVar7,uVar13);
  fVar7 = (float)NEON_fmsub(fVar8,fVar12,uVar14);
  fVar15 = (float)NEON_fmsub(fVar6,fVar2,uVar16);
  fVar17 = (float)NEON_fmsub(fVar6,fVar10,uVar18);
  fVar19 = (float)NEON_fmsub(fVar9,fVar11,uVar21);
  fVar1 = (float)NEON_fmsub(fVar9,fVar5,uVar20);
  uVar13 = NEON_fmsub(fVar8,fVar2,uVar22);
  uVar3 = NEON_fmsub(fVar8,fVar10,uVar3);
  uVar14 = NEON_fmsub(uVar13,fVar6,local_8 * fVar4);
  uVar16 = NEON_fmsub(uVar3,fVar6,local_8 * fVar7);
  uVar18 = NEON_fmsub(uVar13,fVar9,local_8 * fVar15);
  uVar20 = NEON_fmsub(uVar3,fVar9,local_8 * fVar17);
  uVar3 = NEON_fmsub(uVar3,fVar8,local_8 * fVar19);
  uVar13 = NEON_fmsub(uVar13,fVar8,local_8 * fVar1);
  uVar14 = NEON_fmsub(fVar15,fVar8,uVar14);
  uVar16 = NEON_fmsub(fVar17,fVar8,uVar16);
  uVar18 = NEON_fmsub(fVar1,fVar6,uVar18);
  uVar20 = NEON_fmsub(fVar19,fVar6,uVar20);
  uVar3 = NEON_fmsub(fVar7,fVar9,uVar3);
  uVar13 = NEON_fmsub(fVar4,fVar9,uVar13);
  uVar14 = NEON_fmadd(fVar1,fVar9,uVar14);
  fVar5 = (float)NEON_fmadd(fVar19,fVar9,uVar16);
  fVar2 = (float)NEON_fmadd(fVar7,fVar8,uVar20);
  uVar16 = NEON_fmadd(fVar4,fVar8,uVar18);
  fVar1 = (float)NEON_fmadd(fVar17,fVar6,uVar3);
  uVar3 = NEON_fmadd(fVar15,fVar6,uVar13);
  *(undefined4 *)(in_x0 + 0x11c) = uVar14;
  *(undefined4 *)(in_x0 + 0x120) = uVar16;
  *(undefined4 *)(in_x0 + 0x124) = uVar3;
  *(float *)(in_x0 + 0x10c) = *(float *)(in_x0 + 0x84) + (fVar5 - fVar11);
  *(float *)(in_x0 + 0x110) = *(float *)(in_x0 + 0x88) + (fVar2 - fVar12);
  *(float *)(in_x0 + 0x114) = *(float *)(in_x0 + 0x8c) + (fVar1 - fVar10);
  *(float *)(in_x0 + 300) = (fVar5 - fVar11) + *(float *)(in_x0 + 0xc4);
  *(float *)(in_x0 + 0x130) = (fVar2 - fVar12) + *(float *)(in_x0 + 200);
  *(float *)(in_x0 + 0x134) = (fVar1 - fVar10) + *(float *)(in_x0 + 0xcc);
  return;
}


