// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setColorRenderTargets
// Entry Point: 00a20bf0
// Size: 52 bytes
// Signature: undefined __thiscall setColorRenderTargets(RenderQueue * this, ITextureObject * param_1, uint param_2, uint param_3, LOAD_ACTION param_4, ACCESS_MODE param_5, ITextureObject * param_6, LOAD_ACTION param_7, ACCESS_MODE param_8, bool param_9)


/* RenderQueue::setColorRenderTargets(ITextureObject*, unsigned int, unsigned int,
   RenderTargetDesc::LOAD_ACTION, RenderTargetDesc::ACCESS_MODE, ITextureObject*,
   RenderTargetDesc::LOAD_ACTION, RenderTargetDesc::ACCESS_MODE, bool) */

void __thiscall
RenderQueue::setColorRenderTargets
          (RenderQueue *this,ITextureObject *param_1,uint param_2,uint param_3,LOAD_ACTION param_4,
          ACCESS_MODE param_5,ITextureObject *param_6,LOAD_ACTION param_7,ACCESS_MODE param_8,
          bool param_9)

{
  undefined4 uVar1;
  
  *(ITextureObject **)(this + 0xc0) = param_1;
  *(ACCESS_MODE *)(this + 0x138) = param_5;
  *(ACCESS_MODE *)(this + 0x13c) = param_8;
  uVar1 = 1;
  if (param_6 != (ITextureObject *)0x0) {
    uVar1 = 2;
  }
  *(uint *)(this + 0x180) = param_3;
  *(ITextureObject **)(this + 200) = param_6;
  *(LOAD_ACTION *)(this + 0x110) = param_4;
  *(LOAD_ACTION *)(this + 0x114) = param_7;
  this[0x160] = (RenderQueue)param_9;
  *(undefined4 *)(this + 0x16c) = uVar1;
  *(uint *)(this + 0x170) = param_2;
  return;
}


