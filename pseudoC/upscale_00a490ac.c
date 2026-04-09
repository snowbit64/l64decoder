// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upscale
// Entry Point: 00a490ac
// Size: 52 bytes
// Signature: undefined __cdecl upscale(ICommandBuffer * param_1, ITextureObject * param_2, ITextureObject * param_3, ITextureObject * param_4, bool param_5, RenderArgs * param_6, ITextureObject * * param_7)


/* Upscaler::upscale(ICommandBuffer*, ITextureObject*, ITextureObject*, ITextureObject*, bool,
   RenderArgs const*, ITextureObject*&) */

bool Upscaler::upscale(ICommandBuffer *param_1,ITextureObject *param_2,ITextureObject *param_3,
                      ITextureObject *param_4,bool param_5,RenderArgs *param_6,
                      ITextureObject **param_7)

{
  int iVar1;
  float in_s0;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x94);
  if (iVar1 != 0) {
    calcSGSR(param_1,param_2,in_s0,(ITextureObject **)param_3);
  }
  return iVar1 != 0;
}


