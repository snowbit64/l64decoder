// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BitmapImage
// Entry Point: 00a786c4
// Size: 240 bytes
// Signature: undefined __thiscall BitmapImage(BitmapImage * this, char * param_1, ORIGIN param_2, uint param_3)


/* BitmapImage::BitmapImage(char const*, ImageDesc::ORIGIN, unsigned int) */

void __thiscall
BitmapImage::BitmapImage(BitmapImage *this,char *param_1,ORIGIN param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
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
  *(undefined8 *)(this + 0x20) = 0;
  local_80 = 0;
  local_40 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0x100000001;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  uVar2 = ImageLoadUtil::loadImage(param_1,param_2,(ImageDesc *)&local_80,param_3);
  if ((uVar2 & 1) != 0) {
    if ((*this != (BitmapImage)0x0) && (*(void **)(this + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *this = (BitmapImage)0x1;
    *(undefined8 *)(this + 8) = local_80;
    *(undefined4 *)(this + 0x10) = (undefined4)local_78;
    *(undefined4 *)(this + 0x30) = (undefined4)local_40;
    *(undefined4 *)(this + 0x14) = local_70._4_4_;
    *(undefined4 *)(this + 0x18) = local_78._4_4_;
    *(undefined4 *)(this + 4) = (undefined4)local_70;
    *(undefined8 *)(this + 0x34) = local_68;
    *(undefined8 *)(this + 0x20) = local_58;
    *(undefined4 *)(this + 0x28) = local_60;
    *(undefined2 *)(this + 0x2c) = local_38;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


