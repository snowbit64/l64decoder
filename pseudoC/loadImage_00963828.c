// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00963828
// Size: 352 bytes
// Signature: undefined __cdecl loadImage(char * param_1, BitmapImage * param_2, ORIGIN param_3, uint param_4, bool param_5)


/* TextureUtil::loadImage(char const*, BitmapImage&, ImageDesc::ORIGIN, unsigned int, bool) */

uint TextureUtil::loadImage
               (char *param_1,BitmapImage *param_2,ORIGIN param_3,uint param_4,bool param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar5 = param_1;
  if ((((!param_5) ||
       (uVar3 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,param_1),
       (uVar3 & 1) == 0)) && (pcVar4 = strrchr(param_1,0x2e), pcVar4 != (char *)0x0)) &&
     (pcVar6 = *(char **)s_specificFileSuffixes, pcVar6 != (char *)0x0)) {
    uVar3 = 1;
    do {
      pcVar5 = (char *)checkFileExistWithAnotherExtension(param_1,pcVar4,pcVar6);
      if (pcVar5 != param_1) break;
      pcVar6 = *(char **)(s_specificFileSuffixes + uVar3 * 8);
      uVar3 = (ulong)((int)uVar3 + 1);
      pcVar5 = param_1;
    } while (pcVar6 != (char *)0x0);
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_b8 = 0x100000001;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  uVar2 = ImageLoadUtil::loadImage(pcVar5,param_3,(ImageDesc *)&local_c0,param_4);
  if ((uVar2 & 1) != 0) {
    BitmapImage::setImageDesc(param_2,(ImageDesc *)&local_c0);
  }
  if ((pcVar5 != param_1) && (pcVar5 != (char *)0x0)) {
    operator_delete__(pcVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


