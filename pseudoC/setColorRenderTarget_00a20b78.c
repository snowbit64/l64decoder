// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColorRenderTarget
// Entry Point: 00a20b78
// Size: 36 bytes
// Signature: undefined __thiscall setColorRenderTarget(RenderQueue * this, ITextureObject * param_1, uint param_2, uint param_3, LOAD_ACTION param_4, ACCESS_MODE param_5, bool param_6)


/* RenderQueue::setColorRenderTarget(ITextureObject*, unsigned int, unsigned int,
   RenderTargetDesc::LOAD_ACTION, RenderTargetDesc::ACCESS_MODE, bool) */

void __thiscall
RenderQueue::setColorRenderTarget
          (RenderQueue *this,ITextureObject *param_1,uint param_2,uint param_3,LOAD_ACTION param_4,
          ACCESS_MODE param_5,bool param_6)

{
  *(ITextureObject **)(this + 0xc0) = param_1;
  *(uint *)(this + 0x180) = param_3;
  *(LOAD_ACTION *)(this + 0x110) = param_4;
  *(ACCESS_MODE *)(this + 0x138) = param_5;
  this[0x160] = (RenderQueue)param_6;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0x16c) = 1;
  *(uint *)(this + 0x170) = param_2;
  return;
}


