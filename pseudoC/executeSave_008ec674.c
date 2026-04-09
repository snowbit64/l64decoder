// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSave
// Entry Point: 008ec674
// Size: 168 bytes
// Signature: undefined __thiscall executeSave(HeightMapSaveHelper * this, char * param_1)


/* BaseTerrain::HeightMapSaveHelper::executeSave(char const*) */

uint __thiscall
BaseTerrain::HeightMapSaveHelper::executeSave(HeightMapSaveHelper *this,char *param_1)

{
  long lVar1;
  uint uVar2;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_58;
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
  local_80 = *(int *)(this + 0x60);
  local_70 = 0;
  uStack_64 = 0;
  local_58 = *(undefined8 *)(this + 0x58);
  local_38 = 0;
  local_34 = 0;
  uStack_6c = 1;
  uStack_68 = 3;
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = local_80 * local_80 * 2;
  local_40 = 1;
  iStack_7c = local_80;
  uVar2 = ImageSaveUtil::saveImage(param_1,(ImageDesc *)&local_80,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


