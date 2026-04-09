// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSkySH
// Entry Point: 00a416a0
// Size: 116 bytes
// Signature: undefined __thiscall computeSkySH(ScreenSpaceProcessor * this, IRenderDevice * param_1, ICommandBuffer * param_2, IStructBuffer * param_3, LightSource * param_4, PostFxParams * param_5, Vector3 * param_6, uint param_7, uint param_8)


/* ScreenSpaceProcessor::computeSkySH(IRenderDevice*, ICommandBuffer*, IStructBuffer*, LightSource
   const*, PostFxParams const&, Vector3 const&, unsigned int, unsigned int) */

undefined8 __thiscall
ScreenSpaceProcessor::computeSkySH
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          IStructBuffer *param_3,LightSource *param_4,PostFxParams *param_5,Vector3 *param_6,
          uint param_7,uint param_8)

{
  undefined8 uVar1;
  AtmosphereRenderController *this_00;
  
  if ((((this[0x1878] == (ScreenSpaceProcessor)0x0) || (this[0x1b6c] == (ScreenSpaceProcessor)0x0))
      || (this_00 = *(AtmosphereRenderController **)(this + 0x1b70),
         this_00 == (AtmosphereRenderController *)0x0)) || (*(int *)(this_00 + 0x97c) == 0)) {
    uVar1 = 0;
  }
  else {
    AtmosphereRenderController::computeSkySH
              (this_00,param_1,param_2,param_3,*(ITextureObject **)(this + 0x1a20),param_4,param_5,
               param_6,param_7,param_8);
    uVar1 = 1;
  }
  return uVar1;
}


