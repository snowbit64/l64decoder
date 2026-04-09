// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008d695c
// Size: 8 bytes
// Signature: undefined __thiscall activate(ParticleSystem * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* non-virtual thunk to ParticleSystem::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*)
    */

void __thiscall
ParticleSystem::activate
          (ParticleSystem *this,IRenderDevice *param_1,IAudioDevice *param_2,
          LuauScriptSystem *param_3)

{
  activate((IRenderDevice *)(this + -0x80),(IAudioDevice *)param_1,(LuauScriptSystem *)param_2);
  return;
}


