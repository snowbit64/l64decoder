// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_buffer
// Entry Point: 00e24870
// Size: 228 bytes
// Signature: undefined ogg_sync_buffer(void)


long ogg_sync_buffer(void **param_1,long param_2)

{
  size_t __size;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 < 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 2);
  if (iVar4 != 0) {
    uVar1 = *(int *)((long)param_1 + 0xc) - iVar4;
    *(uint *)((long)param_1 + 0xc) = uVar1;
    if (0 < (int)uVar1) {
      memmove(*param_1,(void *)((long)*param_1 + (long)iVar4),(ulong)uVar1);
      iVar3 = *(int *)(param_1 + 1);
    }
    *(undefined4 *)(param_1 + 2) = 0;
  }
  iVar4 = *(int *)((long)param_1 + 0xc);
  if (iVar3 - iVar4 < param_2) {
    __size = param_2 + iVar4 + 0x1000;
    if (*param_1 == (void *)0x0) {
      pvVar2 = malloc(__size);
    }
    else {
      pvVar2 = realloc(*param_1,__size);
    }
    if (pvVar2 == (void *)0x0) {
      if (*param_1 != (void *)0x0) {
        free(*param_1);
      }
      param_1[1] = (void *)0x0;
      *param_1 = (void *)0x0;
      param_1[3] = (void *)0x0;
      param_1[2] = (void *)0x0;
      return 0;
    }
    iVar4 = *(int *)((long)param_1 + 0xc);
    *param_1 = pvVar2;
    *(int *)(param_1 + 1) = (int)__size;
  }
  else {
    pvVar2 = *param_1;
  }
  return (long)pvVar2 + (long)iVar4;
}


