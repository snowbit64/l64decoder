// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureArray
// Entry Point: 00962fb0
// Size: 208 bytes
// Signature: undefined __cdecl createTextureArray(uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, PIXEL_FORMAT param_6, TEX_TYPE param_7, void * param_8, bool param_9, bool param_10, char * param_11, IRenderDevice * param_12)


/* TextureUtil::createTextureArray(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, PixelFormat::PIXEL_FORMAT, ITextureObject::TEX_TYPE, void*, bool, bool, char const*,
   IRenderDevice*) */

void TextureUtil::createTextureArray
               (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               PIXEL_FORMAT param_6,TEX_TYPE param_7,void *param_8,bool param_9,bool param_10,
               char *param_11,IRenderDevice *param_12)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80;
  undefined local_78;
  undefined local_77;
  uint local_74;
  undefined4 local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  uint local_60;
  uint local_5c;
  TEX_TYPE local_58;
  PIXEL_FORMAT PStack_54;
  undefined local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = 0xffffffff;
  local_4c = 0x100000001;
  local_50 = param_10;
  uStack_3c = 0x3f80000000000000;
  local_44 = 0;
  local_34 = 0;
  uStack_64 = 1;
  local_77 = param_9;
  local_74 = param_3;
  if (param_3 == 0) {
    local_74 = 0;
  }
  local_78 = param_3 != 0;
  local_30 = param_11;
  local_80 = param_8;
  uStack_6c = param_1;
  local_68 = param_2;
  local_60 = param_4;
  local_5c = param_5;
  local_58 = param_7;
  PStack_54 = param_6;
  uVar2 = (**(code **)(*(long *)param_12 + 0x138))(param_12);
  (**(code **)(*(long *)param_12 + 0x100))(param_12,uVar2,&local_80);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


