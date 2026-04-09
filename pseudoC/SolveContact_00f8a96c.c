// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SolveContact
// Entry Point: 00f8a96c
// Size: 3016 bytes
// Signature: undefined __thiscall SolveContact(ClusterBase * this, sResults * param_1, Body param_2, Body param_3, CJoint * param_4)


/* btSoftColliders::ClusterBase::SolveContact(btGjkEpaSolver2::sResults const&, btSoftBody::Body,
   btSoftBody::Body, btSoftBody::CJoint&) */

void __thiscall
btSoftColliders::ClusterBase::SolveContact
          (ClusterBase *this,sResults *param_1,Body param_2,Body param_3,CJoint *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  plVar7 = (long *)(ulong)param_3;
  plVar6 = (long *)(ulong)param_2;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  fVar26 = *(float *)(param_1 + 0x34);
  fVar27 = *(float *)(this + 0x10);
  if (fVar27 <= fVar26) goto LAB_00f8ae1c;
  fVar15 = *(float *)(param_1 + 0x24);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar16 = (float)NEON_fmadd(fVar15,fVar15,fVar13 * fVar13);
  uVar12 = *(undefined4 *)(param_1 + 0x30);
  if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar5 != 0)) {
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
    btSoftBody::Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
    btSoftBody::Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
    btSoftBody::Body::xform()::identity._24_8_ =
         btTransform::getIdentity()::identityTransform._24_8_;
    btSoftBody::Body::xform()::identity._16_8_ =
         btTransform::getIdentity()::identityTransform._16_8_;
    btSoftBody::Body::xform()::identity._40_8_ =
         btTransform::getIdentity()::identityTransform._40_8_;
    btSoftBody::Body::xform()::identity._32_8_ =
         btTransform::getIdentity()::identityTransform._32_8_;
    btSoftBody::Body::xform()::identity._56_8_ =
         btTransform::getIdentity()::identityTransform._56_8_;
    btSoftBody::Body::xform()::identity._48_8_ =
         btTransform::getIdentity()::identityTransform._48_8_;
    __cxa_guard_release(&btSoftBody::Body::xform()::identity);
  }
  fVar16 = 1.0 / SQRT(fVar16 + fVar14 * fVar14);
  uVar23 = *(undefined8 *)(param_1 + 4);
  puVar2 = btSoftBody::Body::xform()::identity;
  if (*plVar6 != 0) {
    puVar2 = (undefined1 *)(*plVar6 + 0x60);
  }
  fVar17 = *(float *)(param_1 + 0xc);
  if (plVar6[2] != 0) {
    puVar2 = (undefined1 *)(plVar6[2] + 8);
  }
  uVar24 = *(undefined8 *)(puVar2 + 0x30);
  fVar19 = *(float *)(puVar2 + 0x38);
  if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar5 != 0)) {
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
    btSoftBody::Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
    btSoftBody::Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
    btSoftBody::Body::xform()::identity._24_8_ =
         btTransform::getIdentity()::identityTransform._24_8_;
    btSoftBody::Body::xform()::identity._16_8_ =
         btTransform::getIdentity()::identityTransform._16_8_;
    btSoftBody::Body::xform()::identity._40_8_ =
         btTransform::getIdentity()::identityTransform._40_8_;
    btSoftBody::Body::xform()::identity._32_8_ =
         btTransform::getIdentity()::identityTransform._32_8_;
    btSoftBody::Body::xform()::identity._56_8_ =
         btTransform::getIdentity()::identityTransform._56_8_;
    btSoftBody::Body::xform()::identity._48_8_ =
         btTransform::getIdentity()::identityTransform._48_8_;
    __cxa_guard_release(&btSoftBody::Body::xform()::identity);
  }
  lVar8 = *plVar7;
  fVar34 = (float)uVar23 - (float)uVar24;
  fVar35 = (float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
  fVar17 = fVar17 - fVar19;
  puVar2 = btSoftBody::Body::xform()::identity;
  if (lVar8 != 0) {
    puVar2 = (undefined1 *)(lVar8 + 0x60);
  }
  if (plVar7[2] != 0) {
    puVar2 = (undefined1 *)(plVar7[2] + 8);
  }
  lVar10 = plVar6[1];
  if (lVar10 == 0) {
    lVar10 = *plVar6;
    if (lVar10 == 0) {
      fVar19 = 0.0;
      fVar18 = 0.0;
      fVar22 = 0.0;
      fVar20 = 0.0;
      uVar23 = 0;
    }
    else {
      fVar18 = (float)((ulong)*(undefined8 *)(lVar10 + 0x170) >> 0x20);
      fVar22 = (float)*(undefined8 *)(lVar10 + 0x170);
      uVar23 = *(undefined8 *)(lVar10 + 0x164);
      fVar20 = fVar18 * fVar17 - fVar35 * *(float *)(lVar10 + 0x178);
      fVar19 = -(fVar22 * fVar17) + fVar34 * *(float *)(lVar10 + 0x178);
      fVar18 = -(fVar18 * fVar34) + fVar35 * fVar22;
      fVar22 = *(float *)(lVar10 + 0x160);
    }
  }
  else {
    fVar18 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18c) >> 0x20);
    fVar36 = (float)*(undefined8 *)(lVar10 + 0x18c);
    uVar23 = *(undefined8 *)(lVar10 + 0x180);
    fVar20 = fVar18 * fVar17 - fVar35 * *(float *)(lVar10 + 0x194);
    fVar22 = *(float *)(lVar10 + 0x17c);
    fVar19 = -(fVar36 * fVar17) + fVar34 * *(float *)(lVar10 + 0x194);
    fVar18 = -(fVar18 * fVar34) + fVar35 * fVar36;
  }
  fVar15 = fVar16 * fVar15;
  fVar13 = fVar13 * fVar16;
  fVar14 = fVar14 * fVar16;
  fVar36 = (float)*(undefined8 *)(param_1 + 0x14) - (float)*(undefined8 *)(puVar2 + 0x30);
  fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) -
           (float)((ulong)*(undefined8 *)(puVar2 + 0x30) >> 0x20);
  fVar16 = *(float *)(param_1 + 0x1c) - *(float *)(puVar2 + 0x38);
  lVar10 = plVar7[1];
  if (lVar10 == 0) {
    if (lVar8 == 0) {
      uVar24 = 0;
      fVar32 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar31 = 0.0;
    }
    else {
      fVar31 = (float)((ulong)*(undefined8 *)(lVar8 + 0x170) >> 0x20);
      fVar32 = (float)*(undefined8 *)(lVar8 + 0x170);
      uVar24 = *(undefined8 *)(lVar8 + 0x164);
      fVar28 = fVar31 * fVar16 - fVar37 * *(float *)(lVar8 + 0x178);
      fVar29 = -(fVar32 * fVar16) + fVar36 * *(float *)(lVar8 + 0x178);
      fVar31 = -(fVar31 * fVar36) + fVar37 * fVar32;
      fVar32 = *(float *)(lVar8 + 0x160);
    }
  }
  else {
    fVar31 = (float)((ulong)*(undefined8 *)(lVar10 + 0x18c) >> 0x20);
    fVar11 = (float)*(undefined8 *)(lVar10 + 0x18c);
    uVar24 = *(undefined8 *)(lVar10 + 0x180);
    fVar28 = fVar31 * fVar16 - fVar37 * *(float *)(lVar10 + 0x194);
    fVar32 = *(float *)(lVar10 + 0x17c);
    fVar29 = -(fVar11 * fVar16) + fVar36 * *(float *)(lVar10 + 0x194);
    fVar31 = -(fVar31 * fVar36) + fVar37 * fVar11;
  }
  lVar10 = plVar6[1];
  lVar8 = *plVar6;
  fVar19 = (fVar19 + (float)uVar23) - ((float)uVar24 + fVar29);
  fVar29 = (fVar18 + (float)((ulong)uVar23 >> 0x20)) - ((float)((ulong)uVar24 >> 0x20) + fVar31);
  fVar31 = *(float *)(param_1 + 0x34);
  fVar20 = (fVar20 + fVar22) - (fVar32 + fVar28);
  fVar22 = *(float *)(this + 0x10);
  *(long *)(param_4 + 0x18) = plVar6[2];
  *(long *)(param_4 + 0x10) = lVar10;
  *(long *)(param_4 + 8) = lVar8;
  lVar10 = plVar7[1];
  lVar8 = *plVar7;
  *(long *)(param_4 + 0x30) = plVar7[2];
  fVar18 = (float)NEON_fmadd(fVar20,fVar15,fVar19 * fVar13);
  *(long *)(param_4 + 0x28) = lVar10;
  *(long *)(param_4 + 0x20) = lVar8;
  fVar18 = fVar18 + fVar29 * fVar14;
  if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar5 != 0)) {
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
    btSoftBody::Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
    btSoftBody::Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
    btSoftBody::Body::xform()::identity._24_8_ =
         btTransform::getIdentity()::identityTransform._24_8_;
    btSoftBody::Body::xform()::identity._16_8_ =
         btTransform::getIdentity()::identityTransform._16_8_;
    btSoftBody::Body::xform()::identity._40_8_ =
         btTransform::getIdentity()::identityTransform._40_8_;
    btSoftBody::Body::xform()::identity._32_8_ =
         btTransform::getIdentity()::identityTransform._32_8_;
    btSoftBody::Body::xform()::identity._56_8_ =
         btTransform::getIdentity()::identityTransform._56_8_;
    btSoftBody::Body::xform()::identity._48_8_ =
         btTransform::getIdentity()::identityTransform._48_8_;
    __cxa_guard_release(&btSoftBody::Body::xform()::identity);
  }
  fVar31 = fVar31 - fVar22;
  uVar21 = NEON_fmsub(fVar18,fVar15,fVar20);
  fVar19 = fVar19 - fVar13 * fVar18;
  fVar29 = fVar29 - fVar14 * fVar18;
  puVar1 = (undefined8 *)btSoftBody::Body::xform()::identity;
  if (*plVar6 != 0) {
    puVar1 = (undefined8 *)(*plVar6 + 0x60);
  }
  if (plVar6[2] != 0) {
    puVar1 = (undefined8 *)(plVar6[2] + 8);
  }
  uVar23 = *puVar1;
  fVar20 = *(float *)(puVar1 + 1);
  uVar24 = puVar1[2];
  fVar22 = *(float *)(puVar1 + 3);
  uVar30 = puVar1[4];
  uVar33 = *(undefined4 *)(puVar1 + 5);
  *(undefined4 *)(param_4 + 0x44) = 0;
  uVar33 = NEON_fmadd(uVar33,fVar17,fVar20 * fVar34 + fVar22 * fVar35);
  *(ulong *)(param_4 + 0x38) =
       CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar34 + (float)((ulong)uVar24 >> 0x20) * fVar35 +
                (float)((ulong)uVar30 >> 0x20) * fVar17,
                (float)uVar23 * fVar34 + (float)uVar24 * fVar35 + (float)uVar30 * fVar17);
  *(undefined4 *)(param_4 + 0x40) = uVar33;
  if (((btSoftBody::Body::xform()::identity & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::xform()::identity), iVar5 != 0)) {
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
    btSoftBody::Body::xform()::identity._8_8_ = btTransform::getIdentity()::identityTransform._8_8_;
    btSoftBody::Body::xform()::identity._0_8_ = btTransform::getIdentity()::identityTransform._0_8_;
    btSoftBody::Body::xform()::identity._24_8_ =
         btTransform::getIdentity()::identityTransform._24_8_;
    btSoftBody::Body::xform()::identity._16_8_ =
         btTransform::getIdentity()::identityTransform._16_8_;
    btSoftBody::Body::xform()::identity._40_8_ =
         btTransform::getIdentity()::identityTransform._40_8_;
    btSoftBody::Body::xform()::identity._32_8_ =
         btTransform::getIdentity()::identityTransform._32_8_;
    btSoftBody::Body::xform()::identity._56_8_ =
         btTransform::getIdentity()::identityTransform._56_8_;
    btSoftBody::Body::xform()::identity._48_8_ =
         btTransform::getIdentity()::identityTransform._48_8_;
    __cxa_guard_release(&btSoftBody::Body::xform()::identity);
  }
  uVar23 = NEON_fmov(0x3f800000,4);
  puVar1 = (undefined8 *)btSoftBody::Body::xform()::identity;
  if (*plVar7 != 0) {
    puVar1 = (undefined8 *)(*plVar7 + 0x60);
  }
  if (plVar7[2] != 0) {
    puVar1 = (undefined8 *)(plVar7[2] + 8);
  }
  uVar24 = *puVar1;
  fVar20 = *(float *)(puVar1 + 1);
  uVar30 = puVar1[2];
  fVar22 = *(float *)(puVar1 + 3);
  uVar25 = puVar1[4];
  uVar33 = *(undefined4 *)(puVar1 + 5);
  *(ulong *)(param_4 + 0xc0) = CONCAT44(fVar35,fVar34);
  *(float *)(param_4 + 0xe0) = fVar15;
  *(float *)(param_4 + 200) = fVar17;
  *(undefined8 *)(param_4 + 0x54) = 0x3f80000000000000;
  *(undefined4 *)(param_4 + 0xcc) = 0;
  *(ulong *)(param_4 + 0xd0) = CONCAT44(fVar37,fVar36);
  uVar33 = NEON_fmadd(uVar33,fVar16,fVar20 * fVar36 + fVar22 * fVar37);
  *(float *)(param_4 + 0xd8) = fVar16;
  *(undefined4 *)(param_4 + 0xdc) = 0;
  *(undefined8 *)(param_4 + 0xb8) = 0;
  *(undefined8 *)(param_4 + 0x5c) = uVar23;
  *(float *)(param_4 + 100) = fVar31 * fVar15;
  *(ulong *)(param_4 + 0x68) = CONCAT44(fVar14 * fVar31,fVar13 * fVar31);
  *(undefined4 *)(param_4 + 0x70) = 0;
  *(ulong *)(param_4 + 0xe4) = CONCAT44(fVar14,fVar13);
  *(undefined4 *)(param_4 + 0xec) = uVar12;
  *(ulong *)(param_4 + 0x48) =
       CONCAT44((float)((ulong)uVar24 >> 0x20) * fVar36 + (float)((ulong)uVar30 >> 0x20) * fVar37 +
                (float)((ulong)uVar25 >> 0x20) * fVar16,
                (float)uVar24 * fVar36 + (float)uVar30 * fVar37 + (float)uVar25 * fVar16);
  *(undefined4 *)(param_4 + 0x50) = uVar33;
  param_4[0xb4] = (CJoint)0x0;
  fVar14 = (float)NEON_fmadd(uVar21,uVar21,fVar19 * fVar19);
  fVar18 = *(float *)(this + 0x14) * fVar18;
  fVar13 = 1.0;
  if (fVar18 * fVar18 <= fVar14 + fVar29 * fVar29) {
    fVar13 = *(float *)(this + 0x14);
  }
  *(float *)(param_4 + 0xf0) = fVar13;
  if (plVar6[1] == 0) {
    if (*plVar6 != 0) {
      puVar9 = (undefined4 *)(*plVar6 + 0xa4);
      goto LAB_00f8ad70;
    }
    uVar12 = 0;
  }
  else {
    puVar9 = (undefined4 *)(plVar6[1] + 0x19c);
LAB_00f8ad70:
    uVar12 = *puVar9;
  }
  if (((btSoftBody::Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::invWorldInertia()::iwi), iVar5 != 0)) {
    btSoftBody::Body::invWorldInertia()::iwi._24_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._16_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._40_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._32_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._8_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&btSoftBody::Body::invWorldInertia()::iwi);
  }
  puVar2 = btSoftBody::Body::invWorldInertia()::iwi;
  if (*plVar6 != 0) {
    puVar2 = (undefined1 *)(*plVar6 + 0xd8);
  }
  if (plVar6[1] != 0) {
    puVar2 = (undefined1 *)(plVar6[1] + 0x14c);
  }
  if (plVar7[1] == 0) {
    if (*plVar7 != 0) {
      puVar9 = (undefined4 *)(*plVar7 + 0xa4);
      goto LAB_00f8adc4;
    }
    uVar21 = 0;
  }
  else {
    puVar9 = (undefined4 *)(plVar7[1] + 0x19c);
LAB_00f8adc4:
    uVar21 = *puVar9;
  }
  if (((btSoftBody::Body::invWorldInertia()::iwi & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&btSoftBody::Body::invWorldInertia()::iwi), iVar5 != 0)) {
    btSoftBody::Body::invWorldInertia()::iwi._24_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._16_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._40_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._32_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._8_8_ = 0;
    btSoftBody::Body::invWorldInertia()::iwi._0_8_ = 0;
    __cxa_guard_release(&btSoftBody::Body::invWorldInertia()::iwi,puVar2);
  }
  puVar3 = btSoftBody::Body::invWorldInertia()::iwi;
  if (*plVar7 != 0) {
    puVar3 = (undefined1 *)(*plVar7 + 0xd8);
  }
  if (plVar7[1] != 0) {
    puVar3 = (undefined1 *)(plVar7[1] + 0x14c);
  }
  FUN_00f7c1e4(uVar12,*(undefined4 *)(param_4 + 0xc0),*(undefined4 *)(param_4 + 0xc4),
               *(undefined4 *)(param_4 + 200),uVar21,*(undefined4 *)(param_4 + 0xd0),
               *(undefined4 *)(param_4 + 0xd4),*(undefined4 *)(param_4 + 0xd8),&local_88,puVar2,
               puVar3);
  *(undefined8 *)(param_4 + 0x8c) = uStack_80;
  *(undefined8 *)(param_4 + 0x84) = local_88;
  *(undefined8 *)(param_4 + 0x9c) = uStack_70;
  *(undefined8 *)(param_4 + 0x94) = local_78;
  *(undefined8 *)(param_4 + 0xac) = uStack_60;
  *(undefined8 *)(param_4 + 0xa4) = local_68;
LAB_00f8ae1c:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar26 < fVar27);
  }
  return;
}


