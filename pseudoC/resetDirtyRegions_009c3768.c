// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetDirtyRegions
// Entry Point: 009c3768
// Size: 2412 bytes
// Signature: undefined resetDirtyRegions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::resetDirtyRegions() */

void ProceduralPlacementCacheManager::resetDirtyRegions(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  long **pplVar5;
  long *plVar6;
  ulong uVar7;
  long **pplVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = ProceduralPlacementManager::getInstance();
  lVar4 = *(long *)(lVar3 + 0x50);
  if ((int)((ulong)(*(long *)(lVar3 + 0x58) - lVar4) >> 3) != 0) {
    uVar7 = 0;
    do {
      uStack_58 = 0x7fffffff;
      local_60 = 0x7fffffff;
      ProceduralPlacementMask::setDirtyRegion
                (*(ProceduralPlacementMask **)(lVar4 + uVar7 * 8),(DirtyRegion *)&local_60);
      lVar4 = *(long *)(lVar3 + 0x50);
      uVar7 = uVar7 + 1;
    } while (uVar7 < ((ulong)(*(long *)(lVar3 + 0x58) - lVar4) >> 3 & 0xffffffff));
  }
  lVar4 = *(long *)(lVar3 + 0x68);
  if ((int)((ulong)(*(long *)(lVar3 + 0x70) - lVar4) >> 3) != 0) {
    uVar7 = 0;
    do {
      uStack_58 = 0x7fffffff;
      local_60 = 0x7fffffff;
      ProceduralPlacementMask::setDirtyRegion
                (*(ProceduralPlacementMask **)(lVar4 + uVar7 * 8),(DirtyRegion *)&local_60);
      lVar4 = *(long *)(lVar3 + 0x68);
      uVar7 = uVar7 + 1;
    } while (uVar7 < ((ulong)(*(long *)(lVar3 + 0x70) - lVar4) >> 3 & 0xffffffff));
  }
  pplVar8 = *(long ***)(in_x0 + 0x48);
  while (pplVar8 != (long **)(in_x0 + 0x50)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x60);
  while (pplVar8 != (long **)(in_x0 + 0x68)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x78);
  while (pplVar8 != (long **)(in_x0 + 0x80)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x90);
  while (pplVar8 != (long **)(in_x0 + 0x98)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0xa8);
  while (pplVar8 != (long **)(in_x0 + 0xb0)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0xc0);
  while (pplVar8 != (long **)(in_x0 + 200)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0xd8);
  while (pplVar8 != (long **)(in_x0 + 0xe0)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0xf0);
  while (pplVar8 != (long **)(in_x0 + 0xf8)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x108);
  while (pplVar8 != (long **)(in_x0 + 0x110)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x120);
  while (pplVar8 != (long **)(in_x0 + 0x128)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x138);
  while (pplVar8 != (long **)(in_x0 + 0x140)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x150);
  while (pplVar8 != (long **)(in_x0 + 0x158)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x168);
  while (pplVar8 != (long **)(in_x0 + 0x170)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x1a8);
  while (pplVar8 != (long **)(in_x0 + 0x1b0)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    ProceduralPlacementRaycastPhysicsMask::setDirtyFlag
              ((ProceduralPlacementRaycastPhysicsMask *)pplVar8[7],false);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x1c0);
  while (pplVar8 != (long **)(in_x0 + 0x1c8)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    ProceduralPlacementRaycastObjectsMask::setDirtyFlag
              ((ProceduralPlacementRaycastObjectsMask *)pplVar8[7],false);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  pplVar8 = *(long ***)(in_x0 + 0x1d8);
  while (pplVar8 != (long **)(in_x0 + 0x1e0)) {
    uStack_58 = 0x7fffffff;
    local_60 = 0x7fffffff;
    ProceduralPlacementMask::setDirtyRegion
              ((ProceduralPlacementMask *)pplVar8[7],(DirtyRegion *)&local_60);
    ProceduralPlacementProjectObjectsMask::setDirtyFlag
              ((ProceduralPlacementProjectObjectsMask *)pplVar8[7],false);
    pplVar5 = (long **)pplVar8[1];
    if ((long **)pplVar8[1] == (long **)0x0) {
      pplVar5 = pplVar8 + 2;
      bVar2 = (long **)**pplVar5 != pplVar8;
      pplVar8 = (long **)*pplVar5;
      if (bVar2) {
        do {
          plVar6 = *pplVar5;
          pplVar5 = (long **)(plVar6 + 2);
          pplVar8 = (long **)*pplVar5;
        } while (*pplVar8 != plVar6);
      }
    }
    else {
      do {
        pplVar8 = pplVar5;
        pplVar5 = (long **)*pplVar8;
      } while (*pplVar8 != (long *)0x0);
    }
  }
  if (*(long *)(in_x0 + 0x198) != 0) {
    *(undefined *)(*(long *)(in_x0 + 0x198) + 0xd0) = 0;
  }
  if (*(long *)(in_x0 + 0x1a0) != 0) {
    *(undefined *)(*(long *)(in_x0 + 0x1a0) + 0xd0) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


