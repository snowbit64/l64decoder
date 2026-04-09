// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDepthRenderTarget
// Entry Point: 00a205b0
// Size: 28 bytes
// Signature: undefined __thiscall setDepthRenderTarget(RenderQueue * this, ITextureObject * param_1, LOAD_ACTION param_2, PIXEL_ACCESS_MODE param_3, ACCESS_MODE param_4)


/* RenderQueue::setDepthRenderTarget(ITextureObject*, RenderTargetDesc::LOAD_ACTION,
   RenderQueue::PIXEL_ACCESS_MODE, RenderTargetDesc::ACCESS_MODE) */

void __thiscall
RenderQueue::setDepthRenderTarget
          (RenderQueue *this,ITextureObject *param_1,LOAD_ACTION param_2,PIXEL_ACCESS_MODE param_3,
          ACCESS_MODE param_4)

{
  *(ITextureObject **)(this + 0xe0) = param_1;
  *(LOAD_ACTION *)(this + 0x120) = param_2;
  *(ACCESS_MODE *)(this + 0x148) = param_4;
  this[0x161] = (RenderQueue)(param_3 != 2);
  return;
}


