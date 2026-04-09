// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 009628e8
// Size: 8 bytes
// Signature: undefined __thiscall activate(Texture * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to Texture::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void __thiscall
Texture::activate(Texture *this,IRenderDevice *param_1,IAudioDevice *param_2,
                 LuauScriptSystem *param_3)

{
  activate((IRenderDevice *)(this + -0x10),(IAudioDevice *)param_1,(LuauScriptSystem *)param_2);
  return;
}


