// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHeightMapToImage
// Entry Point: 008e6d00
// Size: 152 bytes
// Signature: undefined __cdecl saveHeightMapToImage(char * param_1, ushort * param_2, uint param_3)


/* BaseTerrain::saveHeightMapToImage(char const*, unsigned short*, unsigned int) */

uint BaseTerrain::saveHeightMapToImage(char *param_1,ushort *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint local_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  ushort *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined4 local_34;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = 0x100000001;
  local_70 = 0;
  uStack_64 = 0;
  uStack_6c = 1;
  uStack_68 = 3;
  local_38 = 0;
  local_60 = param_3 * param_3 * 2;
  local_34 = 0;
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  local_80 = param_3;
  uStack_7c = param_3;
  local_58 = param_2;
  uVar2 = ImageSaveUtil::saveImage(param_1,(ImageDesc *)&local_80,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


