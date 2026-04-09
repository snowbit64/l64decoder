// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createWorldJoint
// Entry Point: 009235d4
// Size: 808 bytes
// Signature: undefined __thiscall createWorldJoint(DestructionShape * this, uint param_1)


/* DestructionShape::createWorldJoint(unsigned int) */

uint __thiscall DestructionShape::createWorldJoint(DestructionShape *this,uint param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  DestructionGeometryShared *this_00;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  void *__dest;
  uint *puVar8;
  void *__src;
  long **pplVar9;
  long **pplVar10;
  ulong __n;
  long **pplVar11;
  long **pplVar12;
  uint **ppuVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar3 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20);
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    puVar4 = (undefined8 *)
             DestructionGeometry::getChunkWorldTransformation
                       (*(DestructionGeometry **)(this + 0x170),param_1);
    this_00 = (DestructionGeometryShared *)DestructionGeometry::getShared();
    DestructionGeometryShared::getChunk(this_00,param_1);
    uStack_b8 = 0;
    local_c0 = 0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    local_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
    pfVar5 = (float *)DestructionChunk::getHullMin();
    fVar16 = *pfVar5;
    fVar14 = pfVar5[1];
    fVar17 = pfVar5[2];
    pfVar5 = (float *)DestructionChunk::getHullMax();
    fVar16 = (fVar16 + *pfVar5) * 0.5;
    lVar6 = DestructionChunk::getHullMax();
    fVar17 = (fVar17 + *(float *)(lVar6 + 8)) * 0.5;
    uVar15 = NEON_fmadd(fVar16,*(undefined4 *)(puVar4 + 1),fVar14 * *(float *)(puVar4 + 3));
    local_c8 = (float)NEON_fmadd(fVar17,*(undefined4 *)(puVar4 + 5),uVar15);
    local_d0 = CONCAT44((float)((ulong)puVar4[6] >> 0x20) +
                        (float)((ulong)puVar4[2] >> 0x20) * fVar14 +
                        (float)((ulong)*puVar4 >> 0x20) * fVar16 +
                        (float)((ulong)puVar4[4] >> 0x20) * fVar17,
                        (float)puVar4[6] +
                        (float)puVar4[2] * fVar14 + (float)*puVar4 * fVar16 +
                        (float)puVar4[4] * fVar17);
    local_c8 = *(float *)(puVar4 + 7) + local_c8;
    uVar3 = createJointPhysics(this,uVar3,0,(Matrix4x4 *)puVar4,(Matrix4x4 *)&local_c0,
                               (Vector3 *)&local_d0,*(float *)(this + 0x2a0),
                               *(float *)(this + 0x2a4));
    pplVar9 = (long **)(this + 0x250);
    pplVar11 = *(long ***)(this + 0x250);
    pplVar12 = pplVar9;
    while (pplVar11 != (long **)0x0) {
      while (pplVar10 = pplVar11, pplVar12 = pplVar10, uVar3 < *(uint *)((long)pplVar10 + 0x1c)) {
        pplVar9 = pplVar10;
        pplVar11 = (long **)*pplVar10;
        if ((long **)*pplVar10 == (long **)0x0) {
          if (*pplVar10 != (long *)0x0) goto LAB_009237e8;
          goto LAB_00923784;
        }
      }
      if (uVar3 <= *(uint *)((long)pplVar10 + 0x1c)) break;
      pplVar9 = pplVar10 + 1;
      pplVar11 = (long **)*pplVar9;
    }
    pplVar10 = pplVar9;
    if (*pplVar10 == (long *)0x0) {
LAB_00923784:
      lVar6 = *(long *)(this + 0x2a0);
      plVar7 = (long *)operator_new(0x30);
      *(uint *)((long)plVar7 + 0x1c) = uVar3;
      *(uint *)(plVar7 + 4) = param_1;
      *(undefined4 *)((long)plVar7 + 0x24) = 0;
      plVar7[5] = lVar6;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = (long)pplVar12;
      *pplVar10 = plVar7;
      if (**(long **)(this + 0x248) != 0) {
        *(long *)(this + 0x248) = **(long **)(this + 0x248);
        plVar7 = *pplVar10;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x250),(__tree_node_base *)plVar7);
      *(long *)(this + 600) = *(long *)(this + 600) + 1;
    }
LAB_009237e8:
    lVar6 = *(long *)(this + 0x228) + (ulong)param_1 * 0x30;
    ppuVar13 = (uint **)(lVar6 + 0x10);
    puVar8 = *ppuVar13;
    if (puVar8 == *(uint **)(lVar6 + 0x18)) {
      __src = *(void **)(lVar6 + 8);
      __n = (long)puVar8 - (long)__src;
      uVar1 = ((long)__n >> 2) + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar1 <= (ulong)((long)__n >> 1)) {
        uVar1 = (long)__n >> 1;
      }
      if (0x7ffffffffffffffb < __n) {
        uVar1 = 0x3fffffffffffffff;
      }
      if (uVar1 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar1 << 2);
      }
      puVar8 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
      *puVar8 = uVar3;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *ppuVar13 = puVar8 + 1;
      *(uint **)(lVar6 + 0x18) = (uint *)((long)__dest + uVar1 * 4);
      *(void **)(lVar6 + 8) = __dest;
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar8 = uVar3;
      *ppuVar13 = puVar8 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


