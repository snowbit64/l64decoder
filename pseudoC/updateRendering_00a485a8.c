// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a485a8
// Size: 120 bytes
// Signature: undefined __thiscall updateRendering(UpdateRenderingManager * this, float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* UpdateRenderingManager::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void __thiscall
UpdateRenderingManager::updateRendering
          (UpdateRenderingManager *this,float param_1,SharedRenderArgs *param_2,RenderStats *param_3
          )

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)this;
  if (*(long *)(this + 8) != lVar2) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      (**(code **)(*plVar1 + 0x10))(param_1,plVar1,param_2,param_3);
      lVar2 = *(long *)this;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(this + 8) - lVar2 >> 3));
  }
  return;
}


