// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_write_to_stdio
// Entry Point: 00dc6150
// Size: 320 bytes
// Signature: undefined png_image_write_to_stdio(void)


ulong png_image_write_to_stdio
                (long **param_1,long param_2,uint param_3,long param_4,uint param_5,
                undefined8 param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long **local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 != (long **)0x0) {
    if (*(int *)(param_1 + 1) != 1) {
      uVar3 = png_image_error(param_1,"png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION");
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return uVar3;
      }
      goto LAB_00dc628c;
    }
    if ((param_2 == 0) || (param_4 == 0)) {
      uVar3 = png_image_error(param_1,"png_image_write_to_stdio: invalid argument");
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return uVar3;
      }
      goto LAB_00dc628c;
    }
    iVar2 = FUN_00dc5fc4(param_1);
    if (iVar2 != 0) {
      local_60 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      *(long *)(**param_1 + 0x140) = param_2;
      local_a0 = (ulong)param_5;
      local_90 = (ulong)param_3;
      local_b0 = param_1;
      lStack_a8 = param_4;
      uStack_98 = param_6;
      uVar3 = png_safe_execute(param_1,FUN_00dc6290,&local_b0);
      png_image_free(param_1);
      if (*(long *)(lVar1 + 0x28) == local_58) {
        return uVar3 & 0xffffffff;
      }
      goto LAB_00dc628c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
LAB_00dc628c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


