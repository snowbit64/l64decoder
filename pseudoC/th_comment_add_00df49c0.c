// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_comment_add
// Entry Point: 00df49c0
// Size: 192 bytes
// Signature: undefined th_comment_add(void)


void th_comment_add(void **param_1,char *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  size_t __size;
  long lVar5;
  
  pvVar2 = realloc(*param_1,(long)*(int *)(param_1 + 2) * 8 + 0x10);
  if (pvVar2 != (void *)0x0) {
    *param_1 = pvVar2;
    pvVar3 = realloc(param_1[1],(long)*(int *)(param_1 + 2) * 4 + 8);
    if (pvVar3 != (void *)0x0) {
      param_1[1] = pvVar3;
      sVar4 = strlen(param_2);
      lVar5 = (long)*(int *)(param_1 + 2);
      __size = (size_t)((int)sVar4 + 1);
      *(int *)((long)pvVar3 + lVar5 * 4) = (int)sVar4;
      pvVar3 = malloc(__size);
      *(void **)((long)pvVar2 + lVar5 * 8) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        memcpy(*(void **)((long)*param_1 + lVar5 * 8),param_2,__size);
        iVar1 = *(int *)(param_1 + 2);
        *(int *)(param_1 + 2) = (int)((long)iVar1 + 1);
        *(undefined8 *)((long)*param_1 + ((long)iVar1 + 1) * 8) = 0;
      }
    }
  }
  return;
}


