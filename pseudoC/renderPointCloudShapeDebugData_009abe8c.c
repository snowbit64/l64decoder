// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderPointCloudShapeDebugData
// Entry Point: 009abe8c
// Size: 3080 bytes
// Signature: undefined __cdecl renderPointCloudShapeDebugData(btTransform * param_1, btRigidBody * param_2, btConvexPointCloudShape * param_3, int param_4)


/* Bt2ScenegraphPhysicsContext::renderPointCloudShapeDebugData(btTransform const&, btRigidBody*,
   btConvexPointCloudShape*, int) */

void Bt2ScenegraphPhysicsContext::renderPointCloudShapeDebugData
               (btTransform *param_1,btRigidBody *param_2,btConvexPointCloudShape *param_3,
               int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  pair pVar5;
  ulong uVar6;
  long lVar8;
  float *pfVar9;
  long *plVar10;
  uint uVar11;
  btTransform *pbVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong local_150;
  ulong uStack_148;
  undefined8 local_13c;
  void *local_130;
  char local_128;
  float local_120 [4];
  void *local_110;
  char local_108;
  undefined8 local_fc;
  void *local_f0;
  char local_e8;
  undefined8 local_dc;
  void *local_d0;
  char local_c8;
  long local_b8;
  btTransform *pbVar7;
  
  plVar10 = (long *)(ulong)(uint)param_4;
  lVar4 = tpidr_el0;
  local_b8 = *(long *)(lVar4 + 0x28);
  uVar6 = Bt2PhysicsColShapeCache::getColShapeId((btCollisionShape *)plVar10);
  if (uVar6 == 0) goto LAB_009ac650;
  pbVar12 = *(btTransform **)(param_1 + 0x398);
  if (pbVar12 == (btTransform *)0x0) {
LAB_009abf28:
    local_110 = (void *)0x0;
    local_f0 = (void *)0x0;
    local_108 = '\x01';
    local_e8 = '\x01';
    local_120[1] = 0.0;
    local_120[2] = 0.0;
    local_fc = 0;
    local_c8 = '\x01';
    local_d0 = (void *)0x0;
    local_dc = 0;
                    /* try { // try from 009abf60 to 009abf77 has its CatchHandler @ 009acac0 */
    btConvexHullComputer::compute(local_120,SUB81(plVar10[0xf],0),0,0x10,0.0,0.0);
    iVar16 = (int)local_fc;
    local_160 = 1;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_148 = uStack_148 & 0xffffffff00000000;
    local_128 = '\x01';
    local_130 = (void *)0x0;
    local_13c = 0;
                    /* try { // try from 009abfa8 to 009abfaf has its CatchHandler @ 009acaa8 */
    local_150 = uVar6;
    pVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
            ::
            __emplace_unique<std::__ndk1::pair<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>
                      ((__tree<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,Bt2ScenegraphPhysicsContext::ConvexDebugRenderingData>>>
                        *)(param_1 + 0x390),(pair *)&local_150);
    pbVar7 = (btTransform *)(ulong)pVar5;
    if ((local_130 != (void *)0x0) && (local_128 != '\0')) {
                    /* try { // try from 009abfc4 to 009abfc7 has its CatchHandler @ 009acaa0 */
      btAlignedFreeInternal(local_130);
    }
    uVar6 = (ulong)(uint)(iVar16 << 1) & 0x7ffffffe;
    *(undefined4 *)(pbVar7 + 0x28) = 0;
    iVar15 = (int)uVar6;
    if (*(int *)(pbVar7 + 0x38) < iVar15) {
      if (iVar15 == 0) {
        lVar8 = 0;
      }
      else {
                    /* try { // try from 009abfe8 to 009ac03b has its CatchHandler @ 009acaa4 */
        lVar8 = btAlignedAllocInternal(uVar6 << 4,0x10);
      }
      uVar11 = *(uint *)(pbVar7 + 0x34);
      if (0 < (int)uVar11) {
        lVar13 = 0;
        do {
          uVar39 = *(undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13);
          ((undefined8 *)(lVar8 + lVar13))[1] =
               ((undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13))[1];
          *(undefined8 *)(lVar8 + lVar13) = uVar39;
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar11 * 0x10 - lVar13 != 0);
      }
      if ((*(void **)(pbVar7 + 0x40) != (void *)0x0) && (pbVar7[0x48] != (btTransform)0x0)) {
        btAlignedFreeInternal(*(void **)(pbVar7 + 0x40));
      }
      *(long *)(pbVar7 + 0x40) = lVar8;
      *(int *)(pbVar7 + 0x38) = iVar15;
      pbVar7[0x48] = (btTransform)0x1;
    }
    if (iVar16 != 0) {
      iVar15 = 0;
      do {
        iVar3 = *(int *)((long)local_f0 + (long)iVar15 * 0xc + 4);
        if (-1 < iVar3) {
          fVar35 = 0.0;
          piVar14 = (int *)((long)local_f0 + (long)iVar3 * 0xc + (long)iVar15 * 0xc);
          fVar24 = 0.0;
          fVar36 = 1.0;
          pfVar9 = (float *)((long)local_110 +
                            (long)*(int *)((long)local_f0 +
                                          (long)iVar3 * 0xc + (long)iVar15 * 0xc + 8) * 0x10);
          pfVar2 = (float *)((long)local_110 +
                            (long)*(int *)((long)local_f0 + (long)iVar15 * 0xc + 8) * 0x10);
          fVar34 = *pfVar9;
          fVar33 = pfVar9[1];
          fVar37 = *pfVar2;
          fVar32 = pfVar2[1];
          uVar41 = *(undefined8 *)(pfVar9 + 2);
          uVar39 = *(undefined8 *)(pfVar2 + 2);
          pfVar9 = (float *)((long)local_110 + (long)piVar14[(long)*piVar14 * 3 + 2] * 0x10);
          fVar30 = (float)uVar39;
          fVar44 = (float)uVar41;
          fVar20 = (float)NEON_fmadd(fVar32 - fVar33,pfVar9[2] - fVar44,
                                     (pfVar9[1] - fVar33) * -(fVar30 - fVar44));
          fVar18 = (pfVar9[2] - fVar44) * -(fVar37 - fVar34) +
                   (*pfVar9 - fVar34) * (fVar30 - fVar44);
          fVar26 = ABS(fVar20);
          fVar28 = ABS(fVar18);
          fVar21 = (float)NEON_fmadd(fVar37 - fVar34,pfVar9[1] - fVar33,
                                     (*pfVar9 - fVar34) * -(fVar32 - fVar33));
          local_150 = CONCAT44(fVar28,fVar26);
          fVar22 = fVar28;
          if (fVar26 >= fVar28) {
            fVar22 = fVar26;
          }
          uStack_148 = (ulong)(uint)ABS(fVar21);
          local_1a4 = 0.0;
          uVar6 = 2;
          if (ABS(fVar21) <= fVar22) {
            uVar6 = (ulong)(fVar26 < fVar28);
          }
          local_1a8 = 1.0;
          fVar22 = *(float *)((long)&local_150 + uVar6 * 4);
          if (0.0 < fVar22) {
            fVar22 = 1.0 / fVar22;
            fVar18 = fVar18 * fVar22;
            fVar20 = fVar20 * fVar22;
            fVar21 = fVar21 * fVar22;
            uVar23 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
            fVar22 = (float)NEON_fmadd(fVar21,fVar21,uVar23);
            fVar24 = 1.0 / SQRT(fVar22);
            fVar36 = fVar20 * fVar24;
            fVar35 = fVar18 * fVar24;
            fVar24 = fVar21 * fVar24;
          }
          fVar26 = 0.0;
          pfVar9 = (float *)((long)local_110 +
                            (long)(piVar14 + (long)piVar14[1] * 3)
                                  [(long)piVar14[(long)piVar14[1] * 3] * 3 + 2] * 0x10);
          fVar20 = (float)NEON_fmadd(fVar33 - fVar32,pfVar9[2] - fVar30,
                                     (pfVar9[1] - fVar32) * -(fVar44 - fVar30));
          fVar18 = (pfVar9[2] - fVar30) * -(fVar34 - fVar37) +
                   (*pfVar9 - fVar37) * (fVar44 - fVar30);
          fVar28 = ABS(fVar20);
          fVar30 = ABS(fVar18);
          fVar21 = (float)NEON_fmadd(fVar34 - fVar37,pfVar9[1] - fVar32,
                                     (*pfVar9 - fVar37) * -(fVar33 - fVar32));
          local_150 = CONCAT44(fVar30,fVar28);
          fVar22 = fVar30;
          if (fVar28 >= fVar30) {
            fVar22 = fVar28;
          }
          uStack_148 = (ulong)(uint)ABS(fVar21);
          uVar6 = 2;
          if (ABS(fVar21) <= fVar22) {
            uVar6 = (ulong)(fVar28 < fVar30);
          }
          fVar22 = *(float *)((long)&local_150 + uVar6 * 4);
          if (0.0 < fVar22) {
            fVar22 = 1.0 / fVar22;
            fVar18 = fVar18 * fVar22;
            fVar20 = fVar20 * fVar22;
            fVar21 = fVar21 * fVar22;
            uVar23 = NEON_fmadd(fVar20,fVar20,fVar18 * fVar18);
            fVar22 = (float)NEON_fmadd(fVar21,fVar21,uVar23);
            fVar26 = 1.0 / SQRT(fVar22);
            local_1a8 = fVar20 * fVar26;
            local_1a4 = fVar18 * fVar26;
            fVar26 = fVar21 * fVar26;
          }
          uVar11 = *(uint *)(pbVar7 + 0x34);
          if (uVar11 == *(uint *)(pbVar7 + 0x38)) {
            uVar17 = uVar11 << 1;
            if (uVar11 == 0) {
              uVar17 = 1;
            }
            if ((int)uVar11 < (int)uVar17) {
              if (uVar17 == 0) {
                lVar8 = 0;
              }
              else {
                    /* try { // try from 009ac2dc to 009ac56f has its CatchHandler @ 009acac4 */
                lVar8 = btAlignedAllocInternal
                                  (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar17 << 4,0x10);
                uVar11 = *(uint *)(pbVar7 + 0x34);
              }
              if (0 < (int)uVar11) {
                lVar13 = 0;
                do {
                  uVar19 = *(undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13);
                  ((undefined8 *)(lVar8 + lVar13))[1] =
                       ((undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13))[1];
                  *(undefined8 *)(lVar8 + lVar13) = uVar19;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)uVar11 * 0x10 - lVar13 != 0);
              }
              if ((*(void **)(pbVar7 + 0x40) != (void *)0x0) && (pbVar7[0x48] != (btTransform)0x0))
              {
                btAlignedFreeInternal(*(void **)(pbVar7 + 0x40));
              }
              *(long *)(pbVar7 + 0x40) = lVar8;
              *(uint *)(pbVar7 + 0x38) = uVar17;
              pbVar7[0x48] = (btTransform)0x1;
              uVar11 = *(uint *)(pbVar7 + 0x34);
            }
          }
          pfVar9 = (float *)(*(long *)(pbVar7 + 0x40) + (long)(int)uVar11 * 0x10);
          *pfVar9 = fVar34;
          pfVar9[1] = fVar33;
          *(undefined8 *)(pfVar9 + 2) = uVar41;
          uVar11 = *(int *)(pbVar7 + 0x34) + 1;
          *(uint *)(pbVar7 + 0x34) = uVar11;
          if (uVar11 == *(uint *)(pbVar7 + 0x38)) {
            uVar17 = uVar11 * 2;
            if (uVar11 == 0) {
              uVar17 = 1;
            }
            if ((int)uVar11 < (int)uVar17) {
              if (uVar17 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = btAlignedAllocInternal
                                  (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar17 << 4,0x10);
                uVar11 = *(uint *)(pbVar7 + 0x34);
              }
              if (0 < (int)uVar11) {
                lVar13 = 0;
                do {
                  uVar41 = *(undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13);
                  ((undefined8 *)(lVar8 + lVar13))[1] =
                       ((undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13))[1];
                  *(undefined8 *)(lVar8 + lVar13) = uVar41;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)uVar11 * 0x10 - lVar13 != 0);
              }
              if ((*(void **)(pbVar7 + 0x40) != (void *)0x0) && (pbVar7[0x48] != (btTransform)0x0))
              {
                btAlignedFreeInternal(*(void **)(pbVar7 + 0x40));
              }
              *(long *)(pbVar7 + 0x40) = lVar8;
              *(uint *)(pbVar7 + 0x38) = uVar17;
              pbVar7[0x48] = (btTransform)0x1;
              uVar11 = *(uint *)(pbVar7 + 0x34);
            }
          }
          pfVar9 = (float *)(*(long *)(pbVar7 + 0x40) + (long)(int)uVar11 * 0x10);
          *pfVar9 = fVar37;
          pfVar9[1] = fVar32;
          *(undefined8 *)(pfVar9 + 2) = uVar39;
          uVar11 = *(int *)(pbVar7 + 0x34) + 1;
          *(uint *)(pbVar7 + 0x34) = uVar11;
          if (uVar11 == *(uint *)(pbVar7 + 0x38)) {
            uVar17 = uVar11 * 2;
            if (uVar11 == 0) {
              uVar17 = 1;
            }
            if ((int)uVar11 < (int)uVar17) {
              if (uVar17 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = btAlignedAllocInternal
                                  (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar17 << 4,0x10);
                uVar11 = *(uint *)(pbVar7 + 0x34);
              }
              if (0 < (int)uVar11) {
                lVar13 = 0;
                do {
                  uVar39 = *(undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13);
                  ((undefined8 *)(lVar8 + lVar13))[1] =
                       ((undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13))[1];
                  *(undefined8 *)(lVar8 + lVar13) = uVar39;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)uVar11 * 0x10 - lVar13 != 0);
              }
              if ((*(void **)(pbVar7 + 0x40) != (void *)0x0) && (pbVar7[0x48] != (btTransform)0x0))
              {
                btAlignedFreeInternal(*(void **)(pbVar7 + 0x40));
              }
              *(long *)(pbVar7 + 0x40) = lVar8;
              *(uint *)(pbVar7 + 0x38) = uVar17;
              pbVar7[0x48] = (btTransform)0x1;
              uVar11 = *(uint *)(pbVar7 + 0x34);
            }
          }
          pfVar9 = (float *)(*(long *)(pbVar7 + 0x40) + (long)(int)uVar11 * 0x10);
          *pfVar9 = fVar36;
          pfVar9[1] = fVar35;
          pfVar9[2] = fVar24;
          pfVar9[3] = 0.0;
          uVar11 = *(int *)(pbVar7 + 0x34) + 1;
          *(uint *)(pbVar7 + 0x34) = uVar11;
          if (uVar11 == *(uint *)(pbVar7 + 0x38)) {
            uVar17 = uVar11 * 2;
            if (uVar11 == 0) {
              uVar17 = 1;
            }
            if ((int)uVar11 < (int)uVar17) {
              if (uVar17 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = btAlignedAllocInternal
                                  (-(ulong)(uVar17 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar17 << 4,0x10);
                uVar11 = *(uint *)(pbVar7 + 0x34);
              }
              if (0 < (int)uVar11) {
                lVar13 = 0;
                do {
                  uVar39 = *(undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13);
                  ((undefined8 *)(lVar8 + lVar13))[1] =
                       ((undefined8 *)(*(long *)(pbVar7 + 0x40) + lVar13))[1];
                  *(undefined8 *)(lVar8 + lVar13) = uVar39;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)uVar11 * 0x10 - lVar13 != 0);
              }
              if ((*(void **)(pbVar7 + 0x40) != (void *)0x0) && (pbVar7[0x48] != (btTransform)0x0))
              {
                btAlignedFreeInternal(*(void **)(pbVar7 + 0x40));
              }
              *(long *)(pbVar7 + 0x40) = lVar8;
              *(uint *)(pbVar7 + 0x38) = uVar17;
              pbVar7[0x48] = (btTransform)0x1;
              uVar11 = *(uint *)(pbVar7 + 0x34);
            }
          }
          pfVar9 = (float *)(*(long *)(pbVar7 + 0x40) + (long)(int)uVar11 * 0x10);
          *pfVar9 = local_1a8;
          pfVar9[1] = local_1a4;
          pfVar9[2] = fVar26;
          pfVar9[3] = 0.0;
          *(int *)(pbVar7 + 0x34) = *(int *)(pbVar7 + 0x34) + 1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != iVar16);
    }
    if ((local_d0 != (void *)0x0) && (local_c8 != '\0')) {
                    /* try { // try from 009ac584 to 009ac587 has its CatchHandler @ 009aca9c */
      btAlignedFreeInternal(local_d0);
    }
    local_d0 = (void *)0x0;
    local_c8 = 1;
    local_dc = 0;
    if ((local_f0 != (void *)0x0) && (local_e8 != '\0')) {
                    /* try { // try from 009ac5b0 to 009ac5b3 has its CatchHandler @ 009aca98 */
      btAlignedFreeInternal(local_f0);
    }
    local_e8 = 1;
    local_f0 = (void *)0x0;
    local_fc = 0;
    if ((local_110 != (void *)0x0) && (local_108 != '\0')) {
                    /* try { // try from 009ac5d0 to 009ac5d3 has its CatchHandler @ 009aca94 */
      btAlignedFreeInternal(local_110);
    }
  }
  else {
    pbVar7 = param_1 + 0x398;
    do {
      if (*(ulong *)(pbVar12 + 0x20) >= uVar6) {
        pbVar7 = pbVar12;
      }
      pbVar12 = *(btTransform **)(pbVar12 + (ulong)(*(ulong *)(pbVar12 + 0x20) < uVar6) * 8);
    } while (pbVar12 != (btTransform *)0x0);
    if ((pbVar7 == param_1 + 0x398) || (uVar6 < *(ulong *)(pbVar7 + 0x20))) goto LAB_009abf28;
  }
  uStack_148 = 0x3f8000003d408312;
  local_150 = 0x3e5e353f3f800000;
  if (*(int *)(param_3 + 0xec) == 2) {
    local_150 = 0x3e5e353f3ecccccd;
  }
  if (*(long *)(param_3 + 0x228) != 0) {
    local_120[2] = 1.0;
    local_120[3] = 0.4;
    local_120[0] = 1.0;
    local_120[1] = 1.0;
    DeferredDebugRenderer::addPoint
              (*(DeferredDebugRenderer **)(param_1 + 0x388),(float *)(param_3 + 0x38),local_120,0x40
              );
  }
  pfVar9 = (float *)(**(code **)(*plVar10 + 0x38))(plVar10);
  uVar11 = *(uint *)(pbVar7 + 0x34);
  *(undefined4 *)(pbVar7 + 0x28) = 0;
  if (6 < uVar11 + 3) {
    uVar17 = uVar11 + 3;
    if (-1 < (int)uVar11) {
      uVar17 = uVar11;
    }
    iVar16 = 0;
    uVar17 = (int)uVar17 >> 2;
    if (uVar17 < 2) {
      uVar17 = 1;
    }
    do {
      lVar8 = *(long *)(pbVar7 + 0x40);
      fVar20 = 0.0;
      uVar38 = *(undefined4 *)param_2;
      fVar34 = *(float *)(param_2 + 4);
      pfVar2 = (float *)(lVar8 + (long)iVar16 * 0x10);
      fVar21 = *(float *)(param_2 + 0x24);
      fVar32 = 0.0;
      fVar28 = 0.0;
      fVar33 = 1.0;
      pfVar1 = (float *)(lVar8 + (long)(iVar16 + 1) * 0x10);
      fVar22 = pfVar9[1] * pfVar2[1];
      fVar24 = *pfVar9 * *pfVar2;
      uVar23 = *(undefined4 *)(param_2 + 0x10);
      fVar18 = *(float *)(param_2 + 0x14);
      uVar25 = *(undefined4 *)(param_2 + 0x20);
      fVar26 = pfVar9[2] * pfVar2[2];
      uVar40 = *(undefined4 *)(param_2 + 8);
      uVar31 = *(undefined4 *)(param_2 + 0x18);
      uVar42 = NEON_fmadd(fVar24,uVar25,fVar22 * fVar21);
      uVar43 = NEON_fmadd(fVar24,uVar38,fVar22 * fVar34);
      uVar29 = NEON_fmadd(fVar24,uVar23,fVar22 * fVar18);
      uVar27 = *(undefined4 *)(param_2 + 0x28);
      uStack_178._0_4_ = (float)NEON_fmadd(fVar26,uVar27,uVar42);
      local_180._0_4_ = (float)NEON_fmadd(fVar26,uVar40,uVar43);
      local_180._4_4_ = (float)NEON_fmadd(fVar26,uVar31,uVar29);
      fVar35 = *(float *)(param_2 + 0x30);
      fVar26 = *(float *)(param_2 + 0x34);
      fVar24 = *(float *)(param_2 + 0x38);
      local_180._0_4_ = (float)local_180 + fVar35;
      local_180._4_4_ = local_180._4_4_ + fVar26;
      uStack_178._0_4_ = (float)uStack_178 + fVar24;
      uStack_178._4_4_ = 0;
      fVar22 = pfVar9[1] * pfVar1[1];
      fVar37 = pfVar9[2] * pfVar1[2];
      local_184 = 0;
      fVar36 = *pfVar9 * *pfVar1;
      pfVar2 = (float *)(lVar8 + (long)(iVar16 + 2) * 0x10);
      uVar42 = NEON_fmadd(fVar36,uVar23,fVar18 * fVar22);
      uVar43 = NEON_fmadd(fVar36,uVar25,fVar21 * fVar22);
      uVar29 = NEON_fmadd(fVar36,uVar38,fVar34 * fVar22);
      local_18c = (float)NEON_fmadd(fVar37,uVar31,uVar42);
      local_188 = (float)NEON_fmadd(fVar37,uVar27,uVar43);
      local_190 = (float)NEON_fmadd(fVar37,uVar40,uVar29);
      local_18c = fVar26 + local_18c;
      local_188 = fVar24 + local_188;
      local_190 = fVar35 + local_190;
      pfVar1 = (float *)(lVar8 + (long)(iVar16 + 3) * 0x10);
      fVar36 = pfVar9[1] * pfVar2[1];
      fVar22 = *pfVar9 * *pfVar2;
      fVar37 = pfVar9[2] * pfVar2[2];
      uVar42 = NEON_fmadd(fVar22,uVar38,fVar34 * fVar36);
      uVar43 = NEON_fmadd(fVar22,uVar23,fVar18 * fVar36);
      uVar29 = NEON_fmadd(fVar22,uVar25,fVar21 * fVar36);
      fVar30 = (float)NEON_fmadd(fVar37,uVar40,uVar42);
      fVar44 = (float)NEON_fmadd(fVar37,uVar31,uVar43);
      fVar36 = (float)NEON_fmadd(fVar37,uVar27,uVar29);
      local_120[0] = ABS(fVar35 + fVar30);
      local_120[1] = ABS(fVar26 + fVar44);
      local_120[2] = ABS(fVar24 + fVar36);
      fVar22 = local_120[1];
      if (local_120[0] >= local_120[1]) {
        fVar22 = local_120[0];
      }
      uVar6 = 2;
      if (local_120[2] <= fVar22) {
        uVar6 = (ulong)(local_120[0] < local_120[1]);
      }
      if (0.0 < local_120[uVar6]) {
        fVar28 = 1.0 / local_120[uVar6];
        fVar32 = (fVar26 + fVar44) * fVar28;
        fVar33 = (fVar35 + fVar30) * fVar28;
        fVar28 = (fVar24 + fVar36) * fVar28;
        uVar29 = NEON_fmadd(fVar33,fVar33,fVar32 * fVar32);
        fVar22 = (float)NEON_fmadd(fVar28,fVar28,uVar29);
        fVar22 = 1.0 / SQRT(fVar22);
        fVar33 = fVar33 * fVar22;
        fVar32 = fVar32 * fVar22;
        fVar28 = fVar28 * fVar22;
      }
      fVar30 = pfVar9[1] * pfVar1[1];
      fVar44 = *pfVar9 * *pfVar1;
      fVar22 = pfVar9[2] * pfVar1[2];
      local_120[3] = 0.0;
      fVar37 = 0.0;
      fVar36 = 1.0;
      uVar29 = NEON_fmadd(fVar44,uVar38,fVar34 * fVar30);
      uVar23 = NEON_fmadd(fVar44,uVar23,fVar18 * fVar30);
      fVar18 = (float)NEON_fmadd(fVar22,uVar40,uVar29);
      fVar34 = (float)NEON_fmadd(fVar22,uVar31,uVar23);
      uVar23 = NEON_fmadd(fVar44,uVar25,fVar21 * fVar30);
      fVar21 = (float)NEON_fmadd(fVar22,uVar27,uVar23);
      local_120[0] = ABS(fVar35 + fVar18);
      local_120[1] = ABS(fVar26 + fVar34);
      local_120[2] = ABS(fVar24 + fVar21);
      fVar22 = local_120[1];
      if (local_120[0] >= local_120[1]) {
        fVar22 = local_120[0];
      }
      uVar6 = 2;
      if (local_120[2] <= fVar22) {
        uVar6 = (ulong)(local_120[0] < local_120[1]);
      }
      if (0.0 < local_120[uVar6]) {
        fVar37 = 1.0 / local_120[uVar6];
        fVar20 = (fVar26 + fVar34) * fVar37;
        fVar36 = (fVar35 + fVar18) * fVar37;
        fVar37 = (fVar24 + fVar21) * fVar37;
        uVar23 = NEON_fmadd(fVar36,fVar36,fVar20 * fVar20);
        fVar22 = (float)NEON_fmadd(fVar37,fVar37,uVar23);
        fVar22 = 1.0 / SQRT(fVar22);
        fVar36 = fVar36 * fVar22;
        fVar20 = fVar20 * fVar22;
        fVar37 = fVar37 * fVar22;
      }
      fVar22 = (float)(**(code **)(*plVar10 + 0x60))(plVar10);
      local_120[3] = 0.0;
      local_120[0] = (float)local_180 + fVar36 * fVar22;
      local_120[1] = fVar20 * fVar22 + local_180._4_4_;
      local_120[2] = fVar37 * fVar22 + (float)uStack_178;
      fVar22 = (float)(**(code **)(*plVar10 + 0x60))(plVar10);
      local_194 = 0;
      local_1a0 = local_190 + fVar36 * fVar22;
      fStack_19c = fVar20 * fVar22 + local_18c;
      local_198 = fVar37 * fVar22 + local_188;
      fVar22 = (float)(**(code **)(*plVar10 + 0x60))(plVar10);
      local_180 = CONCAT44(fVar32 * fVar22 + local_180._4_4_,fVar33 * fVar22 + (float)local_180);
      uStack_178 = CONCAT44(uStack_178._4_4_,fVar28 * fVar22 + (float)uStack_178);
      fVar22 = (float)(**(code **)(*plVar10 + 0x60))(plVar10);
      local_190 = fVar33 * fVar22 + local_190;
      local_18c = fVar32 * fVar22 + local_18c;
      local_188 = fVar28 * fVar22 + local_188;
      DeferredDebugRenderer::addLine
                (*(DeferredDebugRenderer **)(param_1 + 0x388),(float *)&local_180,
                 (float *)&local_150,&local_190,(float *)&local_150,0x40);
      DeferredDebugRenderer::addLine
                (*(DeferredDebugRenderer **)(param_1 + 0x388),local_120,(float *)&local_150,
                 &local_1a0,(float *)&local_150,0x40);
      DeferredDebugRenderer::addLine
                (*(DeferredDebugRenderer **)(param_1 + 0x388),(float *)&local_180,
                 (float *)&local_150,local_120,(float *)&local_150,0x40);
      DeferredDebugRenderer::addLine
                (*(DeferredDebugRenderer **)(param_1 + 0x388),&local_190,(float *)&local_150,
                 &local_1a0,(float *)&local_150,0x40);
      uVar17 = uVar17 - 1;
      iVar16 = iVar16 + 4;
    } while (uVar17 != 0);
  }
LAB_009ac650:
  if (*(long *)(lVar4 + 0x28) == local_b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


