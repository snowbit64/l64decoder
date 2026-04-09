// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_background_fixed
// Entry Point: 00db6b38
// Size: 132 bytes
// Signature: undefined png_set_background_fixed(void)


void png_set_background_fixed
               (long param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
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
      uVar4 = *param_2;
      uVar3 = 0x40080;
      *(uint *)(param_1 + 0x168) = uVar1 & 0xffffdfff | 0x4000;
      uVar2 = *(undefined2 *)(param_2 + 1);
      *(undefined8 *)(param_1 + 0x2b4) = uVar4;
      *(undefined4 *)(param_1 + 0x2b0) = param_5;
      *(undefined2 *)(param_1 + 700) = uVar2;
      *(char *)(param_1 + 0x2ac) = (char)param_3;
      if (param_4 != 0) {
        uVar3 = 0x40180;
      }
      *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) & 0xff7bfe7f | uVar3;
    }
  }
  return;
}


