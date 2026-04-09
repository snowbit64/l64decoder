// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a5acc4
// Size: 1228 bytes
// Signature: undefined __thiscall propagateTowardsChildren(RawTransformGroup * this, uint param_1, uint param_2)


/* RawTransformGroup::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall
RawTransformGroup::propagateTowardsChildren(RawTransformGroup *this,uint param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_78;
  float local_74;
  float fStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = *(uint *)(this + 0x40);
  uVar8 = param_1 & 0xfffffffe;
  if ((uVar3 & 0x110) != 0x100) {
    uVar8 = param_1;
  }
  uVar9 = uVar8;
  if ((uVar8 >> 1 & 1) != 0) {
    if ((uVar3 & 1) == 0) {
LAB_00a5ad18:
      if ((uVar3 >> 1 & 1) == 0) {
LAB_00a5ada4:
        uVar9 = uVar8 & 0xfffffffd;
        goto joined_r0x00a5ada8;
      }
LAB_00a5ad1c:
      uVar3 = uVar3 & 0xfffffffd;
    }
    else {
      if ((RawTransformGroup *)CullingManager::s_cullingManagerInstance._344_8_ != this) {
        lVar5 = *(long *)(this + 0x20);
        if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 4 & 1) == 0)) goto LAB_00a5ad18;
        if ((uint)((uVar3 & 2) == 0) != (*(uint *)(lVar5 + 0x40) & 2) >> 1) goto LAB_00a5ada4;
        if ((*(uint *)(lVar5 + 0x40) >> 1 & 1) != 0) goto LAB_00a5ad6c;
        goto LAB_00a5ad1c;
      }
      if ((uVar3 >> 1 & 1) != 0) goto LAB_00a5ada4;
LAB_00a5ad6c:
      uVar3 = uVar3 | 2;
    }
    *(uint *)(this + 0x40) = uVar3;
  }
joined_r0x00a5ada8:
  if (((uVar8 >> 2 & 1) != 0) && (((byte)this[0x10] >> 6 & 1) == 0)) {
    lVar5 = *(long *)(this + 0x20);
    if ((lVar5 == 0) ||
       (((*(byte *)(lVar5 + 0x10) >> 4 & 1) == 0 || ((*(byte *)(lVar5 + 0x40) >> 3 & 1) == 0)))) {
      uVar3 = uVar3 & 0xfffffff7;
    }
    else {
      uVar3 = uVar3 | 8;
    }
    *(uint *)(this + 0x40) = uVar3;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    lVar5 = *(long *)(this + 0x20);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x10) >> 4 & 1) == 0)) {
      fVar11 = *(float *)(this + 0x118);
      fVar13 = *(float *)(this + 0x11c);
    }
    else {
      fVar11 = *(float *)(lVar5 + 0x124);
      if (*(float *)(this + 0x118) < *(float *)(lVar5 + 0x124)) {
        fVar11 = *(float *)(this + 0x118);
      }
      fVar13 = *(float *)(lVar5 + 0x128);
      if (*(float *)(lVar5 + 0x128) < *(float *)(this + 0x11c)) {
        fVar13 = *(float *)(this + 0x11c);
      }
    }
    if ((*(float *)(this + 0x124) == fVar11) && (*(float *)(this + 0x128) == fVar13)) {
      uVar9 = uVar9 & 0xfffffff7;
    }
    else {
      *(float *)(this + 0x124) = fVar11;
      *(float *)(this + 0x128) = fVar13;
    }
  }
  if ((uVar9 & 0x30) != 0) {
    if ((uVar3 >> 10 & 1) == 0) {
      lVar5 = *(long *)(this + 0x20);
      iVar2 = 0xff00ff;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x10) >> 4 & 1) != 0)) {
        piVar6 = (int *)(lVar5 + 0x120);
        goto LAB_00a5ae10;
      }
    }
    else {
      piVar6 = (int *)(this + 0x120);
LAB_00a5ae10:
      iVar2 = *piVar6;
    }
    if (*(int *)(this + 0x120) == iVar2) {
      uVar8 = uVar9 & 0xffffffef;
      if ((uVar9 & 0x20) != 0) {
        uVar8 = uVar9;
      }
    }
    else {
      *(int *)(this + 0x120) = iVar2;
      uVar8 = uVar9;
    }
    uVar9 = uVar8 & 0xffffffdf;
  }
  if ((uVar9 & 0xc0) == 0) goto LAB_00a5af08;
  if ((uVar3 >> 9 & 1) == 0) {
    lVar5 = *(long *)(this + 0x20);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x10) >> 4 & 1) != 0)) {
      plVar10 = (long *)(lVar5 + 0xf8);
      goto LAB_00a5aea4;
    }
    lVar5 = 0;
  }
  else {
    plVar10 = (long *)(this + 0xf8);
LAB_00a5aea4:
    lVar5 = *plVar10;
  }
  lVar4 = *(long *)(this + 0xf8);
  if (lVar4 == lVar5) {
    uVar3 = uVar9 & 0xffffffbf;
    if ((uVar9 & 0x80) != 0) {
      uVar3 = uVar9;
    }
  }
  else {
    if (lVar5 != 0) {
      FUN_00f276d0(1,lVar5 + 0x24);
      lVar4 = *(long *)(this + 0xf8);
    }
    if (lVar4 != 0) {
      if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance),
         iVar2 != 0)) {
                    /* try { // try from 00a5b154 to 00a5b15f has its CatchHandler @ 00a5b190 */
        VisibilityConditionManager::VisibilityConditionManager
                  ((VisibilityConditionManager *)
                   &VisibilityConditionManager::getInstance()::instance);
        __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                     &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
      }
      VisibilityConditionManager::releaseVisibilityCondition
                ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance,
                 *(VisibilityCondition **)(this + 0xf8));
    }
    *(long *)(this + 0xf8) = lVar5;
    uVar3 = uVar9 & 0xffffff7f;
  }
  uVar9 = uVar3 & 0xffffff7f;
LAB_00a5af08:
  if (uVar9 != 0) {
    if ((uVar9 & 1) != 0) {
      *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x100;
      ScenegraphNode::notifyWorldTransformationDirtyListeners((ScenegraphNode *)this,param_2);
    }
    lVar5 = *(long *)(this + 0x28);
    uVar7 = *(long *)(this + 0x30) - lVar5;
    if ((int)(uVar7 >> 3) != 0) {
      lVar4 = 0;
      do {
        plVar10 = *(long **)(lVar5 + lVar4);
        if ((*(byte *)(plVar10 + 2) >> 4 & 1) != 0) {
          if ((((*(byte *)(*(long *)(this + 0x108) + 8) >> 4 & 1) == 0) || (param_2 != 1)) ||
             ((*(uint *)(plVar10[0x21] + 8) & 0x88) != 0x88)) {
            lVar5 = *plVar10;
            uVar3 = uVar9;
            uVar8 = param_2;
          }
          else {
            updateWorldTransformation();
            Matrix4x4::invert3x4((Matrix4x4 *)&local_a8,(Matrix4x4 *)(this + 0xb8));
            updateWorldTransformation();
            uVar12 = *(undefined4 *)(plVar10 + 0x17);
            fVar13 = *(float *)((long)plVar10 + 0xbc);
            local_dc = 0;
            uVar15 = *(undefined4 *)(plVar10 + 0x18);
            uVar18 = *(undefined4 *)(plVar10 + 0x19);
            fVar11 = *(float *)((long)plVar10 + 0xcc);
            local_cc = 0;
            uVar14 = NEON_fmadd(uVar12,local_a8,fVar13 * local_98);
            uVar16 = NEON_fmadd(uVar12,local_a4,fVar13 * fStack_94);
            uVar12 = NEON_fmadd(uVar12,uStack_a0,fVar13 * local_90);
            local_bc = 0;
            local_e0 = NEON_fmadd(uVar15,local_80,uVar12);
            local_ac = 0x3f800000;
            local_e8 = NEON_fmadd(uVar15,local_88,uVar14);
            uStack_e4 = NEON_fmadd(uVar15,uStack_84,uVar16);
            uVar16 = NEON_fmadd(uVar18,local_a4,fStack_94 * fVar11);
            uVar14 = NEON_fmadd(uVar18,local_a8,local_98 * fVar11);
            uVar15 = *(undefined4 *)(plVar10 + 0x1a);
            uVar12 = *(undefined4 *)(plVar10 + 0x1b);
            fVar13 = *(float *)((long)plVar10 + 0xdc);
            uStack_d4 = NEON_fmadd(uVar15,uStack_84,uVar16);
            local_d8 = NEON_fmadd(uVar15,local_88,uVar14);
            uVar14 = NEON_fmadd(uVar18,uStack_a0,local_90 * fVar11);
            uVar20 = *(undefined4 *)(plVar10 + 0x1d);
            fVar11 = *(float *)((long)plVar10 + 0xec);
            local_d0 = NEON_fmadd(uVar15,local_80,uVar14);
            uVar18 = NEON_fmadd(uVar12,local_a8,local_98 * fVar13);
            uVar19 = NEON_fmadd(uVar12,local_a4,fStack_94 * fVar13);
            uVar15 = NEON_fmadd(uVar12,uStack_a0,local_90 * fVar13);
            uVar17 = *(undefined4 *)(plVar10 + 0x1c);
            uVar12 = NEON_fmadd(uVar20,local_a8,local_98 * fVar11);
            uVar16 = NEON_fmadd(uVar20,local_a4,fStack_94 * fVar11);
            uVar14 = NEON_fmadd(uVar20,uStack_a0,local_90 * fVar11);
            uVar20 = *(undefined4 *)(plVar10 + 0x1e);
            local_c8 = NEON_fmadd(uVar17,local_88,uVar18);
            uStack_c4 = NEON_fmadd(uVar17,uStack_84,uVar19);
            local_c0 = NEON_fmadd(uVar17,local_80,uVar15);
            local_b8 = (float)NEON_fmadd(uVar20,local_88,uVar12);
            fStack_b4 = (float)NEON_fmadd(uVar20,uStack_84,uVar16);
            local_b0 = (float)NEON_fmadd(uVar20,local_80,uVar14);
            local_b8 = local_78 + local_b8;
            fStack_b4 = fStack_b4 + local_74;
            local_b0 = local_b0 + fStack_70;
            (**(code **)(*plVar10 + 0x30))(plVar10,&local_e8);
            if ((uVar9 & 0xfffffffe) == 0) goto LAB_00a5af84;
            lVar5 = *plVar10;
            uVar8 = 1;
            uVar3 = uVar9 & 0xfffffffe;
          }
          (**(code **)(lVar5 + 0x28))(plVar10,uVar3,uVar8);
        }
LAB_00a5af84:
        if ((uVar7 >> 3 & 0xffffffff) * 8 + -8 == lVar4) break;
        lVar5 = *(long *)(this + 0x28);
        lVar4 = lVar4 + 8;
      } while( true );
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


