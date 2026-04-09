// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replace
// Entry Point: 00b9d540
// Size: 396 bytes
// Signature: undefined __cdecl replace(basic_string * param_1, basic_string * param_2, basic_string * param_3)


/* StringUtil::replace(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void StringUtil::replace(basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  void *pvVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong __n;
  byte *__s2;
  long lVar10;
  
  uVar6 = *(ulong *)(param_1 + 2);
  lVar10 = *(long *)(param_1 + 4);
  uVar9 = 0;
  if ((*(byte *)param_1 & 1) == 0) {
    lVar10 = (long)param_1 + 1;
    uVar6 = (ulong)(*(byte *)param_1 >> 1);
  }
  bVar3 = (*(byte *)param_2 & 1) != 0;
  __s2 = *(byte **)(param_2 + 4);
  __n = (ulong)(*(byte *)param_2 >> 1);
  if (bVar3) {
    __n = *(ulong *)(param_2 + 2);
  }
  pcVar8 = (char *)(__n & 0xffffffff);
  if (!bVar3) {
    __s2 = (byte *)((long)param_2 + 1);
  }
  do {
    if (__n != 0) {
      pvVar5 = (void *)(lVar10 + uVar9);
      pvVar1 = (void *)(lVar10 + uVar6);
      lVar7 = (long)pvVar1 - (long)pvVar5;
      if (lVar7 < (long)__n) {
        return;
      }
      bVar2 = *__s2;
      while( true ) {
        if (0xfffffffffffffffe < lVar7 - __n) {
          return;
        }
        pvVar5 = memchr(pvVar5,(uint)bVar2,(lVar7 - __n) + 1);
        if (pvVar5 == (void *)0x0) {
          return;
        }
        iVar4 = memcmp(pvVar5,__s2,__n);
        if (iVar4 == 0) break;
        pvVar5 = (void *)((long)pvVar5 + 1);
        lVar7 = (long)pvVar1 - (long)pvVar5;
        if (lVar7 < (long)__n) {
          return;
        }
      }
      if (pvVar5 == pvVar1) {
        return;
      }
      uVar9 = (long)pvVar5 - lVar10;
    }
    if (uVar9 == 0xffffffffffffffff) {
      return;
    }
    uVar6 = (long)param_3 + 1;
    if ((*(byte *)param_3 & 1) != 0) {
      uVar6 = *(ulong *)(param_3 + 4);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    replace((ulong)param_1,uVar9,pcVar8,uVar6);
    uVar6 = (ulong)(*(byte *)param_3 >> 1);
    if ((*(byte *)param_3 & 1) != 0) {
      uVar6 = *(ulong *)(param_3 + 2);
    }
    uVar9 = uVar6 + uVar9;
    lVar10 = (long)param_1 + 1;
    uVar6 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 4);
      uVar6 = *(ulong *)(param_1 + 2);
    }
    __s2 = (byte *)((long)param_2 + 1);
    __n = (ulong)(*(byte *)param_2 >> 1);
    if ((*(byte *)param_2 & 1) != 0) {
      __s2 = *(byte **)(param_2 + 4);
      __n = *(ulong *)(param_2 + 2);
    }
  } while (uVar9 <= uVar6);
  return;
}


