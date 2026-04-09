// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_comment_add_tag
// Entry Point: 00df4a80
// Size: 180 bytes
// Signature: undefined th_comment_add_tag(void)


void th_comment_add_tag(undefined8 param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  void *__dest;
  int iVar4;
  
  sVar2 = strlen(param_2);
  sVar3 = strlen(param_3);
  iVar4 = (int)sVar2;
  __dest = malloc((long)((int)sVar3 + iVar4 + 2));
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_2,(long)iVar4);
    puVar1 = (undefined *)((long)__dest + (long)iVar4);
    *puVar1 = 0x3d;
    memcpy(puVar1 + 1,param_3,(long)((int)sVar3 + 1));
    th_comment_add(param_1,__dest);
    free(__dest);
    return;
  }
  return;
}


