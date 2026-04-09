// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearDebugMasks
// Entry Point: 009d4c00
// Size: 124 bytes
// Signature: undefined clearDebugMasks(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementManager::clearDebugMasks() */

void ProceduralPlacementManager::clearDebugMasks(void)

{
  long **__dest;
  size_t __n;
  long in_x0;
  long *plVar1;
  long **pplVar2;
  
  __dest = *(long ***)(in_x0 + 0x80);
  pplVar2 = *(long ***)(in_x0 + 0x88);
  if (__dest != pplVar2) {
    plVar1 = *__dest;
    while( true ) {
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        pplVar2 = *(long ***)(in_x0 + 0x88);
      }
      __n = (long)pplVar2 - (long)(__dest + 1);
      if (__n == 0) break;
      memmove(__dest,__dest + 1,__n);
      pplVar2 = (long **)((long)__dest + __n);
      *(long ***)(in_x0 + 0x88) = pplVar2;
      plVar1 = *__dest;
    }
    *(long ***)(in_x0 + 0x88) = __dest;
  }
  return;
}


