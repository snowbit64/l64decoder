// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: collectShapes
// Entry Point: 00a19698
// Size: 1304 bytes
// Signature: undefined __thiscall collectShapes(RenderList * this, Vector3 * param_1, RenderStats * param_2)


/* RenderList::collectShapes(Vector3 const&, RenderStats&) */

void __thiscall RenderList::collectShapes(RenderList *this,Vector3 *param_1,RenderStats *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void **ppvVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  GsShape *pGVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  void *pvVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x108) != *(long *)(this + 0x100)) {
    *(long *)(this + 0x108) = *(long *)(this + 0x100);
  }
  if (*(long *)(this + 0x130) != 0) {
    ppvVar5 = (void **)*(void **)(this + 0x128);
    while (ppvVar5 != (void **)0x0) {
      pvVar15 = *ppvVar5;
      operator_delete(ppvVar5);
      ppvVar5 = (void **)pvVar15;
    }
    lVar10 = *(long *)(this + 0x120);
    *(undefined8 *)(this + 0x128) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x118) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x130) = 0;
  }
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  plVar16 = *(long **)(*(long *)(this + 0x28) + 0x3f0);
  iVar7 = (**(code **)(*plVar16 + 0x28))(plVar16);
  if (iVar7 == 1) {
    uVar8 = CullingGrid2D::getEntities<NPlaneFrustum>
                      ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                       (NPlaneFrustum *)plVar16,param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0),
                       *(float *)(*(long *)(this + 0x28) + 0x3e4),*(CullingResult **)(this + 0x2b0),
                       *(uint *)(this + 0x2a8));
    *(uint *)(this + 0x2ac) = uVar8;
    if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
       (lVar10 = *(long *)(this + 0x28), (*(byte *)(lVar10 + 0x3a8) >> 3 & 1) == 0)) {
      CullingGrid2D::getCullingStats<NPlaneFrustum>
                ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,(NPlaneFrustum *)plVar16,
                 param_1,*(float *)(lVar10 + 0x3e0),*(float *)(lVar10 + 0x3e4),&local_4c,&local_50,
                 (uint *)((long)&local_58 + 4),(uint *)&local_58);
    }
  }
  else {
    uVar8 = CullingGrid2D::getEntities<Frustum>
                      ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,(Frustum *)plVar16,
                       param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0),
                       *(float *)(*(long *)(this + 0x28) + 0x3e4),*(CullingResult **)(this + 0x2b0),
                       *(uint *)(this + 0x2a8));
    *(uint *)(this + 0x2ac) = uVar8;
    if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
       (lVar10 = *(long *)(this + 0x28), (*(byte *)(lVar10 + 0x3a8) >> 3 & 1) == 0)) {
      CullingGrid2D::getCullingStats<Frustum>
                ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,(Frustum *)plVar16,
                 param_1,*(float *)(lVar10 + 0x3e0),*(float *)(lVar10 + 0x3e4),&local_4c,&local_50,
                 (uint *)((long)&local_58 + 4),(uint *)&local_58);
    }
  }
  if (*(uint *)(this + 0x2a8) < *(uint *)(this + 0x2ac)) {
    uVar8 = *(uint *)(this + 0x2ac) + 0x3ff & 0xfffffc00;
    *(uint *)(this + 0x2a8) = uVar8;
    if (*(void **)(this + 0x2b0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x2b0));
      uVar8 = *(uint *)(this + 0x2a8);
    }
    pvVar15 = operator_new__((ulong)uVar8 << 4);
    *(void **)(this + 0x2b0) = pvVar15;
    local_4c = 0;
    local_50 = 0;
    local_58 = 0;
    iVar7 = (**(code **)(*plVar16 + 0x28))(plVar16);
    if (iVar7 == 1) {
      uVar8 = CullingGrid2D::getEntities<NPlaneFrustum>
                        ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                         (NPlaneFrustum *)plVar16,param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0)
                         ,*(float *)(*(long *)(this + 0x28) + 0x3e4),
                         *(CullingResult **)(this + 0x2b0),*(uint *)(this + 0x2a8));
      *(uint *)(this + 0x2ac) = uVar8;
      if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
         (lVar10 = *(long *)(this + 0x28), (*(byte *)(lVar10 + 0x3a8) >> 3 & 1) == 0)) {
        CullingGrid2D::getCullingStats<NPlaneFrustum>
                  ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                   (NPlaneFrustum *)plVar16,param_1,*(float *)(lVar10 + 0x3e0),
                   *(float *)(lVar10 + 0x3e4),&local_4c,&local_50,(uint *)((long)&local_58 + 4),
                   (uint *)&local_58);
      }
    }
    else {
      uVar8 = CullingGrid2D::getEntities<Frustum>
                        ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
                         (Frustum *)plVar16,param_1,*(float *)(*(long *)(this + 0x28) + 0x3e0),
                         *(float *)(*(long *)(this + 0x28) + 0x3e4),
                         *(CullingResult **)(this + 0x2b0),*(uint *)(this + 0x2a8));
      *(uint *)(this + 0x2ac) = uVar8;
      if ((*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') &&
         (lVar10 = *(long *)(this + 0x28), (*(byte *)(lVar10 + 0x3a8) >> 3 & 1) == 0)) {
        CullingGrid2D::getCullingStats<Frustum>
                  ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,(Frustum *)plVar16,
                   param_1,*(float *)(lVar10 + 0x3e0),*(float *)(lVar10 + 0x3e4),&local_4c,&local_50
                   ,(uint *)((long)&local_58 + 4),(uint *)&local_58);
      }
    }
  }
  if (*(char *)(*(long *)(this + 0x20) + 0x140) != '\0') {
    *(uint *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + local_4c;
    *(uint *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + local_50;
    *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + local_58._4_4_;
    *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + (int)local_58;
    CullingGrid2D::getEntityCountByClipDistanceRegion
              ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,(uint *)(param_2 + 0x6c));
  }
  uVar8 = *(uint *)(this + 0x2a8);
  if (*(uint *)(this + 0x2ac) <= *(uint *)(this + 0x2a8)) {
    uVar8 = *(uint *)(this + 0x2ac);
  }
  *(uint *)(this + 0x2ac) = uVar8;
  if (uVar8 == 0) {
    uVar14 = 0;
  }
  else {
    uVar17 = 0;
    uVar14 = 0;
    do {
      lVar10 = *(long *)(this + 0x2b0);
      lVar11 = *(long *)(lVar10 + uVar17 * 0x10);
      pGVar9 = (GsShape *)0x0;
      if (lVar11 != 0) {
        pGVar9 = (GsShape *)(lVar11 + -0x168);
      }
      lVar11 = *(long *)(pGVar9 + 0xf8);
      if (lVar11 == 0) {
        fVar22 = 1.0;
LAB_00a19a40:
        lVar11 = *(long *)(this + 0x28);
        if ((*(uint *)(lVar11 + 0x3ac) & *(uint *)(pGVar9 + 0x120)) != 0) {
          if ((*(uint *)(lVar11 + 0x3a8) >> 3 & 1) == 0) {
            uVar1 = *(uint *)(pGVar9 + 400) >> 7;
          }
          else {
            uVar1 = *(uint *)(pGVar9 + 400) >> 8;
          }
          if (((uVar1 & 1) != 0) &&
             ((((byte)pGVar9[0x42] & 1) == 0 || ((*(uint *)(lVar11 + 0x3a8) >> 1 & 1) != 0)))) {
            if ((*(long *)(lVar11 + 0x3d8) != 0) &&
               (lVar13 = *(long *)(lVar11 + 0x3d0), lVar13 != 0)) {
              lVar12 = lVar11 + 0x3d0;
              do {
                bVar6 = *(GsShape **)(lVar13 + 0x20) < pGVar9;
                if (!bVar6) {
                  lVar12 = lVar13;
                }
                lVar13 = *(long *)(lVar13 + (ulong)bVar6 * 8);
              } while (lVar13 != 0);
              if ((lVar12 != lVar11 + 0x3d0) && (*(GsShape **)(lVar12 + 0x20) <= pGVar9))
              goto LAB_00a199f0;
            }
            if (uVar17 != uVar14) {
              puVar2 = (undefined8 *)(lVar10 + uVar17 * 0x10);
              uVar20 = *puVar2;
              puVar3 = (undefined8 *)(lVar10 + (ulong)uVar14 * 0x10);
              puVar3[1] = puVar2[1];
              *puVar3 = uVar20;
              lVar10 = *(long *)(this + 0x2b0);
            }
            fVar21 = SQRT(*(float *)(lVar10 + uVar17 * 0x10 + 8));
            fVar19 = fVar21;
            if (*(long *)(pGVar9 + 0x188) != 0) {
              uVar18 = NEON_fmadd(*(float *)(pGVar9 + 0x1a8) - *(float *)(param_1 + 4),
                                  *(float *)(pGVar9 + 0x1a8) - *(float *)(param_1 + 4),
                                  (*(float *)(pGVar9 + 0x1a4) - *(float *)param_1) *
                                  (*(float *)(pGVar9 + 0x1a4) - *(float *)param_1));
              fVar19 = (float)NEON_fmadd(*(float *)(pGVar9 + 0x1ac) - *(float *)(param_1 + 8),
                                         *(float *)(pGVar9 + 0x1ac) - *(float *)(param_1 + 8),uVar18
                                        );
              fVar19 = SQRT(fVar19);
            }
            uVar14 = uVar14 + 1;
            addShape(this,pGVar9,fVar19,fVar21,fVar22);
            uVar8 = *(uint *)(this + 0x2ac);
          }
        }
      }
      else {
        if (*(char *)(lVar11 + 0x20) != '\0') {
          fVar22 = *(float *)(lVar11 + 0x1c);
          goto LAB_00a19a40;
        }
        fVar22 = 0.0;
        if (*(char *)(lVar11 + 0x18) != '\0') goto LAB_00a19a40;
      }
LAB_00a199f0:
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar8);
  }
  *(uint *)(this + 0x2ac) = uVar14;
  pGVar9 = *(GsShape **)(*(long *)(this + 0x28) + 0x3c0);
  if (pGVar9 != (GsShape *)0x0) {
    uVar18 = NEON_fmadd(*(float *)(pGVar9 + 0x1a8) - *(float *)(param_1 + 4),
                        *(float *)(pGVar9 + 0x1a8) - *(float *)(param_1 + 4),
                        (*(float *)(pGVar9 + 0x1a4) - *(float *)param_1) *
                        (*(float *)(pGVar9 + 0x1a4) - *(float *)param_1));
    fVar22 = (float)NEON_fmadd(*(float *)(pGVar9 + 0x1ac) - *(float *)(param_1 + 8),
                               *(float *)(pGVar9 + 0x1ac) - *(float *)(param_1 + 8),uVar18);
    addShape(this,pGVar9,SQRT(fVar22),SQRT(fVar22),1.0);
    uVar14 = *(uint *)(this + 0x2ac);
  }
  *(uint *)param_2 = *(int *)param_2 + uVar14;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


