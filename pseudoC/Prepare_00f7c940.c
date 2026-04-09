// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Prepare
// Entry Point: 00f7c940
// Size: 1812 bytes
// Signature: undefined __thiscall Prepare(AJoint * this, float param_1, int param_2)


/* btSoftBody::AJoint::Prepare(float, int) */

void __thiscall btSoftBody::AJoint::Prepare(AJoint *this,float param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  
  (**(code **)(**(long **)(this + 0xd8) + 0x10))(*(long **)(this + 0xd8),this);
  lVar4 = *(long *)(this + 0x10);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar4 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar4 + 0xec) = 1;
    }
    *(undefined4 *)(lVar4 + 0xf0) = 0;
  }
  lVar4 = *(long *)(this + 0x18);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar4 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar4 + 0xec) = 1;
    }
    *(undefined4 *)(lVar4 + 0xf0) = 0;
  }
  lVar4 = *(long *)(this + 0x28);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar4 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar4 + 0xec) = 1;
    }
    *(undefined4 *)(lVar4 + 0xf0) = 0;
  }
  lVar4 = *(long *)(this + 0x30);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar4 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar4 + 0xec) = 1;
    }
    *(undefined4 *)(lVar4 + 0xf0) = 0;
  }
  if ((Body::xform()::identity & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&Body::xform()::identity);
    if (iVar3 != 0) {
      if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar3 != 0))
      {
        if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar3 != 0)) {
          btMatrix3x3::getIdentity()::identityMatrix = 0x3f800000;
          DAT_02125914._0_4_ = 0;
          DAT_02125914._4_4_ = 0;
          DAT_0212590c._0_4_ = 0;
          DAT_0212590c._4_4_ = 0;
          DAT_0212591c = 0x3f800000;
          DAT_02125920 = 0;
          DAT_02125928 = 0;
          DAT_02125930 = 0x3f800000;
          __cxa_guard_release(&btMatrix3x3::getIdentity()::identityMatrix);
        }
        btTransform::getIdentity()::identityTransform._12_4_ = (undefined4)DAT_02125914;
        btTransform::getIdentity()::identityTransform._8_4_ = DAT_0212590c._4_4_;
        btTransform::getIdentity()::identityTransform._4_4_ = (undefined4)DAT_0212590c;
        btTransform::getIdentity()::identityTransform._0_4_ =
             btMatrix3x3::getIdentity()::identityMatrix;
        btTransform::getIdentity()::identityTransform._20_4_ = DAT_0212591c;
        btTransform::getIdentity()::identityTransform._16_4_ = DAT_02125914._4_4_;
        btTransform::getIdentity()::identityTransform._48_8_ = 0;
        btTransform::getIdentity()::identityTransform._56_8_ = 0;
        btTransform::getIdentity()::identityTransform._24_8_ = DAT_02125920;
        btTransform::getIdentity()::identityTransform._40_8_ = DAT_02125930;
        btTransform::getIdentity()::identityTransform._32_8_ = DAT_02125928;
        __cxa_guard_release(&btTransform::getIdentity()::identityTransform);
      }
      Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
      Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
      Body::xform()::identity._24_8_ = btTransform::getIdentity()::identityTransform._24_8_;
      Body::xform()::identity._16_8_ = btTransform::getIdentity()::identityTransform._16_8_;
      Body::xform()::identity._40_8_ = btTransform::getIdentity()::identityTransform._40_8_;
      Body::xform()::identity._32_8_ = btTransform::getIdentity()::identityTransform._32_8_;
      Body::xform()::identity._56_8_ = btTransform::getIdentity()::identityTransform._56_8_;
      Body::xform()::identity._48_8_ = btTransform::getIdentity()::identityTransform._48_8_;
      __cxa_guard_release(&Body::xform()::identity);
    }
  }
  fVar5 = *(float *)(this + 0x38);
  uVar7 = *(undefined4 *)(this + 0x3c);
  pfVar1 = (float *)Body::xform()::identity;
  if (*(long *)(this + 8) != 0) {
    pfVar1 = (float *)(*(long *)(this + 8) + 0x60);
  }
  if (*(long *)(this + 0x18) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x18) + 8);
  }
  uVar11 = *(undefined4 *)(this + 0x40);
  uVar8 = NEON_fmadd(uVar7,pfVar1[1],fVar5 * *pfVar1);
  fVar12 = pfVar1[2];
  uVar10 = NEON_fmadd(pfVar1[5],uVar7,pfVar1[4] * fVar5);
  fVar13 = pfVar1[10];
  uVar7 = NEON_fmadd(pfVar1[9],uVar7,pfVar1[8] * fVar5);
  fVar5 = pfVar1[6];
  *(undefined4 *)(this + 0xc4) = 0;
  uVar9 = NEON_fmadd(uVar11,fVar12,uVar8);
  uVar8 = NEON_fmadd(fVar5,uVar11,uVar10);
  uVar7 = NEON_fmadd(fVar13,uVar11,uVar7);
  *(undefined4 *)(this + 0xb8) = uVar9;
  *(undefined4 *)(this + 0xbc) = uVar8;
  *(undefined4 *)(this + 0xc0) = uVar7;
  if ((Body::xform()::identity & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&Body::xform()::identity);
    if (iVar3 != 0) {
      if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar3 != 0))
      {
        if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar3 != 0)) {
          DAT_02125914._0_4_ = 0;
          DAT_02125914._4_4_ = 0;
          DAT_0212590c._0_4_ = 0;
          DAT_0212590c._4_4_ = 0;
          btMatrix3x3::getIdentity()::identityMatrix = 0x3f800000;
          DAT_0212591c = 0x3f800000;
          DAT_02125920 = 0;
          DAT_02125928 = 0;
          DAT_02125930 = 0x3f800000;
          __cxa_guard_release(&btMatrix3x3::getIdentity()::identityMatrix);
        }
        btTransform::getIdentity()::identityTransform._12_4_ = (undefined4)DAT_02125914;
        btTransform::getIdentity()::identityTransform._8_4_ = DAT_0212590c._4_4_;
        btTransform::getIdentity()::identityTransform._4_4_ = (undefined4)DAT_0212590c;
        btTransform::getIdentity()::identityTransform._0_4_ =
             btMatrix3x3::getIdentity()::identityMatrix;
        btTransform::getIdentity()::identityTransform._20_4_ = DAT_0212591c;
        btTransform::getIdentity()::identityTransform._16_4_ = DAT_02125914._4_4_;
        btTransform::getIdentity()::identityTransform._48_8_ = 0;
        btTransform::getIdentity()::identityTransform._56_8_ = 0;
        btTransform::getIdentity()::identityTransform._24_8_ = DAT_02125920;
        btTransform::getIdentity()::identityTransform._40_8_ = DAT_02125930;
        btTransform::getIdentity()::identityTransform._32_8_ = DAT_02125928;
        __cxa_guard_release(&btTransform::getIdentity()::identityTransform);
      }
      Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
      Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
      Body::xform()::identity._24_8_ = btTransform::getIdentity()::identityTransform._24_8_;
      Body::xform()::identity._16_8_ = btTransform::getIdentity()::identityTransform._16_8_;
      Body::xform()::identity._40_8_ = btTransform::getIdentity()::identityTransform._40_8_;
      Body::xform()::identity._32_8_ = btTransform::getIdentity()::identityTransform._32_8_;
      Body::xform()::identity._56_8_ = btTransform::getIdentity()::identityTransform._56_8_;
      Body::xform()::identity._48_8_ = btTransform::getIdentity()::identityTransform._48_8_;
      __cxa_guard_release(&Body::xform()::identity);
    }
  }
  fVar12 = 0.0;
  fVar5 = *(float *)(this + 0x48);
  uVar7 = *(undefined4 *)(this + 0x4c);
  pfVar1 = (float *)Body::xform()::identity;
  if (*(long *)(this + 0x20) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x20) + 0x60);
  }
  uVar8 = *(undefined4 *)(this + 0x50);
  if (*(long *)(this + 0x30) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x30) + 8);
  }
  fVar18 = 0.0;
  fVar24 = 0.0;
  fVar14 = pfVar1[4];
  fVar19 = pfVar1[5];
  fVar22 = pfVar1[6];
  fVar15 = pfVar1[2];
  uVar9 = NEON_fmadd(pfVar1[9],uVar7,pfVar1[8] * fVar5);
  fVar13 = pfVar1[10];
  uVar10 = NEON_fmadd(uVar7,pfVar1[1],fVar5 * *pfVar1);
  *(undefined4 *)(this + 0xd4) = 0;
  uVar7 = NEON_fmadd(fVar19,uVar7,fVar14 * fVar5);
  fVar5 = (float)NEON_fmadd(fVar13,uVar8,uVar9);
  fVar14 = *(float *)(this + 0xb8);
  fVar13 = *(float *)(this + 0xbc);
  fVar15 = (float)NEON_fmadd(uVar8,fVar15,uVar10);
  fVar19 = (float)NEON_fmadd(fVar22,uVar8,uVar7);
  fVar22 = *(float *)(this + 0xc0);
  *(float *)(this + 0xd0) = fVar5;
  *(float *)(this + 200) = fVar15;
  *(float *)(this + 0xcc) = fVar19;
  fVar16 = (float)NEON_fnmsub(fVar22,fVar19,fVar13 * fVar5);
  fVar17 = (float)NEON_fnmsub(fVar14,fVar5,fVar15 * fVar22);
  fVar20 = (float)NEON_fnmsub(fVar15,fVar13,fVar14 * fVar19);
  uVar7 = NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
  fVar23 = (float)NEON_fmadd(fVar20,fVar20,uVar7);
  if (1.192093e-07 < SQRT(fVar23)) {
    fVar24 = 1.0 / SQRT(fVar23);
    fVar12 = fVar24 * fVar16;
    fVar18 = fVar24 * fVar17;
    fVar24 = fVar24 * fVar20;
  }
  *(undefined4 *)(this + 0x70) = 0;
  uVar7 = NEON_fmadd(fVar13,fVar19,fVar5 * fVar22);
  uVar7 = NEON_fmadd(fVar15,fVar14,uVar7);
  fVar5 = (float)NEON_fminnm(uVar7,0x3f800000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  fVar5 = acosf(fVar5);
  fVar13 = *(float *)(this + 0x5c) / param_1;
  fVar5 = (float)NEON_fminnm(fVar5,0x3e490fdb);
  *(float *)(this + 100) = fVar5 * fVar12 * fVar13;
  *(float *)(this + 0x68) = fVar5 * fVar18 * fVar13;
  *(float *)(this + 0x6c) = fVar5 * fVar24 * fVar13;
  if (((Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&Body::invWorldInertia()::iwi), iVar3 != 0)) {
    Body::invWorldInertia()::iwi._24_8_ = 0;
    Body::invWorldInertia()::iwi._16_8_ = 0;
    Body::invWorldInertia()::iwi._40_8_ = 0;
    Body::invWorldInertia()::iwi._32_8_ = 0;
    Body::invWorldInertia()::iwi._8_8_ = 0;
    Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&Body::invWorldInertia()::iwi);
  }
  pfVar1 = (float *)Body::invWorldInertia()::iwi;
  if (*(long *)(this + 8) != 0) {
    pfVar1 = (float *)(*(long *)(this + 8) + 0xd8);
  }
  if (*(long *)(this + 0x10) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x10) + 0x14c);
  }
  if (((Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&Body::invWorldInertia()::iwi), iVar3 != 0)) {
    Body::invWorldInertia()::iwi._24_8_ = 0;
    Body::invWorldInertia()::iwi._16_8_ = 0;
    Body::invWorldInertia()::iwi._40_8_ = 0;
    Body::invWorldInertia()::iwi._32_8_ = 0;
    Body::invWorldInertia()::iwi._8_8_ = 0;
    Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&Body::invWorldInertia()::iwi);
  }
  pfVar2 = (float *)Body::invWorldInertia()::iwi;
  if (*(long *)(this + 0x20) != 0) {
    pfVar2 = (float *)(*(long *)(this + 0x20) + 0xd8);
  }
  if (*(long *)(this + 0x28) != 0) {
    pfVar2 = (float *)(*(long *)(this + 0x28) + 0x14c);
  }
  fVar13 = pfVar1[1];
  fVar12 = pfVar2[2] + pfVar1[2];
  fVar14 = *pfVar2 + *pfVar1;
  fVar24 = (float)*(undefined8 *)(pfVar2 + 5) + (float)*(undefined8 *)(pfVar1 + 5);
  fVar19 = (float)((ulong)*(undefined8 *)(pfVar2 + 5) >> 0x20) +
           (float)((ulong)*(undefined8 *)(pfVar1 + 5) >> 0x20);
  fVar22 = pfVar2[4] + pfVar1[4];
  fVar23 = pfVar2[8] + pfVar1[8];
  fVar5 = pfVar2[1];
  fVar15 = (float)*(undefined8 *)(pfVar2 + 9) + (float)*(undefined8 *)(pfVar1 + 9);
  fVar17 = (float)((ulong)*(undefined8 *)(pfVar2 + 9) >> 0x20) +
           (float)((ulong)*(undefined8 *)(pfVar1 + 9) >> 0x20);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  fVar5 = fVar5 + fVar13;
  *(undefined4 *)(this + 0xb0) = 0;
  fVar21 = -(fVar23 * fVar24) + fVar22 * fVar15;
  fVar18 = -(fVar15 * fVar19) + fVar24 * fVar17;
  fVar20 = -(fVar17 * fVar22) + fVar19 * fVar23;
  fVar13 = (float)NEON_fnmsub(fVar23,fVar5,fVar15 * fVar14);
  fVar27 = 1.0 / (fVar21 * fVar12 + fVar14 * fVar18 + fVar5 * fVar20);
  fVar18 = fVar18 * fVar27;
  fVar20 = fVar20 * fVar27;
  fVar16 = (-(fVar17 * fVar5) + fVar12 * fVar15) * fVar27;
  fVar17 = (-(fVar23 * fVar12) + fVar14 * fVar17) * fVar27;
  fVar15 = (-(fVar24 * fVar12) + fVar5 * fVar19) * fVar27;
  fVar19 = (-(fVar19 * fVar14) + fVar12 * fVar22) * fVar27;
  fVar23 = *(float *)(this + 0x60);
  fVar12 = *(float *)(this + 100);
  fVar21 = fVar27 * fVar21;
  fVar5 = fVar27 * (-(fVar22 * fVar5) + fVar14 * fVar24);
  *(float *)(this + 0x8c) = fVar15;
  *(float *)(this + 0x9c) = fVar19;
  *(float *)(this + 0xa4) = fVar21;
  *(float *)(this + 0xa8) = fVar27 * fVar13;
  *(float *)(this + 0xac) = fVar5;
  *(ulong *)(this + 0x84) = CONCAT44(fVar16,fVar18);
  *(ulong *)(this + 0x94) = CONCAT44(fVar17,fVar20);
  if (fVar23 <= 0.0) {
    uVar6 = *(undefined8 *)(this + 0x68);
  }
  else {
    fVar22 = fVar12 * fVar23;
    fVar14 = 1.0 - fVar23;
    *(undefined4 *)(this + 0x80) = 0;
    fVar24 = (float)*(undefined8 *)(this + 0x68);
    fVar26 = fVar23 * fVar24;
    fVar25 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
    fVar23 = fVar23 * fVar25;
    fVar12 = fVar12 * fVar14;
    uVar6 = CONCAT44(fVar25 * fVar14,fVar24 * fVar14);
    uVar7 = NEON_fmadd(fVar27 * fVar13,fVar26,fVar21 * fVar22);
    uVar7 = NEON_fmadd(fVar5,fVar23,uVar7);
    *(ulong *)(this + 0x74) =
         CONCAT44(fVar20 * fVar22 + fVar17 * fVar26 + fVar19 * fVar23,
                  fVar18 * fVar22 + fVar16 * fVar26 + fVar15 * fVar23);
    *(undefined4 *)(this + 0x7c) = uVar7;
  }
  fVar5 = 1.0 / (float)param_2;
  *(float *)(this + 100) = fVar12 * fVar5;
  *(ulong *)(this + 0x68) = CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar5,(float)uVar6 * fVar5);
  return;
}


