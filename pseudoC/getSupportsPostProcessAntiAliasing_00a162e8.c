// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSupportsPostProcessAntiAliasing
// Entry Point: 00a162e8
// Size: 12 bytes
// Signature: undefined __thiscall getSupportsPostProcessAntiAliasing(Renderer * this, POST_PROCESS_ANTI_ALIASING param_1)


/* Renderer::getSupportsPostProcessAntiAliasing(HardwareScalability::POST_PROCESS_ANTI_ALIASING) */

bool __thiscall
Renderer::getSupportsPostProcessAntiAliasing(Renderer *this,POST_PROCESS_ANTI_ALIASING param_1)

{
  return param_1 == 2;
}


