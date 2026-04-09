// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: kickLightingCalcs
// Entry Point: 00a1fb68
// Size: 64 bytes
// Signature: undefined __thiscall kickLightingCalcs(RenderQueue * this, RenderStats * param_1, bool param_2)


/* RenderQueue::kickLightingCalcs(RenderStats&, bool) */

void __thiscall RenderQueue::kickLightingCalcs(RenderQueue *this,RenderStats *param_1,bool param_2)

{
  RenderController *pRVar1;
  Matrix4x4 *pMVar2;
  LightListRasterizer *this_00;
  
  pMVar2 = *(Matrix4x4 **)(this + 0x28);
  if (((byte)pMVar2[0x3a8] & 1) == 0) {
    return;
  }
  this_00 = *(LightListRasterizer **)(this + 0x20);
  pRVar1 = *(RenderController **)this;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  LightListRasterizer::beginFillGrid
            (this_00,pRVar1,pMVar2,pMVar2 + 0x80,(Vector3 *)(pMVar2 + 0x354),param_2);
  return;
}


