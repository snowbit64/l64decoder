// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeTypes
// Entry Point: 009c36e8
// Size: 128 bytes
// Signature: undefined removeTypes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementCacheManager::removeTypes() */

void ProceduralPlacementCacheManager::removeTypes(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  long *plVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(in_x0 + 8);
  while (pplVar4 != (long **)(in_x0 + 0x10)) {
    DistanceMatrixTypeField::removePoints();
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


