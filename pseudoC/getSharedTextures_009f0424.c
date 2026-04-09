// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSharedTextures
// Entry Point: 009f0424
// Size: 76 bytes
// Signature: undefined __thiscall getSharedTextures(AtmosphereRenderControllerShared * this, ITextureObject * * param_1, ITextureObject * * param_2, ITextureObject * * param_3, ITextureObject * * param_4, ITextureObject * * param_5, ITextureObject * * param_6, ITextureObject * * param_7)


/* AtmosphereRenderControllerShared::getSharedTextures(ITextureObject*&, ITextureObject*&,
   ITextureObject*&, ITextureObject*&, ITextureObject*&, ITextureObject*&, ITextureObject*&) const
    */

void __thiscall
AtmosphereRenderControllerShared::getSharedTextures
          (AtmosphereRenderControllerShared *this,ITextureObject **param_1,ITextureObject **param_2,
          ITextureObject **param_3,ITextureObject **param_4,ITextureObject **param_5,
          ITextureObject **param_6,ITextureObject **param_7)

{
  *param_2 = *(ITextureObject **)(*(long *)(this + 0x18) + 0x68);
  *param_3 = *(ITextureObject **)(*(long *)(this + 0x10) + 0x68);
  *param_4 = *(ITextureObject **)(*(long *)this + 0x68);
  *param_7 = *(ITextureObject **)(*(long *)(this + 8) + 0x68);
  *param_5 = *(ITextureObject **)(this + 0x48);
  *param_6 = *(ITextureObject **)(this + 0x40);
  *param_1 = *(ITextureObject **)(this + 0x50);
  return;
}


