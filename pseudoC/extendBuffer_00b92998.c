// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extendBuffer
// Entry Point: 00b92998
// Size: 176 bytes
// Signature: undefined __thiscall extendBuffer(Preprocessor * this, uint param_1)


/* Preprocessor::extendBuffer(unsigned int) */

void __thiscall Preprocessor::extendBuffer(Preprocessor *this,uint param_1)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  ulong uVar3;
  void **ppvVar4;
  
  ppvVar4 = *(void ***)(this + 0x38);
  if (*(uint *)(ppvVar4 + 3) <= param_1) {
    uVar2 = *(uint *)(ppvVar4 + 2);
    uVar1 = param_1 + 1;
    *(uint *)(ppvVar4 + 3) = uVar1;
    if (uVar2 < uVar1) {
      __dest = operator_new__((ulong)uVar1);
      memcpy(__dest,*ppvVar4,(ulong)*(uint *)((long)ppvVar4 + 0x14));
      if (ppvVar4[1] != (void *)0x0) {
        operator_delete__(ppvVar4[1]);
        ppvVar4 = *(void ***)(this + 0x38);
      }
      *ppvVar4 = __dest;
      ppvVar4[1] = __dest;
      *(undefined4 *)(ppvVar4 + 2) = *(undefined4 *)(ppvVar4 + 3);
    }
    else {
      if (*(int *)((long)ppvVar4 + 0x14) != 0) {
        uVar3 = 0;
        do {
          *(undefined *)((long)ppvVar4[1] + uVar3) = *(undefined *)((long)*ppvVar4 + uVar3);
          uVar3 = uVar3 + 1;
          ppvVar4 = *(void ***)(this + 0x38);
        } while (uVar3 < *(uint *)((long)ppvVar4 + 0x14));
        uVar2 = *(uint *)(ppvVar4 + 2);
      }
      *(uint *)(ppvVar4 + 3) = uVar2;
    }
  }
  return;
}


