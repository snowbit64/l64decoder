// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderController
// Entry Point: 00a07020
// Size: 1456 bytes
// Signature: undefined __thiscall ~RenderController(RenderController * this)


/* RenderController::~RenderController() */

void __thiscall RenderController::~RenderController(RenderController *this)

{
  long **pplVar1;
  void **ppvVar2;
  void *pvVar3;
  TempData *pTVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long **pplVar9;
  ThreadPool *this_00;
  TempData *this_01;
  ulong uVar10;
  TempData *pTVar11;
  
  for (plVar7 = *(long **)(this + 0x2b0); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    if ((long *)plVar7[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[3] + 8))();
    }
  }
  if (*(long *)(this + 0x2b8) != 0) {
    ppvVar2 = (void **)*(void **)(this + 0x2b0);
    while (ppvVar2 != (void **)0x0) {
      pvVar8 = *ppvVar2;
      operator_delete(ppvVar2);
      ppvVar2 = (void **)pvVar8;
    }
    lVar5 = *(long *)(this + 0x2a8);
    *(undefined8 *)(this + 0x2b0) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x2a0) + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(this + 0x2b8) = 0;
  }
  if (*(long **)(this + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x298) + 8))();
  }
  pplVar9 = *(long ***)(this + 0x198);
  pplVar1 = *(long ***)(this + 0x1a0);
  *(undefined8 *)(this + 0x298) = 0;
  for (; pplVar9 != pplVar1; pplVar9 = pplVar9 + 1) {
    if (*pplVar9 != (long *)0x0) {
      (**(code **)(**pplVar9 + 8))();
    }
  }
  pplVar1 = *(long ***)(this + 0x1b8);
  for (pplVar9 = *(long ***)(this + 0x1b0); pplVar9 != pplVar1; pplVar9 = pplVar9 + 1) {
    if (*pplVar9 != (long *)0x0) {
      (**(code **)(**pplVar9 + 8))();
    }
  }
  pplVar1 = *(long ***)(this + 0x1d0);
  for (pplVar9 = *(long ***)(this + 0x1c8); pplVar9 != pplVar1; pplVar9 = pplVar9 + 1) {
    if (*pplVar9 != (long *)0x0) {
      (**(code **)(**pplVar9 + 8))();
    }
  }
  pplVar1 = *(long ***)(this + 0x1e8);
  for (pplVar9 = *(long ***)(this + 0x1e0); pplVar9 != pplVar1; pplVar9 = pplVar9 + 1) {
    if (*pplVar9 != (long *)0x0) {
      (**(code **)(**pplVar9 + 8))();
    }
  }
  if (*(long **)(this + 0x228) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x228) + 8))();
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  plVar7 = *(long **)(this + 0x30);
  if ((plVar7 != (long *)0x0) && (plVar7 != *(long **)(this + 0x20))) {
    (**(code **)(*plVar7 + 8))();
  }
  lVar5 = 0;
  do {
    if (*(long **)(this + lVar5 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(this + lVar5 + 0x60) + 8))();
    }
    if (*(long **)(this + lVar5 + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(this + lVar5 + 0x68) + 8))();
    }
    if (*(long **)(this + lVar5 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(this + lVar5 + 0x70) + 8))();
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x90);
  lVar5 = *(long *)(this + 0xf0);
  lVar6 = *(long *)(this + 0xf8);
  if (lVar6 != lVar5) {
    uVar10 = 0;
    do {
      pvVar8 = *(void **)(lVar5 + uVar10 * 8);
      if (pvVar8 != (void *)0x0) {
        RenderList::~RenderList((RenderList *)((long)pvVar8 + 0x400));
        std::__ndk1::
        __tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
        ::destroy((__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
                   *)((long)pvVar8 + 0x3c8),*(__tree_node **)((long)pvVar8 + 0x3d0));
        operator_delete(pvVar8);
        lVar5 = *(long *)(this + 0xf0);
        lVar6 = *(long *)(this + 0xf8);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 - lVar5 >> 3));
  }
  lVar5 = *(long *)(this + 0x140);
  lVar6 = *(long *)(this + 0x148);
  if (lVar6 != lVar5) {
    uVar10 = 0;
    do {
      pvVar8 = *(void **)(lVar5 + uVar10 * 8);
      if (pvVar8 != (void *)0x0) {
        RenderQueue::~RenderQueue((RenderQueue *)((long)pvVar8 + 0x5b0));
        if ((*(byte *)((long)pvVar8 + 0x588) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + 0x598));
        }
        operator_delete(pvVar8);
        lVar5 = *(long *)(this + 0x140);
        lVar6 = *(long *)(this + 0x148);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 - lVar5 >> 3));
  }
  lVar5 = *(long *)(this + 0x108);
  lVar6 = *(long *)(this + 0x110);
  if (lVar6 != lVar5) {
    uVar10 = 0;
    do {
      pvVar8 = *(void **)(lVar5 + uVar10 * 8);
      if (pvVar8 != (void *)0x0) {
        RenderList::~RenderList((RenderList *)((long)pvVar8 + 0x400));
        std::__ndk1::
        __tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
        ::destroy((__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
                   *)((long)pvVar8 + 0x3c8),*(__tree_node **)((long)pvVar8 + 0x3d0));
        operator_delete(pvVar8);
        lVar5 = *(long *)(this + 0x108);
        lVar6 = *(long *)(this + 0x110);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 - lVar5 >> 3));
  }
  lVar5 = *(long *)(this + 0x158);
  lVar6 = *(long *)(this + 0x160);
  if (lVar6 != lVar5) {
    uVar10 = 0;
    do {
      pvVar8 = *(void **)(lVar5 + uVar10 * 8);
      if (pvVar8 != (void *)0x0) {
        RenderQueue::~RenderQueue((RenderQueue *)((long)pvVar8 + 0x5b0));
        if ((*(byte *)((long)pvVar8 + 0x588) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar8 + 0x598));
        }
        operator_delete(pvVar8);
        lVar5 = *(long *)(this + 0x158);
        lVar6 = *(long *)(this + 0x160);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 - lVar5 >> 3));
  }
  lVar5 = *(long *)(this + 0x238);
  lVar6 = *(long *)(this + 0x230);
  if (lVar5 != lVar6) {
    uVar10 = 0;
    do {
      pvVar8 = *(void **)(lVar6 + uVar10 * 8);
      if (pvVar8 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar8 + 0x90);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar8 + 0x98) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar8 + 0x78);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar8 + 0x80) = pvVar3;
          operator_delete(pvVar3);
        }
        operator_delete(pvVar8);
        lVar5 = *(long *)(this + 0x238);
        lVar6 = *(long *)(this + 0x230);
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar5 - lVar6 >> 3));
  }
  this_00 = *(ThreadPool **)(this + 0x10);
  if (this_00 != (ThreadPool *)0x0) {
    ThreadPool::~ThreadPool(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  DeferredDebugRenderer::~DeferredDebugRenderer((DeferredDebugRenderer *)(this + 0x838));
  PostFxParams::~PostFxParams((PostFxParams *)(this + 0x2c8));
  ppvVar2 = (void **)*(void **)(this + 0x2b0);
  while (ppvVar2 != (void **)0x0) {
    pvVar8 = *ppvVar2;
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar8;
  }
  pvVar8 = *(void **)(this + 0x2a0);
  *(undefined8 *)(this + 0x2a0) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x280);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x288) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x268);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x270) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x250);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 600) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x230);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x238) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x210);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x218) = pvVar8;
    operator_delete(pvVar8);
  }
  pTVar11 = *(TempData **)(this + 0x1f8);
  if (pTVar11 != (TempData *)0x0) {
    this_01 = *(TempData **)(this + 0x200);
    pTVar4 = pTVar11;
    if (this_01 != pTVar11) {
      do {
        this_01 = this_01 + -0xa8;
        RenderQueueItemAllocator::TempData::~TempData(this_01);
      } while (this_01 != pTVar11);
      pTVar4 = *(TempData **)(this + 0x1f8);
    }
    *(TempData **)(this + 0x200) = pTVar11;
    operator_delete(pTVar4);
  }
  pvVar8 = *(void **)(this + 0x1e0);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x1e8) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x1c8);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x1b0);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x1b8) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x198);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x1a0) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x178);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x158);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x140);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x128);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x108);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar8;
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0xf0);
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0xf8) = pvVar8;
    operator_delete(pvVar8);
    return;
  }
  return;
}


