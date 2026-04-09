// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLinearJoint
// Entry Point: 00f7aca8
// Size: 1136 bytes
// Signature: undefined __thiscall appendLinearJoint(btSoftBody * this, Specs * param_1, Cluster * param_2, Body param_3)


/* btSoftBody::appendLinearJoint(btSoftBody::LJoint::Specs const&, btSoftBody::Cluster*,
   btSoftBody::Body) */

void __thiscall
btSoftBody::appendLinearJoint(btSoftBody *this,Specs *param_1,Cluster *param_2,Body param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar5 = (undefined8 *)(ulong)param_3;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  puVar3 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xd8,0x10);
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1a] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR__Joint_0101b830;
  puVar3[1] = param_2;
  uVar14 = puVar5[1];
  uVar10 = *puVar5;
  puVar3[6] = puVar5[2];
  puVar3[5] = uVar14;
  puVar3[4] = uVar10;
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&Body::xform()::identity), iVar2 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar2 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar2 != 0)) {
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
  puVar5 = (undefined8 *)Body::xform()::identity;
  if (puVar3[1] != 0) {
    puVar5 = (undefined8 *)(puVar3[1] + 0x60);
  }
  if (puVar3[3] != 0) {
    puVar5 = (undefined8 *)(puVar3[3] + 8);
  }
  uVar15 = puVar5[2];
  fVar8 = *(float *)(param_1 + 0xc) - *(float *)(puVar5 + 6);
  uVar10 = *puVar5;
  fVar11 = *(float *)(param_1 + 0x10) - *(float *)((long)puVar5 + 0x34);
  fVar13 = *(float *)(param_1 + 0x14) - *(float *)(puVar5 + 7);
  uVar14 = puVar5[4];
  uVar9 = NEON_fmadd(fVar11,*(undefined4 *)(puVar5 + 3),fVar8 * *(float *)(puVar5 + 1));
  uVar12 = *(undefined4 *)(puVar5 + 5);
  *(undefined4 *)((long)puVar3 + 0x44) = 0;
  uVar9 = NEON_fmadd(fVar13,uVar12,uVar9);
  puVar3[7] = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar8 +
                       (float)((ulong)uVar15 >> 0x20) * fVar11 +
                       (float)((ulong)uVar14 >> 0x20) * fVar13,
                       (float)uVar10 * fVar8 + (float)uVar15 * fVar11 + (float)uVar14 * fVar13);
  *(undefined4 *)(puVar3 + 8) = uVar9;
  if (((Body::xform()::identity & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&Body::xform()::identity), iVar2 != 0)) {
    if (((btTransform::getIdentity()::identityTransform & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&btTransform::getIdentity()::identityTransform), iVar2 != 0)) {
      if (((btMatrix3x3::getIdentity()::identityMatrix & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&btMatrix3x3::getIdentity()::identityMatrix), iVar2 != 0)) {
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
  puVar5 = (undefined8 *)Body::xform()::identity;
  if (puVar3[4] != 0) {
    puVar5 = (undefined8 *)(puVar3[4] + 0x60);
  }
  if (puVar3[6] != 0) {
    puVar5 = (undefined8 *)(puVar3[6] + 8);
  }
  uVar15 = puVar5[2];
  fVar8 = *(float *)(param_1 + 0xc) - *(float *)(puVar5 + 6);
  uVar10 = *puVar5;
  fVar11 = *(float *)(param_1 + 0x10) - *(float *)((long)puVar5 + 0x34);
  fVar13 = *(float *)(param_1 + 0x14) - *(float *)(puVar5 + 7);
  uVar14 = puVar5[4];
  uVar9 = NEON_fmadd(fVar11,*(undefined4 *)(puVar5 + 3),fVar8 * *(float *)(puVar5 + 1));
  uVar12 = *(undefined4 *)(puVar5 + 5);
  *(undefined4 *)((long)puVar3 + 0x54) = 0;
  uVar9 = NEON_fmadd(fVar13,uVar12,uVar9);
  puVar3[9] = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar8 +
                       (float)((ulong)uVar15 >> 0x20) * fVar11 +
                       (float)((ulong)uVar14 >> 0x20) * fVar13,
                       (float)uVar10 * fVar8 + (float)uVar15 * fVar11 + (float)uVar14 * fVar13);
  *(undefined4 *)(puVar3 + 10) = uVar9;
  uVar6 = *(uint *)(this + 0x454);
  uVar1 = *(uint *)(this + 0x458);
  uVar10 = NEON_rev64(*(undefined8 *)param_1,4);
  puVar3[0xb] = uVar10;
  *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(param_1 + 8);
  if (uVar6 == uVar1) {
    uVar1 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar1 = 1;
    }
    if ((int)uVar6 < (int)uVar1) {
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar4 = (*(code *)PTR_FUN_01048e38)
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3,0x10);
        uVar6 = *(uint *)(this + 0x454);
      }
      if (0 < (int)uVar6) {
        lVar7 = 0;
        do {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(*(long *)(this + 0x460) + lVar7);
          lVar7 = lVar7 + 8;
        } while ((ulong)uVar6 * 8 - lVar7 != 0);
      }
      if ((*(long *)(this + 0x460) != 0) && (this[0x468] != (btSoftBody)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
        uVar6 = *(uint *)(this + 0x454);
      }
      *(long *)(this + 0x460) = lVar4;
      *(uint *)(this + 0x458) = uVar1;
      this[0x468] = (btSoftBody)0x1;
    }
  }
  *(undefined8 **)(*(long *)(this + 0x460) + (long)(int)uVar6 * 8) = puVar3;
  *(uint *)(this + 0x454) = uVar6 + 1;
  return;
}


