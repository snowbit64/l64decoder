// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImageHeader
// Entry Point: 00963ba8
// Size: 164 bytes
// Signature: undefined __cdecl loadImageHeader(char * param_1, BitmapImage * param_2, ORIGIN param_3, bool * param_4, ulonglong * param_5)


/* TextureUtil::loadImageHeader(char const*, BitmapImage&, ImageDesc::ORIGIN, bool&, unsigned long
   long&) */

uint TextureUtil::loadImageHeader
               (char *param_1,BitmapImage *param_2,ORIGIN param_3,bool *param_4,ulonglong *param_5)

{
  long lVar1;
  uint uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_50 = 0;
  local_70 = 0;
  local_88 = 0x100000001;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  uVar2 = ImageLoadUtil::loadImageHeader(param_1,param_3,(ImageDesc *)&local_90,param_4,param_5);
  if ((uVar2 & 1) != 0) {
    BitmapImage::setImageDesc(param_2,(ImageDesc *)&local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


