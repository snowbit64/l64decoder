// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_comment_add_tag
// Entry Point: 00e08374
// Size: 252 bytes
// Signature: undefined vorbis_comment_add_tag(void)


void vorbis_comment_add_tag(void **param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__dest;
  char *__s;
  void *pvVar4;
  long lVar5;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  __dest = (char *)malloc(sVar2 + sVar3 + 2);
  __s = strcpy(__dest,param_2);
  sVar2 = strlen(__s);
  *(undefined2 *)(__dest + sVar2) = 0x3d;
  strcat(__dest,param_3);
  pvVar4 = realloc(*param_1,(long)*(int *)(param_1 + 2) * 8 + 0x10);
  *param_1 = pvVar4;
  pvVar4 = realloc(param_1[1],(long)*(int *)(param_1 + 2) * 4 + 8);
  param_1[1] = pvVar4;
  sVar2 = strlen(__dest);
  iVar1 = *(int *)(param_1 + 2);
  *(int *)((long)pvVar4 + (long)iVar1 * 4) = (int)sVar2;
  pvVar4 = malloc((long)(int)sVar2 + 1);
  lVar5 = (long)iVar1 * 8;
  *(void **)((long)*param_1 + lVar5) = pvVar4;
  strcpy(*(char **)((long)*param_1 + lVar5),__dest);
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = (int)((long)iVar1 + 1);
  *(undefined8 *)((long)*param_1 + ((long)iVar1 + 1) * 8) = 0;
  free(__dest);
  return;
}


