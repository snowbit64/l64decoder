// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processResultTypeOccluder
// Entry Point: 008f73fc
// Size: 3600 bytes
// Signature: undefined __thiscall processResultTypeOccluder(TerrainPatchOccluderManager * this, Result * param_1)


/* TerrainPatchOccluderManager::processResultTypeOccluder(TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processResultTypeOccluder
          (TerrainPatchOccluderManager *this,Result *param_1)

{
  int iVar1;
  TerrainPatchOccluderManager *pTVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float **ppfVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  float **ppfVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  long **pplVar36;
  ulong uVar37;
  float *pfVar38;
  ulong uVar39;
  void *pvVar40;
  long lVar41;
  float *pfVar42;
  void **ppvVar43;
  float *pfVar44;
  void **ppvVar45;
  void **ppvVar46;
  ulong uVar47;
  void **ppvVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float *local_100;
  undefined4 local_f8;
  int iStack_f4;
  int local_f0;
  uint uStack_ec;
  long local_80;
  
  lVar14 = tpidr_el0;
  local_80 = *(long *)(lVar14 + 0x28);
  iVar7 = *(int *)(param_1 + 0xc);
  iVar8 = *(int *)(param_1 + 0x10);
  lVar41 = *(long *)(this + 0x118);
  uVar10 = *(uint *)(param_1 + 0x14);
  uVar47 = (ulong)uVar10;
  uVar37 = (ulong)(uint)(iVar7 + *(int *)(this + 0xf8) * iVar8);
  pplVar36 = (long **)(lVar41 + uVar37 * 0x380 + uVar47 * 0x20 + 8);
  if (*pplVar36 != (long *)0x0) {
    uVar22 = IndexedTriangleSet::getNumIndices();
    *(int *)(this + uVar47 * 4 + 0x108) =
         *(int *)(this + uVar47 * 4 + 0x108) - (int)((uVar22 & 0xffffffff) / 3);
    if (*pplVar36 != (long *)0x0) {
      (**(code **)(**pplVar36 + 8))();
    }
  }
  *pplVar36 = (long *)0x0;
  ppvVar43 = (void **)(lVar41 + uVar37 * 0x380 + uVar47 * 0x20 + 0x10);
  pvVar40 = *ppvVar43;
  if (pvVar40 != (void *)0x0) {
    if (*(void **)((long)pvVar40 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar40 + 8));
    }
    operator_delete(pvVar40);
  }
  *ppvVar43 = (void *)0x0;
  pplVar36 = (long **)(lVar41 + uVar37 * 0x380 + uVar47 * 0x20 + 0x18);
  plVar23 = *pplVar36;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  *pplVar36 = (long *)0x0;
  puVar5 = (undefined8 *)(lVar41 + uVar37 * 0x380 + uVar47 * 0x20);
  uVar50 = *(undefined8 *)(param_1 + 0x30);
  uVar49 = *(undefined8 *)(param_1 + 0x28);
  uVar52 = *(undefined8 *)(param_1 + 0x18);
  puVar5[1] = *(undefined8 *)(param_1 + 0x20);
  *puVar5 = uVar52;
  puVar5[3] = uVar50;
  puVar5[2] = uVar49;
  uVar37 = IndexedTriangleSet::getNumIndices();
  *(int *)(this + uVar47 * 4 + 0x108) =
       *(int *)(this + uVar47 * 4 + 0x108) + (int)((uVar37 & 0xffffffff) / 3);
  uVar11 = *(uint *)(*(long *)param_1 + 0x268);
  iVar28 = -1;
  do {
    iVar3 = iVar28 + iVar7;
    iVar1 = iVar3 + 1;
    iVar29 = -1;
    do {
      if ((((-1 < iVar3) && (iVar4 = iVar29 + iVar8, -1 < iVar4)) &&
          (iVar12 = *(int *)(this + 0xf8), iVar1 < iVar12)) && (iVar4 + 1 < iVar12)) {
        iVar13 = iVar12 * (iVar4 + 1);
        uVar35 = 0;
        uVar34 = (ulong)(uint)(iVar12 * iVar4 + iVar3);
        uVar22 = (ulong)(uint)(iVar12 * iVar4 + iVar1);
        ppfVar31 = &local_100;
        lVar41 = *(long *)(this + 0x118);
        uVar32 = (ulong)(uint)(iVar13 + iVar3);
        uVar37 = (ulong)(uint)(iVar13 + iVar1);
        do {
          lVar30 = (ulong)uVar35 * 0x20;
          if (((*(long *)(lVar41 + uVar34 * 0x380 + lVar30 + 8) == 0 ||
               *(long *)(lVar41 + uVar22 * 0x380 + lVar30 + 8) == 0) ||
              *(long *)(lVar41 + uVar32 * 0x380 + lVar30 + 8) == 0) ||
              *(long *)(lVar41 + uVar37 * 0x380 + lVar30 + 8) == 0) goto LAB_008f75a8;
          pfVar27 = (float *)TriangleSet::getPositions();
          fVar54 = *pfVar27;
          fVar55 = pfVar27[2];
          uVar15 = TriangleSet::getNumVertices();
          if (uVar15 < 2) {
            uVar15 = 0;
          }
          else {
            uVar17 = 1;
            pfVar27 = pfVar27 + 5;
            uVar19 = 0;
            do {
              uVar15 = uVar17;
              fVar51 = *pfVar27;
              fVar53 = pfVar27[-2];
              if (pfVar27[-2] < fVar54 || *pfVar27 < fVar55) {
                uVar15 = uVar19;
                fVar51 = fVar55;
                fVar53 = fVar54;
              }
              fVar54 = fVar53;
              fVar55 = fVar51;
              uVar17 = uVar17 + 1;
              uVar16 = TriangleSet::getNumVertices();
              pfVar27 = pfVar27 + 3;
              uVar19 = uVar15;
            } while (uVar17 < uVar16);
          }
          pfVar27 = (float *)TriangleSet::getPositions();
          fVar54 = *pfVar27;
          fVar55 = pfVar27[2];
          uVar17 = TriangleSet::getNumVertices();
          if (uVar17 < 2) {
            uVar17 = 0;
          }
          else {
            uVar19 = 1;
            pfVar27 = pfVar27 + 5;
            uVar16 = 0;
            do {
              uVar17 = uVar19;
              fVar51 = *pfVar27;
              fVar53 = pfVar27[-2];
              if (fVar54 < pfVar27[-2] || *pfVar27 < fVar55) {
                uVar17 = uVar16;
                fVar51 = fVar55;
                fVar53 = fVar54;
              }
              fVar54 = fVar53;
              fVar55 = fVar51;
              uVar19 = uVar19 + 1;
              uVar18 = TriangleSet::getNumVertices();
              pfVar27 = pfVar27 + 3;
              uVar16 = uVar17;
            } while (uVar19 < uVar18);
          }
          pfVar27 = (float *)TriangleSet::getPositions();
          fVar54 = *pfVar27;
          fVar55 = pfVar27[2];
          uVar19 = TriangleSet::getNumVertices();
          if (uVar19 < 2) {
            uVar19 = 0;
          }
          else {
            uVar16 = 1;
            pfVar27 = pfVar27 + 5;
            uVar18 = 0;
            do {
              uVar19 = uVar16;
              fVar51 = *pfVar27;
              fVar53 = pfVar27[-2];
              if (pfVar27[-2] < fVar54 || fVar55 < *pfVar27) {
                uVar19 = uVar18;
                fVar51 = fVar55;
                fVar53 = fVar54;
              }
              fVar54 = fVar53;
              fVar55 = fVar51;
              uVar16 = uVar16 + 1;
              uVar20 = TriangleSet::getNumVertices();
              pfVar27 = pfVar27 + 3;
              uVar18 = uVar19;
            } while (uVar16 < uVar20);
          }
          pfVar27 = (float *)TriangleSet::getPositions();
          fVar54 = *pfVar27;
          fVar55 = pfVar27[2];
          uVar16 = TriangleSet::getNumVertices();
          if (uVar16 < 2) {
            uVar16 = 0;
          }
          else {
            uVar18 = 1;
            pfVar27 = pfVar27 + 5;
            uVar20 = 0;
            do {
              uVar16 = uVar18;
              fVar51 = *pfVar27;
              fVar53 = pfVar27[-2];
              if (fVar54 < pfVar27[-2] || fVar55 < *pfVar27) {
                uVar16 = uVar20;
                fVar51 = fVar55;
                fVar53 = fVar54;
              }
              fVar54 = fVar53;
              fVar55 = fVar51;
              uVar18 = uVar18 + 1;
              uVar21 = TriangleSet::getNumVertices();
              pfVar27 = pfVar27 + 3;
              uVar20 = uVar16;
            } while (uVar18 < uVar21);
          }
          lVar30 = TriangleSet::getPositions();
          lVar24 = TriangleSet::getPositions();
          lVar25 = TriangleSet::getPositions();
          lVar26 = TriangleSet::getPositions();
          uVar35 = uVar35 + 1;
          pfVar44 = (float *)(lVar24 + (ulong)(uVar17 * 3) * 4 + 4);
          fVar54 = *pfVar44;
          pfVar38 = (float *)(lVar30 + (ulong)(uVar15 * 3) * 4 + 4);
          fVar51 = *pfVar38;
          pfVar42 = (float *)(lVar25 + (ulong)(uVar19 * 3) * 4 + 4);
          fVar53 = *pfVar42;
          pfVar27 = (float *)(lVar26 + (ulong)(uVar16 * 3) * 4 + 4);
          fVar55 = *pfVar27;
          *ppfVar31 = pfVar38;
          ppfVar31[1] = pfVar44;
          ppfVar31[2] = pfVar42;
          ppfVar31[3] = pfVar27;
          ppfVar31 = ppfVar31 + 4;
        } while (uVar35 <= uVar11);
        uVar15 = 0;
        uVar35 = 0;
        if (fVar53 <= fVar55) {
          fVar55 = fVar53;
        }
        if (fVar51 <= fVar54) {
          fVar54 = fVar51;
        }
        if (fVar54 <= fVar55) {
          fVar55 = fVar54;
        }
        do {
          uVar33 = (ulong)uVar15 * 8;
          uVar39 = (ulong)uVar35;
          *(&local_100)[uVar15] = fVar55;
          **(float **)((long)&local_100 + (uVar33 | 8)) = fVar55;
          **(float **)((long)&local_100 + (uVar33 | 0x10)) = fVar55;
          **(float **)((long)&local_100 + (uVar33 | 0x18)) = fVar55;
          ppvVar43 = (void **)(lVar41 + uVar34 * 0x380 + uVar39 * 0x20 + 0x10);
          pvVar40 = *ppvVar43;
          if (pvVar40 != (void *)0x0) {
            if (*(void **)((long)pvVar40 + 8) != (void *)0x0) {
              operator_delete__(*(void **)((long)pvVar40 + 8));
            }
            operator_delete(pvVar40);
          }
          ppvVar45 = (void **)(lVar41 + uVar22 * 0x380 + uVar39 * 0x20 + 0x10);
          pvVar40 = *ppvVar45;
          if (pvVar40 != (void *)0x0) {
            if (*(void **)((long)pvVar40 + 8) != (void *)0x0) {
              operator_delete__(*(void **)((long)pvVar40 + 8));
            }
            operator_delete(pvVar40);
          }
          ppvVar46 = (void **)(lVar41 + uVar32 * 0x380 + uVar39 * 0x20 + 0x10);
          pvVar40 = *ppvVar46;
          if (pvVar40 != (void *)0x0) {
            if (*(void **)((long)pvVar40 + 8) != (void *)0x0) {
              operator_delete__(*(void **)((long)pvVar40 + 8));
            }
            operator_delete(pvVar40);
          }
          ppvVar48 = (void **)(lVar41 + uVar37 * 0x380 + uVar39 * 0x20 + 0x10);
          pvVar40 = *ppvVar48;
          if (pvVar40 != (void *)0x0) {
            if (*(void **)((long)pvVar40 + 8) != (void *)0x0) {
              operator_delete__(*(void **)((long)pvVar40 + 8));
            }
            operator_delete(pvVar40);
          }
          uVar35 = uVar35 + 1;
          uVar15 = uVar15 + 4;
          *ppvVar43 = (void *)0x0;
          *ppvVar45 = (void *)0x0;
          *ppvVar46 = (void *)0x0;
          *ppvVar48 = (void *)0x0;
        } while (uVar35 <= uVar11);
      }
LAB_008f75a8:
      bVar6 = iVar29 != 0;
      iVar29 = iVar29 + 1;
    } while (bVar6);
    bVar6 = iVar28 != 0;
    iVar28 = iVar28 + 1;
  } while (bVar6);
  if (this[0x133] == (TerrainPatchOccluderManager)0x0) goto LAB_008f808c;
  if ((*(uint *)(param_1 + 0x10) < *(int *)(this + 0xf8) - 1U) &&
     (iVar28 = iVar8 + 1,
     *(long *)(*(long *)(this + 0x118) +
               (ulong)(uint)(iVar7 + *(int *)(this + 0xf8) * iVar28) * 0x380 + uVar47 * 0x20 + 0x88)
     != 0)) {
    ppfVar31 = *(float ***)(this + 0x158);
    ppfVar9 = *(float ***)(this + 0x160);
    pTVar2 = this + 0x158;
    local_100 = *(float **)param_1;
    local_f8 = 1;
    local_f0 = iVar28;
    if (ppfVar31 == ppfVar9) {
LAB_008f7ab8:
      iStack_f4 = iVar7;
      uStack_ec = uVar10;
      if (ppfVar31 == ppfVar9) goto LAB_008f7ac0;
    }
    else {
      do {
        if (((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 1)) &&
           ((*(int *)((long)ppfVar31 + 0xc) == iVar7 &&
            ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))))
        goto LAB_008f7ab8;
        ppfVar31 = ppfVar31 + 3;
      } while (ppfVar31 != ppfVar9);
LAB_008f7ac0:
      iStack_f4 = iVar7;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
    if (uVar10 != 0) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_100 = *(float **)param_1;
      local_f8 = 3;
      if (ppfVar31 == ppfVar9) {
LAB_008f7b4c:
        iStack_f4 = iVar7;
        local_f0 = iVar28;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7b64;
      }
      else {
        do {
          if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 3)) &&
              (*(int *)((long)ppfVar31 + 0xc) == iVar7)) &&
             ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
          goto LAB_008f7b4c;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar7;
      local_f0 = iVar28;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
LAB_008f7b64:
    if (uVar10 < uVar11) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_100 = *(float **)param_1;
      local_f8 = 2;
      if (ppfVar31 == ppfVar9) {
LAB_008f7be4:
        iStack_f4 = iVar7;
        local_f0 = iVar28;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7bfc;
      }
      else {
        do {
          if (((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 2)) &&
             ((*(int *)((long)ppfVar31 + 0xc) == iVar7 &&
              ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10)))))
             ) goto LAB_008f7be4;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar7;
      local_f0 = iVar28;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
  }
LAB_008f7bfc:
  if ((*(uint *)(param_1 + 0xc) < *(int *)(this + 0xf8) - 1U) &&
     (iVar28 = iVar7 + 1,
     *(long *)(*(long *)(this + 0x118) +
               (ulong)(uint)(iVar28 + *(int *)(this + 0xf8) * iVar8) * 0x380 + uVar47 * 0x20 + 0x208
              ) != 0)) {
    ppfVar31 = *(float ***)(this + 0x158);
    ppfVar9 = *(float ***)(this + 0x160);
    pTVar2 = this + 0x158;
    local_f8 = 4;
    local_100 = *(float **)param_1;
    iStack_f4 = iVar28;
    if (ppfVar31 == ppfVar9) {
LAB_008f7c60:
      local_f0 = iVar8;
      uStack_ec = uVar10;
      if (ppfVar31 == ppfVar9) goto LAB_008f7c68;
    }
    else {
      do {
        if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 4)) &&
            (*(int *)((long)ppfVar31 + 0xc) == iVar28)) &&
           ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
        goto LAB_008f7c60;
        ppfVar31 = ppfVar31 + 3;
      } while (ppfVar31 != ppfVar9);
LAB_008f7c68:
      local_f0 = iVar8;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
    if (uVar10 != 0) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_f8 = 6;
      local_100 = *(float **)param_1;
      if (ppfVar31 == ppfVar9) {
LAB_008f7ca0:
        iStack_f4 = iVar28;
        local_f0 = iVar8;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7cb8;
      }
      else {
        do {
          if (((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 6)) &&
             ((*(int *)((long)ppfVar31 + 0xc) == iVar28 &&
              ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))))
          goto LAB_008f7ca0;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar28;
      local_f0 = iVar8;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
LAB_008f7cb8:
    if (uVar10 < uVar11) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_f8 = 5;
      local_100 = *(float **)param_1;
      if (ppfVar31 == ppfVar9) {
LAB_008f7ce4:
        iStack_f4 = iVar28;
        local_f0 = iVar8;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7cfc;
      }
      else {
        do {
          if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 5)) &&
              (*(int *)((long)ppfVar31 + 0xc) == iVar28)) &&
             ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
          goto LAB_008f7ce4;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar28;
      local_f0 = iVar8;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
  }
LAB_008f7cfc:
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar28 = iVar8 + -1,
     *(long *)(*(long *)(this + 0x118) +
               (ulong)(uint)(iVar7 + *(int *)(this + 0xf8) * iVar28) * 0x380 + uVar47 * 0x20 + 0x88)
     != 0)) {
    ppfVar31 = *(float ***)(this + 0x158);
    ppfVar9 = *(float ***)(this + 0x160);
    pTVar2 = this + 0x158;
    local_100 = *(float **)param_1;
    local_f8 = 1;
    local_f0 = iVar28;
    if (ppfVar31 == ppfVar9) {
LAB_008f7db0:
      iStack_f4 = iVar7;
      uStack_ec = uVar10;
      if (ppfVar31 == ppfVar9) goto LAB_008f7db8;
    }
    else {
      do {
        if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 1)) &&
            (*(int *)((long)ppfVar31 + 0xc) == iVar7)) &&
           ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
        goto LAB_008f7db0;
        ppfVar31 = ppfVar31 + 3;
      } while (ppfVar31 != ppfVar9);
LAB_008f7db8:
      iStack_f4 = iVar7;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
    if (uVar10 != 0) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_100 = *(float **)param_1;
      local_f8 = 3;
      if (ppfVar31 == ppfVar9) {
LAB_008f7e90:
        iStack_f4 = iVar7;
        local_f0 = iVar28;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7ea8;
      }
      else {
        do {
          if (((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 3)) &&
             ((*(int *)((long)ppfVar31 + 0xc) == iVar7 &&
              ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10)))))
             ) goto LAB_008f7e90;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar7;
      local_f0 = iVar28;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
LAB_008f7ea8:
    if (uVar10 < uVar11) {
      ppfVar31 = *(float ***)(this + 0x158);
      ppfVar9 = *(float ***)(this + 0x160);
      local_100 = *(float **)param_1;
      local_f8 = 2;
      if (ppfVar31 == ppfVar9) {
LAB_008f7f74:
        iStack_f4 = iVar7;
        local_f0 = iVar28;
        uStack_ec = uVar10;
        if (ppfVar31 != ppfVar9) goto LAB_008f7f8c;
      }
      else {
        do {
          if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 2)) &&
              (*(int *)((long)ppfVar31 + 0xc) == iVar7)) &&
             ((*(int *)(ppfVar31 + 2) == iVar28 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
          goto LAB_008f7f74;
          ppfVar31 = ppfVar31 + 3;
        } while (ppfVar31 != ppfVar9);
      }
      iStack_f4 = iVar7;
      local_f0 = iVar28;
      uStack_ec = uVar10;
      FUN_008f7060(pTVar2,&local_100);
    }
  }
LAB_008f7f8c:
  if ((*(int *)(param_1 + 0xc) == 0) ||
     (*(long *)(*(long *)(this + 0x118) +
                (ulong)((*(int *)(param_1 + 0xc) + *(int *)(this + 0xf8) * *(int *)(param_1 + 0x10))
                       - 1) * 0x380 + uVar47 * 0x20 + 0x208) == 0)) goto LAB_008f808c;
  pTVar2 = this + 0x158;
  iVar7 = iVar7 + -1;
  ppfVar31 = *(float ***)(this + 0x158);
  ppfVar9 = *(float ***)(this + 0x160);
  local_100 = *(float **)param_1;
  local_f8 = 4;
  iStack_f4 = iVar7;
  if (ppfVar31 == ppfVar9) {
LAB_008f7ff4:
    local_f0 = iVar8;
    uStack_ec = uVar10;
    if (ppfVar31 == ppfVar9) goto LAB_008f7ffc;
  }
  else {
    do {
      if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 4)) &&
          (*(int *)((long)ppfVar31 + 0xc) == iVar7)) &&
         ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
      goto LAB_008f7ff4;
      ppfVar31 = ppfVar31 + 3;
    } while (ppfVar31 != ppfVar9);
LAB_008f7ffc:
    local_f0 = iVar8;
    uStack_ec = uVar10;
    FUN_008f7060(pTVar2,&local_100);
  }
  if (uVar10 != 0) {
    ppfVar31 = *(float ***)(this + 0x158);
    ppfVar9 = *(float ***)(this + 0x160);
    local_f8 = 6;
    local_100 = *(float **)param_1;
    if (ppfVar31 == ppfVar9) {
LAB_008f8034:
      iStack_f4 = iVar7;
      local_f0 = iVar8;
      uStack_ec = uVar10;
      if (ppfVar31 != ppfVar9) goto LAB_008f804c;
    }
    else {
      do {
        if (((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 6)) &&
           ((*(int *)((long)ppfVar31 + 0xc) == iVar7 &&
            ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))))
        goto LAB_008f8034;
        ppfVar31 = ppfVar31 + 3;
      } while (ppfVar31 != ppfVar9);
    }
    iStack_f4 = iVar7;
    local_f0 = iVar8;
    uStack_ec = uVar10;
    FUN_008f7060(pTVar2,&local_100);
  }
LAB_008f804c:
  if (uVar10 < uVar11) {
    ppfVar31 = *(float ***)(this + 0x158);
    ppfVar9 = *(float ***)(this + 0x160);
    local_f8 = 5;
    local_100 = *(float **)param_1;
    if (ppfVar31 == ppfVar9) {
LAB_008f8078:
      iStack_f4 = iVar7;
      local_f0 = iVar8;
      uStack_ec = uVar10;
      if (ppfVar31 != ppfVar9) goto LAB_008f808c;
    }
    else {
      do {
        if ((((*ppfVar31 == local_100) && (*(int *)(ppfVar31 + 1) == 5)) &&
            (*(int *)((long)ppfVar31 + 0xc) == iVar7)) &&
           ((*(int *)(ppfVar31 + 2) == iVar8 && (*(uint *)((long)ppfVar31 + 0x14) == uVar10))))
        goto LAB_008f8078;
        ppfVar31 = ppfVar31 + 3;
      } while (ppfVar31 != ppfVar9);
    }
    iStack_f4 = iVar7;
    local_f0 = iVar8;
    uStack_ec = uVar10;
    FUN_008f7060(pTVar2,&local_100);
  }
LAB_008f808c:
  *(undefined *)puVar5 = 0;
  *(int *)(this + 0x150) = *(int *)(this + 0x150) + -1;
  if (*(long *)(lVar14 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


