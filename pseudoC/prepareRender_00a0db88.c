// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareRender
// Entry Point: 00a0db88
// Size: 28 bytes
// Signature: undefined __cdecl prepareRender(RenderTargetInfo * param_1, uint param_2, uint param_3, RenderStats * param_4, bool param_5)


/* IndirectLightRenderController::EnvFilterJob::prepareRender(RenderTargetInfo const&, unsigned int,
   unsigned int, RenderStats&, bool) */

void IndirectLightRenderController::EnvFilterJob::prepareRender
               (RenderTargetInfo *param_1,uint param_2,uint param_3,RenderStats *param_4,
               bool param_5)

{
  *(uint *)(param_1 + 0x128) = param_3;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x150);
  return;
}


