// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeGyroscopicImpulseImplicit_World
// Entry Point: 00f40954
// Size: 596 bytes
// Signature: undefined __thiscall computeGyroscopicImpulseImplicit_World(btRigidBody * this, float param_1)


/* btRigidBody::computeGyroscopicImpulseImplicit_World(float) const */

float __thiscall
btRigidBody::computeGyroscopicImpulseImplicit_World(btRigidBody *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  
  fVar1 = *(float *)(this + 0x1d0);
  fVar5 = *(float *)(this + 0x1d4);
  fVar7 = *(float *)(this + 0x1d8);
  fVar17 = *(float *)(this + 0x28);
  fVar22 = *(float *)(this + 0x2c);
  fVar12 = *(float *)(this + 0x10);
  fVar21 = *(float *)(this + 0x20);
  fVar25 = *(float *)(this + 0x30);
  fVar4 = *(float *)(this + 0x194);
  fVar10 = 1.0 / fVar1;
  if (fVar1 == 0.0) {
    fVar10 = fVar1;
  }
  fVar3 = *(float *)(this + 400);
  fVar2 = *(float *)(this + 0x18c);
  fVar1 = 1.0 / fVar5;
  if (fVar5 == 0.0) {
    fVar1 = fVar5;
  }
  fVar6 = *(float *)(this + 8);
  fVar11 = *(float *)(this + 0xc);
  fVar13 = fVar6 * fVar10;
  fVar16 = fVar11 * fVar1;
  fVar5 = 1.0 / fVar7;
  if (fVar7 == 0.0) {
    fVar5 = fVar7;
  }
  fVar15 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x1c);
  uVar29 = NEON_fmadd(fVar16,fVar11,fVar13 * fVar6);
  fVar7 = fVar12 * fVar5;
  fVar8 = fVar21 * fVar5;
  fVar19 = fVar15 * fVar10;
  fVar27 = fVar9 * fVar1;
  fVar10 = fVar17 * fVar10;
  fVar1 = fVar22 * fVar1;
  fVar5 = fVar25 * fVar5;
  uVar23 = NEON_fmadd(fVar9,fVar16,fVar15 * fVar13);
  uVar14 = NEON_fmadd(fVar22,fVar16,fVar17 * fVar13);
  uVar30 = NEON_fmadd(fVar27,fVar11,fVar19 * fVar6);
  fVar16 = (float)NEON_fmadd(fVar21,fVar7,uVar23);
  uVar18 = NEON_fmadd(fVar27,fVar9,fVar19 * fVar15);
  uVar24 = NEON_fmadd(fVar7,fVar12,uVar29);
  fVar13 = (float)NEON_fmadd(fVar25,fVar7,uVar14);
  uVar20 = NEON_fmadd(fVar22,fVar27,fVar17 * fVar19);
  uVar23 = NEON_fmadd(fVar1,fVar11,fVar10 * fVar6);
  uVar29 = NEON_fmadd(fVar1,fVar9,fVar10 * fVar15);
  fVar9 = (float)NEON_fmadd(fVar8,fVar12,uVar30);
  uVar30 = NEON_fmadd(fVar8,fVar21,uVar18);
  uVar14 = NEON_fmadd(fVar1,fVar22,fVar10 * fVar17);
  uVar18 = NEON_fmadd(fVar25,fVar8,uVar20);
  fVar10 = (float)NEON_fmadd(fVar5,fVar12,uVar23);
  fVar1 = (float)NEON_fmadd(fVar5,fVar21,uVar29);
  fVar8 = (float)NEON_fmadd(uVar24,fVar2,fVar16 * fVar3);
  uVar14 = NEON_fmadd(fVar5,fVar25,uVar14);
  uVar23 = NEON_fmadd(uVar30,fVar3,fVar9 * fVar2);
  fVar8 = fVar8 + fVar13 * fVar4;
  fVar5 = (float)NEON_fmsub(uVar24,fVar3,fVar9 * fVar2);
  fVar25 = (float)NEON_fmadd(uVar18,fVar4,uVar23);
  fVar12 = (float)NEON_fmsub(uVar30,fVar4,fVar1 * fVar3);
  uVar26 = NEON_fnmsub(fVar16,fVar4,fVar1 * fVar2);
  uVar28 = NEON_fnmsub(uVar18,fVar2,fVar13 * fVar3);
  uVar23 = NEON_fmadd(uVar18,fVar4,fVar25);
  uVar29 = NEON_fmsub(uVar14,fVar2,fVar8 + fVar13 * fVar4);
  uVar20 = NEON_fnmsub(uVar30,fVar2,fVar16 * fVar3 + fVar8);
  fVar15 = (float)NEON_fmadd(uVar14,fVar4,fVar1 * fVar3 + fVar10 * fVar2);
  fVar22 = (float)NEON_fmadd(uVar26,param_1,uVar30);
  uVar23 = NEON_fnmsub(uVar14,fVar3,uVar23);
  fVar21 = (float)NEON_fmadd(uVar29,param_1,uVar18);
  fVar17 = (float)NEON_fmadd(uVar20,param_1,fVar1);
  uVar29 = NEON_fnmsub(fVar10,fVar3,fVar9 * fVar4);
  fVar7 = (float)NEON_fmadd(uVar28,param_1,uVar14);
  fVar6 = (float)NEON_fmadd(uVar23,param_1,fVar13);
  fVar13 = (float)NEON_fmadd(uVar29,param_1,uVar24);
  fVar11 = (float)NEON_fmadd(fVar12 + fVar15,param_1,fVar16);
  fVar12 = (float)NEON_fmadd(fVar5 + fVar25,param_1,fVar10);
  uVar14 = NEON_fnmsub(uVar24,fVar4,fVar10 * fVar2 + fVar15);
  fVar1 = (float)NEON_fnmsub(fVar15,fVar3,fVar25 * fVar4);
  fVar5 = (float)NEON_fnmsub(fVar8,fVar4,fVar15 * fVar2);
  fVar16 = (float)NEON_fnmsub(fVar22,fVar7,fVar21 * fVar17);
  fVar10 = (float)NEON_fnmsub(fVar25,fVar2,fVar8 * fVar3);
  uVar18 = NEON_fmadd(uVar14,param_1,fVar9);
  fVar1 = fVar1 * param_1;
  uVar20 = NEON_fnmsub(fVar11,fVar21,fVar6 * fVar22);
  fVar5 = fVar5 * param_1;
  fVar10 = fVar10 * param_1;
  uVar14 = NEON_fnmsub(fVar6,fVar17,fVar11 * fVar7);
  uVar23 = NEON_fmadd(uVar20,fVar12,fVar16 * fVar13);
  fVar25 = (float)NEON_fnmsub(fVar1,fVar22,fVar5 * fVar11);
  fVar4 = (float)NEON_fmadd(uVar14,uVar18,uVar23);
  uVar30 = NEON_fnmsub(fVar21,fVar10,fVar5 * fVar7);
  uVar29 = NEON_fnmsub(fVar5,fVar17,fVar10 * fVar22);
  fVar21 = (float)NEON_fnmsub(fVar5,fVar6,fVar1 * fVar21);
  fVar5 = (float)NEON_fmadd(uVar14,fVar5,fVar16 * fVar1);
  uVar14 = NEON_fnmsub(fVar1,fVar7,fVar6 * fVar10);
  uVar23 = NEON_fnmsub(fVar11,fVar10,fVar1 * fVar17);
  fVar1 = (float)NEON_fnmadd(uVar20,fVar10,-fVar5);
  uVar30 = NEON_fmadd(uVar30,fVar13,fVar21 * fVar12);
  uVar29 = NEON_fmadd(uVar29,fVar13,fVar25 * fVar12);
  fVar10 = 1.0 / fVar4;
  if (ABS(fVar4) <= 1.192093e-07) {
    fVar10 = fVar4;
  }
  NEON_fmadd(uVar14,uVar18,uVar30);
  NEON_fmadd(uVar23,uVar18,uVar29);
  return fVar10 * fVar1;
}


