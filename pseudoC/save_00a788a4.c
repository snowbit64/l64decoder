// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: save
// Entry Point: 00a788a4
// Size: 164 bytes
// Signature: undefined __thiscall save(BitmapImage * this, char * param_1, bool param_2)


/* BitmapImage::save(char const*, bool) */

uint __thiscall BitmapImage::save(BitmapImage *this,char *param_1,bool param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined4 local_34;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_78 = *(undefined4 *)(this + 0x10);
  uStack_6c = *(undefined4 *)(this + 0x14);
  uStack_74 = *(undefined4 *)(this + 0x18);
  local_34 = 0;
  local_80 = *(undefined8 *)(this + 8);
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_70 = *(undefined4 *)(this + 4);
  local_68 = *(undefined8 *)(this + 0x34);
  local_40 = *(undefined4 *)(this + 0x30);
  local_58 = *(undefined8 *)(this + 0x20);
  local_60 = *(undefined4 *)(this + 0x28);
  uStack_3c = 0;
  local_38 = *(undefined2 *)(this + 0x2c);
  uVar2 = ImageSaveUtil::saveImage(param_1,(ImageDesc *)&local_80,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


