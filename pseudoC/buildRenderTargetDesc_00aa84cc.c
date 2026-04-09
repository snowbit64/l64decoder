// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildRenderTargetDesc
// Entry Point: 00aa84cc
// Size: 72 bytes
// Signature: undefined __cdecl buildRenderTargetDesc(uint param_1, uint param_2, uint param_3, float * param_4, PIXEL_FORMAT param_5, bool param_6, uint param_7, bool param_8, uint param_9, char * param_10, TextureObjectDesc * param_11)


/* RenderDeviceUtil::buildRenderTargetDesc(unsigned int, unsigned int, unsigned int, float const*,
   PixelFormat::PIXEL_FORMAT, bool, unsigned int, bool, unsigned int, char const*,
   TextureObjectDesc&) */

void RenderDeviceUtil::buildRenderTargetDesc
               (uint param_1,uint param_2,uint param_3,float *param_4,PIXEL_FORMAT param_5,
               bool param_6,uint param_7,bool param_8,uint param_9,char *param_10,
               TextureObjectDesc *param_11)

{
  undefined8 uVar1;
  
  *(uint *)(param_11 + 0x14) = param_1;
  *(uint *)(param_11 + 0x18) = param_2;
  *(uint *)(param_11 + 0x1c) = param_3;
  param_11[0x30] = (TextureObjectDesc)param_6;
  *(uint *)(param_11 + 0x28) = (uint)(param_3 != 1);
  *(PIXEL_FORMAT *)(param_11 + 0x2c) = param_5;
  *(undefined8 *)param_11 = 0;
  *(uint *)(param_11 + 0xc) = -(param_8 & 1);
  *(uint *)(param_11 + 0x34) = param_9 | 0x10;
  *(uint *)(param_11 + 0x38) = param_7;
  if (param_4 != (float *)0x0) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined8 *)(param_11 + 0x44) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)(param_11 + 0x3c) = uVar1;
  }
  *(char **)(param_11 + 0x50) = param_10;
  return;
}


