// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addInterShapeJoint
// Entry Point: 00923ccc
// Size: 1248 bytes
// Signature: undefined __thiscall addInterShapeJoint(DestructionShape * this, uint param_1, uint param_2, DestructionShape * param_3, Vector3 * param_4)


/* DestructionShape::addInterShapeJoint(unsigned int, unsigned int, DestructionShape*, Vector3
   const&) */

void __thiscall
DestructionShape::addInterShapeJoint
          (DestructionShape *this,uint param_1,uint param_2,DestructionShape *param_3,
          Vector3 *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  Matrix4x4 *pMVar6;
  Matrix4x4 *pMVar7;
  long *plVar8;
  void *pvVar9;
  uint *puVar10;
  void *pvVar11;
  uint **ppuVar12;
  long **pplVar13;
  long **pplVar14;
  ulong uVar15;
  long **pplVar16;
  long **pplVar17;
  DestructionGeometry *this_00;
  long lVar18;
  float fVar19;
  float fVar20;
  uint local_90;
  uint uStack_8c;
  DestructionShape *local_88;
  DestructionShape *pDStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = RawTransformGroup::getPhysicsObject();
  if (((*(byte *)(lVar5 + 8) & 1) == 0) ||
     (lVar5 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar5 + 8) & 1) == 0)) {
    local_88 = param_3;
    pDStack_80 = this;
    local_90 = param_2;
    uStack_8c = param_1;
    if (this < param_3) {
      local_88 = this;
      pDStack_80 = param_3;
      local_90 = param_1;
      uStack_8c = param_2;
    }
    local_78 = *(undefined8 *)param_4;
    local_70 = *(undefined4 *)(param_4 + 8);
    std::__ndk1::
    __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
    ::
    __emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,DestructionShape::InterShapeJointToAdd_const&>
              ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                *)(this + 0x278),(InterShapeJointToAdd *)&local_90,(InterShapeJointToAdd *)&local_90
              );
    std::__ndk1::
    __tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
    ::
    __emplace_unique_key_args<DestructionShape::InterShapeJointToAdd,DestructionShape::InterShapeJointToAdd_const&>
              ((__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
                *)(param_3 + 0x278),(InterShapeJointToAdd *)&local_90,
               (InterShapeJointToAdd *)&local_90);
  }
  else {
    uVar4 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20);
    if ((uVar4 == 0) ||
       (uVar2 = *(uint *)(*(long *)(param_3 + 0x228) + (ulong)param_2 * 0x30 + 0x20), uVar2 == 0))
    goto LAB_00923d88;
    this_00 = *(DestructionGeometry **)(param_3 + 0x170);
    pMVar6 = (Matrix4x4 *)
             DestructionGeometry::getChunkWorldTransformation
                       (*(DestructionGeometry **)(this + 0x170),param_1);
    pMVar7 = (Matrix4x4 *)DestructionGeometry::getChunkWorldTransformation(this_00,param_2);
    fVar19 = ((float)*(undefined8 *)(this + 0x298) + (float)*(undefined8 *)(param_3 + 0x298)) * 0.5;
    fVar20 = ((float)((ulong)*(undefined8 *)(this + 0x298) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_3 + 0x298) >> 0x20)) * 0.5;
    lVar5 = CONCAT44(fVar20,fVar19);
    uVar4 = createJointPhysics(this,uVar4,uVar2,pMVar6,pMVar7,param_4,fVar19,fVar20);
    pplVar13 = (long **)(this + 0x268);
    pplVar16 = *(long ***)(this + 0x268);
    pplVar17 = pplVar13;
    while (pplVar16 != (long **)0x0) {
      while (pplVar14 = pplVar16, pplVar17 = pplVar14, uVar4 < *(uint *)(pplVar14 + 4)) {
        pplVar13 = pplVar14;
        pplVar16 = (long **)*pplVar14;
        if ((long **)*pplVar14 == (long **)0x0) {
          if (*pplVar14 != (long *)0x0) goto LAB_00923f08;
          goto LAB_00923ea0;
        }
      }
      if (uVar4 <= *(uint *)(pplVar14 + 4)) break;
      pplVar13 = pplVar14 + 1;
      pplVar16 = (long **)*pplVar13;
    }
    pplVar14 = pplVar13;
    if (*pplVar14 == (long *)0x0) {
LAB_00923ea0:
      plVar8 = (long *)operator_new(0x40);
      *(uint *)(plVar8 + 4) = uVar4;
      *(uint *)(plVar8 + 5) = param_1;
      plVar8[6] = (long)param_3;
      plVar8[7] = lVar5;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = (long)pplVar17;
      *pplVar14 = plVar8;
      if (**(long **)(this + 0x260) != 0) {
        *(long *)(this + 0x260) = **(long **)(this + 0x260);
        plVar8 = *pplVar14;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x268),(__tree_node_base *)plVar8);
      *(long *)(this + 0x270) = *(long *)(this + 0x270) + 1;
    }
LAB_00923f08:
    lVar18 = *(long *)(this + 0x228) + (ulong)param_1 * 0x30;
    ppuVar12 = (uint **)(lVar18 + 0x10);
    puVar10 = *ppuVar12;
    if (puVar10 == *(uint **)(lVar18 + 0x18)) {
      pvVar11 = *(void **)(lVar18 + 8);
      uVar15 = (long)puVar10 - (long)pvVar11;
      uVar1 = ((long)uVar15 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) goto LAB_00924198;
      if (uVar1 <= (ulong)((long)uVar15 >> 1)) {
        uVar1 = (long)uVar15 >> 1;
      }
      if (0x7ffffffffffffffb < uVar15) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) goto LAB_0092419c;
        pvVar9 = operator_new(uVar1 << 2);
      }
      puVar10 = (uint *)((long)pvVar9 + ((long)uVar15 >> 2) * 4);
      *puVar10 = uVar4;
      if (0 < (long)uVar15) {
        memcpy(pvVar9,pvVar11,uVar15);
      }
      *ppuVar12 = puVar10 + 1;
      *(uint **)(lVar18 + 0x18) = (uint *)((long)pvVar9 + uVar1 * 4);
      *(void **)(lVar18 + 8) = pvVar9;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
    }
    else {
      *puVar10 = uVar4;
      *ppuVar12 = puVar10 + 1;
    }
    pplVar13 = (long **)(param_3 + 0x268);
    pplVar16 = *(long ***)(param_3 + 0x268);
    pplVar17 = pplVar13;
    while (pplVar16 != (long **)0x0) {
      while (pplVar14 = pplVar16, pplVar17 = pplVar14, uVar4 < *(uint *)(pplVar14 + 4)) {
        pplVar13 = pplVar14;
        pplVar16 = (long **)*pplVar14;
        if ((long **)*pplVar14 == (long **)0x0) {
          if (*pplVar14 != (long *)0x0) goto LAB_009240ac;
          goto LAB_00924044;
        }
      }
      if (uVar4 <= *(uint *)(pplVar14 + 4)) break;
      pplVar13 = pplVar14 + 1;
      pplVar16 = (long **)*pplVar13;
    }
    pplVar14 = pplVar13;
    if (*pplVar14 == (long *)0x0) {
LAB_00924044:
      plVar8 = (long *)operator_new(0x40);
      *(uint *)(plVar8 + 4) = uVar4;
      *(uint *)(plVar8 + 5) = param_2;
      plVar8[6] = (long)this;
      plVar8[7] = lVar5;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = (long)pplVar17;
      *pplVar14 = plVar8;
      if (**(long **)(param_3 + 0x260) != 0) {
        *(long *)(param_3 + 0x260) = **(long **)(param_3 + 0x260);
        plVar8 = *pplVar14;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_3 + 0x268),(__tree_node_base *)plVar8);
      *(long *)(param_3 + 0x270) = *(long *)(param_3 + 0x270) + 1;
    }
LAB_009240ac:
    lVar5 = *(long *)(param_3 + 0x228) + (ulong)param_2 * 0x30;
    ppuVar12 = (uint **)(lVar5 + 0x10);
    puVar10 = *ppuVar12;
    if (puVar10 == *(uint **)(lVar5 + 0x18)) {
      pvVar11 = *(void **)(lVar5 + 8);
      uVar15 = (long)puVar10 - (long)pvVar11;
      uVar1 = ((long)uVar15 >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
LAB_00924198:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)uVar15 >> 1)) {
        uVar1 = (long)uVar15 >> 1;
      }
      if (0x7ffffffffffffffb < uVar15) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
LAB_0092419c:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar9 = operator_new(uVar1 << 2);
      }
      puVar10 = (uint *)((long)pvVar9 + ((long)uVar15 >> 2) * 4);
      *puVar10 = uVar4;
      if (0 < (long)uVar15) {
        memcpy(pvVar9,pvVar11,uVar15);
      }
      *ppuVar12 = puVar10 + 1;
      *(uint **)(lVar5 + 0x18) = (uint *)((long)pvVar9 + uVar1 * 4);
      *(void **)(lVar5 + 8) = pvVar9;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
    }
    else {
      *puVar10 = uVar4;
      *ppuVar12 = puVar10 + 1;
    }
    *(int *)(param_3 + 0x35c) = *(int *)(param_3 + 0x35c) + 1;
    *(int *)(this + 0x35c) = *(int *)(this + 0x35c) + 1;
  }
LAB_00923d88:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


