// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_add_alpha
// Entry Point: 00dc3eb8
// Size: 236 bytes
// Signature: undefined png_set_add_alpha(void)


void png_set_add_alpha(long param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  undefined uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x165) < '\0') {
    *(undefined2 *)(param_1 + 0x2aa) = param_2;
    uVar1 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  else {
    if (*(char *)(param_1 + 0x29f) == '\0') {
      if (*(byte *)(param_1 + 0x2a0) < 8) {
        png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
        uVar1 = *(uint *)(param_1 + 0x16c);
        goto joined_r0x00dc3f9c;
      }
      uVar2 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x29f) != '\x02') {
        png_app_error(param_1,"png_set_filler: inappropriate color type");
        uVar1 = *(uint *)(param_1 + 0x16c);
        goto joined_r0x00dc3f9c;
      }
      uVar2 = 4;
    }
    *(undefined *)(param_1 + 0x2a4) = uVar2;
    uVar1 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  if (param_3 == 1) {
    *(uint *)(param_1 + 0x168) = uVar1 | 0x80;
    uVar1 = *(uint *)(param_1 + 0x16c);
  }
  else {
    *(uint *)(param_1 + 0x168) = uVar1 & 0xffffff7f;
    uVar1 = *(uint *)(param_1 + 0x16c);
  }
joined_r0x00dc3f9c:
  if ((uVar1 >> 0xf & 1) != 0) {
    *(uint *)(param_1 + 0x16c) = uVar1 | 0x1000000;
  }
  return;
}


