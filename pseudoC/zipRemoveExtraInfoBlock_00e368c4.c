// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: zipRemoveExtraInfoBlock
// Entry Point: 00e368c4
// Size: 276 bytes
// Signature: undefined zipRemoveExtraInfoBlock(void)


undefined4 zipRemoveExtraInfoBlock(short *param_1,uint *param_2,short param_3)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  undefined4 uVar3;
  ulong __size;
  short *__src;
  uint uVar4;
  
  if (param_1 != (short *)0x0) {
    uVar2 = *param_2;
    __size = (ulong)uVar2;
    if (3 < (int)uVar2) {
      __dest = malloc(__size);
      uVar4 = 0;
      __src = param_1;
      do {
        while( true ) {
          if (*__src != param_3) break;
          __src = (short *)((long)__src + (long)__src[1] + 4);
          if ((short *)((long)param_1 + __size) <= __src) goto LAB_00e36968;
        }
        iVar1 = __src[1] + 4;
        memcpy(__dest,__src,(long)iVar1);
        uVar4 = iVar1 + uVar4;
        __src = (short *)((long)__src + (long)iVar1);
      } while (__src < (short *)((long)param_1 + __size));
LAB_00e36968:
      if ((int)uVar4 < (int)uVar2) {
        memset(param_1,0,__size);
        if (0 < (int)uVar4) {
          memcpy(param_1,__dest,(ulong)uVar4);
        }
        uVar3 = 0;
        *param_2 = uVar4;
      }
      else {
        uVar3 = 0xffffffff;
      }
      if (__dest == (void *)0x0) {
        return uVar3;
      }
      free(__dest);
      return uVar3;
    }
  }
  return 0xffffff9a;
}


