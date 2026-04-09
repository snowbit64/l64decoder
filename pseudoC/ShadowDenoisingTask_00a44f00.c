// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShadowDenoisingTask
// Entry Point: 00a44f00
// Size: 108 bytes
// Signature: undefined __thiscall ShadowDenoisingTask(ShadowDenoisingTask * this, ShadowDenoiser * param_1, ITextureObject * param_2, char * param_3)


/* ShadowDenoiser::ShadowDenoisingTask::ShadowDenoisingTask(ShadowDenoiser*, ITextureObject*, char
   const*) */

void __thiscall
ShadowDenoiser::ShadowDenoisingTask::ShadowDenoisingTask
          (ShadowDenoisingTask *this,ShadowDenoiser *param_1,ITextureObject *param_2,char *param_3)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__Task_00fde908;
                    /* try { // try from 00a44f38 to 00a44f43 has its CatchHandler @ 00a44f6c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  *(undefined8 *)(this + 0x28) = 0;
  *(ShadowDenoiser **)(this + 0x30) = param_1;
  *(ITextureObject **)(this + 0x38) = param_2;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00fe3348;
  return;
}


