// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_filler
// Entry Point: 00dc3e20
// Size: 152 bytes
// Signature: undefined png_set_filler(void)


void png_set_filler(long param_1,undefined2 param_2,int param_3)

{
  undefined uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x165) < '\0') {
    *(undefined2 *)(param_1 + 0x2aa) = param_2;
    uVar2 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  else {
    if (*(char *)(param_1 + 0x29f) == '\0') {
      if (*(byte *)(param_1 + 0x2a0) < 8) {
        png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
        return;
      }
      uVar1 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x29f) != '\x02') {
        png_app_error(param_1,"png_set_filler: inappropriate color type");
        return;
      }
      uVar1 = 4;
    }
    *(undefined *)(param_1 + 0x2a4) = uVar1;
    uVar2 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  if (param_3 == 1) {
    uVar2 = uVar2 | 0x80;
  }
  else {
    uVar2 = uVar2 & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x168) = uVar2;
  return;
}


