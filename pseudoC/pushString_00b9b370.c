// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushString
// Entry Point: 00b9b370
// Size: 224 bytes
// Signature: undefined __thiscall pushString(StringStream * this, char * param_1, uint param_2)


/* StringStream::pushString(char const*, unsigned int) */

void __thiscall StringStream::pushString(StringStream *this,char *param_1,uint param_2)

{
  int iVar1;
  void **ppvVar2;
  void *__dest;
  uint uVar3;
  long *plVar4;
  
  if (param_2 != 0) {
    plVar4 = *(long **)(this + 8);
    if ((*(long *)this == 0) || (*(uint *)((long)plVar4 + 0xc) <= *(uint *)(plVar4 + 1) + param_2))
    {
      uVar3 = 0x10000;
      if (0xffff < param_2) {
        uVar3 = param_2 + 1;
      }
      ppvVar2 = (void **)operator_new(0x18);
      __dest = operator_new__((ulong)uVar3);
      *(uint *)(ppvVar2 + 1) = param_2;
      *(uint *)((long)ppvVar2 + 0xc) = uVar3;
      *ppvVar2 = __dest;
      ppvVar2[2] = (void *)0x0;
      memcpy(__dest,param_1,(ulong)param_2);
      *(undefined *)((long)__dest + (ulong)param_2) = 0;
      if (plVar4 == (long *)0x0) {
        *(void ***)this = ppvVar2;
        *(void ***)(this + 8) = ppvVar2;
      }
      else {
        plVar4[2] = (long)ppvVar2;
        *(void ***)(this + 8) = ppvVar2;
      }
    }
    else {
      memcpy((void *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1)),param_1,(ulong)param_2);
      plVar4 = *(long **)(this + 8);
      iVar1 = *(int *)(plVar4 + 1);
      *(uint *)(plVar4 + 1) = iVar1 + param_2;
      *(undefined *)(*plVar4 + (ulong)(iVar1 + param_2)) = 0;
    }
  }
  return;
}


