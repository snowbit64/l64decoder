// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Prepare
// Entry Point: 00f7b120
// Size: 2448 bytes
// Signature: undefined __thiscall Prepare(LJoint * this, float param_1, int param_2)


/* btSoftBody::LJoint::Prepare(float, int) */

void __thiscall btSoftBody::LJoint::Prepare(LJoint *this,float param_1,int param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar17;
  undefined8 uVar16;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar6 = *(long *)(this + 0x10);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar6 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar6 + 0xec) = 1;
    }
    *(undefined4 *)(lVar6 + 0xf0) = 0;
  }
  lVar6 = *(long *)(this + 0x18);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar6 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar6 + 0xec) = 1;
    }
    *(undefined4 *)(lVar6 + 0xf0) = 0;
  }
  lVar6 = *(long *)(this + 0x28);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar6 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar6 + 0xec) = 1;
    }
    *(undefined4 *)(lVar6 + 0xf0) = 0;
  }
  lVar6 = *(long *)(this + 0x30);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xe0) & 3) == 0)) {
    if ((*(uint *)(lVar6 + 0xec) & 0xfffffffe) != 4) {
      *(undefined4 *)(lVar6 + 0xec) = 1;
    }
    *(undefined4 *)(lVar6 + 0xf0) = 0;
  }
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::xform()::identity), iVar5 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar5 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar5 != 0)) {
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
  pfVar1 = (float *)Body::xform()::identity;
  if (*(long *)(this + 8) != 0) {
    pfVar1 = (float *)(*(long *)(this + 8) + 0x60);
  }
  fVar21 = *(float *)(this + 0x40);
  if (*(long *)(this + 0x18) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x18) + 8);
  }
  fVar14 = *pfVar1;
  fVar19 = pfVar1[2];
  fVar22 = (float)*(undefined8 *)(this + 0x38);
  fVar17 = pfVar1[5];
  fVar13 = (float)((ulong)*(undefined8 *)(this + 0x38) >> 0x20);
  fVar20 = pfVar1[6];
  uVar9 = NEON_rev64(CONCAT44(pfVar1[1] * fVar13,pfVar1[4] * fVar22),4);
  fVar10 = (float)NEON_fmadd(pfVar1[10],fVar21,pfVar1[8] * fVar22 + pfVar1[9] * fVar13);
  fVar11 = pfVar1[0xe];
  uVar16 = *(undefined8 *)(pfVar1 + 0xc);
  *(undefined4 *)(this + 0xc4) = 0;
  *(float *)(this + 0xc0) = fVar10 + fVar11;
  *(ulong *)(this + 0xb8) =
       CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar13 * fVar17 + fVar20 * fVar21 +
                (float)((ulong)uVar16 >> 0x20),
                (float)uVar9 + fVar22 * fVar14 + fVar19 * fVar21 + (float)uVar16);
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::xform()::identity), iVar5 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar5 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar5 != 0)) {
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
  fVar21 = *(float *)(this + 0x48);
  uVar12 = *(undefined4 *)(this + 0x4c);
  pfVar1 = (float *)Body::xform()::identity;
  if (*(long *)(this + 0x20) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x20) + 0x60);
  }
  if (*(long *)(this + 0x30) != 0) {
    pfVar1 = (float *)(*(long *)(this + 0x30) + 8);
  }
  uVar8 = NEON_fmadd(pfVar1[1],uVar12,*pfVar1 * fVar21);
  uVar15 = *(undefined4 *)(this + 0x50);
  uVar18 = NEON_fmadd(pfVar1[5],uVar12,pfVar1[4] * fVar21);
  uVar12 = NEON_fmadd(pfVar1[9],uVar12,pfVar1[8] * fVar21);
  fVar21 = (float)NEON_fmadd(pfVar1[2],uVar15,uVar8);
  fVar10 = (float)NEON_fmadd(pfVar1[6],uVar15,uVar18);
  fVar22 = pfVar1[0xc];
  fVar14 = pfVar1[0xd];
  fVar11 = (float)NEON_fmadd(pfVar1[10],uVar15,uVar12);
  fVar13 = pfVar1[0xe];
  *(undefined4 *)(this + 0xd4) = 0;
  *(float *)(this + 200) = fVar21 + fVar22;
  fVar22 = *(float *)(this + 0xb8) - (fVar21 + fVar22);
  fVar21 = *(float *)(this + 0xbc) - (fVar10 + fVar14);
  *(float *)(this + 0xcc) = fVar10 + fVar14;
  fVar10 = *(float *)(this + 0xc0) - (fVar11 + fVar13);
  *(float *)(this + 0xd0) = fVar11 + fVar13;
  uVar12 = NEON_fmadd(fVar21,fVar21,fVar22 * fVar22);
  fVar13 = (float)NEON_fmadd(fVar10,fVar10,uVar12);
  if (16.0 < fVar13) {
    fVar13 = 4.0 / SQRT(fVar13);
    fVar22 = fVar13 * fVar22;
    fVar21 = fVar13 * fVar21;
    fVar10 = fVar13 * fVar10;
  }
  *(undefined4 *)(this + 0x70) = 0;
  fVar13 = *(float *)(this + 0x5c) / param_1;
  *(float *)(this + 100) = fVar13 * fVar22;
  *(float *)(this + 0x68) = fVar13 * fVar21;
  *(float *)(this + 0x6c) = fVar13 * fVar10;
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::xform()::identity), iVar5 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar5 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar5 != 0)) {
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
  puVar2 = Body::xform()::identity;
  if (*(long *)(this + 8) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 8) + 0x60);
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 0x18) + 8);
  }
  *(float *)(this + 0xb8) = *(float *)(this + 0xb8) - *(float *)(puVar2 + 0x30);
  *(float *)(this + 0xbc) = *(float *)(this + 0xbc) - *(float *)(puVar2 + 0x34);
  *(float *)(this + 0xc0) = *(float *)(this + 0xc0) - *(float *)(puVar2 + 0x38);
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::xform()::identity), iVar5 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar5 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar5 != 0)) {
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
  puVar2 = Body::xform()::identity;
  if (*(long *)(this + 0x20) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 0x20) + 0x60);
  }
  if (*(long *)(this + 0x30) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 0x30) + 8);
  }
  *(float *)(this + 200) = *(float *)(this + 200) - *(float *)(puVar2 + 0x30);
  *(float *)(this + 0xcc) = *(float *)(this + 0xcc) - *(float *)(puVar2 + 0x34);
  *(float *)(this + 0xd0) = *(float *)(this + 0xd0) - *(float *)(puVar2 + 0x38);
  if (*(long *)(this + 0x10) == 0) {
    if (*(long *)(this + 8) != 0) {
      puVar7 = (undefined4 *)(*(long *)(this + 8) + 0xa4);
      goto LAB_00f7b46c;
    }
    uVar12 = 0;
  }
  else {
    puVar7 = (undefined4 *)(*(long *)(this + 0x10) + 0x19c);
LAB_00f7b46c:
    uVar12 = *puVar7;
  }
  if (((Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::invWorldInertia()::iwi), iVar5 != 0)) {
    Body::invWorldInertia()::iwi._24_8_ = 0;
    Body::invWorldInertia()::iwi._16_8_ = 0;
    Body::invWorldInertia()::iwi._40_8_ = 0;
    Body::invWorldInertia()::iwi._32_8_ = 0;
    Body::invWorldInertia()::iwi._8_8_ = 0;
    Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&Body::invWorldInertia()::iwi);
  }
  puVar2 = Body::invWorldInertia()::iwi;
  if (*(long *)(this + 8) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 8) + 0xd8);
  }
  if (*(long *)(this + 0x10) != 0) {
    puVar2 = (undefined1 *)(*(long *)(this + 0x10) + 0x14c);
  }
  if (*(long *)(this + 0x28) == 0) {
    if (*(long *)(this + 0x20) == 0) {
      uVar8 = 0;
      goto joined_r0x00f7b5ec;
    }
    puVar7 = (undefined4 *)(*(long *)(this + 0x20) + 0xa4);
  }
  else {
    puVar7 = (undefined4 *)(*(long *)(this + 0x28) + 0x19c);
  }
  uVar8 = *puVar7;
joined_r0x00f7b5ec:
  if (((Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&Body::invWorldInertia()::iwi), iVar5 != 0)) {
    Body::invWorldInertia()::iwi._24_8_ = 0;
    Body::invWorldInertia()::iwi._16_8_ = 0;
    Body::invWorldInertia()::iwi._40_8_ = 0;
    Body::invWorldInertia()::iwi._32_8_ = 0;
    Body::invWorldInertia()::iwi._8_8_ = 0;
    Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&Body::invWorldInertia()::iwi,puVar2);
  }
  puVar3 = Body::invWorldInertia()::iwi;
  if (*(long *)(this + 0x20) != 0) {
    puVar3 = (undefined1 *)(*(long *)(this + 0x20) + 0xd8);
  }
  if (*(long *)(this + 0x28) != 0) {
    puVar3 = (undefined1 *)(*(long *)(this + 0x28) + 0x14c);
  }
  FUN_00f7c1e4(uVar12,*(undefined4 *)(this + 0xb8),*(undefined4 *)(this + 0xbc),
               *(undefined4 *)(this + 0xc0),uVar8,*(undefined4 *)(this + 200),
               *(undefined4 *)(this + 0xcc),*(undefined4 *)(this + 0xd0),&local_78,puVar2,puVar3);
  fVar22 = *(float *)(this + 0x60);
  fVar21 = *(float *)(this + 100);
  *(undefined8 *)(this + 0x8c) = uStack_70;
  *(undefined8 *)(this + 0x84) = local_78;
  *(undefined8 *)(this + 0x9c) = uStack_60;
  *(undefined8 *)(this + 0x94) = local_68;
  *(undefined8 *)(this + 0xac) = uStack_50;
  *(undefined8 *)(this + 0xa4) = local_58;
  if (fVar22 <= 0.0) {
    uVar9 = *(undefined8 *)(this + 0x68);
  }
  else {
    fVar11 = fVar21 * fVar22;
    fVar10 = (float)*(undefined8 *)(this + 0x68);
    fVar17 = fVar22 * fVar10;
    *(undefined4 *)(this + 0x80) = 0;
    uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x88),fVar17,*(float *)(this + 0x84) * fVar11);
    fVar13 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
    fVar14 = fVar22 * fVar13;
    uVar15 = NEON_fmadd(*(undefined4 *)(this + 0x98),fVar17,*(float *)(this + 0x94) * fVar11);
    fVar22 = 1.0 - fVar22;
    uVar12 = NEON_fmadd(*(undefined4 *)(this + 0xa8),fVar17,*(float *)(this + 0xa4) * fVar11);
    uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x8c),fVar14,uVar8);
    fVar21 = fVar21 * fVar22;
    uVar15 = NEON_fmadd(*(undefined4 *)(this + 0x9c),fVar14,uVar15);
    uVar9 = CONCAT44(fVar13 * fVar22,fVar10 * fVar22);
    uVar12 = NEON_fmadd(*(undefined4 *)(this + 0xac),fVar14,uVar12);
    *(undefined4 *)(this + 0x74) = uVar8;
    *(undefined4 *)(this + 0x78) = uVar15;
    *(undefined4 *)(this + 0x7c) = uVar12;
  }
  fVar22 = 1.0 / (float)param_2;
  *(float *)(this + 100) = fVar21 * fVar22;
  *(ulong *)(this + 0x68) = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar22,(float)uVar9 * fVar22);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


