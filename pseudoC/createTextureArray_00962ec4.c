// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTextureArray
// Entry Point: 00962ec4
// Size: 236 bytes
// Signature: undefined __cdecl createTextureArray(uint param_1, uint param_2, uint param_3, bool param_4, uint param_5, uint param_6, PIXEL_FORMAT param_7, TEX_TYPE param_8, void * param_9, bool param_10, bool param_11, char * param_12, IRenderDevice * param_13)


/* TextureUtil::createTextureArray(unsigned int, unsigned int, unsigned int, bool, unsigned int,
   unsigned int, PixelFormat::PIXEL_FORMAT, ITextureObject::TEX_TYPE, void*, bool, bool, char
   const*, IRenderDevice*) */

void TextureUtil::createTextureArray
               (uint param_1,uint param_2,uint param_3,bool param_4,uint param_5,uint param_6,
               PIXEL_FORMAT param_7,TEX_TYPE param_8,void *param_9,bool param_10,bool param_11,
               char *param_12,IRenderDevice *param_13)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80;
  undefined local_78;
  undefined local_77;
  undefined8 local_74;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
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
  local_74 = 0xffffffffffffffff;
  local_50 = param_11;
  local_4c = 0x100000001;
  local_78 = 0;
  uStack_3c = 0x3f80000000000000;
  local_44 = 0;
  local_34 = 0;
  local_80 = param_9;
  local_77 = param_10;
  if (param_3 == 0) {
    if (!param_4) {
      local_74 = 0xffffffff00000000;
    }
  }
  else {
    local_74 = CONCAT44(0xffffffff,param_3);
    local_78 = 1;
  }
  local_64 = CONCAT44(param_5,1);
  local_30 = param_12;
  local_6c = param_1;
  uStack_68 = param_2;
  local_5c = param_6;
  local_58 = param_8;
  PStack_54 = param_7;
  uVar2 = (**(code **)(*(long *)param_13 + 0x138))(param_13);
  (**(code **)(*(long *)param_13 + 0x100))(param_13,uVar2,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


