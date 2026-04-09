// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setForcedIndirectDiffuseSH
// Entry Point: 00a1337c
// Size: 12 bytes
// Signature: undefined __thiscall setForcedIndirectDiffuseSH(Renderer * this, float * param_1, float * param_2, float * param_3)


/* Renderer::setForcedIndirectDiffuseSH(float const*, float const*, float const*) */

void __thiscall
Renderer::setForcedIndirectDiffuseSH(Renderer *this,float *param_1,float *param_2,float *param_3)

{
  IndirectLightRenderController::setForcedIndirectDiffuseSH
            ((IndirectLightRenderController *)(this + 0x1df8),param_1,param_2,param_3);
  return;
}


