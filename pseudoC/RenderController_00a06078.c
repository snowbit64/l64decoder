// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderController
// Entry Point: 00a06078
// Size: 3048 bytes
// Signature: undefined __thiscall RenderController(RenderController * this, IRenderDevice * param_1, SharedRenderArgs * param_2, IndirectLightRenderController * param_3)


/* RenderController::RenderController(IRenderDevice*, SharedRenderArgs&,
   IndirectLightRenderController*) */

void __thiscall
RenderController::RenderController
          (RenderController *this,IRenderDevice *param_1,SharedRenderArgs *param_2,
          IndirectLightRenderController *param_3)

{
  long **pplVar1;
  ulong uVar2;
  long **pplVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  ThreadPool *pTVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ThreadPool **ppTVar17;
  long **pplVar18;
  bool bVar19;
  size_t sVar20;
  uint uVar21;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  undefined local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *(SharedRenderArgs **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(void **)(this + 0x198) = (void *)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  pplVar1 = (long **)(this + 0x1e0);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x3f800000;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
                    /* try { // try from 00a06140 to 00a06147 has its CatchHandler @ 00a06ca0 */
  PostFxParams::PostFxParams((PostFxParams *)(this + 0x2c8));
  *(IndirectLightRenderController **)(this + 0x830) = param_3;
                    /* try { // try from 00a06154 to 00a0615f has its CatchHandler @ 00a06c98 */
  DeferredDebugRenderer::DeferredDebugRenderer((DeferredDebugRenderer *)(this + 0x838),param_1);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(IRenderDevice **)this = param_1;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  ppTVar17 = (ThreadPool **)(this + 0x10);
  *ppTVar17 = (ThreadPool *)0x0;
  *(undefined4 *)(this + 0x17) = 0;
                    /* try { // try from 00a06190 to 00a06197 has its CatchHandler @ 00a06cbc */
  pTVar7 = (ThreadPool *)operator_new(0x98);
                    /* try { // try from 00a0619c to 00a0619f has its CatchHandler @ 00a06c88 */
  ThreadPool::ThreadPool(pTVar7);
  *ppTVar17 = pTVar7;
                    /* try { // try from 00a061a4 to 00a061bf has its CatchHandler @ 00a06cbc */
  ThreadPool::createFixedNumberOfRovingThreads(pTVar7,1,"Render threadpool",1,0x80000);
  plVar12 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x228) = 0;
  this[0x18] = (RenderController)(plVar12 != (long *)0x0);
  this[0x1a] = (RenderController)(plVar12 != (long *)0x0);
  if (this[0x19] == (RenderController)0x0) {
    puVar13 = *(undefined8 **)(this + 0x1b8);
    if (puVar13 < *(undefined8 **)(this + 0x1c0)) {
      *puVar13 = 0;
      *(undefined8 **)(this + 0x1b8) = puVar13 + 1;
    }
    else {
      pvVar10 = *(void **)(this + 0x1b0);
      sVar20 = (long)puVar13 - (long)pvVar10;
      uVar2 = ((long)sVar20 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c0c to 00a06c13 has its CatchHandler @ 00a06c84 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)*(undefined8 **)(this + 0x1c0) - (long)pvVar10;
      uVar16 = (long)uVar14 >> 2;
      if (uVar2 <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c2c to 00a06c37 has its CatchHandler @ 00a06c84 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00a06728 to 00a0672b has its CatchHandler @ 00a06c84 */
        pvVar9 = operator_new(uVar2 << 3);
      }
      puVar13 = (undefined8 *)((long)pvVar9 + ((long)sVar20 >> 3) * 8);
      *puVar13 = 0;
      if (0 < (long)sVar20) {
        memcpy(pvVar9,pvVar10,sVar20);
      }
      *(void **)(this + 0x1b0) = pvVar9;
      *(undefined8 **)(this + 0x1b8) = puVar13 + 1;
      *(void **)(this + 0x1c0) = (void *)((long)pvVar9 + uVar2 * 8);
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    puVar15 = *(undefined4 **)(this + 0x218);
    if (puVar15 < *(undefined4 **)(this + 0x220)) {
      *puVar15 = 0;
      *(undefined4 **)(this + 0x218) = puVar15 + 1;
    }
    else {
      pvVar10 = *(void **)(this + 0x210);
      sVar20 = (long)puVar15 - (long)pvVar10;
      uVar2 = ((long)sVar20 >> 2) + 1;
      if (uVar2 >> 0x3e != 0) {
                    /* try { // try from 00a06c14 to 00a06c1b has its CatchHandler @ 00a06c80 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)*(undefined4 **)(this + 0x220) - (long)pvVar10;
      uVar16 = (long)uVar14 >> 1;
      if (uVar2 <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7ffffffffffffffb < uVar14) {
        uVar2 = 0x3fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3e != 0) {
                    /* try { // try from 00a06c38 to 00a06c43 has its CatchHandler @ 00a06c80 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00a06830 to 00a06833 has its CatchHandler @ 00a06c80 */
        pvVar9 = operator_new(uVar2 << 2);
      }
      puVar15 = (undefined4 *)((long)pvVar9 + ((long)sVar20 >> 2) * 4);
      *puVar15 = 0;
      if (0 < (long)sVar20) {
        memcpy(pvVar9,pvVar10,sVar20);
      }
      *(void **)(this + 0x210) = pvVar9;
      *(undefined4 **)(this + 0x218) = puVar15 + 1;
      *(void **)(this + 0x220) = (void *)((long)pvVar9 + uVar2 * 4);
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    puVar13 = *(undefined8 **)(this + 0x1d0);
    if (puVar13 < *(undefined8 **)(this + 0x1d8)) {
      *puVar13 = 0;
      *(undefined8 **)(this + 0x1d0) = puVar13 + 1;
    }
    else {
      pvVar10 = *(void **)(this + 0x1c8);
      sVar20 = (long)puVar13 - (long)pvVar10;
      uVar2 = ((long)sVar20 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c1c to 00a06c23 has its CatchHandler @ 00a06c7c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)*(undefined8 **)(this + 0x1d8) - (long)pvVar10;
      uVar16 = (long)uVar14 >> 2;
      if (uVar2 <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c44 to 00a06c4f has its CatchHandler @ 00a06c7c */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00a068e0 to 00a068e3 has its CatchHandler @ 00a06c7c */
        pvVar9 = operator_new(uVar2 << 3);
      }
      puVar13 = (undefined8 *)((long)pvVar9 + ((long)sVar20 >> 3) * 8);
      *puVar13 = 0;
      if (0 < (long)sVar20) {
        memcpy(pvVar9,pvVar10,sVar20);
      }
      *(void **)(this + 0x1c8) = pvVar9;
      *(undefined8 **)(this + 0x1d0) = puVar13 + 1;
      *(void **)(this + 0x1d8) = (void *)((long)pvVar9 + uVar2 * 8);
      if (pvVar10 != (void *)0x0) {
        operator_delete(pvVar10);
      }
    }
    puVar13 = *(undefined8 **)(this + 0x1e8);
    if (puVar13 < *(undefined8 **)(this + 0x1f0)) {
      *puVar13 = 0;
      *(undefined8 **)(this + 0x1e8) = puVar13 + 1;
    }
    else {
      plVar12 = *pplVar1;
      sVar20 = (long)puVar13 - (long)plVar12;
      uVar2 = ((long)sVar20 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c24 to 00a06c2b has its CatchHandler @ 00a06c78 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)*(undefined8 **)(this + 0x1f0) - (long)plVar12;
      uVar16 = (long)uVar14 >> 2;
      if (uVar2 <= uVar16) {
        uVar2 = uVar16;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar2 = 0x1fffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06c50 to 00a06c5b has its CatchHandler @ 00a06c78 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00a0698c to 00a0698f has its CatchHandler @ 00a06c78 */
        pvVar10 = operator_new(uVar2 << 3);
      }
      puVar13 = (undefined8 *)((long)pvVar10 + ((long)sVar20 >> 3) * 8);
      *puVar13 = 0;
      if (0 < (long)sVar20) {
        memcpy(pvVar10,plVar12,sVar20);
      }
      *(void **)(this + 0x1e0) = pvVar10;
      *(undefined8 **)(this + 0x1e8) = puVar13 + 1;
      *(void **)(this + 0x1f0) = (void *)((long)pvVar10 + uVar2 * 8);
      if (plVar12 != (long *)0x0) {
        operator_delete(plVar12);
      }
    }
    puVar13 = *(undefined8 **)(this + 0x200);
    if (puVar13 < *(undefined8 **)(this + 0x208)) {
      puVar13[0x14] = 0;
      puVar13[0x11] = 0;
      puVar13[0x10] = 0;
      puVar13[0x13] = 0;
      puVar13[0x12] = 0;
      puVar13[0xd] = 0;
      puVar13[0xc] = 0;
      puVar13[0xf] = 0;
      puVar13[0xe] = 0;
      puVar13[9] = 0;
      puVar13[8] = 0;
      puVar13[0xb] = 0;
      puVar13[10] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[7] = 0;
      puVar13[6] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      *(undefined8 **)(this + 0x200) = puVar13 + 0x15;
    }
    else {
                    /* try { // try from 00a06a0c to 00a06a87 has its CatchHandler @ 00a06cbc */
      std::__ndk1::
      vector<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>>
      ::__emplace_back_slow_path<>();
    }
  }
  else {
    iVar6 = (int)((ulong)(plVar12[1] - *plVar12) >> 3);
    if (iVar6 != -1) {
      iVar6 = iVar6 + 1;
      bVar19 = true;
      do {
                    /* try { // try from 00a06224 to 00a062a3 has its CatchHandler @ 00a06cd4 */
        lVar8 = (**(code **)(*(long *)param_1 + 0x130))(param_1);
        plVar12 = *(long **)(this + 0x1a0);
        if (plVar12 == *(long **)(this + 0x1a8)) {
          pvVar10 = *(void **)(this + 0x198);
          uVar14 = (long)plVar12 - (long)pvVar10;
          uVar2 = ((long)uVar14 >> 3) + 1;
          if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b78 to 00a06b7f has its CatchHandler @ 00a06cc0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
            uVar2 = (long)uVar14 >> 2;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar2 = 0x1fffffffffffffff;
          }
          if (uVar2 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06bb0 to 00a06bbb has its CatchHandler @ 00a06cc0 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            pvVar9 = operator_new(uVar2 << 3);
          }
          plVar12 = (long *)((long)pvVar9 + ((long)uVar14 >> 3) * 8);
          *plVar12 = lVar8;
          if (0 < (long)uVar14) {
            memcpy(pvVar9,pvVar10,uVar14);
          }
          *(void **)(this + 0x198) = pvVar9;
          *(long **)(this + 0x1a0) = plVar12 + 1;
          *(void **)(this + 0x1a8) = (void *)((long)pvVar9 + uVar2 * 8);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        else {
          *plVar12 = lVar8;
          *(long **)(this + 0x1a0) = plVar12 + 1;
        }
        puVar13 = *(undefined8 **)(this + 0x200);
        if (puVar13 < *(undefined8 **)(this + 0x208)) {
          puVar13[0x14] = 0;
          puVar13[0x11] = 0;
          puVar13[0x10] = 0;
          puVar13[0x13] = 0;
          puVar13[0x12] = 0;
          puVar13[0xd] = 0;
          puVar13[0xc] = 0;
          puVar13[0xf] = 0;
          puVar13[0xe] = 0;
          puVar13[9] = 0;
          puVar13[8] = 0;
          puVar13[0xb] = 0;
          puVar13[10] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          puVar13[7] = 0;
          puVar13[6] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          *(undefined8 **)(this + 0x200) = puVar13 + 0x15;
        }
        else {
                    /* try { // try from 00a06320 to 00a06327 has its CatchHandler @ 00a06cd4 */
          std::__ndk1::
          vector<RenderQueueItemAllocator::TempData,std::__ndk1::allocator<RenderQueueItemAllocator::TempData>>
          ::__emplace_back_slow_path<>();
        }
        puVar13 = *(undefined8 **)(this + 0x1b8);
        if (puVar13 < *(undefined8 **)(this + 0x1c0)) {
          *puVar13 = 0;
          *(undefined8 **)(this + 0x1b8) = puVar13 + 1;
        }
        else {
          pvVar10 = *(void **)(this + 0x1b0);
          sVar20 = (long)puVar13 - (long)pvVar10;
          uVar2 = ((long)sVar20 >> 3) + 1;
          if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b58 to 00a06b5f has its CatchHandler @ 00a06cc8 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)*(undefined8 **)(this + 0x1c0) - (long)pvVar10;
          uVar16 = (long)uVar14 >> 2;
          if (uVar2 <= uVar16) {
            uVar2 = uVar16;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar2 = 0x1fffffffffffffff;
          }
          if (uVar2 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b98 to 00a06ba3 has its CatchHandler @ 00a06cc8 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00a0638c to 00a0638f has its CatchHandler @ 00a06cb0 */
            pvVar9 = operator_new(uVar2 << 3);
          }
          puVar13 = (undefined8 *)((long)pvVar9 + ((long)sVar20 >> 3) * 8);
          *puVar13 = 0;
          if (0 < (long)sVar20) {
            memcpy(pvVar9,pvVar10,sVar20);
          }
          *(void **)(this + 0x1b0) = pvVar9;
          *(undefined8 **)(this + 0x1b8) = puVar13 + 1;
          *(void **)(this + 0x1c0) = (void *)((long)pvVar9 + uVar2 * 8);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        puVar15 = *(undefined4 **)(this + 0x218);
        if (puVar15 < *(undefined4 **)(this + 0x220)) {
          *puVar15 = 0;
          *(undefined4 **)(this + 0x218) = puVar15 + 1;
        }
        else {
          pvVar10 = *(void **)(this + 0x210);
          sVar20 = (long)puVar15 - (long)pvVar10;
          uVar2 = ((long)sVar20 >> 2) + 1;
          if (uVar2 >> 0x3e != 0) {
                    /* try { // try from 00a06b60 to 00a06b67 has its CatchHandler @ 00a06ccc */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)*(undefined4 **)(this + 0x220) - (long)pvVar10;
          uVar16 = (long)uVar14 >> 1;
          if (uVar2 <= uVar16) {
            uVar2 = uVar16;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar2 = 0x3fffffffffffffff;
          }
          if (uVar2 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3e != 0) {
                    /* try { // try from 00a06b8c to 00a06b97 has its CatchHandler @ 00a06ccc */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00a06444 to 00a06447 has its CatchHandler @ 00a06cb4 */
            pvVar9 = operator_new(uVar2 << 2);
          }
          puVar15 = (undefined4 *)((long)pvVar9 + ((long)sVar20 >> 2) * 4);
          *puVar15 = 0;
          if (0 < (long)sVar20) {
            memcpy(pvVar9,pvVar10,sVar20);
          }
          *(void **)(this + 0x210) = pvVar9;
          *(undefined4 **)(this + 0x218) = puVar15 + 1;
          *(void **)(this + 0x220) = (void *)((long)pvVar9 + uVar2 * 4);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        puVar13 = *(undefined8 **)(this + 0x1d0);
        if (puVar13 < *(undefined8 **)(this + 0x1d8)) {
          *puVar13 = 0;
          *(undefined8 **)(this + 0x1d0) = puVar13 + 1;
        }
        else {
          pvVar10 = *(void **)(this + 0x1c8);
          sVar20 = (long)puVar13 - (long)pvVar10;
          uVar2 = ((long)sVar20 >> 3) + 1;
          if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b68 to 00a06b6f has its CatchHandler @ 00a06cd0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)*(undefined8 **)(this + 0x1d8) - (long)pvVar10;
          uVar16 = (long)uVar14 >> 2;
          if (uVar2 <= uVar16) {
            uVar2 = uVar16;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar2 = 0x1fffffffffffffff;
          }
          if (uVar2 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b80 to 00a06b8b has its CatchHandler @ 00a06cd0 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00a064f4 to 00a064f7 has its CatchHandler @ 00a06ca8 */
            pvVar9 = operator_new(uVar2 << 3);
          }
          puVar13 = (undefined8 *)((long)pvVar9 + ((long)sVar20 >> 3) * 8);
          *puVar13 = 0;
          if (0 < (long)sVar20) {
            memcpy(pvVar9,pvVar10,sVar20);
          }
          *(void **)(this + 0x1c8) = pvVar9;
          *(undefined8 **)(this + 0x1d0) = puVar13 + 1;
          *(void **)(this + 0x1d8) = (void *)((long)pvVar9 + uVar2 * 8);
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        puVar13 = *(undefined8 **)(this + 0x1e8);
        if (puVar13 < *(undefined8 **)(this + 0x1f0)) {
          *puVar13 = 0;
          *(undefined8 **)(this + 0x1e8) = puVar13 + 1;
        }
        else {
          plVar12 = *pplVar1;
          sVar20 = (long)puVar13 - (long)plVar12;
          uVar2 = ((long)sVar20 >> 3) + 1;
          if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06b70 to 00a06b77 has its CatchHandler @ 00a06cc4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar14 = (long)*(undefined8 **)(this + 0x1f0) - (long)plVar12;
          uVar16 = (long)uVar14 >> 2;
          if (uVar2 <= uVar16) {
            uVar2 = uVar16;
          }
          if (0x7ffffffffffffff7 < uVar14) {
            uVar2 = 0x1fffffffffffffff;
          }
          if (uVar2 == 0) {
            pvVar10 = (void *)0x0;
          }
          else {
            if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00a06ba4 to 00a06baf has its CatchHandler @ 00a06cc4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00a06594 to 00a06597 has its CatchHandler @ 00a06cac */
            pvVar10 = operator_new(uVar2 << 3);
          }
          puVar13 = (undefined8 *)((long)pvVar10 + ((long)sVar20 >> 3) * 8);
          *puVar13 = 0;
          if (0 < (long)sVar20) {
            memcpy(pvVar10,plVar12,sVar20);
          }
          *(void **)(this + 0x1e0) = pvVar10;
          *(undefined8 **)(this + 0x1e8) = puVar13 + 1;
          *(void **)(this + 0x1f0) = (void *)((long)pvVar10 + uVar2 * 8);
          if (plVar12 != (long *)0x0) {
            operator_delete(plVar12);
          }
        }
        iVar6 = iVar6 + -1;
        bVar19 = (bool)(lVar8 != 0 & bVar19);
      } while (iVar6 != 0);
      if (!bVar19) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00a06bcc to 00a06bd7 has its CatchHandler @ 00a06c60 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
                    /* try { // try from 00a065f8 to 00a0660b has its CatchHandler @ 00a06c74 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Failed to create command buffers; disabling multithreaded render submission\n"
                          );
        pplVar3 = *(long ***)(this + 0x1a0);
        for (pplVar18 = *(long ***)(this + 0x198); pplVar18 != pplVar3; pplVar18 = pplVar18 + 1) {
          if (*pplVar18 != (long *)0x0) {
            (**(code **)(**pplVar18 + 8))();
          }
        }
        pplVar3 = *(long ***)(this + 0x1b8);
        for (pplVar18 = *(long ***)(this + 0x1b0); pplVar18 != pplVar3; pplVar18 = pplVar18 + 1) {
          if (*pplVar18 != (long *)0x0) {
            (**(code **)(**pplVar18 + 8))();
          }
        }
        pplVar3 = *(long ***)(this + 0x1d0);
        for (pplVar18 = *(long ***)(this + 0x1c8); pplVar18 != pplVar3; pplVar18 = pplVar18 + 1) {
          if (*pplVar18 != (long *)0x0) {
            (**(code **)(**pplVar18 + 8))();
          }
        }
        pplVar18 = *(long ***)(this + 0x1e0);
        pplVar3 = *(long ***)(this + 0x1e8);
        if (pplVar18 != pplVar3) {
          do {
            if (*pplVar18 != (long *)0x0) {
              (**(code **)(**pplVar18 + 8))();
            }
            pplVar18 = pplVar18 + 1;
          } while (pplVar18 != pplVar3);
          pplVar18 = (long **)*pplVar1;
        }
        *(long ***)(this + 0x1e8) = pplVar18;
        this[0x19] = (RenderController)0x0;
        *(undefined8 *)(this + 0x1a0) = *(undefined8 *)(this + 0x198);
        *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(this + 0x1b0);
        *(undefined8 *)(this + 0x218) = *(undefined8 *)(this + 0x210);
        *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x1c8);
        if (this[0x18] == (RenderController)0x0) {
          pTVar7 = *ppTVar17;
          if (pTVar7 != (ThreadPool *)0x0) {
            ThreadPool::~ThreadPool(pTVar7);
            operator_delete(pTVar7);
          }
          *ppTVar17 = (ThreadPool *)0x0;
        }
      }
    }
  }
  lVar8 = EngineManager::getInstance();
  cVar4 = *(char *)(lVar8 + 0x200);
  iVar6 = *(int *)(lVar8 + 0x204);
  lVar8 = EngineManager::getInstance();
  if (*(long *)(lVar8 + 0xb8) == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(uint *)(*(long *)(lVar8 + 0xb8) + 0x1bc8);
  }
  local_78 = 0;
  local_70 = 0;
  local_80 = (ulong)uVar21 << 0x20;
  if (cVar4 == '\0') {
    local_90 = 1;
  }
  else if (iVar6 == 0) {
    local_90 = 2;
  }
  else {
    local_90 = 3;
    local_80 = CONCAT44(uVar21,iVar6);
  }
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uVar11 = (**(code **)(**(long **)this + 0xf8))(*(long **)this,&local_90);
  *(undefined8 *)(this + 0x38) = uVar11;
  local_78 = 0;
  local_70 = 0;
  local_80 = 2;
  uStack_88 = 2;
  uStack_84 = 2;
  local_90 = 1;
  uStack_8c = 2;
                    /* try { // try from 00a06ab0 to 00a06b1f has its CatchHandler @ 00a06cb8 */
  uVar11 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_90);
  *(undefined8 *)(this + 0x40) = uVar11;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uVar11 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_90);
  *(undefined8 *)(this + 0x48) = uVar11;
  uStack_88 = 2;
  uStack_84 = 2;
  local_90 = 0;
  uStack_8c = 2;
  uVar11 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_90);
  *(undefined8 *)(this + 0x50) = uVar11;
  uStack_88 = 2;
  uStack_84 = 2;
  local_90 = 2;
  uStack_8c = 2;
  uVar11 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_90);
  *(undefined8 *)(this + 0x58) = uVar11;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


