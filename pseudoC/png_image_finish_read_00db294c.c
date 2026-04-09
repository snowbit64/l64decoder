// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_finish_read
// Entry Point: 00db294c
// Size: 468 bytes
// Signature: undefined png_image_finish_read(void)


ulong png_image_finish_read(long *param_1,undefined8 param_2,long param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long *local_88;
  long lStack_80;
  ulong local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (param_1 == (long *)0x0) {
    uVar6 = 0;
    if (*(long *)(lVar5 + 0x28) != local_38) goto LAB_00db2b1c;
LAB_00db29c8:
    uVar8 = (ulong)uVar6;
  }
  else {
    if (*(int *)(param_1 + 1) == 1) {
      uVar2 = *(uint *)((long)param_1 + 0x14);
      uVar6 = 1;
      if ((uVar2 & 8) == 0) {
        uVar6 = (uVar2 & 3) + 1;
      }
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = 0x7fffffff / uVar6;
      }
      if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
        pcVar9 = "png_image_finish_read: row_stride too large";
      }
      else {
        uVar6 = uVar6 * *(uint *)((long)param_1 + 0xc);
        uVar3 = uVar6;
        if (param_4 != 0) {
          uVar3 = param_4;
        }
        uVar1 = -uVar3;
        if (-1 < (int)uVar3) {
          uVar1 = uVar3;
        }
        if (((param_3 == 0) || (*param_1 == 0)) || (uVar1 < uVar6)) {
          pcVar9 = "png_image_finish_read: invalid argument";
        }
        else {
          uVar6 = 1;
          if ((uVar2 & 8) == 0) {
            uVar6 = (uVar2 >> 2 & 1) + 1;
          }
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = 0xffffffff / uVar6;
          }
          uVar6 = 0;
          if (uVar1 != 0) {
            uVar6 = uVar4 / uVar1;
          }
          if (uVar6 < *(uint *)(param_1 + 2)) {
            pcVar9 = "png_image_finish_read: image too large";
          }
          else {
            if (((uVar2 >> 3 & 1) == 0) || ((param_5 != 0 && (*(int *)((long)param_1 + 0x1c) != 0)))
               ) {
              uStack_60 = 0;
              uStack_40 = 0;
              local_48 = 0;
              uStack_50 = 0;
              local_58 = 0;
              local_78 = (ulong)uVar3;
              local_88 = param_1;
              lStack_80 = param_3;
              lStack_70 = param_5;
              local_68 = param_2;
              if ((uVar2 >> 3 & 1) == 0) {
                uVar6 = png_safe_execute(param_1,FUN_00db48c4,&local_88);
              }
              else {
                iVar7 = png_safe_execute(param_1,FUN_00db2b20,&local_88);
                if (iVar7 == 0) {
                  uVar6 = 0;
                }
                else {
                  iVar7 = png_safe_execute(param_1,FUN_00db4630,&local_88);
                  uVar6 = (uint)(iVar7 != 0);
                }
              }
              png_image_free(param_1);
              if (*(long *)(lVar5 + 0x28) != local_38) goto LAB_00db2b1c;
              goto LAB_00db29c8;
            }
            pcVar9 = "png_image_finish_read[color-map]: no color-map";
          }
        }
      }
    }
    else {
      pcVar9 = "png_image_finish_read: damaged PNG_IMAGE_VERSION";
    }
    uVar8 = png_image_error(param_1,pcVar9);
    if (*(long *)(lVar5 + 0x28) != local_38) {
LAB_00db2b1c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar8;
}


