// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRoads
// Entry Point: 0072cd68
// Size: 660 bytes
// Signature: undefined __thiscall removeRoads(VehicleNavigationMapGenerator * this, Node * param_1)


/* VehicleNavigationMapGenerator::removeRoads(Node*) */

void __thiscall
VehicleNavigationMapGenerator::removeRoads(VehicleNavigationMapGenerator *this,Node *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  undefined4 *puVar6;
  Node **ppNVar7;
  int iVar8;
  ulong uVar9;
  Node **ppNVar10;
  long lVar11;
  long *plVar12;
  void *__src;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  Node *pNVar16;
  Node *pNVar17;
  
  if ((((((byte)param_1[0x11] >> 3 & 1) != 0) && (lVar11 = *(long *)(param_1 + 0x170), lVar11 != 0))
      && ((*(byte *)(lVar11 + 0x22) >> 6 & 1) != 0)) &&
     (lVar5 = SplineGeometry::getSpline(), *(int *)(lVar5 + 0x30) == 1)) {
    lVar5 = *(long *)(this + 0x200);
    iVar8 = (int)(*(long *)(this + 0x208) - lVar5 >> 4);
    if (iVar8 != 0) {
      lVar14 = 0;
      do {
        if (*(int *)(lVar5 + lVar14) == *(int *)(param_1 + 0x18)) {
          plVar12 = *(long **)(lVar5 + lVar14 + 8);
          iVar4 = FUN_00f27700(0xffffffff,plVar12 + 1);
          if (iVar4 < 2) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          puVar2 = (undefined8 *)(*(long *)(this + 0x200) + (ulong)(iVar8 - 1) * 0x10);
          uVar15 = *puVar2;
          puVar3 = (undefined8 *)(*(long *)(this + 0x200) + lVar14);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar15;
          *(long *)(this + 0x208) = *(long *)(this + 0x208) + -0x10;
          break;
        }
        lVar14 = lVar14 + 0x10;
      } while (((ulong)(*(long *)(this + 0x208) - lVar5) >> 4 & 0xffffffff) * 0x10 - lVar14 != 0);
    }
    ppNVar7 = *(Node ***)(this + 0x1e8);
    uVar9 = (*(long *)(this + 0x1f0) - (long)ppNVar7 >> 3) * -0x5555555555555555;
    iVar8 = (int)uVar9;
    if (iVar8 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      ppNVar10 = ppNVar7;
      do {
        if (*ppNVar10 == param_1) {
          ppNVar7 = ppNVar7 + (ulong)(iVar8 - 1) * 3;
          pNVar17 = ppNVar7[1];
          pNVar16 = *ppNVar7;
          ppNVar10[2] = ppNVar7[2];
          ppNVar10[1] = pNVar17;
          *ppNVar10 = pNVar16;
          *(long *)(this + 0x1f0) = *(long *)(this + 0x1f0) + -0x18;
          goto LAB_0072cf88;
        }
        ppNVar10 = ppNVar10 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    FUN_00f276d0(1,lVar11 + 8);
    puVar6 = *(undefined4 **)(this + 0x208);
    if (puVar6 == *(undefined4 **)(this + 0x210)) {
      __src = *(void **)(this + 0x200);
      uVar13 = (long)puVar6 - (long)__src;
      uVar9 = ((long)uVar13 >> 4) + 1;
      if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar9 <= (ulong)((long)uVar13 >> 3)) {
        uVar9 = (long)uVar13 >> 3;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar9 = 0xfffffffffffffff;
      }
      if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar9 * 0x10);
      puVar6 = (undefined4 *)((long)__dest + ((long)uVar13 >> 4) * 0x10);
      *puVar6 = uVar1;
      *(long *)(puVar6 + 2) = lVar11;
      if (0 < (long)uVar13) {
        memcpy(__dest,__src,uVar13);
      }
      *(void **)(this + 0x200) = __dest;
      *(undefined4 **)(this + 0x208) = puVar6 + 4;
      *(void **)(this + 0x210) = (void *)((long)__dest + uVar9 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *puVar6 = uVar1;
      *(long *)(puVar6 + 2) = lVar11;
      *(undefined4 **)(this + 0x208) = puVar6 + 4;
    }
    if (this[0x148] == (VehicleNavigationMapGenerator)0x0) {
      VehicleNavigationPlanner::pausePlanning();
      this[0x148] = (VehicleNavigationMapGenerator)0x1;
    }
  }
LAB_0072cf88:
  uVar9 = *(long *)(param_1 + 0x30) - (long)*(Node ***)(param_1 + 0x28);
  if ((int)(uVar9 >> 3) != 0) {
    uVar9 = uVar9 >> 3 & 0xffffffff;
    removeRoads(this,**(Node ***)(param_1 + 0x28));
    if (uVar9 != 1) {
      uVar13 = 1;
      do {
        removeRoads(this,*(Node **)(*(long *)(param_1 + 0x28) + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar9 != uVar13);
    }
  }
  return;
}


