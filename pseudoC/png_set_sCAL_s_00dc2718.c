// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_sCAL_s
// Entry Point: 00dc2718
// Size: 420 bytes
// Signature: undefined png_set_sCAL_s(void)


void png_set_sCAL_s(long param_1,long param_2,int param_3,char *param_4,char *param_5)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  void *pvVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 - 3U < 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid sCAL unit");
    }
    if ((((param_4 == (char *)0x0) || (sVar2 = strlen(param_4), sVar2 == 0)) || (*param_4 == '-'))
       || (iVar1 = png_check_fp_string(param_4,sVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid sCAL width");
    }
    if (((param_5 == (char *)0x0) || (sVar3 = strlen(param_5), sVar3 == 0)) ||
       ((*param_5 == '-' || (iVar1 = png_check_fp_string(param_5,sVar3), iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid sCAL height");
    }
    *(char *)(param_2 + 0x14c) = (char)param_3;
    pvVar4 = (void *)png_malloc_warn(param_1,sVar2 + 1);
    *(void **)(param_2 + 0x150) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      png_warning(param_1,"Memory allocation failed while processing sCAL");
      return;
    }
    memcpy(pvVar4,param_4,sVar2 + 1);
    pvVar4 = (void *)png_malloc_warn(param_1,sVar3 + 1);
    *(void **)(param_2 + 0x158) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x150));
      *(undefined8 *)(param_2 + 0x150) = 0;
      png_warning(param_1,"Memory allocation failed while processing sCAL");
      return;
    }
    memcpy(pvVar4,param_5,sVar3 + 1);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000;
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x100;
  }
  return;
}


