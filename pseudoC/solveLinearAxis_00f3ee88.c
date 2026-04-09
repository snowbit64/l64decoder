// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveLinearAxis
// Entry Point: 00f3ee88
// Size: 816 bytes
// Signature: undefined __thiscall solveLinearAxis(btTranslationalLimitMotor * this, float param_1, float param_2, btRigidBody * param_3, btVector3 * param_4, btRigidBody * param_5, btVector3 * param_6, int param_7, btVector3 * param_8, btVector3 * param_9)


/* btTranslationalLimitMotor::solveLinearAxis(float, float, btRigidBody&, btVector3 const&,
   btRigidBody&, btVector3 const&, int, btVector3 const&, btVector3 const&) */

float __thiscall
btTranslationalLimitMotor::solveLinearAxis
          (btTranslationalLimitMotor *this,float param_1,float param_2,btRigidBody *param_3,
          btVector3 *param_4,btRigidBody *param_5,btVector3 *param_6,int param_7,btVector3 *param_8,
          btVector3 *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  
  fVar10 = *(float *)(this + (long)param_7 * 4);
  fVar2 = (float)*(undefined8 *)(param_8 + 4);
  fVar3 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
  fVar23 = (float)NEON_fnmadd(*(float *)param_4 - *(float *)param_6,*(float *)param_8,
                              -(((float)*(undefined8 *)(param_4 + 4) -
                                (float)*(undefined8 *)(param_6 + 4)) * fVar2));
  fVar1 = *(float *)((long)(this + (long)param_7 * 4) + 0x10);
  fVar23 = fVar23 - ((float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20)) * fVar3;
  if (fVar1 <= fVar10) {
    fVar10 = -1e+18;
    fVar1 = 1e+18;
  }
  else if (fVar23 <= fVar1) {
    if (fVar10 <= fVar23) {
      return 0.0;
    }
    fVar23 = fVar23 - fVar10;
    fVar10 = -1e+18;
    fVar1 = 0.0;
  }
  else {
    fVar23 = fVar23 - fVar1;
    fVar1 = 1e+18;
    fVar10 = 0.0;
  }
  fVar11 = *(float *)(param_9 + 4) - *(float *)(param_3 + 0x3c);
  fVar14 = *(float *)(param_9 + 8) - *(float *)(param_3 + 0x40);
  fVar9 = *(float *)param_9 - *(float *)(param_3 + 0x38);
  fVar4 = *(float *)(param_9 + 4) - *(float *)(param_5 + 0x3c);
  fVar6 = *(float *)(param_9 + 8) - *(float *)(param_5 + 0x40);
  fVar5 = *(float *)param_9 - *(float *)(param_5 + 0x38);
  uVar19 = NEON_fmadd(*(undefined4 *)(param_3 + 400),fVar14,*(undefined4 *)(param_3 + 0x17c));
  uVar21 = NEON_fmadd(*(undefined4 *)(param_3 + 0x194),fVar11,*(undefined4 *)(param_5 + 0x17c));
  uVar15 = NEON_fmadd(*(undefined4 *)(param_3 + 0x194),fVar9,*(undefined4 *)(param_3 + 0x180));
  uVar18 = NEON_fmadd(*(undefined4 *)(param_3 + 0x18c),fVar14,*(undefined4 *)(param_5 + 0x180));
  uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x18c),fVar11,*(undefined4 *)(param_3 + 0x184));
  uVar7 = NEON_fmadd(*(undefined4 *)(param_3 + 400),fVar9,*(undefined4 *)(param_5 + 0x184));
  fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x194),fVar4,uVar19);
  fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 400),fVar6,uVar21);
  fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x18c),fVar6,uVar15);
  fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x194),fVar5,uVar18);
  fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 400),fVar5,uVar12);
  fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x18c),fVar4,uVar7);
  uVar7 = NEON_fmsub(*(undefined4 *)(this + 0x34),
                     (fVar20 - fVar22) * *(float *)param_8 + (fVar16 - fVar17) * fVar2 +
                     (fVar13 - fVar8) * fVar3,(*(float *)(this + 0x38) * fVar23) / param_1);
  fVar23 = *(float *)(this + (long)param_7 * 4 + 0x20);
  fVar3 = (float)NEON_fmadd(*(float *)(this + 0x30) * param_2,uVar7,fVar23);
  fVar2 = 0.0;
  if (fVar10 <= fVar3 && fVar3 == fVar1 || fVar10 <= fVar3 && fVar3 < fVar1) {
    fVar2 = fVar3;
  }
  *(float *)(this + (long)param_7 * 4 + 0x20) = fVar2;
  fVar2 = fVar2 - fVar23;
  fVar23 = *(float *)(param_3 + 0x19c);
  fVar10 = (float)*(undefined8 *)param_8 * fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)param_8 >> 0x20) * fVar2;
  fVar1 = fVar2 * *(float *)(param_8 + 8);
  if (fVar23 != 0.0) {
    fVar13 = (float)*(undefined8 *)(param_3 + 0x1a0);
    fVar8 = fVar13 * fVar10;
    fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x1a0) >> 0x20);
    fVar17 = fVar16 * fVar3;
    fVar20 = *(float *)(param_3 + 0x1a8) * fVar1;
    fVar22 = (float)NEON_fnmsub(fVar20,fVar11,fVar14 * fVar17);
    fVar14 = -(fVar9 * fVar20) + fVar14 * fVar8;
    fVar8 = -(fVar11 * fVar8) + fVar9 * fVar17;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_3 + 0x170),fVar14,*(float *)(param_3 + 0x16c) * fVar22)
    ;
    uVar12 = NEON_fmadd(*(undefined4 *)(param_3 + 0x174),fVar8,uVar7);
    uVar7 = NEON_fmadd(fVar1 * fVar23,*(float *)(param_3 + 0x1a8),*(undefined4 *)(param_3 + 0x184));
    *(undefined4 *)(param_3 + 0x184) = uVar7;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_3 + 0x280),uVar12,*(undefined4 *)(param_3 + 0x194));
    *(ulong *)(param_3 + 0x17c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x17c) >> 0x20) + fVar16 * fVar3 * fVar23
                  ,(float)*(undefined8 *)(param_3 + 0x17c) + fVar13 * fVar10 * fVar23);
    *(ulong *)(param_3 + 0x18c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18c) >> 0x20) +
                  (*(float *)(param_3 + 0x15c) * fVar22 + *(float *)(param_3 + 0x160) * fVar14 +
                  *(float *)(param_3 + 0x164) * fVar8) *
                  (float)((ulong)*(undefined8 *)(param_3 + 0x278) >> 0x20),
                  (float)*(undefined8 *)(param_3 + 0x18c) +
                  ((float)*(undefined8 *)(param_3 + 0x14c) * fVar22 +
                   (float)*(undefined8 *)(param_3 + 0x150) * fVar14 +
                  (float)*(undefined8 *)(param_3 + 0x154) * fVar8) *
                  (float)*(undefined8 *)(param_3 + 0x278));
    *(undefined4 *)(param_3 + 0x194) = uVar7;
  }
  fVar23 = *(float *)(param_5 + 0x19c);
  if (fVar23 != 0.0) {
    fVar8 = (float)*(undefined8 *)(param_5 + 0x1a0);
    fVar11 = fVar8 * -fVar10;
    fVar9 = (float)((ulong)*(undefined8 *)(param_5 + 0x1a0) >> 0x20);
    fVar13 = fVar9 * -fVar3;
    fVar14 = *(float *)(param_5 + 0x1a8) * -fVar1;
    fVar16 = (float)NEON_fnmsub(fVar14,fVar4,fVar6 * fVar13);
    fVar6 = -(fVar5 * fVar14) + fVar6 * fVar11;
    fVar4 = -(fVar4 * fVar11) + fVar5 * fVar13;
    *(ulong *)(param_5 + 0x17c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x17c) >> 0x20) + fVar9 * -fVar3 * fVar23
                  ,(float)*(undefined8 *)(param_5 + 0x17c) + fVar8 * -fVar10 * fVar23);
    uVar12 = NEON_fmadd(*(undefined4 *)(param_5 + 0x170),fVar6,*(float *)(param_5 + 0x16c) * fVar16)
    ;
    uVar7 = NEON_fmadd(fVar23 * -fVar1,*(float *)(param_5 + 0x1a8),*(undefined4 *)(param_5 + 0x184))
    ;
    uVar12 = NEON_fmadd(*(undefined4 *)(param_5 + 0x174),fVar4,uVar12);
    *(undefined4 *)(param_5 + 0x184) = uVar7;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_5 + 0x280),uVar12,*(undefined4 *)(param_5 + 0x194));
    *(ulong *)(param_5 + 0x18c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x18c) >> 0x20) +
                  (*(float *)(param_5 + 0x15c) * fVar16 + *(float *)(param_5 + 0x160) * fVar6 +
                  *(float *)(param_5 + 0x164) * fVar4) *
                  (float)((ulong)*(undefined8 *)(param_5 + 0x278) >> 0x20),
                  (float)*(undefined8 *)(param_5 + 0x18c) +
                  ((float)*(undefined8 *)(param_5 + 0x14c) * fVar16 +
                   (float)*(undefined8 *)(param_5 + 0x150) * fVar6 +
                  (float)*(undefined8 *)(param_5 + 0x154) * fVar4) *
                  (float)*(undefined8 *)(param_5 + 0x278));
    *(undefined4 *)(param_5 + 0x194) = uVar7;
  }
  return fVar2;
}


