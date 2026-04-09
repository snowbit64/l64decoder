// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dc5fc4
// Entry Point: 00dc5fc4
// Size: 328 bytes
// Signature: undefined FUN_00dc5fc4(void)


undefined4 FUN_00dc5fc4(long **param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = png_create_png_struct("1.6.37",param_1,png_safe_error,png_safe_warning,0,0,0);
  if (lVar3 == 0) {
    local_40 = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x218) = 0;
    *(undefined8 *)(lVar3 + 0x210) = 0x80000000f;
    *(undefined8 *)(lVar3 + 0x1f8) = 0xf00000008;
    *(undefined8 *)(lVar3 + 0x1f0) = 0xffffffff00002000;
    *(undefined8 *)(lVar3 + 0x208) = 0x8ffffffff;
    *(undefined8 *)(lVar3 + 0x200) = 0x100000008;
    *(uint *)(lVar3 + 0x168) = *(uint *)(lVar3 + 0x168) | 0x200000;
    png_set_write_fn(lVar3,0,0,0);
    local_40 = lVar3;
    lVar4 = png_create_info_struct(lVar3);
    local_48 = lVar4;
    if (lVar4 != 0) {
      plVar5 = (long *)png_malloc_warn(lVar3,0x30);
      if (plVar5 != (long *)0x0) {
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
        *(byte *)(plVar5 + 5) = *(byte *)(plVar5 + 5) | 1;
        goto LAB_00dc60e0;
      }
      png_destroy_info_struct(lVar3,&local_48);
    }
    png_destroy_write_struct(&local_40,0);
  }
  uVar2 = png_image_error(param_1,"png_image_write_: out of memory");
LAB_00dc60e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


