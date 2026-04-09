// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_sPLT
// Entry Point: 00dc3328
// Size: 416 bytes
// Signature: undefined png_set_sPLT(void)


void png_set_sPLT(long param_1,long param_2,char **param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  void *pvVar5;
  void **ppvVar6;
  
  if ((((param_3 != (char **)0x0) && (param_1 != 0)) && (param_2 != 0)) && (0 < param_4)) {
    lVar2 = png_realloc_array(param_1,*(undefined8 *)(param_2 + 0x140),
                              *(undefined4 *)(param_2 + 0x148),param_4,0x20);
    if (lVar2 == 0) {
      pcVar3 = "too many sPLT chunks";
LAB_00dc3490:
      png_chunk_report(param_1,pcVar3,1);
      return;
    }
    png_free(param_1,*(undefined8 *)(param_2 + 0x140));
    *(long *)(param_2 + 0x140) = lVar2;
    ppvVar6 = (void **)(lVar2 + (long)*(int *)(param_2 + 0x148) * 0x20);
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x20;
    do {
      while ((pcVar3 = *param_3, pcVar3 == (char *)0x0 || (param_3[2] == (char *)0x0))) {
        png_app_error(param_1,"png_set_sPLT: invalid sPLT");
        param_4 = param_4 + -1;
        if (param_4 == 0) {
          return;
        }
      }
      *(undefined *)(ppvVar6 + 1) = *(undefined *)(param_3 + 1);
      sVar4 = strlen(pcVar3);
      pvVar5 = (void *)png_malloc_base(param_1,sVar4 + 1);
      *ppvVar6 = pvVar5;
      if (pvVar5 == (void *)0x0) {
LAB_00dc3480:
        if (param_4 < 1) {
          return;
        }
        pcVar3 = "sPLT out of memory";
        goto LAB_00dc3490;
      }
      memcpy(pvVar5,*param_3,sVar4 + 1);
      pvVar5 = (void *)png_malloc_array(param_1,*(undefined4 *)(param_3 + 3),10);
      ppvVar6[2] = pvVar5;
      if (pvVar5 == (void *)0x0) {
        png_free(param_1,*ppvVar6);
        *ppvVar6 = (void *)0x0;
        goto LAB_00dc3480;
      }
      uVar1 = *(uint *)(param_3 + 3);
      pcVar3 = param_3[2];
      *(uint *)(ppvVar6 + 3) = uVar1;
      memcpy(pvVar5,pcVar3,(ulong)uVar1 * 10);
      ppvVar6 = ppvVar6 + 4;
      param_3 = param_3 + 4;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
      *(int *)(param_2 + 0x148) = *(int *)(param_2 + 0x148) + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


