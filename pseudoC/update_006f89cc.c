// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 006f89cc
// Size: 440 bytes
// Signature: undefined __thiscall update(AdsBrockerManager * this, float param_1)


/* AdsBrockerManager::update(float) */

void __thiscall AdsBrockerManager::update(AdsBrockerManager *this,float param_1)

{
  void *__dest;
  size_t __n;
  long lVar1;
  long lVar2;
  float *this_00;
  long lVar3;
  BillboardShape *this_01;
  ulong uVar4;
  ulong uVar5;
  undefined auStack_180 [256];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  lVar2 = *(long *)this;
  if (0 < (int)((ulong)(*(long *)(this + 8) - lVar2) >> 3)) {
    uVar5 = (ulong)(*(long *)(this + 8) - lVar2) >> 3 & 0xffffffff;
    while( true ) {
      uVar4 = (ulong)((int)uVar5 - 1);
      lVar3 = uVar4 * 8;
      BillboardShape::update((uint)*(undefined8 *)(lVar2 + lVar3),param_1);
      this_01 = *(BillboardShape **)(*(long *)this + lVar3);
      if (this_01[8] != (BillboardShape)0x0) {
        BillboardShape::~BillboardShape(this_01);
        operator_delete(this_01);
        __dest = (void *)(*(long *)this + uVar4 * 8);
        __n = *(long *)(this + 8) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 8) = (long)__dest + __n;
      }
      if (uVar5 < 2) break;
      lVar2 = *(long *)this;
      uVar5 = uVar5 - 1;
    }
  }
  Mutex::leaveCriticalSection();
  EngineManager::getInstance();
  lVar2 = Renderer::getSharedRenderArgs();
  this_00 = *(float **)(lVar2 + 0x80);
  uVar5 = DeferredDebugRenderer::isCategoryEnabled((DeferredDebugRenderer *)this_00,0x100);
  if ((uVar5 & 1) != 0) {
    AdsProviderManager::getInstance();
    lVar2 = AdsProviderManager::getAdsProvider();
    if (lVar2 != 0) {
      uStack_78 = 0x3f8000003f800000;
      local_80 = 0x3f8000003f800000;
      Mutex::enterCriticalSection();
      Mutex::leaveCriticalSection();
      FUN_006f8b84(auStack_180);
      DeferredDebugRenderer::addText(0.85,0.85,0.02,this_00,(char *)&local_80);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


