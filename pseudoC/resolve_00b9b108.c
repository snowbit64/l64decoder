// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolve
// Entry Point: 00b9b108
// Size: 304 bytes
// Signature: undefined __thiscall resolve(StringStream * this, char * * param_1, uint * param_2, bool param_3)


/* StringStream::resolve(char*&, unsigned int&, bool) */

void __thiscall StringStream::resolve(StringStream *this,char **param_1,uint *param_2,bool param_3)

{
  char **ppcVar1;
  uint uVar2;
  char *pcVar3;
  void *pvVar4;
  char **ppcVar5;
  int iVar6;
  void **ppvVar7;
  void **ppvVar8;
  
  ppcVar5 = *(char ***)this;
  if (ppcVar5 == (char **)0x0) {
    if (param_3) {
      pcVar3 = (char *)operator_new__(1);
      *param_2 = 1;
      *param_1 = pcVar3;
      *pcVar3 = '\0';
    }
    else {
      *param_1 = (char *)0x0;
      *param_2 = 0;
    }
  }
  else {
    if (ppcVar5 == *(char ***)(this + 8)) {
      *param_1 = *ppcVar5;
      pvVar4 = *(void **)this;
      *param_2 = *(int *)((long)pvVar4 + 8) + (param_3 & 1);
      operator_delete(pvVar4);
    }
    else {
      iVar6 = 0;
      do {
        ppcVar1 = ppcVar5 + 1;
        ppcVar5 = (char **)ppcVar5[2];
        iVar6 = *(int *)ppcVar1 + iVar6;
      } while (ppcVar5 != (char **)0x0);
      uVar2 = iVar6 + (param_3 & 1);
      pcVar3 = (char *)operator_new__((ulong)uVar2);
      *param_1 = pcVar3;
      ppvVar8 = *(void ***)this;
      *param_2 = uVar2;
      for (ppvVar7 = ppvVar8; ppvVar7 != (void **)0x0; ppvVar7 = (void **)ppvVar7[2]) {
        memcpy(pcVar3,*ppvVar7,(ulong)*(uint *)(ppvVar7 + 1));
        pcVar3 = pcVar3 + *(uint *)(ppvVar7 + 1);
      }
      if (param_3) {
        *pcVar3 = '\0';
      }
      while (ppvVar8 != (void **)0x0) {
        pvVar4 = *ppvVar8;
        *(void **)this = ppvVar8[2];
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        operator_delete(ppvVar8);
        ppvVar8 = *(void ***)this;
      }
    }
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


