// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirtyPhysics
// Entry Point: 009c40f8
// Size: 360 bytes
// Signature: undefined setDirtyPhysics(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::setDirtyPhysics() */

void ProceduralPlacementCacheManager::setDirtyPhysics(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(in_x0 + 0x1a8);
  while (pplVar4 != (long **)(in_x0 + 0x1b0)) {
    ProceduralPlacementRaycastPhysicsMask::setDirtyFlag
              ((ProceduralPlacementRaycastPhysicsMask *)pplVar4[7],true);
    pplVar2 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar2 = pplVar4 + 2;
      bVar1 = (long **)**pplVar2 != pplVar4;
      pplVar4 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar3 = *pplVar2;
          pplVar2 = (long **)(plVar3 + 2);
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar4 != plVar3);
      }
    }
    else {
      do {
        pplVar4 = pplVar2;
        pplVar2 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  pplVar4 = *(long ***)(in_x0 + 0x1c0);
  while (pplVar4 != (long **)(in_x0 + 0x1c8)) {
    ProceduralPlacementRaycastObjectsMask::setDirtyFlag
              ((ProceduralPlacementRaycastObjectsMask *)pplVar4[7],true);
    pplVar2 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar2 = pplVar4 + 2;
      bVar1 = (long **)**pplVar2 != pplVar4;
      pplVar4 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar3 = *pplVar2;
          pplVar2 = (long **)(plVar3 + 2);
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar4 != plVar3);
      }
    }
    else {
      do {
        pplVar4 = pplVar2;
        pplVar2 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  pplVar4 = *(long ***)(in_x0 + 0x1d8);
  while (pplVar4 != (long **)(in_x0 + 0x1e0)) {
    ProceduralPlacementProjectObjectsMask::setDirtyFlag
              ((ProceduralPlacementProjectObjectsMask *)pplVar4[7],true);
    pplVar2 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar2 = pplVar4 + 2;
      bVar1 = (long **)**pplVar2 != pplVar4;
      pplVar4 = (long **)*pplVar2;
      if (bVar1) {
        do {
          plVar3 = *pplVar2;
          pplVar2 = (long **)(plVar3 + 2);
          pplVar4 = (long **)*pplVar2;
        } while (*pplVar4 != plVar3);
      }
    }
    else {
      do {
        pplVar4 = pplVar2;
        pplVar2 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  return;
}


