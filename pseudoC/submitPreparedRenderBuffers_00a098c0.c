// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitPreparedRenderBuffers
// Entry Point: 00a098c0
// Size: 148 bytes
// Signature: undefined __thiscall submitPreparedRenderBuffers(RenderController * this, RenderTextureSetup * param_1, RenderStats * param_2)


/* RenderController::submitPreparedRenderBuffers(RenderTextureSetup const*, RenderStats&) */

void __thiscall
RenderController::submitPreparedRenderBuffers
          (RenderController *this,RenderTextureSetup *param_1,RenderStats *param_2)

{
  int *piVar1;
  ulong uVar3;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != lVar2) {
    uVar3 = 0;
    do {
      piVar1 = *(int **)(lVar2 + uVar3 * 8);
      if (*piVar1 == 0) {
        RenderQueue::submitPreparedRenderBuffers
                  ((RenderQueue *)(piVar1 + 0x16c),(RenderTargetInfo *)param_1,param_2,
                   (bool)this[0x19]);
      }
      else {
        (**(code **)(**(long **)(piVar1 + 4) + 0x20))
                  (*(long **)(piVar1 + 4),param_1,param_2,this[0x19]);
      }
      lVar2 = *(long *)(param_1 + 0x78);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(param_1 + 0x80) - lVar2 >> 3));
  }
  return;
}


