// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setForcedEnvMap
// Entry Point: 00a13370
// Size: 12 bytes
// Signature: undefined __thiscall setForcedEnvMap(Renderer * this, ITextureObject * param_1)


/* Renderer::setForcedEnvMap(ITextureObject*) */

void __thiscall Renderer::setForcedEnvMap(Renderer *this,ITextureObject *param_1)

{
  IndirectLightRenderController::setForcedEnvMap
            ((IndirectLightRenderController *)(this + 0x1df8),param_1);
  return;
}


