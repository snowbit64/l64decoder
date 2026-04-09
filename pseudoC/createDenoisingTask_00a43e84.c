// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createDenoisingTask
// Entry Point: 00a43e84
// Size: 92 bytes
// Signature: undefined __cdecl createDenoisingTask(ITextureObject * param_1, ITextureObject * param_2)


/* FFXShadowDenoiser::createDenoisingTask(ITextureObject*, ITextureObject*) */

undefined8 * FFXShadowDenoiser::createDenoisingTask(ITextureObject *param_1,ITextureObject *param_2)

{
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x40);
                    /* try { // try from 00a43ea8 to 00a43ebb has its CatchHandler @ 00a43ee0 */
  ShadowDenoiser::ShadowDenoisingTask::ShadowDenoisingTask
            ((ShadowDenoisingTask *)this,(ShadowDenoiser *)param_1,param_2,"FFX Shadow Denoising");
  *this = &PTR__FFXShadowDenoisingTask_00fe32a0;
  return this;
}


