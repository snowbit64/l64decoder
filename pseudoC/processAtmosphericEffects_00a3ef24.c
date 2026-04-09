// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAtmosphericEffects
// Entry Point: 00a3ef24
// Size: 48 bytes
// Signature: undefined __thiscall processAtmosphericEffects(ScreenSpaceProcessor * this, IRenderDevice * param_1, LightSource * param_2, RenderArgs * param_3, PostFxParams * param_4)


/* ScreenSpaceProcessor::processAtmosphericEffects(IRenderDevice*, LightSource const*, RenderArgs
   const*, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::processAtmosphericEffects
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,LightSource *param_2,
          RenderArgs *param_3,PostFxParams *param_4)

{
  if ((this[0x1878] != (ScreenSpaceProcessor)0x0) &&
     (*(AtmosphereRenderController **)(this + 0x1b70) != (AtmosphereRenderController *)0x0)) {
    AtmosphereRenderController::processSkyFx
              (*(AtmosphereRenderController **)(this + 0x1b70),param_1,
               *(ITextureObject **)(this + 0x1b28),param_2,param_4,param_3);
    return;
  }
  return;
}


