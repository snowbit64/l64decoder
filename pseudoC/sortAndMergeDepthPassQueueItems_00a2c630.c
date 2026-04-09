// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndMergeDepthPassQueueItems
// Entry Point: 00a2c630
// Size: 2448 bytes
// Signature: undefined __thiscall sortAndMergeDepthPassQueueItems(RenderQueueItemAllocator * this, ICommandBuffer * param_1, IVertexBuffer * param_2, IStructBuffer * param_3, GeometryRenderInfo * param_4, uint param_5)


/* RenderQueueItemAllocator::sortAndMergeDepthPassQueueItems(ICommandBuffer*, IVertexBuffer*,
   IStructBuffer*, GeometryRenderInfo const&, unsigned int) */

void __thiscall
RenderQueueItemAllocator::sortAndMergeDepthPassQueueItems
          (RenderQueueItemAllocator *this,ICommandBuffer *param_1,IVertexBuffer *param_2,
          IStructBuffer *param_3,GeometryRenderInfo *param_4,uint param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  RenderPathManager *this_00;
  undefined8 *this_01;
  void *__dest;
  Logger *this_02;
  long lVar14;
  uint *puVar15;
  ushort *puVar16;
  ulong uVar17;
  void *__src;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  MaterialShader **ppMVar23;
  ulong uVar24;
  int *piVar25;
  void **ppvVar26;
  long *plVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  ulong uVar30;
  undefined4 *puVar31;
  GsShape **ppGVar32;
  uint uVar33;
  int iVar34;
  undefined4 *puVar35;
  long lVar36;
  uint *puVar37;
  long lVar38;
  ulong uVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  float fVar43;
  double dVar44;
  int local_d4;
  int local_a8;
  int local_a4;
  void *local_98;
  void *local_90;
  long local_80;
  
  lVar12 = tpidr_el0;
  local_80 = *(long *)(lVar12 + 0x28);
  this_00 = (RenderPathManager *)RenderPathManager::getInstance();
  RenderPathManager::getRenderPassMaterialAttributes(this_00,**(uint **)(this + 0x30));
  std::__ndk1::
  __sort<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
            (**(RenderQueueItemSortKey ***)(this + 0x60),
             (*(RenderQueueItemSortKey ***)(this + 0x60))[1],(SortForRendering *)&local_98);
  lVar14 = **(long **)(this + 0x60);
  uVar17 = ((*(long **)(this + 0x60))[1] - lVar14 >> 3) * -0x3333333333333333;
  if ((int)uVar17 != 0) {
    uVar24 = 0;
    lVar38 = 0;
    puVar35 = (undefined4 *)0x0;
    puVar28 = (undefined4 *)0x0;
    puVar29 = (undefined4 *)0x0;
    puVar31 = (undefined4 *)0x0;
    plVar27 = (long *)(lVar14 + 0x10);
    lVar36 = -1;
    lVar22 = -1;
    lVar14 = -1;
    do {
      fVar43 = *(float *)(plVar27 + 2);
      if (plVar27[-1] != lVar36) {
        std::__ndk1::
        vector<RenderQueueItemAllocator::RasterizerBucket,std::__ndk1::allocator<RenderQueueItemAllocator::RasterizerBucket>>
        ::emplace_back<>();
        lVar38 = 0;
        lVar22 = -1;
        puVar35 = (undefined4 *)(*(long *)(*(long *)(this + 0x68) + 8) + -0x20);
        *puVar35 = (int)((ulong)((*(long **)(this + 0x70))[1] - **(long **)(this + 0x70)) >> 5);
        lVar36 = plVar27[-1];
        lVar14 = -1;
      }
      iVar9 = puVar35[2];
      dVar44 = (double)fVar43;
      dVar42 = dVar44 - *(double *)(puVar35 + 6);
      puVar35[2] = iVar9 + 1U;
      dVar40 = *(double *)(puVar35 + 6) + dVar42 / (double)(ulong)(iVar9 + 1U);
      uVar41 = NEON_fmadd(dVar42,dVar44 - dVar40,*(undefined8 *)(puVar35 + 4));
      *(undefined8 *)(puVar35 + 4) = uVar41;
      *(double *)(puVar35 + 6) = dVar40;
      if (plVar27[-2] != lVar38) {
        std::__ndk1::
        vector<RenderQueueItemAllocator::ShaderBucket,std::__ndk1::allocator<RenderQueueItemAllocator::ShaderBucket>>
        ::emplace_back<>();
        lVar14 = (*(long **)(this + 0x70))[1];
        puVar35[1] = (int)((ulong)(lVar14 - **(long **)(this + 0x70)) >> 5);
        lVar22 = -1;
        puVar28 = (undefined4 *)(lVar14 + -0x20);
        *puVar28 = (int)((ulong)((*(long **)(this + 0x78))[1] - **(long **)(this + 0x78)) >> 5);
        lVar38 = plVar27[-2];
        lVar14 = -1;
      }
      iVar9 = puVar28[2];
      dVar42 = dVar44 - *(double *)(puVar28 + 6);
      puVar28[2] = iVar9 + 1U;
      dVar40 = *(double *)(puVar28 + 6) + dVar42 / (double)(ulong)(iVar9 + 1U);
      uVar41 = NEON_fmadd(dVar42,dVar44 - dVar40,*(undefined8 *)(puVar28 + 4));
      *(undefined8 *)(puVar28 + 4) = uVar41;
      *(double *)(puVar28 + 6) = dVar40;
      if (*plVar27 != lVar22) {
        std::__ndk1::
        vector<RenderQueueItemAllocator::TextureSetBucket,std::__ndk1::allocator<RenderQueueItemAllocator::TextureSetBucket>>
        ::emplace_back<>();
        lVar14 = (*(long **)(this + 0x78))[1];
        puVar28[1] = (int)((ulong)(lVar14 - **(long **)(this + 0x78)) >> 5);
        puVar29 = (undefined4 *)(lVar14 + -0x20);
        *puVar29 = (int)((ulong)((*(long **)(this + 0x80))[1] - **(long **)(this + 0x80)) >> 5);
        lVar22 = *plVar27;
        lVar14 = -1;
      }
      iVar9 = puVar29[2];
      dVar42 = dVar44 - *(double *)(puVar29 + 6);
      puVar29[2] = iVar9 + 1U;
      dVar40 = *(double *)(puVar29 + 6) + dVar42 / (double)(ulong)(iVar9 + 1U);
      uVar41 = NEON_fmadd(dVar42,dVar44 - dVar40,*(undefined8 *)(puVar29 + 4));
      *(undefined8 *)(puVar29 + 4) = uVar41;
      *(double *)(puVar29 + 6) = dVar40;
      if (plVar27[1] != lVar14) {
        std::__ndk1::
        vector<RenderQueueItemAllocator::GeometryBucket,std::__ndk1::allocator<RenderQueueItemAllocator::GeometryBucket>>
        ::emplace_back<>();
        lVar14 = (*(long **)(this + 0x80))[1];
        puVar29[1] = (int)((ulong)(lVar14 - **(long **)(this + 0x80)) >> 5);
        puVar31 = (undefined4 *)(lVar14 + -0x20);
        *puVar31 = (int)uVar24;
        lVar14 = plVar27[1];
      }
      iVar9 = puVar31[2];
      uVar24 = uVar24 + 1;
      plVar27 = plVar27 + 5;
      dVar42 = dVar44 - *(double *)(puVar31 + 6);
      puVar31[1] = (int)uVar24;
      puVar31[2] = iVar9 + 1U;
      dVar40 = *(double *)(puVar31 + 6) + dVar42 / (double)(ulong)(iVar9 + 1U);
      uVar41 = NEON_fmadd(dVar42,dVar44 - dVar40,*(undefined8 *)(puVar31 + 4));
      *(undefined8 *)(puVar31 + 4) = uVar41;
      *(double *)(puVar31 + 6) = dVar40;
    } while ((uVar17 & 0xffffffff) != uVar24);
  }
  std::__ndk1::
  __sort<RenderQueueItemAllocator::RasterizerBucket::SortByDepth&,RenderQueueItemAllocator::RasterizerBucket*>
            (**(RasterizerBucket ***)(this + 0x68),(*(RasterizerBucket ***)(this + 0x68))[1],
             (SortByDepth *)&local_98);
  puVar8 = (*(uint ***)(this + 0x68))[1];
  for (puVar15 = **(uint ***)(this + 0x68); puVar15 != puVar8; puVar15 = puVar15 + 8) {
    std::__ndk1::
    __sort<RenderQueueItemAllocator::ShaderBucket::SortByDepth&,RenderQueueItemAllocator::ShaderBucket*>
              ((ShaderBucket *)(**(long **)(this + 0x70) + (ulong)*puVar15 * 0x20),
               (ShaderBucket *)(**(long **)(this + 0x70) + (ulong)puVar15[1] * 0x20),
               (SortByDepth *)&local_98);
  }
  puVar8 = (*(uint ***)(this + 0x70))[1];
  for (puVar15 = **(uint ***)(this + 0x70); puVar15 != puVar8; puVar15 = puVar15 + 8) {
    std::__ndk1::
    __sort<RenderQueueItemAllocator::TextureSetBucket::SortByDepth&,RenderQueueItemAllocator::TextureSetBucket*>
              ((TextureSetBucket *)(**(long **)(this + 0x78) + (ulong)*puVar15 * 0x20),
               (TextureSetBucket *)(**(long **)(this + 0x78) + (ulong)puVar15[1] * 0x20),
               (SortByDepth *)&local_98);
  }
  puVar8 = (*(uint ***)(this + 0x78))[1];
  for (puVar15 = **(uint ***)(this + 0x78); puVar15 != puVar8; puVar15 = puVar15 + 8) {
    std::__ndk1::
    __sort<RenderQueueItemAllocator::GeometryBucket::SortByDepth&,RenderQueueItemAllocator::GeometryBucket*>
              ((GeometryBucket *)(**(long **)(this + 0x80) + (ulong)*puVar15 * 0x20),
               (GeometryBucket *)(**(long **)(this + 0x80) + (ulong)puVar15[1] * 0x20),
               (SortByDepth *)&local_98);
  }
  std::__ndk1::vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>>::vector
            ((vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>> *)
             &local_98,*(vector **)(this + 0x60));
  (*(undefined8 **)(this + 0x50))[1] = **(undefined8 **)(this + 0x50);
  this_01 = *(undefined8 **)(this + 0x60);
  this_01[1] = *this_01;
                    /* try { // try from 00a2c9a0 to 00a2c9a3 has its CatchHandler @ 00a2cfc4 */
  std::__ndk1::vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>>::
  reserve((vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>> *)this_01,
          uVar17 & 0xffffffff);
  if (param_3 == (IStructBuffer *)0x0) {
    lVar14 = 0;
  }
  else {
                    /* try { // try from 00a2c9bc to 00a2c9cb has its CatchHandler @ 00a2cfc0 */
    lVar14 = (**(code **)(*(long *)param_3 + 0x10))(param_3,param_1,0,*(undefined4 *)this,1);
  }
                    /* try { // try from 00a2c9e8 to 00a2c9fb has its CatchHandler @ 00a2cfc8 */
  lVar22 = (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1,0,(int)uVar17 << 2,1);
  puVar15 = **(uint ***)(this + 0x68);
  puVar8 = (*(uint ***)(this + 0x68))[1];
  if (puVar15 != puVar8) {
    uVar33 = 0;
    iVar9 = 0;
    local_a8 = 0;
    local_d4 = 0;
    do {
      uVar17 = (ulong)*puVar15;
      uVar3 = puVar15[1];
      if (*puVar15 < uVar3) {
        do {
          puVar21 = (uint *)(**(long **)(this + 0x70) + uVar17 * 0x20);
          uVar2 = *puVar21;
          uVar24 = (ulong)uVar2;
          uVar4 = puVar21[1];
          if (uVar2 < uVar4) {
            do {
              puVar21 = (uint *)(**(long **)(this + 0x78) + uVar24 * 0x20);
              uVar2 = *puVar21;
              uVar19 = (ulong)uVar2;
              uVar5 = puVar21[1];
              if (uVar2 < uVar5) {
                do {
                  puVar21 = (uint *)(**(long **)(this + 0x80) + uVar19 * 0x20);
                  uVar2 = *puVar21;
                  uVar30 = (ulong)uVar2;
                  uVar6 = puVar21[1];
                  puVar21 = (uint *)((long)local_98 + uVar30 * 0x28 + 0x24);
                  if ((int)*puVar21 < 0) {
                    *(uint *)(**(long **)(this + 0x58) + ((ulong)*puVar21 & 0x3fffffff) * 0xf0 +
                             0x9c) = uVar6 - uVar2;
                  }
                  if (uVar2 < uVar6) {
                    local_a4 = 0;
                    do {
                      ppMVar23 = (MaterialShader **)((long)local_98 + uVar30 * 0x28);
                      uVar2 = *(uint *)((long)ppMVar23 + 0x24);
                      lVar36 = **(long **)(this + 0x58);
                    /* try { // try from 00a2cb38 to 00a2cb3f has its CatchHandler @ 00a2cffc */
                      FUN_00a2dd08(*(undefined8 *)(this + 0x60),ppMVar23);
                      uVar39 = (ulong)uVar2 & 0x3fffffff;
                      iVar13 = *(int *)(lVar36 + uVar39 * 0xf0 + 0x30);
                      if (iVar13 == 0) {
                        lVar38 = lVar36 + uVar39 * 0xf0;
                        uVar2 = *(uint *)(lVar38 + 0x34);
                        *(uint *)(lVar38 + 0x34) = uVar2 + 1;
                        *(IVertexBuffer **)(lVar38 + (ulong)uVar2 * 8 + 0x38) = param_2;
                        *(uint *)(lVar38 + 0xa4) = uVar33;
                        *(int *)(lVar38 + 0xa8) = iVar9;
                        *(int *)(lVar22 + (ulong)uVar33 * 4) = iVar9;
                      }
                      else {
                        lVar38 = lVar36 + uVar39 * 0xf0;
                        *(uint *)(lVar38 + 0xa4) = uVar33;
                        *(int *)(lVar38 + 0xa8) = iVar9;
                        *(int *)(lVar22 + (ulong)uVar33 * 4) = iVar9;
                        if (iVar13 == 1) {
                          piVar25 = (int *)(lVar36 + uVar39 * 0xf0 + 200);
                          iVar13 = *piVar25;
                          iVar34 = iVar13;
                          if (param_5 < (uint)(iVar13 + local_d4)) {
                            iVar34 = param_5 - local_d4;
                            *piVar25 = iVar34;
                            local_a8 = (local_a8 - iVar34) + iVar13;
                          }
                          if (iVar34 != 0) {
                            ppvVar26 = *(void ***)(this + 0x50);
                            piVar7 = (int *)ppvVar26[1];
                            iVar13 = *(int *)(lVar36 + uVar39 * 0xf0 + 0xc4);
                            if (piVar7 == (int *)ppvVar26[2]) {
                              __src = *ppvVar26;
                              uVar18 = (long)piVar7 - (long)__src;
                              uVar20 = ((long)uVar18 >> 4) + 1;
                              if (uVar20 >> 0x3c != 0) {
                    /* try { // try from 00a2cfa8 to 00a2cfbb has its CatchHandler @ 00a2cff4 */
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__vector_base_common<true>::__throw_length_error();
                              }
                              if (uVar20 <= (ulong)((long)uVar18 >> 3)) {
                                uVar20 = (long)uVar18 >> 3;
                              }
                              if (0x7fffffffffffffef < uVar18) {
                                uVar20 = 0xfffffffffffffff;
                              }
                              if (uVar20 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                                FUN_006d1f18(
                                            "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                            );
                              }
                    /* try { // try from 00a2cc70 to 00a2cc73 has its CatchHandler @ 00a2cff0 */
                              __dest = operator_new(uVar20 << 4);
                              piVar7 = (int *)((long)__dest + ((long)uVar18 >> 4) * 0x10);
                              *piVar7 = local_d4;
                              piVar7[1] = iVar13;
                              piVar7[2] = iVar34;
                              piVar7[3] = iVar9;
                              if (0 < (long)uVar18) {
                                memcpy(__dest,__src,uVar18);
                              }
                              *ppvVar26 = __dest;
                              ppvVar26[1] = piVar7 + 4;
                              ppvVar26[2] = (void *)((long)__dest + uVar20 * 0x10);
                              if (__src != (void *)0x0) {
                                operator_delete(__src);
                              }
                            }
                            else {
                              *piVar7 = local_d4;
                              piVar7[1] = iVar13;
                              piVar7[2] = iVar34;
                              piVar7[3] = iVar9;
                              ppvVar26[1] = piVar7 + 4;
                            }
                          }
                          iVar13 = *piVar25;
                          *(int *)(lVar36 + uVar39 * 0xf0 + 0xc4) = local_d4;
                          local_d4 = iVar13 + local_d4;
                        }
                      }
                      if (local_a8 != 0) {
                        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                           (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                          singletonLogManager), iVar13 != 0)) {
                    /* try { // try from 00a2ceac to 00a2ceb3 has its CatchHandler @ 00a2cfdc */
                          this_02 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a2ceb8 to 00a2cebb has its CatchHandler @ 00a2cfcc */
                          Logger::Logger(this_02);
                          LogManager::getInstance()::singletonLogManager = this_02;
                          __cxa_atexit(LogManager::~LogManager,
                                       &LogManager::getInstance()::singletonLogManager,
                                       &PTR_LOOP_00fd8de0);
                          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                        }
                    /* try { // try from 00a2cd20 to 00a2cd37 has its CatchHandler @ 00a2cffc */
                        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                          "WARNING: culling instances that do not fit into the instance struct buffer (need %u limit %u; will expand next frame)\n"
                                          ,(ulong)(local_a8 + param_5),(ulong)param_5);
                      }
                      if (lVar14 != 0) {
                        lVar38 = lVar36 + uVar39 * 0xf0;
                        uVar11 = iVar9 << 2;
                        puVar37 = (uint *)(lVar38 + 0xa0);
                        uVar2 = *puVar37;
                        pfVar1 = (float *)(lVar14 + (ulong)uVar11 * 4);
                        ppGVar32 = (GsShape **)(lVar38 + 0x88);
                    /* try { // try from 00a2cd60 to 00a2cd97 has its CatchHandler @ 00a2cff8 */
                        GsShape::writeToStructBuffer(*ppGVar32,pfVar1,uVar2,*ppMVar23);
                        lVar38 = lVar36 + uVar39 * 0xf0;
                        GsMaterial::writeToStructBuffer
                                  (*(GsMaterial **)(lVar38 + 0x90),pfVar1,*puVar37,*ppMVar23,
                                   *ppGVar32,*(RenderArgs **)(this + 0x48),*(float *)(lVar38 + 0xd0)
                                   ,*(float *)(lVar38 + 0xd4));
                        iVar9 = uVar2 + iVar9;
                        puVar16 = (ushort *)(lVar36 + uVar39 * 0xf0 + 0xda);
                        uVar10 = *puVar16;
                        if (((uVar10 & 0x7fff) != 0) &&
                           (uVar20 = (ulong)*(ushort *)
                                             (*ppMVar23 +
                                             (ulong)*(ushort *)(lVar36 + uVar39 * 0xf0 + 0xd8) * 2 +
                                             0xe), uVar20 != 0xffff)) {
                          if ((short)uVar10 < 0) {
                            memcpy(pfVar1 + uVar20,*(void **)(lVar36 + uVar39 * 0xf0 + 0xe0),
                                   (ulong)(uVar10 & 0x7fff) << 2);
                          }
                          else {
                            uVar18 = 0;
                            do {
                              lVar38 = uVar18 * 4;
                              uVar18 = uVar18 + 1;
                              *(undefined4 *)(lVar14 + (uVar20 + uVar11) * 4 + lVar38) =
                                   *(undefined4 *)(lVar36 + uVar39 * 0xf0 + 0xe0 + lVar38);
                            } while (uVar18 < ((ulong)*puVar16 & 0x7fff));
                          }
                        }
                      }
                      uVar33 = uVar33 + 1;
                      uVar30 = uVar30 + 1;
                      local_a4 = *(int *)(lVar36 + uVar39 * 0xf0 + 200) + local_a4;
                    } while (uVar30 != uVar6);
                    uVar2 = *puVar21;
                  }
                  else {
                    local_a4 = 0;
                    uVar2 = *puVar21;
                  }
                  if ((int)uVar2 < 0) {
                    *(int *)(**(long **)(this + 0x58) + ((ulong)uVar2 & 0x3fffffff) * 0xf0 + 200) =
                         local_a4;
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 != uVar5);
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar4);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar3);
      }
      puVar15 = puVar15 + 8;
    } while (puVar15 != puVar8);
  }
  if (param_3 != (IStructBuffer *)0x0) {
                    /* try { // try from 00a2cf48 to 00a2cf5f has its CatchHandler @ 00a2cfc8 */
    (**(code **)(*(long *)param_3 + 0x18))(param_3,param_1);
  }
  (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1);
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar12 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


