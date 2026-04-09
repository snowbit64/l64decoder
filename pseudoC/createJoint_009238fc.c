// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createJoint
// Entry Point: 009238fc
// Size: 976 bytes
// Signature: undefined __thiscall createJoint(DestructionShape * this, uint param_1, uint param_2, Vector3 * param_3)


/* WARNING: Type propagation algorithm not settling */
/* DestructionShape::createJoint(unsigned int, unsigned int, Vector3 const&) */

uint __thiscall
DestructionShape::createJoint(DestructionShape *this,uint param_1,uint param_2,Vector3 *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  Matrix4x4 *pMVar4;
  Matrix4x4 *pMVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long **pplVar8;
  long *plVar9;
  uint *puVar10;
  void *pvVar11;
  ulong uVar12;
  long **pplVar13;
  long **pplVar14;
  DestructionGeometry *this_00;
  uint **ppuVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar3 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20);
  uVar2 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_2 * 0x30 + 0x20);
  if (uVar3 == 0 || uVar2 == 0) {
    return 0xffffffff;
  }
  this_00 = *(DestructionGeometry **)(this + 0x170);
  pMVar4 = (Matrix4x4 *)DestructionGeometry::getChunkWorldTransformation(this_00,param_1);
  pMVar5 = (Matrix4x4 *)DestructionGeometry::getChunkWorldTransformation(this_00,param_2);
  uVar3 = createJointPhysics(this,uVar3,uVar2,pMVar4,pMVar5,param_3,*(float *)(this + 0x298),
                             *(float *)(this + 0x29c));
  uVar18 = *(undefined4 *)(this + 0x298);
  uVar17 = *(undefined4 *)(this + 0x29c);
  pplVar14 = (long **)(this + 0x250);
  pplVar8 = *(long ***)(this + 0x250);
  pplVar13 = pplVar14;
  if (param_2 == 0) {
    if (pplVar8 == (long **)0x0) {
      plVar9 = *pplVar14;
    }
    else {
      pplVar13 = (long **)(this + 0x250);
      do {
        while (pplVar14 = pplVar8, uVar3 < *(uint *)((long)pplVar14 + 0x1c)) {
          pplVar8 = (long **)*pplVar14;
          pplVar13 = pplVar14;
          if ((long **)*pplVar14 == (long **)0x0) {
            plVar9 = *pplVar14;
            goto joined_r0x00923aa4;
          }
        }
        if (uVar3 <= *(uint *)((long)pplVar14 + 0x1c)) break;
        pplVar13 = pplVar14 + 1;
        pplVar8 = (long **)*pplVar13;
      } while (*pplVar13 != (long *)0x0);
      plVar9 = *pplVar13;
    }
joined_r0x00923aa4:
    if (plVar9 == (long *)0x0) {
      puVar6 = (undefined8 *)operator_new(0x30);
      *(undefined4 *)(puVar6 + 4) = 0;
      *(uint *)((long)puVar6 + 0x24) = param_1;
      goto LAB_00923ab4;
    }
  }
  else {
    if (pplVar8 == (long **)0x0) {
      plVar9 = *pplVar14;
    }
    else {
      pplVar13 = (long **)(this + 0x250);
      do {
        while (pplVar14 = pplVar8, uVar3 < *(uint *)((long)pplVar14 + 0x1c)) {
          pplVar8 = (long **)*pplVar14;
          pplVar13 = pplVar14;
          if ((long **)*pplVar14 == (long **)0x0) {
            plVar9 = *pplVar14;
            goto joined_r0x00923a84;
          }
        }
        if (uVar3 <= *(uint *)((long)pplVar14 + 0x1c)) break;
        pplVar13 = pplVar14 + 1;
        pplVar8 = (long **)*pplVar13;
      } while ((long **)*pplVar13 != (long **)0x0);
      plVar9 = *pplVar13;
    }
joined_r0x00923a84:
    if (plVar9 == (long *)0x0) {
      puVar6 = (undefined8 *)operator_new(0x30);
      *(uint *)(puVar6 + 4) = param_1;
      *(uint *)((long)puVar6 + 0x24) = param_2;
LAB_00923ab4:
      *(undefined4 *)(puVar6 + 5) = uVar18;
      *(undefined4 *)((long)puVar6 + 0x2c) = uVar17;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = pplVar14;
      *pplVar13 = puVar6;
      plVar9 = *(long **)(this + 0x248);
      *(uint *)((long)puVar6 + 0x1c) = uVar3;
      if (*plVar9 != 0) {
        *(long *)(this + 0x248) = *plVar9;
        puVar6 = *pplVar13;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x250),(__tree_node_base *)puVar6);
      *(long *)(this + 600) = *(long *)(this + 600) + 1;
    }
  }
  lVar16 = *(long *)(this + 0x228) + (ulong)param_1 * 0x30;
  ppuVar15 = (uint **)(lVar16 + 0x10);
  puVar10 = *ppuVar15;
  if (puVar10 == *(uint **)(lVar16 + 0x18)) {
    pvVar11 = *(void **)(lVar16 + 8);
    uVar12 = (long)puVar10 - (long)pvVar11;
    uVar1 = ((long)uVar12 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar12 >> 1)) {
      uVar1 = (long)uVar12 >> 1;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) goto LAB_00923cb4;
      pvVar7 = operator_new(uVar1 << 2);
    }
    puVar10 = (uint *)((long)pvVar7 + ((long)uVar12 >> 2) * 4);
    *puVar10 = uVar3;
    if (0 < (long)uVar12) {
      memcpy(pvVar7,pvVar11,uVar12);
    }
    *ppuVar15 = puVar10 + 1;
    *(uint **)(lVar16 + 0x18) = (uint *)((long)pvVar7 + uVar1 * 4);
    *(void **)(lVar16 + 8) = pvVar7;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar10 = uVar3;
    *ppuVar15 = puVar10 + 1;
  }
  lVar16 = *(long *)(this + 0x228) + (ulong)param_2 * 0x30;
  ppuVar15 = (uint **)(lVar16 + 0x10);
  puVar10 = *ppuVar15;
  if (puVar10 == *(uint **)(lVar16 + 0x18)) {
    pvVar11 = *(void **)(lVar16 + 8);
    uVar12 = (long)puVar10 - (long)pvVar11;
    uVar1 = ((long)uVar12 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar12 >> 1)) {
      uVar1 = (long)uVar12 >> 1;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
LAB_00923cb4:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar7 = operator_new(uVar1 << 2);
    }
    puVar10 = (uint *)((long)pvVar7 + ((long)uVar12 >> 2) * 4);
    *puVar10 = uVar3;
    if (0 < (long)uVar12) {
      memcpy(pvVar7,pvVar11,uVar12);
    }
    *(void **)(lVar16 + 8) = pvVar7;
    *ppuVar15 = puVar10 + 1;
    *(uint **)(lVar16 + 0x18) = (uint *)((long)pvVar7 + uVar1 * 4);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar10 = uVar3;
    *ppuVar15 = puVar10 + 1;
  }
  return uVar3;
}


