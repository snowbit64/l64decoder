// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db2480
// Entry Point: 00db2480
// Size: 424 bytes
// Signature: undefined FUN_00db2480(void)


ulong FUN_00db2480(long **param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_1 != (long *)0x0) {
    uVar2 = png_image_error(param_1,"png_image_read: opaque pointer not NULL");
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar2;
    }
    goto LAB_00db2624;
  }
  lVar3 = png_create_png_struct("1.6.37",param_1,png_safe_error,png_safe_warning,0,0,0);
  if (lVar3 == 0) {
    local_40 = 0;
    param_1[0xc] = (long *)0x0;
    param_1[1] = (long *)0x0;
    *param_1 = (long *)0x0;
    param_1[3] = (long *)0x0;
    param_1[2] = (long *)0x0;
    param_1[5] = (long *)0x0;
    param_1[4] = (long *)0x0;
    param_1[7] = (long *)0x0;
    param_1[6] = (long *)0x0;
    param_1[9] = (long *)0x0;
    param_1[8] = (long *)0x0;
    param_1[0xb] = (long *)0x0;
    param_1[10] = (long *)0x0;
    *(undefined4 *)(param_1 + 1) = 1;
LAB_00db25e8:
    uVar2 = png_image_error(param_1,"png_image_read: out of memory");
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    *(undefined4 *)(lVar3 + 0x164) = 0x8000;
    *(undefined4 *)(lVar3 + 0x4a8) = 0x2000;
    *(uint *)(lVar3 + 0x168) = *(uint *)(lVar3 + 0x168) | 0x300000;
    png_set_read_fn(lVar3,0,0);
    param_1[0xc] = (long *)0x0;
    param_1[1] = (long *)0x0;
    *param_1 = (long *)0x0;
    param_1[3] = (long *)0x0;
    param_1[2] = (long *)0x0;
    param_1[5] = (long *)0x0;
    param_1[4] = (long *)0x0;
    param_1[7] = (long *)0x0;
    param_1[6] = (long *)0x0;
    param_1[9] = (long *)0x0;
    param_1[8] = (long *)0x0;
    param_1[0xb] = (long *)0x0;
    param_1[10] = (long *)0x0;
    *(undefined4 *)(param_1 + 1) = 1;
    local_40 = lVar3;
    lVar4 = png_create_info_struct(lVar3);
    local_48 = lVar4;
    if (lVar4 == 0) {
LAB_00db25d8:
      png_destroy_read_struct(&local_40,0,0);
      goto LAB_00db25e8;
    }
    plVar5 = (long *)png_malloc_warn(lVar3,0x30);
    if (plVar5 == (long *)0x0) {
      png_destroy_info_struct(lVar3,&local_48);
      goto LAB_00db25d8;
    }
    *param_1 = plVar5;
    plVar5[3] = 0;
    plVar5[2] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[1] = 0;
    *plVar5 = 0;
    *plVar5 = lVar3;
    plVar5[1] = lVar4;
    uVar2 = 1;
    *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) & 0xfe;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
LAB_00db2624:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


