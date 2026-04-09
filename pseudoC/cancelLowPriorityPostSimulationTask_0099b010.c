// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelLowPriorityPostSimulationTask
// Entry Point: 0099b010
// Size: 200 bytes
// Signature: undefined __thiscall cancelLowPriorityPostSimulationTask(Bt2ScenegraphPhysicsContext * this, IPhysicsTask * param_1)


/* Bt2ScenegraphPhysicsContext::cancelLowPriorityPostSimulationTask(IPhysicsTask*) */

void __thiscall
Bt2ScenegraphPhysicsContext::cancelLowPriorityPostSimulationTask
          (Bt2ScenegraphPhysicsContext *this,IPhysicsTask *param_1)

{
  void *__dest;
  size_t __n;
  long lVar1;
  IPhysicsTask **ppIVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x598);
  lVar1 = *(long *)(this + 0x5a0);
  if (lVar3 != lVar1) {
    lVar4 = 0;
    do {
      if (*(IPhysicsTask **)(lVar3 + lVar4) == param_1) {
        __dest = (void *)(lVar3 + lVar4);
        __n = lVar1 - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0x5a0) = (long)__dest + __n;
        return;
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 + lVar4 != lVar1);
  }
  ppIVar2 = *(IPhysicsTask ***)(this + 0x5b0);
  while( true ) {
    if (ppIVar2 == *(IPhysicsTask ***)(this + 0x5b8)) {
      return;
    }
    if (*ppIVar2 == param_1) break;
    ppIVar2 = ppIVar2 + 2;
  }
  *ppIVar2 = (IPhysicsTask *)0x0;
  DataMemoryBarrier(2,3);
  while (*(IPhysicsTask **)(this + 0x5c8) == param_1) {
    Yield();
  }
  DataMemoryBarrier(2,1);
  return;
}


