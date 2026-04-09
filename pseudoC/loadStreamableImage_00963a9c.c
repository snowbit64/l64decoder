// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadStreamableImage
// Entry Point: 00963a9c
// Size: 268 bytes
// Signature: undefined __cdecl loadStreamableImage(char * param_1, BitmapImage * param_2, ORIGIN param_3, uint param_4, ImageStreamingDesc * param_5)


/* TextureUtil::loadStreamableImage(char const*, BitmapImage&, ImageDesc::ORIGIN, unsigned int,
   ImageStreamingDesc&) */

uint TextureUtil::loadStreamableImage
               (char *param_1,BitmapImage *param_2,ORIGIN param_3,uint param_4,
               ImageStreamingDesc *param_5)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  TextureStreamingManager::getInstance();
  uVar5 = TextureStreamingManager::hasHardwareSupport();
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = TextureStreamingManager::getInstance();
    uVar4 = *(uint *)(lVar6 + 0x18);
    lVar6 = TextureStreamingManager::getInstance();
    uVar1 = *(uint *)(lVar6 + 0x1c);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_a8 = 0x100000001;
    local_b0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = (void *)0x0;
    TextureStreamingManager::getInstance();
    bVar3 = TextureStreamingManager::getIsDefaultLoadingModeEnabled();
    uVar4 = ImageLoadUtil::loadImageMipchain
                      (param_1,(bool)(bVar3 & 1),uVar4,uVar1,param_3,(ImageDesc *)&local_b0,param_5)
    ;
    if ((uVar4 & 1) == 0) {
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
    }
    else {
      BitmapImage::setImageDesc(param_2,(ImageDesc *)&local_b0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


