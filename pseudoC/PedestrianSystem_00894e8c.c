// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PedestrianSystem
// Entry Point: 00894e8c
// Size: 800 bytes
// Signature: undefined __thiscall ~PedestrianSystem(PedestrianSystem * this)


/* PedestrianSystem::~PedestrianSystem() */

void __thiscall PedestrianSystem::~PedestrianSystem(PedestrianSystem *this)

{
  long lVar1;
  long lVar2;
  size_t __n;
  Bt2ScenegraphPhysicsContext *pBVar3;
  UpdateManager *this_00;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  void **ppvVar7;
  PedestrianSystem *pPVar8;
  long **pplVar9;
  long lVar10;
  
  *(undefined ***)this = &PTR__PedestrianSystem_00fdd180;
  *(undefined ***)(this + 0x20) = &PTR__PedestrianSystem_00fdd1b0;
  *(undefined ***)(this + 0x30) = &PTR__PedestrianSystem_00fdd1d8;
                    /* try { // try from 00894ed4 to 00894f9b has its CatchHandler @ 008951b4 */
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x257d8));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25850));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x257f0));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25868));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25808));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25880));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25820));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25898));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x25838));
  ScenegraphPhysicsContextManager::getInstance();
  pBVar3 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(pBVar3,(IRaycastReport *)(this + 0x258b0));
  lVar10 = *(long *)(this + 0x25960);
  if (lVar10 != 0) {
    lVar1 = *(long *)(lVar10 + 0x40);
    lVar2 = *(long *)(lVar10 + 0x48) - lVar1;
    if (lVar2 != 0) {
      uVar6 = 0;
      do {
        if (*(undefined8 **)(lVar1 + uVar6 * 8) == (undefined8 *)(this + 0x30)) {
          pvVar4 = (void *)(lVar1 + uVar6 * 8);
          __n = *(long *)(lVar10 + 0x48) - (long)(void *)((long)pvVar4 + 8);
          if (__n != 0) {
            memmove(pvVar4,(void *)((long)pvVar4 + 8),__n);
          }
          *(size_t *)(lVar10 + 0x48) = (long)pvVar4 + __n;
          break;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)(lVar2 >> 3));
    }
  }
                    /* try { // try from 00894ff8 to 00895003 has its CatchHandler @ 008951ac */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  if (*(int *)(this + 0x25900) != 0) {
    uVar6 = 0;
    do {
                    /* try { // try from 00895018 to 0089501f has its CatchHandler @ 008951b0 */
      PedestrianData::cleanAll();
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x25900));
  }
  uVar5 = *(uint *)(this + 0x25908);
  *(undefined4 *)(this + 0x25900) = 0;
  if (uVar5 != 0) {
    uVar6 = 0;
    pplVar9 = (long **)(this + 0x23b80);
    do {
      if (*pplVar9 != (long *)0x0) {
        (**(code **)(**pplVar9 + 8))();
        uVar5 = *(uint *)(this + 0x25908);
      }
      uVar6 = uVar6 + 1;
      *pplVar9 = (long *)0x0;
      pplVar9 = pplVar9 + 4;
    } while (uVar6 < uVar5);
  }
  pvVar4 = *(void **)(this + 0x25918);
  *(undefined4 *)(this + 0x25908) = 0;
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x25920) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x258d0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x258d8) = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(void **)(this + 0x258c8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x258c8));
  }
  lVar10 = -0xb00;
  ppvVar7 = (void **)(this + 0x257a8);
  do {
    pvVar4 = ppvVar7[1];
    if (pvVar4 != (void *)0x0) {
      ppvVar7[2] = pvVar4;
      operator_delete(pvVar4);
    }
    if (((byte)*(PedestrianSystem *)(ppvVar7 + -2) & 1) != 0) {
      operator_delete(*ppvVar7);
    }
    if (((byte)*(PedestrianSystem *)(ppvVar7 + -5) & 1) != 0) {
      operator_delete(ppvVar7[-3]);
    }
    ppvVar7 = ppvVar7 + -0xb;
    lVar10 = lVar10 + 0x58;
  } while (lVar10 != 0);
  lVar10 = -0x170c0;
  pPVar8 = this + 0x1d0a8;
  do {
    PedestrianData::~PedestrianData((PedestrianData *)pPVar8);
    lVar10 = lVar10 + 0x3b0;
    pPVar8 = (PedestrianSystem *)((PedestrianData *)pPVar8 + -0x3b0);
  } while (lVar10 != 0);
  lVar10 = -0x5460;
  pPVar8 = this + 0x62c0;
  do {
    PedestrianGroupData::~PedestrianGroupData((PedestrianGroupData *)pPVar8);
    lVar10 = lVar10 + 0xd8;
    pPVar8 = (PedestrianSystem *)((PedestrianGroupData *)pPVar8 + -0xd8);
  } while (lVar10 != 0);
  lVar10 = 0;
  do {
    pvVar4 = *(void **)(this + lVar10 + 0xf20);
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + lVar10 + 0xf28) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)(this + lVar10 + 0xf08);
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + lVar10 + 0xf10) = pvVar4;
      operator_delete(pvVar4);
    }
    pvVar4 = *(void **)(this + lVar10 + 0xef0);
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + lVar10 + 0xef8) = pvVar4;
      operator_delete(pvVar4);
    }
    lVar10 = lVar10 + -0x80;
  } while (lVar10 != -0xf00);
  Entity::~Entity((Entity *)this);
  return;
}


