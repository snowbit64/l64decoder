// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeaderLength
// Entry Point: 00b392e4
// Size: 176 bytes
// Signature: undefined __cdecl getHeaderLength(basic_string * param_1, uint * param_2)


/* HTTPUtil::getHeaderLength(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, unsigned int&) */

undefined8 HTTPUtil::getHeaderLength(basic_string *param_1,uint *param_2)

{
  int *piVar1;
  void *pvVar2;
  void *__s;
  int *piVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 2);
  pvVar2 = *(void **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pvVar2 = (void *)((long)param_1 + 1);
    uVar4 = (ulong)(*(byte *)param_1 >> 1);
  }
  if (3 < (long)uVar4) {
    piVar1 = (int *)((long)pvVar2 + uVar4);
    __s = pvVar2;
    do {
      piVar3 = (int *)memchr(__s,0xd,uVar4 - 3);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      if (*piVar3 == 0xa0d0a0d) {
        if (piVar3 == piVar1) {
          return 0;
        }
        if ((long)piVar3 - (long)pvVar2 == -1) {
          return 0;
        }
        *param_2 = (int)((long)piVar3 - (long)pvVar2) + 4;
        return 1;
      }
      __s = (void *)((long)piVar3 + 1);
      uVar4 = (long)piVar1 - (long)__s;
    } while (3 < (long)uVar4);
  }
  return 0;
}


