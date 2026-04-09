// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FFXShadowDenoisingTask
// Entry Point: 00a43e24
// Size: 56 bytes
// Signature: undefined __thiscall FFXShadowDenoisingTask(FFXShadowDenoisingTask * this, FFXShadowDenoiser * param_1, ITextureObject * param_2, ITextureObject * param_3)


/* FFXShadowDenoiser::FFXShadowDenoisingTask::FFXShadowDenoisingTask(FFXShadowDenoiser*,
   ITextureObject*, ITextureObject*) */

void __thiscall
FFXShadowDenoiser::FFXShadowDenoisingTask::FFXShadowDenoisingTask
          (FFXShadowDenoisingTask *this,FFXShadowDenoiser *param_1,ITextureObject *param_2,
          ITextureObject *param_3)

{
  ShadowDenoiser::ShadowDenoisingTask::ShadowDenoisingTask
            ((ShadowDenoisingTask *)this,(ShadowDenoiser *)param_1,param_2,"FFX Shadow Denoising");
  *(undefined ***)this = &PTR__FFXShadowDenoisingTask_00fe32a0;
  return;
}


