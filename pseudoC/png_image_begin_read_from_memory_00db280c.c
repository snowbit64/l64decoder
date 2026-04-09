// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_begin_read_from_memory
// Entry Point: 00db280c
// Size: 196 bytes
// Signature: undefined png_image_begin_read_from_memory(void)


undefined8 png_image_begin_read_from_memory(long **param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 != (long **)0x0) {
    if (*(int *)(param_1 + 1) != 1) {
      uVar2 = png_image_error(param_1,
                              "png_image_begin_read_from_memory: incorrect PNG_IMAGE_VERSION");
      return uVar2;
    }
    if ((param_2 == 0) || (param_3 == 0)) {
      uVar2 = png_image_error(param_1,"png_image_begin_read_from_memory: invalid argument");
      return uVar2;
    }
    iVar1 = FUN_00db2480(param_1);
    if (iVar1 != 0) {
      plVar3 = *param_1;
      lVar4 = *plVar3;
      plVar3[3] = param_2;
      plVar3[4] = param_3;
      *(code **)(lVar4 + 0x138) = FUN_00db28d0;
      *(long ***)(lVar4 + 0x140) = param_1;
      uVar2 = png_safe_execute(param_1,FUN_00db2628,param_1);
      return uVar2;
    }
  }
  return 0;
}


