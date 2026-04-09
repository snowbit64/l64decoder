// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doFinalComposite
// Entry Point: 00a09954
// Size: 176 bytes
// Signature: undefined doFinalComposite(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::doFinalComposite() */

void RenderController::doFinalComposite(void)

{
  IRenderDevice **in_x0;
  ScreenSpaceProcessor *this;
  long lVar1;
  long lVar2;
  IRenderDevice *pIVar3;
  int *piVar4;
  IRenderDevice *pIVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  pIVar3 = in_x0[0x4b];
  pIVar5 = in_x0[0x4a];
  if (pIVar3 != pIVar5) {
    uVar6 = 0;
    do {
      lVar7 = *(long *)(pIVar5 + uVar6 * 8);
      lVar2 = *(long *)(lVar7 + 0x78);
      lVar1 = *(long *)(lVar7 + 0x80);
      if (lVar1 != lVar2) {
        uVar8 = 0;
        do {
          piVar4 = *(int **)(lVar2 + uVar8 * 8);
          if ((*piVar4 == 0) &&
             (this = *(ScreenSpaceProcessor **)(piVar4 + 0x15c), this != (ScreenSpaceProcessor *)0x0
             )) {
            ScreenSpaceProcessor::processFinalComposite(this,*in_x0,(PostFxParams *)(in_x0 + 0x59));
            lVar2 = *(long *)(lVar7 + 0x78);
            lVar1 = *(long *)(lVar7 + 0x80);
          }
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (uVar8 < (ulong)(lVar1 - lVar2 >> 3));
        pIVar3 = in_x0[0x4b];
        pIVar5 = in_x0[0x4a];
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)((long)pIVar3 - (long)pIVar5 >> 3));
  }
  return;
}


