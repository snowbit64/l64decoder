// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeGyroscopicForceExplicit
// Entry Point: 00f40554
// Size: 380 bytes
// Signature: undefined __thiscall computeGyroscopicForceExplicit(btRigidBody * this, float param_1)


/* btRigidBody::computeGyroscopicForceExplicit(float) const */

float __thiscall btRigidBody::computeGyroscopicForceExplicit(btRigidBody *this,float param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  uVar2 = NEON_fmov(0x3f800000,4);
  uVar5 = *(undefined8 *)(this + 0x1d0);
  fVar16 = *(float *)(this + 0x1d8);
  uVar11 = NEON_fcmeq(uVar5,0,4);
  uVar14 = *(undefined8 *)(this + 0x28);
  fVar7 = (float)uVar2 / (float)uVar5;
  fVar8 = (float)((ulong)uVar2 >> 0x20) / (float)((ulong)uVar5 >> 0x20);
  fVar3 = *(float *)(this + 0x20);
  fVar6 = *(float *)(this + 0x18);
  fVar1 = *(float *)(this + 0x1c);
  fVar27 = *(float *)(this + 0x30);
  fVar4 = (float)*(undefined8 *)(this + 8);
  fVar17 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar19 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((ulong)uVar11 >> 0x18),
                           CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((ulong)uVar11 >> 0x10),
                                    CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((ulong)uVar11 >> 8),
                                             SUB41(fVar7,0) & ~(byte)uVar11)));
  fVar20 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((ulong)uVar11 >> 0x38),
                           CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((ulong)uVar11 >> 0x30),
                                    CONCAT11((byte)((uint)fVar8 >> 8) &
                                             ~(byte)((ulong)uVar11 >> 0x28),
                                             SUB41(fVar8,0) & ~(byte)((ulong)uVar11 >> 0x20))));
  fVar8 = *(float *)(this + 0x10);
  fVar21 = fVar6 * fVar19;
  fVar22 = fVar4 * fVar19;
  fVar10 = fVar1 * fVar20;
  fVar12 = fVar17 * fVar20;
  fVar13 = (float)uVar14;
  fVar19 = fVar13 * fVar19;
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar20 = fVar15 * fVar20;
  fVar7 = 1.0 / fVar16;
  if (fVar16 == 0.0) {
    fVar7 = fVar16;
  }
  fVar25 = fVar3 * fVar7;
  fVar26 = fVar8 * fVar7;
  fVar7 = fVar27 * fVar7;
  uVar5 = NEON_rev64(uVar14,4);
  uVar11 = *(undefined8 *)(this + 0x18c);
  fVar18 = *(float *)(this + 0x194);
  uVar2 = NEON_rev64(uVar11,4);
  fVar23 = (float)uVar11;
  fVar16 = (float)NEON_fmadd(fVar7,fVar3,fVar6 * fVar19 + fVar1 * fVar20);
  fVar24 = (float)((ulong)uVar11 >> 0x20);
  fVar9 = (float)((ulong)uVar2 >> 0x20);
  fVar10 = fVar23 * (fVar21 * fVar4 + fVar17 * fVar10 + fVar8 * fVar25) +
           (fVar21 * fVar6 + fVar1 * fVar10 + fVar3 * fVar25) * (float)uVar2 +
           ((float)uVar5 * fVar10 + fVar21 * fVar13 + fVar25 * fVar27) * fVar18;
  fVar1 = fVar24 * (fVar6 * fVar22 + fVar12 * fVar1 + fVar26 * fVar3) +
          (fVar22 * fVar4 + fVar17 * fVar12 + fVar8 * fVar26) * fVar9 +
          ((float)((ulong)uVar5 >> 0x20) * fVar22 + fVar12 * fVar15 + fVar26 * fVar27) * fVar18;
  fVar7 = (fVar20 * fVar17 + fVar19 * fVar4 + fVar8 * fVar7) * fVar23 + fVar16 * fVar24 +
          (fVar20 * fVar15 + fVar19 * fVar13 + fVar27 * fVar7) * fVar18;
  fVar3 = -(fVar10 * fVar18) + fVar7 * fVar24;
  fVar4 = -(fVar1 * (float)uVar2) + fVar23 * fVar10;
  fVar1 = -(fVar7 * fVar9) + fVar18 * fVar1;
  fVar7 = (float)NEON_fmadd(fVar3,fVar3,fVar4 * fVar4);
  fVar7 = fVar7 + fVar1 * fVar1;
  if (param_1 * param_1 < fVar7) {
    fVar3 = (param_1 / SQRT(fVar7)) * fVar3;
  }
  return fVar3;
}


