// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTransforms
// Entry Point: 00992f74
// Size: 684 bytes
// Signature: undefined __thiscall calculateTransforms(Bt2D6Joint * this, btTransform * param_1, btTransform * param_2)


/* Bt2D6Joint::calculateTransforms(btTransform const&, btTransform const&) */

void __thiscall
Bt2D6Joint::calculateTransforms(Bt2D6Joint *this,btTransform *param_1,btTransform *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  
  uVar1 = *(undefined4 *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(this + 0x58);
  fVar7 = *(float *)(this + 0x5c);
  uVar14 = *(undefined4 *)(param_1 + 0x10);
  fVar16 = *(float *)(param_1 + 0x14);
  uVar17 = *(undefined4 *)(param_1 + 0x20);
  fVar18 = *(float *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(this + 0x48);
  uVar5 = *(undefined4 *)(this + 0x4c);
  uVar19 = *(undefined4 *)(this + 0x68);
  uVar21 = *(undefined4 *)(this + 0x6c);
  uVar9 = NEON_fmadd(uVar4,uVar1,fVar6 * fVar2);
  uVar12 = NEON_fmadd(uVar5,uVar1,fVar2 * fVar7);
  uVar24 = NEON_fmadd(uVar5,uVar14,fVar7 * fVar16);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar5 = NEON_fmadd(uVar5,uVar17,fVar7 * fVar18);
  fVar7 = *(float *)(this + 0x60);
  uVar8 = *(undefined4 *)(this + 0x78);
  fVar28 = *(float *)(this + 0x7c);
  uVar10 = NEON_fmadd(uVar19,uVar3,uVar9);
  uVar23 = NEON_fmadd(uVar4,uVar14,fVar6 * fVar16);
  uVar4 = NEON_fmadd(uVar4,uVar17,fVar6 * fVar18);
  uVar11 = *(undefined4 *)(this + 0x50);
  uVar26 = *(undefined4 *)(param_1 + 0x18);
  uVar13 = NEON_fmadd(uVar21,uVar3,uVar12);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  uVar15 = NEON_fmadd(uVar11,uVar1,fVar2 * fVar7);
  uVar12 = NEON_fmadd(uVar11,uVar17,fVar7 * fVar18);
  uVar23 = NEON_fmadd(uVar19,uVar26,uVar23);
  uVar24 = NEON_fmadd(uVar21,uVar26,uVar24);
  uVar4 = NEON_fmadd(uVar19,uVar9,uVar4);
  uVar5 = NEON_fmadd(uVar21,uVar9,uVar5);
  uVar1 = NEON_fmadd(uVar8,uVar1,fVar2 * fVar28);
  fVar22 = *(float *)(param_1 + 0x38);
  fVar20 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x290) = uVar10;
  uVar10 = NEON_fmadd(uVar8,uVar14,fVar16 * fVar28);
  uVar8 = NEON_fmadd(uVar8,uVar17,fVar18 * fVar28);
  uVar17 = *(undefined4 *)(this + 0x70);
  uVar14 = NEON_fmadd(uVar11,uVar14,fVar7 * fVar16);
  uVar11 = *(undefined4 *)(this + 0x80);
  *(undefined4 *)(this + 0x294) = uVar13;
  uVar13 = NEON_fmadd(uVar17,uVar3,uVar15);
  uVar12 = NEON_fmadd(uVar17,uVar9,uVar12);
  fVar2 = (float)NEON_fmadd(uVar11,uVar3,uVar1);
  fVar7 = (float)NEON_fmadd(uVar11,uVar26,uVar10);
  fVar16 = (float)NEON_fmadd(uVar11,uVar9,uVar8);
  uVar1 = NEON_fmadd(uVar17,uVar26,uVar14);
  *(undefined4 *)(this + 0x29c) = 0;
  uVar27 = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(this + 0x298) = uVar13;
  fVar18 = *(float *)(this + 0xa0);
  *(undefined4 *)(this + 0x2a0) = uVar23;
  *(undefined4 *)(this + 0x2a4) = uVar24;
  uVar21 = *(undefined4 *)(this + 0x90);
  *(undefined4 *)(this + 0x2a8) = uVar1;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2b0) = uVar4;
  *(undefined4 *)(this + 0x2b4) = uVar5;
  *(undefined4 *)(this + 0x2b8) = uVar12;
  *(undefined4 *)(this + 700) = 0;
  *(float *)(this + 0x2c0) = fVar20 + fVar2;
  *(float *)(this + 0x2c4) = fVar7 + fVar6;
  *(float *)(this + 0x2c8) = fVar16 + fVar22;
  *(undefined4 *)(this + 0x2cc) = 0;
  uVar1 = *(undefined4 *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(this + 0x98);
  fVar7 = *(float *)(this + 0x9c);
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  fVar16 = *(float *)(param_2 + 0x14);
  uVar17 = *(undefined4 *)(param_2 + 0x20);
  fVar20 = *(float *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(this + 0x88);
  uVar4 = *(undefined4 *)(this + 0x8c);
  uVar11 = *(undefined4 *)(this + 0xa8);
  uVar13 = *(undefined4 *)(this + 0xac);
  uVar3 = NEON_fmadd(uVar8,uVar1,fVar6 * fVar2);
  uVar19 = NEON_fmadd(uVar4,uVar1,fVar2 * fVar7);
  uVar26 = NEON_fmadd(uVar4,uVar10,fVar7 * fVar16);
  uVar4 = NEON_fmadd(uVar4,uVar17,fVar7 * fVar20);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar12 = *(undefined4 *)(this + 0xb8);
  fVar7 = *(float *)(this + 0xbc);
  uVar14 = NEON_fmadd(uVar8,uVar10,fVar6 * fVar16);
  uVar5 = NEON_fmadd(uVar11,uVar9,uVar3);
  uVar23 = NEON_fmadd(uVar21,uVar1,fVar2 * fVar18);
  uVar3 = NEON_fmadd(uVar8,uVar17,fVar6 * fVar20);
  uVar24 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = NEON_fmadd(uVar21,uVar10,fVar18 * fVar16);
  uVar25 = *(undefined4 *)(param_2 + 0x28);
  uVar15 = NEON_fmadd(uVar11,uVar24,uVar14);
  uVar1 = NEON_fmadd(uVar12,uVar1,fVar2 * fVar7);
  uVar3 = NEON_fmadd(uVar11,uVar25,uVar3);
  uVar11 = NEON_fmadd(uVar13,uVar9,uVar19);
  uVar19 = NEON_fmadd(uVar27,uVar9,uVar23);
  uVar23 = NEON_fmadd(uVar13,uVar24,uVar26);
  uVar4 = NEON_fmadd(uVar13,uVar25,uVar4);
  uVar13 = NEON_fmadd(uVar21,uVar17,fVar18 * fVar20);
  fVar18 = *(float *)(param_2 + 0x30);
  fVar6 = *(float *)(param_2 + 0x34);
  fVar22 = *(float *)(param_2 + 0x38);
  *(undefined4 *)(this + 0x2d0) = uVar5;
  uVar5 = NEON_fmadd(uVar12,uVar10,fVar16 * fVar7);
  uVar12 = NEON_fmadd(uVar12,uVar17,fVar20 * fVar7);
  uVar14 = *(undefined4 *)(this + 0xc0);
  uVar8 = NEON_fmadd(uVar27,uVar24,uVar8);
  uVar10 = NEON_fmadd(uVar27,uVar25,uVar13);
  *(undefined4 *)(this + 0x2f0) = uVar3;
  *(undefined4 *)(this + 0x2d4) = uVar11;
  fVar2 = (float)NEON_fmadd(uVar14,uVar9,uVar1);
  fVar7 = (float)NEON_fmadd(uVar14,uVar24,uVar5);
  fVar16 = (float)NEON_fmadd(uVar14,uVar25,uVar12);
  *(undefined4 *)(this + 0x2d8) = uVar19;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e0) = uVar15;
  *(undefined4 *)(this + 0x2e4) = uVar23;
  *(undefined4 *)(this + 0x2e8) = uVar8;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f4) = uVar4;
  *(undefined4 *)(this + 0x2f8) = uVar10;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(float *)(this + 0x300) = fVar18 + fVar2;
  *(float *)(this + 0x304) = fVar7 + fVar6;
  *(float *)(this + 0x308) = fVar16 + fVar22;
  *(undefined4 *)(this + 0x30c) = 0;
  calculateLinearInfo();
  calculateAngleInfo();
  fVar6 = *(float *)(*(long *)(this + 0x30) + 0x19c);
  fVar7 = *(float *)(*(long *)(this + 0x28) + 0x19c) + fVar6;
  fVar2 = fVar6 / fVar7;
  this[0x368] = (Bt2D6Joint)
                (*(float *)(*(long *)(this + 0x28) + 0x19c) < 1.192093e-07 || fVar6 < 1.192093e-07);
  if (fVar7 <= 0.0) {
    fVar2 = 0.5;
  }
  *(float *)(this + 0x360) = fVar2;
  *(float *)(this + 0x364) = 1.0 - fVar2;
  return;
}


