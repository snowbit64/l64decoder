// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShadowBufferRenderTask
// Entry Point: 00a43608
// Size: 132 bytes
// Signature: undefined __thiscall ShadowBufferRenderTask(ShadowBufferRenderTask * this, ShadowBufferRenderController * param_1, ITextureObject * param_2, ITextureObject * param_3, IStructBuffer * param_4)


/* ShadowBufferRenderController::ShadowBufferRenderTask::ShadowBufferRenderTask(ShadowBufferRenderController*,
   ITextureObject*, ITextureObject*, IStructBuffer*) */

void __thiscall
ShadowBufferRenderController::ShadowBufferRenderTask::ShadowBufferRenderTask
          (ShadowBufferRenderTask *this,ShadowBufferRenderController *param_1,
          ITextureObject *param_2,ITextureObject *param_3,IStructBuffer *param_4)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__Task_00fde908;
                    /* try { // try from 00a4364c to 00a4365b has its CatchHandler @ 00a4368c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  *(undefined8 *)(this + 0x28) = 0;
  *(ITextureObject **)(this + 0x30) = param_2;
  *(ITextureObject **)(this + 0x38) = param_3;
  *(ShadowBufferRenderController **)(this + 0x40) = param_1;
  *(IStructBuffer **)(this + 0x48) = param_4;
  *(undefined ***)this = &PTR__ShadowBufferRenderTask_00fe3228;
  return;
}


