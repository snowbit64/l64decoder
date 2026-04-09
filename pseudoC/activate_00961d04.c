// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00961d04
// Size: 8 bytes
// Signature: undefined __thiscall activate(SingleColorTexture * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to SingleColorTexture::activate(IRenderDevice*, IAudioDevice*,
   LuauScriptSystem*) */

void __thiscall
SingleColorTexture::activate
          (SingleColorTexture *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  activate((IRenderDevice *)(this + -0x10),(IAudioDevice *)param_1,(LuauScriptSystem *)param_2);
  return;
}


