// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setResolveColorRenderTarget
// Entry Point: 00a20c24
// Size: 56 bytes
// Signature: undefined __thiscall setResolveColorRenderTarget(RenderQueue * this, ITextureObject * param_1, RESOLVE_ACTION param_2, ACCESS_MODE param_3)


/* RenderQueue::setResolveColorRenderTarget(ITextureObject*, RenderQueue::RESOLVE_ACTION,
   RenderTargetDesc::ACCESS_MODE) */

void __thiscall
RenderQueue::setResolveColorRenderTarget
          (RenderQueue *this,ITextureObject *param_1,RESOLVE_ACTION param_2,ACCESS_MODE param_3)

{
  long lVar1;
  
  if (*(uint *)(this + 0x194) != 0xffffffff) {
    lVar1 = *(long *)(this + 0x38) + (ulong)*(uint *)(this + 0x194) * 0x2c0;
    *(ITextureObject **)(lVar1 + 0x40) = param_1;
    *(uint *)(lVar1 + 0x7c) = (uint)(param_2 == 0);
    *(ACCESS_MODE *)(lVar1 + 0xa4) = param_3;
  }
  this[400] = (RenderQueue)0x1;
  return;
}


