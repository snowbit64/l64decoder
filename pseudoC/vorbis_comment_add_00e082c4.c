// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_comment_add
// Entry Point: 00e082c4
// Size: 176 bytes
// Signature: undefined vorbis_comment_add(void)


void vorbis_comment_add(void **param_1,char *param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  long lVar4;
  
  pvVar2 = realloc(*param_1,(long)*(int *)(param_1 + 2) * 8 + 0x10);
  *param_1 = pvVar2;
  pvVar2 = realloc(param_1[1],(long)*(int *)(param_1 + 2) * 4 + 8);
  param_1[1] = pvVar2;
  sVar3 = strlen(param_2);
  iVar1 = *(int *)(param_1 + 2);
  *(int *)((long)pvVar2 + (long)iVar1 * 4) = (int)sVar3;
  pvVar2 = malloc((long)(int)sVar3 + 1);
  lVar4 = (long)iVar1 * 8;
  *(void **)((long)*param_1 + lVar4) = pvVar2;
  strcpy(*(char **)((long)*param_1 + lVar4),param_2);
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = (int)((long)iVar1 + 1);
  *(undefined8 *)((long)*param_1 + ((long)iVar1 + 1) * 8) = 0;
  return;
}


