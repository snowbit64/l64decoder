// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCell
// Entry Point: 00a69b48
// Size: 1640 bytes
// Signature: undefined __cdecl loadCell(GridCellSharedData * param_1, IRenderDevice * param_2)


/* FoliageTransformGroup::loadCell(LocalGeometryTransformGroup::GridCellSharedData const*,
   IRenderDevice*) */

void FoliageTransformGroup::loadCell(GridCellSharedData *param_1,IRenderDevice *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FoliageCellGeometry *pFVar17;
  undefined8 uVar18;
  IRenderDevice *in_x2;
  uint in_w4;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long *this;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  undefined4 *puVar34;
  uint uVar35;
  undefined4 *puVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  undefined4 *puVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  ulong local_c0;
  float local_b8;
  long local_b0;
  
  lVar12 = tpidr_el0;
  local_b0 = *(long *)(lVar12 + 0x28);
  iVar4 = *(int *)(param_1 + 0x210);
  sVar7 = *(short *)(param_2 + 8);
  iVar16 = iVar4;
  if (iVar4 < 0) {
    iVar16 = iVar4 + 1;
  }
  uVar2 = (iVar16 >> 1) + (int)sVar7;
  if (((int)uVar2 < 0) || (iVar4 <= (int)uVar2)) {
LAB_00a69fc0:
    lVar20 = *(long *)param_1;
  }
  else {
    sVar8 = *(short *)(param_2 + 10);
    uVar3 = (iVar16 >> 1) + (int)sVar8;
    if (((int)uVar3 < 0) || (iVar4 <= (int)uVar3)) goto LAB_00a69fc0;
    uVar14 = *(uint *)(param_1 + 0x248);
    iVar16 = 0;
    if (uVar14 != 0) {
      iVar16 = (int)sVar8 / (int)uVar14;
    }
    iVar16 = (int)sVar8 - iVar16 * uVar14;
    iVar4 = 0;
    if (uVar14 != 0) {
      iVar4 = (int)sVar7 / (int)uVar14;
    }
    iVar4 = (int)sVar7 - iVar4 * uVar14;
    uVar19 = (ulong)((uVar14 & iVar4 >> 0x1f) + iVar4 +
                    ((uVar14 & iVar16 >> 0x1f) + iVar16) * uVar14);
    lVar20 = uVar19 * 4;
    this = *(long **)param_2;
    *(int *)(param_1 + 0x260) =
         *(int *)(param_1 + 0x260) - *(int *)(*(long *)(param_1 + 600) + lVar20);
    *(undefined4 *)(*(long *)(param_1 + 600) + lVar20) = 0;
    pFVar17 = (FoliageCellGeometry *)this[0x2e];
    FoliageCellGeometry::clearInstanceCounts();
    iVar16 = *(int *)(param_1 + 0x214);
    fVar44 = *(float *)(param_1 + 0x160);
    uVar14 = (**(code **)(**(long **)(param_1 + 0x218) + 0x60))();
    iVar4 = *(int *)(param_1 + 0x214);
    if (iVar4 == 0) {
      uVar38 = 0;
      uVar39 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x238);
      uVar39 = 0;
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar2 / uVar5;
      }
      fVar43 = (float)(ulong)uVar5;
      uVar38 = 0;
      uVar31 = 0;
      uVar9 = uVar2 - uVar10 * uVar5;
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar3 / uVar5;
      }
      uVar5 = uVar3 - uVar11 * uVar5;
      fVar41 = *(float *)(param_1 + 0x160);
      do {
        uVar35 = 0;
        do {
          uVar15 = DensityMapModifier::readValue
                             (*(DensityMapModifier **)(param_1 + 0x220),uVar35 + iVar16 * uVar2,
                              uVar31 + iVar16 * uVar3);
          plVar21 = (long *)(*(long *)(*(long *)(param_1 + 0x230) + 0x80) +
                            (ulong)(uVar15 & ~(-1 << (ulong)(uVar14 & 0x1f))) * 0x18);
          lVar20 = *plVar21;
          uVar22 = plVar21[1] - lVar20;
          if ((int)(uVar22 >> 3) != 0) {
            uVar27 = 0;
            do {
              puVar36 = *(undefined4 **)(lVar20 + uVar27 * 8);
              puVar40 = *(undefined4 **)
                         (*(long *)(puVar36 + 0x12) +
                         (ulong)(uVar15 >> ((ulong)(uint)puVar36[9] & 0x3f) & puVar36[10]) * 8);
              if (puVar40 != (undefined4 *)0x0) {
                lVar23 = *(long *)(*(long *)(param_1 + 0x230) + 0x20) +
                         (ulong)(uint)puVar40[6] * 0x18;
                puVar1 = (uint *)(*(long *)(lVar23 + 0x10) +
                                 (ulong)(uVar35 + uVar9 * iVar4 +
                                        *(int *)(lVar23 + 4) * (uVar31 + uVar5 * iVar4)) * 0x10);
                if (*puVar1 != 0) {
                  uVar37 = 0;
                  do {
                    pfVar24 = (float *)(*(long *)(puVar1 + 2) + uVar37 * 0xc);
                    fVar47 = *pfVar24;
                    fVar45 = pfVar24[1];
                    local_c0 = (((ulong)uVar11 << 0x20 ^ (ulong)uVar10 << 0x30 |
                                (ulong)(uint)pfVar24[2]) ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d
                               + 0xdead1337beef6800;
                    fVar42 = (float)PCGRand::getRandomFloatExclusive();
                    lVar23 = *(long *)(puVar40 + 0xe);
                    lVar25 = *(long *)(puVar40 + 0x10) - lVar23 >> 5;
                    if (lVar25 == 1) {
                      uVar26 = 0;
                    }
                    else {
                      uVar26 = 0;
                      do {
                        fVar42 = fVar42 - *(float *)(lVar23 + uVar26 * 0x20);
                        if (fVar42 <= 0.0) break;
                        uVar26 = (ulong)((int)uVar26 + 1);
                      } while (uVar26 < lVar25 - 1U);
                    }
                    lVar23 = lVar23 + uVar26 * 0x20;
                    lVar25 = *(long *)(lVar23 + 8);
                    lVar23 = *(long *)(lVar23 + 0x10) - lVar25;
                    if (lVar23 != 0) {
                      uVar48 = NEON_fmadd(fVar47 - (float)(ulong)uVar9 / fVar43,fVar41 * fVar43,
                                          fVar44 * (float)uVar2);
                      uVar28 = 0;
                      uVar46 = NEON_fmadd(fVar45 - (float)(ulong)uVar5 / fVar43,fVar41 * fVar43,
                                          fVar44 * (float)uVar3);
                      uVar29 = (lVar23 >> 3) * 0x6db6db6db6db6db7;
                      lVar23 = *(long *)(pFVar17 + 0x70);
                      lVar30 = *(long *)(pFVar17 + 0x88);
                      do {
                        lVar32 = lVar25 + uVar28 * 0x38;
                        uVar38 = uVar38 + 1;
                        uVar28 = (ulong)((int)uVar28 + 1);
                        lVar33 = lVar23 + (ulong)*(uint *)(lVar32 + 0xc) * 0x18;
                        *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                        lVar32 = (ulong)*(uint *)(lVar32 + 4) * 4;
                        *(int *)(lVar30 + lVar32) = *(int *)(lVar30 + lVar32) + 1;
                      } while (uVar28 <= uVar29 && uVar29 - uVar28 != 0);
                      puVar34 = (undefined4 *)(*(long *)(param_1 + 0x240) + (ulong)uVar39 * 0x14);
                      uVar39 = uVar39 + 1;
                      *(char *)(puVar34 + 4) = (char)*puVar36;
                      uVar6 = *puVar40;
                      *(char *)((long)puVar34 + 0x12) = (char)uVar26;
                      *(char *)((long)puVar34 + 0x11) = (char)uVar6;
                      fVar42 = (float)PCGRand::getRandomFloatExclusive();
                      uVar48 = NEON_fmadd(fVar42 + -0.5,puVar40[5],uVar48);
                      *puVar34 = uVar48;
                      fVar42 = (float)PCGRand::getRandomFloatExclusive();
                      uVar46 = NEON_fmadd(fVar42 + -0.5,puVar40[5],uVar46);
                      puVar34[1] = uVar46;
                      uVar46 = PCGRand::getRandomFloatExclusive();
                      puVar34[2] = uVar46;
                      uVar46 = PCGRand::getRandomFloatExclusive();
                      puVar34[3] = uVar46;
                    }
                    uVar37 = uVar37 + 1;
                  } while (uVar37 < *puVar1);
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != (uVar22 >> 3 & 0xffffffff));
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 < *(uint *)(param_1 + 0x214));
        uVar31 = uVar31 + 1;
      } while (uVar31 < *(uint *)(param_1 + 0x214));
    }
    *(uint *)(*(long *)(param_1 + 600) + uVar19 * 4) = uVar38;
    *(uint *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + uVar38;
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar16 != 0)) {
                    /* try { // try from 00a6a170 to 00a6a17b has its CatchHandler @ 00a6a1b0 */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    InstancedGeometryManager::registerSoftInstances
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
               (TransformGroup *)param_1,*(uint *)(param_1 + 0x260),
               *(int *)(*(long *)(param_1 + 0x268) + 0x1c) *
               *(int *)(*(long *)(param_1 + 0x268) + 0x14));
    if (uVar39 != 0) {
      if (pFVar17[0xad] != (FoliageCellGeometry)0x0) {
        BuddyAllocator::free(*(BuddyAllocator **)(param_1 + 0x268),*(uint *)(pFVar17 + 0xb0));
        pFVar17[0xad] = (FoliageCellGeometry)0x0;
      }
      bVar13 = BuddyAllocator::allocate
                         (*(BuddyAllocator **)(param_1 + 0x268),uVar38,(uint *)(pFVar17 + 0xb0));
      pFVar17[0xad] = (FoliageCellGeometry)(bVar13 & 1);
      if ((bVar13 & 1) == 0) {
        uVar18 = 1;
        param_1[0x1b0] = (GridCellSharedData)0x1;
      }
      else {
        fVar44 = ((float)(int)sVar7 + 0.5) * *(float *)(param_1 + 0x160);
        fVar43 = ((float)(int)sVar8 + 0.5) * *(float *)(param_1 + 0x160);
        updateFoliageCellGeometry
                  ((FoliageTransformGroup *)param_1,pFVar17,*(BlockInstanceData **)(param_1 + 0x240)
                   ,uVar39,in_w4,fVar44,fVar43,(GridCellSharedData *)param_2,in_x2);
        GsShape::clearShapeFlag((GsShape *)this,0x400);
        local_c0 = (ulong)(uint)fVar44;
        local_b8 = fVar43;
        TransformGroup::setTranslation((TransformGroup *)this,(Vector3 *)&local_c0);
        (**(code **)(*this + 0x50))(this);
        uVar18 = 1;
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
      }
      goto LAB_00a69fd4;
    }
    lVar20 = *(long *)param_1;
  }
  (**(code **)(lVar20 + 0x50))(param_1,param_2);
  uVar18 = 0;
LAB_00a69fd4:
  if (*(long *)(lVar12 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar18);
}


