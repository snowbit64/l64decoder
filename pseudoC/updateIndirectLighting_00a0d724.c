// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateIndirectLighting
// Entry Point: 00a0d724
// Size: 16 bytes
// Signature: undefined __thiscall updateIndirectLighting(IndirectLightRenderController * this, IRenderDevice * param_1, ICommandBuffer * param_2, LightSource * param_3, PostFxParams * param_4)


/* IndirectLightRenderController::updateIndirectLighting(IRenderDevice*, ICommandBuffer*,
   LightSource const*, PostFxParams const&) */

void __thiscall
IndirectLightRenderController::updateIndirectLighting
          (IndirectLightRenderController *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          LightSource *param_3,PostFxParams *param_4)

{
  if (param_3 != (LightSource *)0x0) {
    updateIndirectDiffuseSH(this,param_1,param_2,param_3,param_4);
    return;
  }
  this[0x1d0] = (IndirectLightRenderController)0x0;
  return;
}


