// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_begin_read_from_file
// Entry Point: 00db2724
// Size: 232 bytes
// Signature: undefined png_image_begin_read_from_file(void)


undefined8 png_image_begin_read_from_file(long **param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  long *plVar5;
  
  if (param_1 != (long **)0x0) {
    if (*(int *)(param_1 + 1) != 1) {
      uVar2 = png_image_error(param_1,"png_image_begin_read_from_file: incorrect PNG_IMAGE_VERSION")
      ;
      return uVar2;
    }
    if (param_2 == (char *)0x0) {
      uVar2 = png_image_error(param_1,"png_image_begin_read_from_file: invalid argument");
      return uVar2;
    }
    __stream = fopen(param_2,"rb");
    if (__stream == (FILE *)0x0) {
      piVar3 = (int *)__errno();
      pcVar4 = strerror(*piVar3);
      uVar2 = png_image_error(param_1,pcVar4);
      return uVar2;
    }
    iVar1 = FUN_00db2480(param_1);
    if (iVar1 != 0) {
      plVar5 = *param_1;
      *(FILE **)(*plVar5 + 0x140) = __stream;
      *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 2;
      uVar2 = png_safe_execute(param_1,FUN_00db2628,param_1);
      return uVar2;
    }
    fclose(__stream);
  }
  return 0;
}


