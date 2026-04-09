// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00a097c8
// Size: 248 bytes
// Signature: undefined __thiscall prepareRender(RenderController * this, RenderTextureSetup * param_1, RenderStats * param_2)


/* RenderController::prepareRender(RenderTextureSetup const*, RenderStats&) */

void __thiscall
RenderController::prepareRender
          (RenderController *this,RenderTextureSetup *param_1,RenderStats *param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != lVar2) {
    uVar5 = 0;
    do {
      piVar3 = *(int **)(lVar2 + uVar5 * 8);
      lVar4 = *(long *)(piVar3 + 2);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x3a8) < '\0')) {
        RenderList::syncOccluderRendering((RenderList *)(lVar4 + 0x400),param_2);
        lVar2 = *(long *)(param_1 + 0x78);
        piVar3 = *(int **)(lVar2 + uVar5 * 8);
      }
      if (*piVar3 == 0) {
        lVar2 = *(long *)(lVar2 + uVar5 * 8);
        RenderQueue::syncLightingCalcs();
        RenderQueue::prepareRender
                  ((RenderTargetInfo *)(lVar2 + 0x5b0),(uint)param_1,(uint)uVar5,
                   (RenderStats *)
                   ((ulong)(*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) >> 3),
                   SUB81(param_2,0));
      }
      else {
        plVar1 = *(long **)(*(long *)(lVar2 + uVar5 * 8) + 0x10);
        (**(code **)(*plVar1 + 0x10))
                  (plVar1,param_1,uVar5,(ulong)(*(long *)(param_1 + 0x80) - lVar2) >> 3,param_2,
                   this[0x19]);
      }
      lVar2 = *(long *)(param_1 + 0x78);
      uVar5 = (ulong)((uint)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x80) - lVar2 >> 3));
  }
  return;
}


