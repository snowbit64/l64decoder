// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNamedArg
// Entry Point: 00b916b4
// Size: 168 bytes
// Signature: undefined __thiscall findNamedArg(Preprocessor * this, char * param_1, uint param_2)


/* Preprocessor::findNamedArg(char const*, unsigned int) */

ulong __thiscall Preprocessor::findNamedArg(Preprocessor *this,char *param_1,uint param_2)

{
  uint uVar1;
  void *__s1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  void **ppvVar6;
  
  uVar2 = *(uint *)(*(long *)(this + 0x38) + 0x68);
  if (uVar2 != 0) {
    uVar5 = 0;
    ppvVar6 = (void **)(*(long *)(*(long *)(this + 0x38) + 0x70) + 0x10);
    do {
      bVar3 = *(byte *)(ppvVar6 + -2);
      uVar1 = (uint)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(uint *)(ppvVar6 + -1);
      }
      if (uVar1 == param_2) {
        __s1 = (void *)((long)ppvVar6 + -0xf);
        if ((bVar3 & 1) != 0) {
          __s1 = *ppvVar6;
        }
        iVar4 = memcmp(__s1,param_1,(ulong)param_2);
        if (iVar4 == 0) goto LAB_00b91744;
      }
      uVar5 = uVar5 + 1;
      ppvVar6 = ppvVar6 + 3;
    } while (uVar2 != uVar5);
  }
  uVar5 = 0xffffffff;
LAB_00b91744:
  return uVar5 & 0xffffffff;
}


