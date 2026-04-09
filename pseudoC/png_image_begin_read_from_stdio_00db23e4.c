// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_begin_read_from_stdio
// Entry Point: 00db23e4
// Size: 156 bytes
// Signature: undefined png_image_begin_read_from_stdio(void)


undefined8 png_image_begin_read_from_stdio(long **param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (long **)0x0) {
    if (*(int *)(param_1 + 1) != 1) {
      uVar2 = png_image_error(param_1,"png_image_begin_read_from_stdio: incorrect PNG_IMAGE_VERSION"
                             );
      return uVar2;
    }
    if (param_2 == 0) {
      uVar2 = png_image_error(param_1,"png_image_begin_read_from_stdio: invalid argument");
      return uVar2;
    }
    iVar1 = FUN_00db2480(param_1);
    if (iVar1 != 0) {
      *(long *)(**param_1 + 0x140) = param_2;
      uVar2 = png_safe_execute(param_1,FUN_00db2628,param_1);
      return uVar2;
    }
  }
  return 0;
}


