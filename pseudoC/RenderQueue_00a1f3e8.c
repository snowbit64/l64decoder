// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderQueue
// Entry Point: 00a1f3e8
// Size: 516 bytes
// Signature: undefined __thiscall ~RenderQueue(RenderQueue * this)


/* RenderQueue::~RenderQueue() */

void __thiscall RenderQueue::~RenderQueue(RenderQueue *this)

{
  void **ppvVar1;
  void *pvVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  LightListRasterizer *this_00;
  byte *pbVar6;
  void *pvVar7;
  void **ppvVar8;
  void *pvVar9;
  long *plVar10;
  
  this_00 = *(LightListRasterizer **)(this + 0x20);
  if (this_00 != (LightListRasterizer *)0x0) {
    LightListRasterizer::~LightListRasterizer(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
                    /* try { // try from 00a1f46c to 00a1f473 has its CatchHandler @ 00a1f5f0 */
  Mutex::enterCriticalSection();
  for (plVar10 = *(long **)(this + 0x1d0); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    ppvVar8 = (void **)plVar10[3];
    if (ppvVar8 != (void **)0x0) {
      ppvVar1 = (void **)ppvVar8[2];
      while (ppvVar1 != (void **)0x0) {
        pvVar7 = *ppvVar1;
        operator_delete(ppvVar1);
        ppvVar1 = (void **)pvVar7;
      }
      pvVar7 = *ppvVar8;
      *ppvVar8 = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
      }
      operator_delete(ppvVar8);
    }
  }
                    /* try { // try from 00a1f47c to 00a1f483 has its CatchHandler @ 00a1f5ec */
  Mutex::leaveCriticalSection();
  ppvVar8 = (void **)*(void **)(this + 0x1d0);
  while (ppvVar8 != (void **)0x0) {
    pvVar7 = *ppvVar8;
    operator_delete(ppvVar8);
    ppvVar8 = (void **)pvVar7;
  }
  pvVar7 = *(void **)(this + 0x1c0);
  *(undefined8 *)(this + 0x1c0) = 0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  Mutex::~Mutex((Mutex *)(this + 0x198));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
  ::destroy((__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  pvVar7 = *(void **)(this + 0x90);
  if (pvVar7 != (void *)0x0) {
    pvVar2 = pvVar7;
    pvVar4 = *(void **)(this + 0x98);
    if (*(void **)(this + 0x98) != pvVar7) {
      do {
        pvVar2 = *(void **)((long)pvVar4 + -0x18);
        pvVar9 = (void *)((long)pvVar4 + -0x60);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x10) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar4 = pvVar9;
      } while (pvVar9 != pvVar7);
      pvVar2 = *(void **)(this + 0x90);
    }
    *(void **)(this + 0x98) = pvVar7;
    operator_delete(pvVar2);
  }
  pbVar6 = *(byte **)(this + 0x38);
  if (pbVar6 != (byte *)0x0) {
    pbVar3 = pbVar6;
    if (*(byte **)(this + 0x40) != pbVar6) {
      pbVar3 = *(byte **)(this + 0x40) + -0x1c8;
      do {
        *(undefined ***)(pbVar3 + 0x18) = &PTR__Task_00fde908;
        if ((pbVar3[0x28] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x38));
        }
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x10));
        }
        pbVar5 = pbVar3 + -0xf8;
        pbVar3 = pbVar3 + -0x2c0;
      } while (pbVar5 != pbVar6);
      pbVar3 = *(byte **)(this + 0x38);
    }
    *(byte **)(this + 0x40) = pbVar6;
    operator_delete(pbVar3);
    return;
  }
  return;
}


