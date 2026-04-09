// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ImageOverlay
// Entry Point: 006f336c
// Size: 84 bytes
// Signature: undefined __thiscall ImageOverlay(ImageOverlay * this, char * param_1, ITextureObject * param_2, ISamplerObject * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11)


/* ImageOverlay::ImageOverlay(char const*, ITextureObject*, ISamplerObject*, float, float, float,
   float, float, float, float, float) */

void __thiscall
ImageOverlay::ImageOverlay
          (ImageOverlay *this,char *param_1,ITextureObject *param_2,ISamplerObject *param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8,float param_9,
          float param_10,float param_11)

{
  Overlay::Overlay((Overlay *)this,param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
  *(undefined8 *)(this + 0x78) = 0;
  *(ITextureObject **)(this + 0x80) = param_2;
  *(ISamplerObject **)(this + 0x88) = param_3;
  *(undefined ***)this = &PTR__ImageOverlay_00fd97b0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x400000000;
  return;
}


