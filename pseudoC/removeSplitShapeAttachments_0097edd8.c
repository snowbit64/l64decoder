// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeSplitShapeAttachments
// Entry Point: 0097edd8
// Size: 1156 bytes
// Signature: undefined __thiscall removeSplitShapeAttachments(MeshSplitManager * this, MeshSplitShape * param_1, Matrix4x4 * param_2, float param_3, float param_4, float param_5)


/* MeshSplitManager::removeSplitShapeAttachments(MeshSplitShape*, Matrix4x4 const&, float, float,
   float) */

void __thiscall
MeshSplitManager::removeSplitShapeAttachments
          (MeshSplitManager *this,MeshSplitShape *param_1,Matrix4x4 *param_2,float param_3,
          float param_4,float param_5)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  void *__dest;
  IRenderDevice *pIVar7;
  Bt2PhysicsRBObject *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  MeshSplitAttachmentGeometry *this_01;
  ulong uVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 local_f0;
  undefined8 local_ec;
  float local_e0;
  undefined8 local_dc;
  undefined4 local_d0;
  undefined8 local_cc;
  float local_c0;
  undefined8 local_bc;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if ((((((byte)param_1[0x210] >> 6 & 1) == 0) ||
       ((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long ***)(param_1 + 0x28)) >> 3) == 0)) ||
      (plVar11 = **(long ***)(param_1 + 0x28), (*(byte *)((long)plVar11 + 0x11) >> 3 & 1) == 0)) ||
     ((this_01 = (MeshSplitAttachmentGeometry *)plVar11[0x2e], ((byte)this_01[0x31] >> 1 & 1) == 0
      || (uVar17 = (ulong)(*(long *)(this_01 + 0x98) - *(long *)(this_01 + 0x90)) >> 2,
         (int)uVar17 == 0)))) {
    uVar23 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x214);
    lVar15 = *(long *)(this_01 + 0x68);
    Matrix4x4::invert3x4((Matrix4x4 *)&local_f0,param_2);
    RawTransformGroup::updateWorldTransformation();
    fVar19 = *(float *)(plVar11 + 0x17);
    fVar24 = *(float *)((long)plVar11 + 0xbc);
    bVar6 = false;
    fVar32 = (float)local_dc;
    fVar34 = (float)((ulong)local_dc >> 0x20);
    fVar30 = *(float *)(plVar11 + 0x18);
    fVar25 = *(float *)(plVar11 + 0x19);
    fVar40 = *(float *)((long)plVar11 + 0xcc);
    uVar35 = NEON_fmadd(fVar19,local_f0,fVar24 * local_e0);
    fVar42 = *(float *)(plVar11 + 0x1d);
    fVar43 = *(float *)((long)plVar11 + 0xec);
    fVar38 = (float)local_ec;
    fVar39 = (float)((ulong)local_ec >> 0x20);
    fVar20 = *(float *)(plVar11 + 0x1b);
    fVar44 = *(float *)((long)plVar11 + 0xdc);
    uVar36 = NEON_fmadd(fVar30,local_d0,uVar35);
    fVar45 = (float)local_cc;
    fVar46 = (float)((ulong)local_cc >> 0x20);
    fVar41 = *(float *)(plVar11 + 0x1e);
    uVar31 = NEON_fmadd(fVar25,local_f0,local_e0 * fVar40);
    uVar33 = NEON_fmadd(fVar42,local_f0,local_e0 * fVar43);
    fVar26 = *(float *)(plVar11 + 0x1a);
    uVar35 = NEON_fmadd(fVar20,local_f0,local_e0 * fVar44);
    fVar21 = *(float *)(plVar11 + 0x1c);
    fVar28 = (float)NEON_fmadd(fVar41,local_d0,uVar33);
    fVar37 = (float)NEON_fmadd(fVar26,local_d0,uVar31);
    uVar35 = NEON_fmadd(fVar21,local_d0,uVar35);
    uVar12 = 0;
    do {
      while( true ) {
        uVar4 = *(ushort *)(*(long *)(this_01 + 0x90) + uVar12 * 4 + 2);
        lVar8 = *(long *)(lVar15 + 0x10) + (ulong)uVar4 * 0x50;
        fVar22 = *(float *)(lVar8 + 0x30);
        fVar27 = *(float *)(lVar8 + 0x34);
        uVar31 = NEON_fmadd(fVar22,uVar36,fVar37 * fVar27);
        fVar18 = *(float *)(lVar8 + 0x38);
        fVar29 = (float)NEON_fmadd(fVar18,uVar35,uVar31);
        uVar16 = (uint)uVar17;
        if (ABS(local_c0 + fVar28 + fVar29) <= param_3) break;
LAB_0097f0e8:
        uVar1 = (uint)uVar12 + 1;
        if (uVar16 <= uVar1) {
          if (!bVar6) {
            uVar23 = 0;
            goto LAB_0097f100;
          }
          goto LAB_0097f144;
        }
        uVar12 = (ulong)uVar1;
      }
      fVar29 = fVar32 * fVar43 + fVar38 * fVar42 + fVar45 * fVar41 + (float)local_bc +
               (fVar32 * fVar40 + fVar38 * fVar25 + fVar45 * fVar26) * fVar27 +
               (fVar32 * fVar24 + fVar38 * fVar19 + fVar45 * fVar30) * fVar22 +
               (fVar32 * fVar44 + fVar38 * fVar20 + fVar45 * fVar21) * fVar18;
      fVar18 = fVar34 * fVar43 + fVar39 * fVar42 + fVar46 * fVar41 +
               (float)((ulong)local_bc >> 0x20) +
               (fVar34 * fVar40 + fVar39 * fVar25 + fVar46 * fVar26) * fVar27 +
               (fVar34 * fVar24 + fVar39 * fVar19 + fVar46 * fVar30) * fVar22 +
               (fVar34 * fVar44 + fVar39 * fVar20 + fVar46 * fVar21) * fVar18;
      if (fVar29 < 0.0) goto LAB_0097f0e8;
      uVar23 = NEON_fcmge(CONCAT44(param_5,param_4),CONCAT44(fVar18,fVar29),4);
      if ((((~(byte)uVar23 & 1) != 0) || (fVar18 < 0.0)) ||
         ((~(byte)((ulong)uVar23 >> 0x20) & 1) != 0)) goto LAB_0097f0e8;
      puVar2 = *(ulong **)(this + 0x170);
      if (puVar2 < *(ulong **)(this + 0x178)) {
        *puVar2 = (ulong)CONCAT24(uVar4,uVar3);
        *(ulong **)(this + 0x170) = puVar2 + 1;
      }
      else {
        pvVar13 = *(void **)(this + 0x168);
        sVar14 = (long)puVar2 - (long)pvVar13;
        uVar17 = ((long)sVar14 >> 3) + 1;
        if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = (long)*(ulong **)(this + 0x178) - (long)pvVar13;
        uVar10 = (long)uVar9 >> 2;
        if (uVar17 <= uVar10) {
          uVar17 = uVar10;
        }
        if (0x7ffffffffffffff7 < uVar9) {
          uVar17 = 0x1fffffffffffffff;
        }
        if (uVar17 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar17 << 3);
        }
        puVar2 = (ulong *)((long)__dest + ((long)sVar14 >> 3) * 8);
        *puVar2 = (ulong)CONCAT24(uVar4,uVar3);
        if (0 < (long)sVar14) {
          memcpy(__dest,pvVar13,sVar14);
        }
        *(void **)(this + 0x168) = __dest;
        *(ulong **)(this + 0x170) = puVar2 + 1;
        *(void **)(this + 0x178) = (void *)((long)__dest + uVar17 * 8);
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      pvVar13 = (void *)(*(long *)(this_01 + 0x90) + uVar12 * 4);
      sVar14 = *(long *)(this_01 + 0x98) - (long)(void *)((long)pvVar13 + 4);
      if (sVar14 != 0) {
        memmove(pvVar13,(void *)((long)pvVar13 + 4),sVar14);
      }
      uVar16 = uVar16 - 1;
      uVar17 = (ulong)uVar16;
      bVar6 = true;
      *(size_t *)(this_01 + 0x98) = (long)pvVar13 + sVar14;
    } while ((uint)uVar12 < uVar16);
LAB_0097f144:
    if (uVar16 == 0) {
      (**(code **)(*plVar11 + 8))();
    }
    else {
      RenderDeviceManager::getInstance();
      pIVar7 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
      MeshSplitAttachmentGeometry::updateGeometry(this_01,pIVar7);
    }
    lVar15 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar15 + 8) >> 3 & 1) != 0) {
      fVar19 = 0.0;
      if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long **)(param_1 + 0x28)) >> 3) != 0)
          && (lVar15 = **(long **)(param_1 + 0x28), (*(byte *)(lVar15 + 0x11) >> 3 & 1) != 0)) &&
         (lVar15 = *(long *)(lVar15 + 0x170), (*(byte *)(lVar15 + 0x31) >> 1 & 1) != 0)) {
        fVar19 = (float)((ulong)(*(long *)(lVar15 + 0x98) - *(long *)(lVar15 + 0x90)) >> 2 &
                        0xffffffff) * 0.25 * 0.1;
      }
      fVar20 = (float)NEON_fminnm(fVar19,0x3dcccccd);
      fVar19 = (float)NEON_fminnm(fVar19,0x3d4ccccd);
      this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
      Bt2PhysicsRBObject::setAngularDamping(this_00,fVar19 + 0.1);
      Bt2PhysicsRBObject::setRollingFriction(this_00,fVar20 + 0.17);
    }
    uVar23 = 1;
  }
LAB_0097f100:
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar23);
}


