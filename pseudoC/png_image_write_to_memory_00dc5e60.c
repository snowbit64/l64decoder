// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_write_to_memory
// Entry Point: 00dc5e60
// Size: 356 bytes
// Signature: undefined png_image_write_to_memory(void)


ulong png_image_write_to_memory
                (long param_1,long param_2,ulong *param_3,uint param_4,long param_5,uint param_6,
                undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) goto LAB_00dc5f8c;
  if (*(int *)(param_1 + 8) != 1) {
    uVar5 = png_image_error(param_1,"png_image_write_to_memory: incorrect PNG_IMAGE_VERSION");
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return uVar5;
    }
    goto LAB_00dc5fc0;
  }
  if ((param_3 == (ulong *)0x0) || (param_5 == 0)) {
    uVar5 = png_image_error(param_1,"png_image_write_to_memory: invalid argument");
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return uVar5;
    }
    goto LAB_00dc5fc0;
  }
  if (param_2 == 0) {
    *param_3 = 0;
    iVar3 = FUN_00dc5fc4(param_1);
    if (iVar3 == 0) goto LAB_00dc5f8c;
LAB_00dc5ecc:
    uStack_68 = *param_3;
    uStack_88 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_a0 = (ulong)param_6;
    local_90 = (ulong)param_4;
    local_60 = 0;
    local_b0 = param_1;
    lStack_a8 = param_5;
    uStack_98 = param_7;
    local_70 = param_2;
    uVar4 = png_safe_execute(param_1,FUN_00dc610c,&local_b0);
    uVar5 = (ulong)uVar4;
    png_image_free(param_1);
    if (uVar4 != 0) {
      if (param_2 != 0) {
        uVar1 = 0;
        if (local_60 <= *param_3) {
          uVar1 = uVar4;
        }
        uVar5 = (ulong)uVar1;
      }
      *param_3 = local_60;
    }
  }
  else {
    iVar3 = FUN_00dc5fc4(param_1);
    if (iVar3 != 0) goto LAB_00dc5ecc;
LAB_00dc5f8c:
    uVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
LAB_00dc5fc0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


