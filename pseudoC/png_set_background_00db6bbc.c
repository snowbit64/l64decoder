// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_background
// Entry Point: 00db6bbc
// Size: 220 bytes
// Signature: undefined png_set_background(void)


void png_set_background(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = png_fixed(param_1,"png_set_background");
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x168);
    if ((uVar1 >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = uVar1 | 0x4000;
    if (param_2 != (undefined8 *)0x0) {
      if (param_3 == 0) {
        png_warning(param_1,"Application must supply a known background gamma");
        return;
      }
      uVar5 = *param_2;
      uVar4 = 0x40080;
      *(uint *)(param_1 + 0x168) = uVar1 & 0xffffdfff | 0x4000;
      uVar2 = *(undefined2 *)(param_2 + 1);
      *(undefined8 *)(param_1 + 0x2b4) = uVar5;
      *(undefined4 *)(param_1 + 0x2b0) = uVar3;
      *(undefined2 *)(param_1 + 700) = uVar2;
      *(char *)(param_1 + 0x2ac) = (char)param_3;
      if (param_4 != 0) {
        uVar4 = 0x40180;
      }
      *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xff7bfe7f | uVar4;
    }
  }
  return;
}


