// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureArray
// Entry Point: 00963080
// Size: 48 bytes
// Signature: undefined __cdecl createTextureArray(char * * param_1, uint param_2, ORIGIN param_3, uint param_4, bool param_5, bool param_6, char * param_7, IRenderDevice * param_8, bool * param_9)


/* TextureUtil::createTextureArray(char const**, unsigned int, ImageDesc::ORIGIN, unsigned int,
   bool, bool, char const*, IRenderDevice*, bool&) */

void TextureUtil::createTextureArray
               (char **param_1,uint param_2,ORIGIN param_3,uint param_4,bool param_5,bool param_6,
               char *param_7,IRenderDevice *param_8,bool *param_9)

{
  createTextureArray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,true,0,param_9)
  ;
  return;
}


