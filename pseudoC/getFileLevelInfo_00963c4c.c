// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileLevelInfo
// Entry Point: 00963c4c
// Size: 216 bytes
// Signature: undefined __cdecl getFileLevelInfo(char * param_1, BitmapImage * param_2, uint param_3, uint param_4, uint param_5, ulonglong * param_6)


/* TextureUtil::getFileLevelInfo(char const*, BitmapImage const&, unsigned int, unsigned int,
   unsigned int, unsigned long long&) */

void TextureUtil::getFileLevelInfo
               (char *param_1,BitmapImage *param_2,uint param_3,uint param_4,uint param_5,
               ulonglong *param_6)

{
  long lVar1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_a0 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0x100000001;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  BitmapImage::getImageDesc(param_2,(ImageDesc *)&local_a0);
  local_a0 = NEON_ushl(local_a0,CONCAT44(param_3,param_3),4);
  local_90 = CONCAT44(local_90._4_4_,(int)local_90 + param_3);
  ImageLoadUtil::getFileLevelInfo(param_1,(ImageDesc *)&local_a0,param_4,param_5,param_6);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


