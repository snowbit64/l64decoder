// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_image_write_to_file
// Entry Point: 00dc6c78
// Size: 476 bytes
// Signature: undefined png_image_write_to_file(void)


void png_image_write_to_file
               (long **param_1,char *param_2,uint param_3,long param_4,uint param_5,
               undefined8 param_6)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  int *piVar3;
  char *pcVar4;
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
    if (*(int *)(param_1 + 1) == 1) {
      if ((param_2 == (char *)0x0) || (param_4 == 0)) {
        pcVar4 = "png_image_write_to_file: invalid argument";
      }
      else {
        __stream = fopen(param_2,"wb");
        if (__stream != (FILE *)0x0) {
          if (*(int *)(param_1 + 1) == 1) {
            iVar2 = FUN_00dc5fc4(param_1);
            if (iVar2 != 0) {
              local_60 = 0;
              uStack_88 = 0;
              uStack_78 = 0;
              local_80 = 0;
              uStack_68 = 0;
              uStack_70 = 0;
              *(FILE **)(**param_1 + 0x140) = __stream;
              local_a0 = (ulong)param_5;
              local_90 = (ulong)param_3;
              local_b0 = param_1;
              lStack_a8 = param_4;
              uStack_98 = param_6;
              iVar2 = png_safe_execute(param_1,FUN_00dc6290,&local_b0);
              png_image_free(param_1);
              goto joined_r0x00dc6db0;
            }
          }
          else {
            iVar2 = png_image_error(param_1,"png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION")
            ;
joined_r0x00dc6db0:
            if (iVar2 != 0) {
              iVar2 = fflush(__stream);
              if ((iVar2 == 0) && (iVar2 = ferror(__stream), iVar2 == 0)) {
                iVar2 = fclose(__stream);
                if (iVar2 == 0) {
                  param_1 = (long **)0x1;
                  if (*(long *)(lVar1 + 0x28) == local_58) {
                    return;
                  }
                  goto LAB_00dc6e50;
                }
                piVar3 = (int *)__errno();
                iVar2 = *piVar3;
              }
              else {
                piVar3 = (int *)__errno();
                iVar2 = *piVar3;
                fclose(__stream);
              }
              remove(param_2);
              goto LAB_00dc6de8;
            }
          }
          fclose(__stream);
          remove(param_2);
          param_1 = (long **)0x0;
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_00dc6e50;
        }
        piVar3 = (int *)__errno();
        iVar2 = *piVar3;
LAB_00dc6de8:
        pcVar4 = strerror(iVar2);
      }
    }
    else {
      pcVar4 = "png_image_write_to_file: incorrect PNG_IMAGE_VERSION";
    }
    param_1 = (long **)png_image_error(param_1,pcVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00dc6e50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


