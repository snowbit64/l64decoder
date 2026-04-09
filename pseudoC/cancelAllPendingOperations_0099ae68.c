// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllPendingOperations
// Entry Point: 0099ae68
// Size: 420 bytes
// Signature: undefined cancelAllPendingOperations(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2ScenegraphPhysicsContext::cancelAllPendingOperations() */

void Bt2ScenegraphPhysicsContext::cancelAllPendingOperations(void)

{
  Bt2ScenegraphPhysicsContext BVar1;
  size_t __n;
  Bt2ScenegraphPhysicsContext *in_x0;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *__dest;
  
  fetchResults();
  BVar1 = in_x0[0x488];
  if (BVar1 != (Bt2ScenegraphPhysicsContext)0x0) {
    Thread::cancel();
    Event::post();
    Thread::join();
  }
  __dest = *(long **)(in_x0 + 0x598);
  plVar2 = *(long **)(in_x0 + 0x5a0);
  do {
    while( true ) {
      while( true ) {
        if (__dest == plVar2) {
          while (*(long *)(in_x0 + 0x450) != *(long *)(in_x0 + 0x458)) {
            cancelRaycastShapes(in_x0,*(IRaycastReport **)(*(long *)(in_x0 + 0x450) + 0x18));
          }
          while (*(IPhysicsEntityReport ***)(in_x0 + 0x3a8) !=
                 *(IPhysicsEntityReport ***)(in_x0 + 0x3b0)) {
            cancelOverlapBoxShapes(in_x0,**(IPhysicsEntityReport ***)(in_x0 + 0x3a8));
          }
          while (*(IPhysicsEntityReport ***)(in_x0 + 0x3e0) !=
                 *(IPhysicsEntityReport ***)(in_x0 + 1000)) {
            cancelOverlapSphereShapes(in_x0,**(IPhysicsEntityReport ***)(in_x0 + 0x3e0));
          }
          while (*(IPhysicsEntityReport ***)(in_x0 + 0x418) !=
                 *(IPhysicsEntityReport ***)(in_x0 + 0x420)) {
            cancelOverlapPointCloudShapes(in_x0,**(IPhysicsEntityReport ***)(in_x0 + 0x418));
          }
          if (BVar1 == (Bt2ScenegraphPhysicsContext)0x0) {
            return;
          }
          Thread::start((Thread *)(in_x0 + 0x490),simulationThreadFunction,in_x0,0xffffffff,
                        "PhysicsThread",2,0x80000);
          return;
        }
        if (__dest == plVar2) break;
        __n = (long)plVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        plVar2 = (long *)((long)__dest + __n);
        __dest = *(long **)(in_x0 + 0x598);
        *(long **)(in_x0 + 0x5a0) = plVar2;
      }
      plVar4 = *(long **)(in_x0 + 0x5b0);
      if (plVar4 != *(long **)(in_x0 + 0x5b8)) break;
LAB_0099aeb0:
      __dest = *(long **)(in_x0 + 0x598);
    }
    lVar3 = *__dest;
    while (*plVar4 != lVar3) {
      plVar4 = plVar4 + 2;
      if (plVar4 == *(long **)(in_x0 + 0x5b8)) goto LAB_0099aeb0;
    }
    *plVar4 = 0;
    DataMemoryBarrier(2,3);
    while (lVar3 == *(long *)(in_x0 + 0x5c8)) {
      Yield();
    }
    DataMemoryBarrier(2,1);
    plVar2 = *(long **)(in_x0 + 0x5a0);
    __dest = *(long **)(in_x0 + 0x598);
  } while( true );
}


