// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendShared
// Entry Point: 00b9b48c
// Size: 172 bytes
// Signature: undefined __thiscall appendShared(StringStream * this, StringStream * param_1)


/* StringStream::appendShared(StringStream const&) */

void __thiscall StringStream::appendShared(StringStream *this,StringStream *param_1)

{
  void **ppvVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  void *__dest;
  void *__src;
  void **ppvVar5;
  void **ppvVar6;
  
  ppvVar5 = *(void ***)param_1;
  if (ppvVar5 != (void **)0x0) {
    ppvVar6 = *(void ***)(this + 8);
    do {
      ppvVar4 = (void **)operator_new(0x18);
      __dest = operator_new__((ulong)(*(int *)(ppvVar5 + 1) + 1));
      uVar2 = *(uint *)(ppvVar5 + 1);
      *ppvVar4 = __dest;
      __src = *ppvVar5;
      ppvVar4[2] = (void *)0x0;
      *(uint *)(ppvVar4 + 1) = uVar2;
      uVar3 = *(uint *)(ppvVar5 + 1);
      *(uint *)((long)ppvVar4 + 0xc) = uVar2 + 1;
      memcpy(__dest,__src,(ulong)uVar3);
      ppvVar1 = (void **)(this + 8);
      if (ppvVar6 != (void **)0x0) {
        ppvVar1 = ppvVar6 + 2;
      }
      *(undefined *)((long)__dest + (ulong)uVar2) = 0;
      *ppvVar1 = ppvVar4;
      *(void ***)(this + (ulong)(ppvVar6 != (void **)0x0) * 8) = ppvVar4;
      ppvVar5 = (void **)ppvVar5[2];
      ppvVar6 = ppvVar4;
    } while (ppvVar5 != (void **)0x0);
  }
  return;
}


