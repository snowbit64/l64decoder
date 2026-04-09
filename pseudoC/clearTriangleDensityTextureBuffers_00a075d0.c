// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearTriangleDensityTextureBuffers
// Entry Point: 00a075d0
// Size: 164 bytes
// Signature: undefined clearTriangleDensityTextureBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::clearTriangleDensityTextureBuffers() */

void RenderController::clearTriangleDensityTextureBuffers(void)

{
  void **ppvVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(in_x0 + 0x2b0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if ((long *)plVar4[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[3] + 8))();
    }
  }
  if (*(long *)(in_x0 + 0x2b8) != 0) {
    ppvVar1 = (void **)*(void **)(in_x0 + 0x2b0);
    while (ppvVar1 != (void **)0x0) {
      pvVar5 = *ppvVar1;
      operator_delete(ppvVar1);
      ppvVar1 = (void **)pvVar5;
    }
    lVar2 = *(long *)(in_x0 + 0x2a8);
    *(undefined8 *)(in_x0 + 0x2b0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x2a0) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(in_x0 + 0x2b8) = 0;
  }
  if (*(long **)(in_x0 + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x298) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x298) = 0;
  return;
}


