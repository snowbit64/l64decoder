// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setResolveColorRenderTargets
// Entry Point: 00a239d8
// Size: 64 bytes
// Signature: undefined __thiscall setResolveColorRenderTargets(RenderQueue * this, ITextureObject * param_1, RESOLVE_ACTION param_2, ACCESS_MODE param_3, ITextureObject * param_4, RESOLVE_ACTION param_5, ACCESS_MODE param_6)


/* RenderQueue::setResolveColorRenderTargets(ITextureObject*, RenderQueue::RESOLVE_ACTION,
   RenderTargetDesc::ACCESS_MODE, ITextureObject*, RenderQueue::RESOLVE_ACTION,
   RenderTargetDesc::ACCESS_MODE) */

void __thiscall
RenderQueue::setResolveColorRenderTargets
          (RenderQueue *this,ITextureObject *param_1,RESOLVE_ACTION param_2,ACCESS_MODE param_3,
          ITextureObject *param_4,RESOLVE_ACTION param_5,ACCESS_MODE param_6)

{
  long lVar1;
  
  if (*(uint *)(this + 0x194) != 0xffffffff) {
    lVar1 = *(long *)(this + 0x38) + (ulong)*(uint *)(this + 0x194) * 0x2c0;
    *(ITextureObject **)(lVar1 + 0x40) = param_1;
    *(ITextureObject **)(lVar1 + 0x48) = param_4;
    *(uint *)(lVar1 + 0x7c) = (uint)(param_2 == 0);
    *(uint *)(lVar1 + 0x80) = (uint)(param_5 == 0);
    *(ACCESS_MODE *)(lVar1 + 0xa4) = param_3;
    *(ACCESS_MODE *)(lVar1 + 0xa8) = param_6;
  }
  this[400] = (RenderQueue)0x1;
  return;
}


