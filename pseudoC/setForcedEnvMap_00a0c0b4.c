// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setForcedEnvMap
// Entry Point: 00a0c0b4
// Size: 56 bytes
// Signature: undefined __thiscall setForcedEnvMap(IndirectLightRenderController * this, ITextureObject * param_1)


/* IndirectLightRenderController::setForcedEnvMap(ITextureObject*) */

void __thiscall
IndirectLightRenderController::setForcedEnvMap
          (IndirectLightRenderController *this,ITextureObject *param_1)

{
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 8))();
  }
  *(ITextureObject **)(this + 0x140) = param_1;
  return;
}


